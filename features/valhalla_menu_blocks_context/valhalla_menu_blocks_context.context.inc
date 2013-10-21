<?php
/**
 * @file
 * valhalla_menu_blocks_context.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function valhalla_menu_blocks_context_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'valhalla_menu_blocks_context';
  $context->description = '';
  $context->tag = '';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        '~admin*' => '~admin*',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'menu-menu-valg-administration' => array(
          'module' => 'menu',
          'delta' => 'menu-valg-administration',
          'region' => 'sidebar_first',
          'weight' => '-15',
        ),
        'system-main-menu' => array(
          'module' => 'system',
          'delta' => 'main-menu',
          'region' => 'sidebar_first',
          'weight' => '-14',
        ),
        'system-navigation' => array(
          'module' => 'system',
          'delta' => 'navigation',
          'region' => 'sidebar_first',
          'weight' => '-13',
        ),
        'system-user-menu' => array(
          'module' => 'system',
          'delta' => 'user-menu',
          'region' => 'sidebar_first',
          'weight' => '-12',
        ),
        'menu-menu-partisekret-r-menu' => array(
          'module' => 'menu',
          'delta' => 'menu-partisekret-r-menu',
          'region' => 'sidebar_first',
          'weight' => '-11',
        ),
        'user-login' => array(
          'module' => 'user',
          'delta' => 'login',
          'region' => 'sidebar_first',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;
  $export['valhalla_menu_blocks_context'] = $context;

  return $export;
}
