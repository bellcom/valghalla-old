<?php

/**
 * Implementation of hook_taxonomy_default_vocabularies().
 */
function election_content_type_taxonomy_default_vocabularies() {
  return array(
    'valgtype' => array(
      'name' => 'Valgtype',
      'machine_name' => 'valgtype',
      'description' => 'Er der tale om et kommunal, folketings eller regionsvalg',
      'hierarchy' => '0',
      'module' => 'taxonomy',
      'weight' => '0',
    ),
  );
}
