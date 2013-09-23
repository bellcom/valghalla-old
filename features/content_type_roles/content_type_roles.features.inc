<?php
/**
 * @file
 * content_type_roles.features.inc
 */

/**
 * Implements hook_node_info().
 */
function content_type_roles_node_info() {
  $items = array(
    'roles' => array(
      'name' => t('Roles of volunteers'),
      'base' => 'node_content',
      'description' => t('Roles of volunteers'),
      'has_title' => '1',
      'title_label' => t('Role'),
      'help' => '',
    ),
  );
  return $items;
}
