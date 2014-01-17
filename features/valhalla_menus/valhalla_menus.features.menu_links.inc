<?php
/**
 * @file
 * valhalla_menus.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function valhalla_menus_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: main-menu_opret-partibruger:add-sub-secretary
  $menu_links['main-menu_opret-partibruger:add-sub-secretary'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'add-sub-secretary',
    'router_path' => 'add-sub-secretary',
    'link_title' => 'Opret partibruger',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_opret-partibruger:add-sub-secretary',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -48,
    'customized' => 0,
  );
  // Exported menu link: management_valhalla:admin/valhalla
  $menu_links['management_valhalla:admin/valhalla'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/valhalla',
    'router_path' => 'admin/valhalla',
    'link_title' => 'Valhalla',
    'options' => array(
      'attributes' => array(
        'title' => 'Configure valhalla.',
      ),
      'identifier' => 'management_valhalla:admin/valhalla',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -4,
    'customized' => 0,
    'parent_identifier' => 'management_administration:admin',
  );
  // Exported menu link: menu-partisekret-r-menu_opret-partisekretr:add-sub-secretary
  $menu_links['menu-partisekret-r-menu_opret-partisekretr:add-sub-secretary'] = array(
    'menu_name' => 'menu-partisekret-r-menu',
    'link_path' => 'add-sub-secretary',
    'router_path' => 'add-sub-secretary',
    'link_title' => 'Opret partisekretær',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-partisekret-r-menu_opret-partisekretr:add-sub-secretary',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
  );
  // Exported menu link: menu-valg-administration_add-volunteer-role:node/add/roles
  $menu_links['menu-valg-administration_add-volunteer-role:node/add/roles'] = array(
    'menu_name' => 'menu-valg-administration',
    'link_path' => 'node/add/roles',
    'router_path' => 'node/add',
    'link_title' => 'Add volunteer role',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-valg-administration_add-volunteer-role:node/add/roles',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -47,
    'customized' => 0,
  );
  // Exported menu link: menu-valg-administration_opret-valgkreds:node/add/constituency
  $menu_links['menu-valg-administration_opret-valgkreds:node/add/constituency'] = array(
    'menu_name' => 'menu-valg-administration',
    'link_path' => 'node/add/constituency',
    'router_path' => 'node/add/constituency',
    'link_title' => 'Opret valgkreds',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-valg-administration_opret-valgkreds:node/add/constituency',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
  );
  // Exported menu link: menu-valg-administration_opret-valgsted:node/add/polling-station
  $menu_links['menu-valg-administration_opret-valgsted:node/add/polling-station'] = array(
    'menu_name' => 'menu-valg-administration',
    'link_path' => 'node/add/polling-station',
    'router_path' => 'node/add/polling-station',
    'link_title' => 'Opret valgsted',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-valg-administration_opret-valgsted:node/add/polling-station',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
  );
  // Exported menu link: menu-valg-administration_se-indholdsliste:admin/content
  $menu_links['menu-valg-administration_se-indholdsliste:admin/content'] = array(
    'menu_name' => 'menu-valg-administration',
    'link_path' => 'admin/content',
    'router_path' => 'admin/content',
    'link_title' => 'Se indholdsliste',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-valg-administration_se-indholdsliste:admin/content',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
  );
  // Exported menu link: navigation_valg:node/add/election
  $menu_links['navigation_valg:node/add/election'] = array(
    'menu_name' => 'navigation',
    'link_path' => 'node/add/election',
    'router_path' => 'node/add/election',
    'link_title' => 'Valg',
    'options' => array(
      'identifier' => 'navigation_valg:node/add/election',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'navigation_add-content:node/add',
  );
  // Exported menu link: navigation_valghalla-lister:valhalla-lists
  $menu_links['navigation_valghalla-lister:valhalla-lists'] = array(
    'menu_name' => 'navigation',
    'link_path' => 'valhalla-lists',
    'router_path' => 'valhalla-lists',
    'link_title' => 'Valghalla Lister',
    'options' => array(
      'identifier' => 'navigation_valghalla-lister:valhalla-lists',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
  );
  // Exported menu link: navigation_valgsted:node/add/polling-station
  $menu_links['navigation_valgsted:node/add/polling-station'] = array(
    'menu_name' => 'navigation',
    'link_path' => 'node/add/polling-station',
    'router_path' => 'node/add/polling-station',
    'link_title' => 'Valgsted',
    'options' => array(
      'identifier' => 'navigation_valgsted:node/add/polling-station',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'navigation_add-content:node/add',
  );
  // Exported menu link: navigation_valgstedskreds:node/add/constituency
  $menu_links['navigation_valgstedskreds:node/add/constituency'] = array(
    'menu_name' => 'navigation',
    'link_path' => 'node/add/constituency',
    'router_path' => 'node/add/constituency',
    'link_title' => 'Valgstedskreds',
    'options' => array(
      'identifier' => 'navigation_valgstedskreds:node/add/constituency',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'navigation_add-content:node/add',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Add volunteer role');
  t('Opret partibruger');
  t('Opret partisekretær');
  t('Opret valgkreds');
  t('Opret valgsted');
  t('Se indholdsliste');
  t('Valg');
  t('Valghalla Lister');
  t('Valgsted');
  t('Valgstedskreds');
  t('Valhalla');


  return $menu_links;
}
