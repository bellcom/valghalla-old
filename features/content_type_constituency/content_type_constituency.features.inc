<?php
/**
 * @file
 * content_type_constituency.features.inc
 */

/**
 * Implements hook_node_info().
 */
function content_type_constituency_node_info() {
  $items = array(
    'constituency' => array(
      'name' => t('Valgstedskreds'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
