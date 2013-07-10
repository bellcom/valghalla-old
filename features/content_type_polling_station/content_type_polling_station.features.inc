<?php
/**
 * @file
 * content_type_polling_station.features.inc
 */

/**
 * Implements hook_node_info().
 */
function content_type_polling_station_node_info() {
  $items = array(
    'polling_station' => array(
      'name' => t('Valgsted'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Valgstedets navn'),
      'help' => '',
    ),
  );
  return $items;
}
