<?php
/**
 * @file
 * valhalla_volunteers.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function valhalla_volunteers_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function valhalla_volunteers_node_info() {
  $items = array(
    'roles' => array(
      'name' => t('Roles of volunteers'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Rolle'),
      'help' => '',
    ),
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
