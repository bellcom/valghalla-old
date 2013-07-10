<?php
/**
 * @file
 * content_type_almindelig_side.features.inc
 */

/**
 * Implements hook_node_info().
 */
function content_type_almindelig_side_node_info() {
  $items = array(
    'page' => array(
      'name' => t('Almindelig side'),
      'base' => 'node_content',
      'description' => t('Brug <em>almindelige sider</em>til statisk indhold, som f.eks. en \'Om foreningen\' side.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
