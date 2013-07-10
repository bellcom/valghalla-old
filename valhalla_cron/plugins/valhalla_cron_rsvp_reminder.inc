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

  // only run once a day
  if (date('Ymd') <= date('Ymd', $last_run_ts)) {
    return;
  }

  // find active election
  $nid = db_select('field_data_field_election_status', 'es')
      ->fields('es', array('entity_id'))
      ->condition('es.bundle', 'election')
      ->condition('es.field_election_status_value', 1)
      ->execute()
      ->fetchColumn()
  ;

  if (!$nid) {
    return;
  }

  // load election node
  $election = node_load($nid);
  $date = isset($election->field_date[$language->language][0]['value']) ? strtotime($election->field_date[$language->language][0]['value']) : FALSE;
  $days_to_election = date('Ymd', $date) - date('Ymd');

  // check dates
  $notification_days = explode(',', variable_get('valhalla_rsvp_reminder_days', '14, 7, 5, 3'));

  if (!in_array($days_to_election, $notification_days)) {
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
