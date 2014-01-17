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
    'weight' => 0,
    'vocabulary_machine_name' => 'valgtype',
  );
  $terms[] = array(
    'name' => 'Kommunalvalg',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 0,
    'vocabulary_machine_name' => 'valgtype',
  );
  $terms[] = array(
    'name' => '8:00',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 0,
    'vocabulary_machine_name' => 'volonteers_meeting_time',
  );
  $terms[] = array(
    'name' => '16:00',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 1,
    'vocabulary_machine_name' => 'volonteers_meeting_time',
  );
  $terms[] = array(
    'name' => '19:30',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 2,
    'vocabulary_machine_name' => 'volonteers_meeting_time',
  );
  $terms[] = array(
    'name' => 'EU parlamentsvalg',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 0,
    'vocabulary_machine_name' => 'valgtype',
  );
  $terms[] = array(
    'name' => 'Regionsvalg',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 0,
    'vocabulary_machine_name' => 'valgtype',
  );
  return $terms;
}
