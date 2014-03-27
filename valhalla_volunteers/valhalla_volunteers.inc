<?php

/**
 * helper function, this one wraps a name in rsvp settings
 *
 * @global stdClass $language
 * @param stdClass $node
 * @return string
 */
function _valhalla_helper_wrap_name($node, $container = 'p',$extra = null) {
  global $language;

  $rsvp_map = array(
      0 => t('Har endnu ikke bekræftet'),
      1 => t('Har bekræftet sin deltagelse'),
      2 => t('Har meldt afbud til dette valg'),
      3 => t('Ønsker at blive slettet'),
  );
  $rsvp_class_map = array(
      0 => 'unknown',
      1 => 'yes',
      2 => 'no',
      3 => 'never',
  );

  $party = taxonomy_term_load($node->field_party[$language->language][0]['tid']);

  $rsvp_markup = "";

  $rsvp_message = field_get_items('node', $node, 'field_rsvp_comment');

  if($rsvp_message){
    if(!empty($rsvp_message[0]['value'])){
      $rsvp_markup = '<span class="rsvp-message-icon"></span><span style="display:none;" class="rsvp-message">' . $rsvp_message[0]['value'] . '</span>';
    }
  }

  $rsvp = empty($node->field_rsvp[$language->language][0]['value']) ? 0 : $node->field_rsvp[$language->language][0]['value'];

  $reply_link = '';

  if($rsvp == 0){
    $field_token = field_get_items('node', $node, 'field_token');
    $reply_link = '<a title="Svar for denne tilforordnede" class="edit reply" href="/volunteers/rsvp/' . $field_token[0]['value'] . '">Svar</a>';
  }

  $party_name = (isset($party->name)) ? $party->name : "";
  $display = '(' . $party_name . ') ' . $node->title . ' (' . $rsvp_map[$rsvp] . ')' . $rsvp_markup . $reply_link ;
  if (isset($extra)) {
    $display = '(' . $party_name . ') ' . $node->title . ' (' . $rsvp_map[$rsvp] . ')';
  }
  return '<' . $container . ' class="volunteer ' . $rsvp_class_map[$rsvp] . '">' . $display . '</' . $container . '>';
}

/**
 * validate the login token
 * if valid, the session variable valhalla_volunteer will contain the related node
 *
 * @param string $token
 * @return boolean
 */
function _valhalla_volunteers_validate_key($token) {
  $entity_id = db_select('field_data_field_token', 't')
      ->fields('t', array('entity_id'))
      ->condition('entity_type', 'node', '=')
      ->condition('bundle', 'volunteers', '=')
      ->condition('field_token_value', $token, '=')
      ->execute()
      ->fetchField()
  ;

  if ($entity_id) {
    $_SESSION['valhalla_volunteer'] = node_load($entity_id);
    return TRUE;
  }

  return FALSE;
}

/**
 * get email from its token
 *
 * @global stdClass $language
 * @staticvar array $emails
 * @param string $token
 * @return array
 */
function _valhalla_helper_get_email_by_token($token) {
  global $language;
  static $emails = array();

  if (isset($emails[$token])) {
    return $emails[$token];
  }

  $entity_id = db_select('field_data_field_token', 't')
      ->fields('t', array('entity_id'))
      ->condition('entity_type', 'node', '=')
      ->condition('bundle', 'email', '=')
      ->condition('field_token_value', $token, '=')
      ->execute()
      ->fetchField()
  ;

  $emails[$token] = FALSE;
  if ($entity_id) {
    $email = node_load($entity_id);
    $emails[$token] = new stdClass();
    $emails[$token]->subject = $email->title;
    $emails[$token]->body_plain = $email->body[$language->language][0]['value'];
    $emails[$token]->body_html = $email->body[$language->language][0]['safe_value'];
  }

  return $emails[$token];
}

/**
 * retrive volunteer node by cpr number
 *
 * @param string $cpr
 * @return mixed stdClass on success otherwise false
 */
function _valhalla_helper_get_volunteer_by_cpr($cpr) {
  $entity_id = db_select('field_data_field_cpr_number', 't')
      ->fields('t', array('entity_id'))
      ->condition('entity_type', 'node', '=')
      ->condition('bundle', 'volunteers', '=')
      ->condition('field_cpr_number_value', $cpr, '=')
      ->execute()
      ->fetchField()
  ;

  if ($entity_id) {
    return node_load($entity_id);
  }

  return FALSE;
}

/**
 * Thomas Thune Hansen <tth@bellcom.dk>
 *
 * Length has to be 10 characters, and it cant contain a dash.
 *
 * @param string $cpr
 * @return boolean
 */
function _valhalla_helper_validate_cpr($cpr) {
  if(strlen($cpr) === 10 && !strpos($cpr, '-')){
    return true;
  }
  return false;
}

/**
 * Thomas Thune Hansen <tth@bellcom.dk>
 *
 * Helper function to check if the post if unused on the chosen polling
 * station
 *
 * @params
 *  polling station nid
 *  role nid
 *  party tid
 * @return
 *  bool
 */
function _valhalla_helper_validate_polling_post($polling_station_id, $role_id, $party_id){
  $polling_station = node_load($polling_station_id);
  $posts_array = valhalla_volunteers_to_polling_station_roles($polling_station, $party_id, FALSE);

  $role_array = _valhalla_helper_get_role_array();

  // If existing in the posts_array is empty, then all posts are vacant
  if(!is_array($posts_array['existing'])){
    $free_posts = $posts_array['posts_to_fill'];
  }
  else {
    // Get the remaining free posts
    $free_posts = array_diff_assoc($posts_array['posts_to_fill'], $posts_array['existing']);
  }
  // Check if one of the free posts has the correct role id.
  foreach($free_posts as $post){
    if($role_array[$post['title']] == $role_id){
      return TRUE;
    }
  }
  return FALSE;
}

function _valhalla_helper_get_role_array(){
  // tth: Get all roles, query all content from bundle 'roles'
  $query = new EntityFieldQuery();
  $query->entityCondition('entity_type', 'node')
    ->entityCondition('bundle', 'roles');
  $results = $query->execute();
  $nodes = node_load_multiple(array_keys($results['node']));

  // tth: Create an array for lookup
  $role_array = array();
  foreach($nodes as $key => $value){
    $role_array[strtolower($value->title)] = $key;
  }

  return $role_array;
}

/**
 * handle csv imports of volunteers
 *
 * @global stdClass $user
 * @global stdClass $language
 * @param stdClass $file_object
 * @param int $party_forced, optional party id if set all imports will have this party id set.
 * @return array
 */
function _valhalla_helter_parse_csv_import($file_object, $party_forced = FALSE) {
  global $user, $language;

  $failed = array();
  $counter = $added = $updated = 0;
  if ($handle = fopen($file_object->uri, 'r')) {

    while (($data = fgetcsv($handle, 1024, ";")) !== FALSE) {
      if ($counter == 0) {
        // header line..
        $counter++;
        continue;
      }

      if (empty($data[0]) || (count($data) != 5)) {
        continue;
      }

      // extract fields into readable variables
      list($party, $cpr, $name, $email, $phone) = $data;

      if ($party_forced) {
        $party = $party_forced;
      }

      if (FALSE == _valhalla_helper_validate_cpr($cpr)) {
        $failed[$cpr] = $name;
        continue;
      }

      $node = _valhalla_helper_get_volunteer_by_cpr($cpr);

      if (!$node instanceof stdClass) {
        $node = new stdClass();
        $node->type = 'volunteers';
        node_object_prepare($node);
        $node->comment = 0;
        $node->title = $name;
        $node->language = $language->language;
        $node->field_cpr_number[$language->language][0]['value'] = $cpr;

        $added++;
      } else {

        if (($party_forced && !empty($node->field_party[$language->language][0]['tid'])) &&
            ($node->field_party[$language->language][0]['tid'] != $party_forced)
        ) {
          $failed[$cpr] = $name . ' - tilhører et andet parti';
          continue;
        }

        $updated++;
      }

      $node->field_email[$language->language][0]['email'] = $email;
      $node->field_phone[$language->language][0]['value'] = $phone;
      $node->field_token[$language->language][0]['value'] = user_password(8);

      if ($party) {
        if (preg_match('~^[0-9]+$~', $party)) {
          $tid = $party;
        } else {
          $term = taxonomy_get_term_by_name($party);
          $tid = array_shift(array_keys($term));
        }
        $node->field_party[$language->language][0]['tid'] = $tid;
      }

      node_save($node);
      $counter++;
    }
    fclose($handle);
  }

  return array(
      'added' => $added,
      'updated' => $updated,
      'failed' => $failed
  );
}

/**
 * returns a keyed array of roles
 */
function _valhalla_helper_get_roles() {

  $data = array();
  foreach (entity_load('node', FALSE, array('type' => 'roles')) as $item) {
    $data[$item->nid] = $item->title;
  }

  return $data;
}

/**
 * returns a keyed array of polling stations
 */
function _valhalla_helper_get_polling_stations() {

  $data = array();
  foreach (entity_load('node', FALSE, array('type' => 'polling_station')) as $item) {
    $data[$item->nid] = $item->title;
  }

  asort($data, SORT_REGULAR);
  return $data;
}

function _valhalla_helper_get_active_election() {

  $nid = db_select('field_data_field_election_status', 's')
      ->fields('s', array('entity_id'))
      ->condition('field_election_status_value', 1)
      ->execute()
      ->fetchColumn();
  if ($nid) {
    return node_load($nid);
  }

  return FALSE;
}

/**
 * helper function for checking voulenteers count
 *
 * @global stdClass $user
 * @global stdClass $language
 * @return boolean
 */
function _valhalla_helper_volunteers_count() {
  global $user, $language;

  $user_party_id = empty($user->field_party[LANGUAGE_NONE][0]['tid']) ? FALSE : $user->field_party[LANGUAGE_NONE][0]['tid'];

  $where = '';
  if ($user_party_id) {
    $where = ' WHERE p.field_party_tid = ' . (int) $user_party_id;
  }

  $result = db_query('SELECT COUNT(*) AS num FROM {field_data_field_party} AS p' . $where);
  foreach ($result as $record) {
    return (bool) $record->num;
  }
}

function _valhalla_helper_get_volunteer_info_params($node) {
  if ($node === 'info') { // Information HTML
    return <<< EOM
<p>Some substitution options are available in the subject and body area:</p>
<ul>
<li><em>!name</em> will be replaced by the recipients name.</li>
<li><em>!email</em> will be replaced by the recipients email address.</li>
<li><em>!phone</em> will be replaced by the recipients phone number.</li>
<li><em>!date</em> will be replaced by date and time the mail is send.</li>
<li><em>!election_date</em> will be replaced by election date.</li>
<li><em>!link</em> will be replaced by one or more links to various actions.</li>
<li><em>!polling_station</em> will be replaced by the name of the polling station.</li>
<li><em>!polling_station_address</em> will be replaced by the address of the polling station</li>
<li><em>!position</em> will be replaced by the VAF/VA/TI label</li>
<li><em>!position_description</em> will be replaced by the description</li>
<li><em>!time</em> will be replaced by meeting time for role</li>
<li><em>!responsible</em> will be replaced by the name of responsible for a given polling station.</li>
</ul>
<p>Please note that in some cases the options above is not available.</p>
EOM;
  }

  $params = drupal_static(__FUNCTION__ . $node->nid, FALSE);

  if (empty($params)) {
    global $language;
    $email = field_get_items('node', $node, 'field_email');
    $phone = field_get_items('node', $node, 'field_phone');
    $token = field_get_items('node', $node, 'field_token');
    // Set up base info
    $params = array(
        '!name' => $node->title,
        '!email' => $email[0]['email'],
        '!phone' => (empty($phone[0]['safe_value']) ? '' : $phone[0]['safe_value']),
        '!date' => date('j/m Y'),
        '!link' => url('volunteers/rsvp/' . $token[0]['value'], array('absolute' => TRUE)),
    );

    $election = _valhalla_helper_get_active_election();

    // If no current election, so omit info
    if (FALSE != $election) {
      $election_date = field_get_items('node', $election, 'field_date');
      list($election_date, $time) = preg_split("|T|", $election_date[0]['value']);
      $today_date = strtotime(date('Y-m-d'));
      $election_date1 = strtotime($election_date);
      $days_to_election = floor(($election_date1 - $today_date) / 86400);

      $election_date = date('d.m.Y', $election_date1);

      $params = array_merge($params, array(
        '!election_date' => $election_date,
        '!days' => $days_to_election,
      ));
    }

    // Gather polling station info
    $field_polling_station=field_get_items('node', $node, 'field_polling_station');
    $polling_station = node_load($field_polling_station[0]['nid']);

    $field_label=field_get_items('node', $node, 'field_label');
    if (FALSE != $polling_station) {
      $role_nid = db_select('node', 'n')
                  ->distinct()
                  ->fields('n', array('nid', 'title'))
                  ->condition('n.type', 'roles')
                 ->condition('n.title', $field_label[0]['value'])
                  ->execute()
                  ->fetchColumn();

      // Get role info
      $role_info ='';

      if ($role_nid){
        $role_node = node_load($role_nid);

        if (is_object($role_node)) {
          $role_title = $role_node->title;
          $description_field = field_get_items('node', $role_node, 'field_description');
          if($description_field) {
            $role_info = $description_field[0]['value'];
          }

          // tth: Fetch info for token !time.
          $meetingtime_field = field_get_items('node', $role_node, 'field_meetingtime');
          $time = $meetingtime_field[0]['value'];
        }
      }

      $wrapper = entity_metadata_wrapper('node', $polling_station);

      // !address
      $polling_station_address = array();
      $polling_station_address[] = $wrapper->field_address_road->value() . ' ' . $wrapper->field_address_road_no->value();
      $polling_station_address[] = $wrapper->field_address_zipcode->value() . ' ' . $wrapper->field_address_city->value();

      $params = array_merge($params, array(
          '!polling_station' => $polling_station->title,
          '!polling_station_address' => implode("\n", $polling_station_address),
          '!position' => $role_title,
          '!position_description' => $role_info,
          '!position_nid' => $role_nid,
          '!time' => $time,
          '!responsible' => $wrapper->field_contact->value(),
          ));
    }
  }
  return $params;
}

