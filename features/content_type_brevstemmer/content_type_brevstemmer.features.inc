<?php
/**
 * @file
 * content_type_brevstemmer.features.inc
 */

/**
 * Implements hook_node_info().
 */
function content_type_brevstemmer_node_info() {
  $items = array(
    'absentee_ballot' => array(
      'name' => t('Brevstemmer'),
      'base' => 'node_content',
      'description' => t('opsætning af brevstemme frivillige - er ikke i brug i Valhalla, kan muligvis slettes, har ikke undersøgt mulige konsekvenser (selvom der nok ikke er nogen)'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
