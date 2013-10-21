<?php
/**
 * @file
 * content_type_article.features.inc
 */

/**
 * Implements hook_node_info().
 */
function content_type_article_node_info() {
  $items = array(
    'article' => array(
      'name' => t('Article'),
      'base' => 'node_content',
      'description' => t(' er ikke i brug i Valhalla, kan muligvis slettes, har ikke undersøgt mulige konsekvenser (selvom der nok ikke er nogen)'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
