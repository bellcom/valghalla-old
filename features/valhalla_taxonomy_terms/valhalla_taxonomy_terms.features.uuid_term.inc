<?php
/**
 * @file
 * valhalla_taxonomy_terms.features.uuid_term.inc
 */

/**
 * Implements hook_uuid_features_default_terms().
 */
function valhalla_taxonomy_terms_uuid_features_default_terms() {
  $terms = array();

  $terms[] = array(
    'name' => 'Folketingsvalg',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => '0',
    'uuid' => '03abb9e0-7e12-488d-a06f-876cfc9536fd',
    'vocabulary_machine_name' => 'valgtype',
  );
  $terms[] = array(
    'name' => 'Kommunalvalg',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => '0',
    'uuid' => '11d7a260-a17f-4abd-b1d3-4668185039b3',
    'vocabulary_machine_name' => 'valgtype',
  );
  $terms[] = array(
    'name' => '8:00',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => '0',
    'uuid' => '1208149e-cca2-4e99-b956-63d4cd9e4726',
    'vocabulary_machine_name' => 'volonteers_meeting_time',
  );
  $terms[] = array(
    'name' => '16:00',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => '1',
    'uuid' => '5f7f96a3-5a58-415c-a73d-39673063bfeb',
    'vocabulary_machine_name' => 'volonteers_meeting_time',
  );
  $terms[] = array(
    'name' => '19:30',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => '2',
    'uuid' => 'a3732e6b-c8b7-47ec-8f0c-5344a8f28fd3',
    'vocabulary_machine_name' => 'volonteers_meeting_time',
  );
  $terms[] = array(
    'name' => 'EU parlamentsvalg',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => '0',
    'uuid' => 'c9b4b2be-5650-476a-8675-7ad8db3802b0',
    'vocabulary_machine_name' => 'valgtype',
  );
  $terms[] = array(
    'name' => 'Regionsvalg',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => '0',
    'uuid' => 'df260bbe-069f-43a2-8b41-5ac844a5929f',
    'vocabulary_machine_name' => 'valgtype',
  );
  return $terms;
}
