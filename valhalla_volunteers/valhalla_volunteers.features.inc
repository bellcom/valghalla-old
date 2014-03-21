<?php
/**
 * @file
 * valhalla_volunteers.features.inc
 */

/**
 * Implements hook_node_info().
 */
function valhalla_volunteers_node_info() {
  $items = array(
    'volunteers' => array(
      'name' => t('Frivillige'),
      'base' => 'node_content',
      'description' => t('used to store information on volunteers in the system'),
      'has_title' => '1',
      'title_label' => t('Navn'),
      'help' => '',
    ),
  );
  return $items;
}
