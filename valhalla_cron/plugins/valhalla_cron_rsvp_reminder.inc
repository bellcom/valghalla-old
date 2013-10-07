<?php

/**
 * the plugin function
 *
 * this plugin notifies volunteers with no rsvp status 14 an 7 days before an election
 *
 * @global stdClass $language
 * @param int $last_run_ts unix timestamp of last cron run
 * @return void
 */
function valhalla_cron_rsvp_reminder($last_run_ts) {
  global $language;

  // find active election
  $nid = db_select('field_data_field_election_status', 'es')
      ->fields('es', array('entity_id'))
      ->condition('es.bundle', 'election')
      ->condition('es.field_election_status_value', 1)
      ->execute()
      ->fetchColumn()
  ;

  // load election node
  $election = node_load($nid);
  list($election_date,$time) = split("T", $election->field_date[$language->language][0]['value']);
  $today_date = strtotime(date('Y-m-d'));
  $election_date1 = strtotime($election_date);
  $days_to_election = floor(($election_date1 - $today_date) / 86400);

  // check dates
  $notification_days_arr = variable_get('valhalla_rsvp_reminder_days', '14, 7, 5, 3');
  $notification_days = explode(',', variable_get('valhalla_rsvp_reminder_days', '14, 7, 5, 3'));

  if (!$nid) {
    watchdog('Valghalla', 'Der blev ikke fundet noget aktict valg - aktiver dit valg. ', WATCHDOG_NOTICE);
    return;
  }
 
  if (!in_array($days_to_election, $notification_days)) {
    watchdog('Valghalla', 'Mail job blev ikke kørt idet idag ikke er nogen rykker dag. Valg: %election_date Dage til valget: %todays Rykkerdage: %godays', array('%todays' => $days_to_election, '%godays' => $notification_days_arr, '%election_date' => $election_date), WATCHDOG_NOTICE);
    return;
  }

  // only run once a day
  if (date('Ymd') <= date('Ymd', $last_run_ts)) {
    $check_data = date('d-m-Y', $last_run_ts);
    watchdog('Valghalla','Cron for Valghalla mails blev ikke kørt da den allerede er kørt i dag: %last_run', array('%last_run' => $check_data), WATCHDOG_NOTICE);
    return;
  }




  // helpers
  $election->days_to_election = $days_to_election;
  $election->election_date = date('j/m Y', strtotime($election->field_date[$language->language][0]['value']));

  // find volunteers to notify, we only send to users whom has no rsvp status - and a valid email address
  foreach (entity_load('node', FALSE, array('type' => 'volunteers')) as $volunteer) {
    if (!empty($volunteer->field_rsvp) ||
        empty($volunteer->field_email[$language->language][0]['email'])
    ) {
      continue;
    }

    // spam the volunteer
    valhalla_cron_rsvp_reminder_send($election, $volunteer);
  }
}

/**
 * this function prepares the email and triggers the mail_send() hook
 *
 * @see valhalla_cron_mail
 * @global stdClass $language
 * @param stdClass $election
 * @param stdClass $volunteer
 */
function valhalla_cron_rsvp_reminder_send($election, $volunteer) {
  global $language;
  module_load_include('inc', 'valhalla_volunteers', 'valhalla_volunteers');


  $to = $volunteer->field_email[$language->language][0]['email'];
  $from = variable_get('site_mail', 'admin@example.com');

  $params = _valhalla_helper_get_volunteer_info_params($volunteer);

  $send = TRUE;
  $result = drupal_mail('valhalla_mail', 'rsvp_reminder', $to, $language, $params, $from, $send);
}
