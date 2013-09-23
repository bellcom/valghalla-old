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

  // Exported menu link: main-menu:<front>
  $menu_links['main-menu:<front>'] = array(
    'menu_name' => 'main-menu',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => 'Status',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '1',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-50',
  );
  // Exported menu link: main-menu:add-sub-secretary
  $menu_links['main-menu:add-sub-secretary'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'add-sub-secretary',
    'router_path' => 'add-sub-secretary',
    'link_title' => 'Opret partibruger',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-48',
  );
  // Exported menu link: main-menu:volunteers/add
  $menu_links['main-menu:volunteers/add'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'volunteers/add',
    'router_path' => 'volunteers/add',
    'link_title' => 'Tilføj tilforordnede',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-46',
  );
  $menu_links['main-menu:node/22'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/22',
    'router_path' => 'node/22',
    'link_title' => 'Lister',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-44',
  );
  // Exported menu link: menu-partisekret-r-menu:add-sub-secretary
  $menu_links['menu-partisekret-r-menu:add-sub-secretary'] = array(
    'menu_name' => 'menu-partisekret-r-menu',
    'link_path' => 'add-sub-secretary',
    'router_path' => 'add-sub-secretary',
    'link_title' => 'Opret partisekretær',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '0',
  );
  // Exported menu link: menu-valg-administration:admin/content
  $menu_links['menu-valg-administration:admin/content'] = array(
    'menu_name' => 'menu-valg-administration',
    'link_path' => 'admin/content',
    'router_path' => 'admin/content',
    'link_title' => 'Se indholdsliste',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '0',
  );
  // Exported menu link: menu-valg-administration:node/add/constituency
  $menu_links['menu-valg-administration:node/add/constituency'] = array(
    'menu_name' => 'menu-valg-administration',
    'link_path' => 'node/add/constituency',
    'router_path' => 'node/add/constituency',
    'link_title' => 'Opret valgkreds',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '0',
  );
  // Exported menu link: menu-valg-administration:node/add/polling-station
  $menu_links['menu-valg-administration:node/add/polling-station'] = array(
    'menu_name' => 'menu-valg-administration',
    'link_path' => 'node/add/polling-station',
    'router_path' => 'node/add/polling-station',
    'link_title' => 'Opret valgsted',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '0',
  );
  // Exported menu link: navigation:contact
  $menu_links['navigation:contact'] = array(
    'menu_name' => 'navigation',
    'link_path' => 'contact',
    'router_path' => 'contact',
    'link_title' => 'Contact',
    'options' => array(),
    'module' => 'system',
    'hidden' => '1',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '0',
  );
  // Exported menu link: navigation:filter/tips
  $menu_links['navigation:filter/tips'] = array(
    'menu_name' => 'navigation',
    'link_path' => 'filter/tips',
    'router_path' => 'filter/tips',
    'link_title' => 'Compose tips',
    'options' => array(),
    'module' => 'system',
    'hidden' => '1',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '0',
  );
  // Exported menu link: navigation:locationmap
  $menu_links['navigation:locationmap'] = array(
    'menu_name' => 'navigation',
    'link_path' => 'locationmap',
    'router_path' => 'locationmap',
    'link_title' => 'Our Location',
    'options' => array(),
    'module' => 'system',
    'hidden' => '1',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '0',
  );
  // Exported menu link: navigation:node/add
  $menu_links['navigation:node/add'] = array(
    'menu_name' => 'navigation',
    'link_path' => 'node/add',
    'router_path' => 'node/add',
    'link_title' => 'Add content',
    'options' => array(),
    'module' => 'system',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '1',
    'expanded' => '0',
    'weight' => '0',
  );
  // Exported menu link: navigation:node/add/absentee-ballot
  $menu_links['navigation:node/add/absentee-ballot'] = array(
    'menu_name' => 'navigation',
    'link_path' => 'node/add/absentee-ballot',
    'router_path' => 'node/add/absentee-ballot',
    'link_title' => 'Brevstemmer',
    'options' => array(
      'attributes' => array(
        'title' => 'opsætning af brevstemme frivillige - er ikke i brug i Valhalla, kan muligvis slettes, har ikke undersøgt mulige konsekvenser (selvom der nok ikke er nogen)',
      ),
    ),
    'module' => 'system',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '0',
    'parent_path' => 'node/add',
  );
  // Exported menu link: navigation:node/add/article
  $menu_links['navigation:node/add/article'] = array(
    'menu_name' => 'navigation',
    'link_path' => 'node/add/article',
    'router_path' => 'node/add/article',
    'link_title' => 'Article',
    'options' => array(
      'attributes' => array(
        'title' => ' er ikke i brug i Valhalla, kan muligvis slettes, har ikke undersøgt mulige konsekvenser (selvom der nok ikke er nogen)',
      ),
    ),
    'module' => 'system',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '0',
    'parent_path' => 'node/add',
  );
  // Exported menu link: navigation:node/add/constituency
  $menu_links['navigation:node/add/constituency'] = array(
    'menu_name' => 'navigation',
    'link_path' => 'node/add/constituency',
    'router_path' => 'node/add/constituency',
    'link_title' => 'Valgstedskreds',
    'options' => array(),
    'module' => 'system',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '0',
    'parent_path' => 'node/add',
  );
  // Exported menu link: navigation:node/add/election
  $menu_links['navigation:node/add/election'] = array(
    'menu_name' => 'navigation',
    'link_path' => 'node/add/election',
    'router_path' => 'node/add/election',
    'link_title' => 'Valg',
    'options' => array(),
    'module' => 'system',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '0',
    'parent_path' => 'node/add',
  );
  // Exported menu link: navigation:node/add/email
  $menu_links['navigation:node/add/email'] = array(
    'menu_name' => 'navigation',
    'link_path' => 'node/add/email',
    'router_path' => 'node/add/email',
    'link_title' => 'E-mail',
    'options' => array(
      'attributes' => array(
        'title' => 'Collection of emails',
      ),
    ),
    'module' => 'system',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '0',
    'parent_path' => 'node/add',
  );
  // Exported menu link: navigation:node/add/node_export
  $menu_links['navigation:node/add/node_export'] = array(
    'menu_name' => 'navigation',
    'link_path' => 'node/add/node_export',
    'router_path' => 'node/add/node_export',
    'link_title' => 'Node export: import',
    'options' => array(
      'attributes' => array(
        'title' => 'Import content using <em>Node export</em>.',
      ),
    ),
    'module' => 'system',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '0',
    'parent_path' => 'node/add',
  );
  // Exported menu link: navigation:node/add/page
  $menu_links['navigation:node/add/page'] = array(
    'menu_name' => 'navigation',
    'link_path' => 'node/add/page',
    'router_path' => 'node/add/page',
    'link_title' => 'Almindelig side',
    'options' => array(
      'attributes' => array(
        'title' => 'Brug <em>almindelige sider</em>til statisk indhold, som f.eks. en \'Om foreningen\' side.',
      ),
    ),
    'module' => 'system',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '0',
    'parent_path' => 'node/add',
  );
  // Exported menu link: navigation:node/add/panel
  $menu_links['navigation:node/add/panel'] = array(
    'menu_name' => 'navigation',
    'link_path' => 'node/add/panel',
    'router_path' => 'node/add/panel',
    'link_title' => 'Panel',
    'options' => array(
      'attributes' => array(
        'title' => 'A panel layout broken up into rows and columns.',
      ),
    ),
    'module' => 'system',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '0',
    'parent_path' => 'node/add',
  );
  // Exported menu link: navigation:node/add/polling-station
  $menu_links['navigation:node/add/polling-station'] = array(
    'menu_name' => 'navigation',
    'link_path' => 'node/add/polling-station',
    'router_path' => 'node/add/polling-station',
    'link_title' => 'Valgsted',
    'options' => array(),
    'module' => 'system',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '0',
    'parent_path' => 'node/add',
  );
  // Exported menu link: navigation:node/add/volunteers
  $menu_links['navigation:node/add/volunteers'] = array(
    'menu_name' => 'navigation',
    'link_path' => 'node/add/volunteers',
    'router_path' => 'node/add/volunteers',
    'link_title' => 'Frivillige',
    'options' => array(
      'attributes' => array(
        'title' => 'used to store information on volunteers in the system',
      ),
    ),
    'module' => 'system',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '0',
    'parent_path' => 'node/add',
  );
  // Exported menu link: navigation:search
  $menu_links['navigation:search'] = array(
    'menu_name' => 'navigation',
    'link_path' => 'search',
    'router_path' => 'search',
    'link_title' => 'Search',
    'options' => array(),
    'module' => 'system',
    'hidden' => '1',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '0',
  );
  // Exported menu link: navigation:valhalla_log
  $menu_links['navigation:valhalla_log'] = array(
    'menu_name' => 'navigation',
    'link_path' => 'valhalla_log',
    'router_path' => 'valhalla_log',
    'link_title' => '',
    'options' => array(),
    'module' => 'system',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '0',
  );

   $menu_links['menu-valg-administration:node/add/roles'] = array(
    'menu_name' => 'menu-valg-administration',
    'link_path' => 'node/add/roles',
    'router_path' => 'node/add',
    'link_title' => 'Add volunteer role',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-47',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Add content');
  t('Add volunteer role');
  t('Almindelig side');
  t('Article');
  t('Brevstemmer');
  t('Compose tips');
  t('Contact');
  t('E-mail');
  t('Frivillige');
  t('Node export: import');
  t('Opret partibruger');
  t('Opret partisekretær');
  t('Opret valgkreds');
  t('Opret valgsted');
  t('Our Location');
  t('Panel');
  t('Se indholdsliste');
  t('Search');
  t('Status');
  t('Tilføj tilforordnede');
  t('Valg');
  t('Valgsted');
  t('Valgstedskreds');


  return $menu_links;
}
