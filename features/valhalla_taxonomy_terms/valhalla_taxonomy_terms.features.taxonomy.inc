<?php
/**
 * @file
 * valhalla_taxonomy_terms.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function valhalla_taxonomy_terms_taxonomy_default_vocabularies() {
  return array(
    'partier' => array(
      'name' => 'Partier',
      'machine_name' => 'partier',
      'description' => '',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
    'valgtype' => array(
      'name' => 'Valgtype',
      'machine_name' => 'valgtype',
      'description' => 'Er der tale om et kommunal, folketings eller regionsvalg',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
  );
}
