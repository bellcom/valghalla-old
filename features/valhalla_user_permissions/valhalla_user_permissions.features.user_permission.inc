<?php
/**
 * @file
 * valhalla_user_permissions.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function valhalla_user_permissions_user_default_permissions() {
  $permissions = array();

  // Exported permission: access administration pages.
  $permissions['access administration pages'] = array(
    'name' => 'access administration pages',
    'roles' => array(
      0 => 'Valgsekretær',
      1 => 'administrator',
    ),
    'module' => 'system',
  );

  // Exported permission: access all views.
  $permissions['access all views'] = array(
    'name' => 'access all views',
    'roles' => array(
      0 => 'Valgsekretær',
      1 => 'administrator',
    ),
    'module' => 'views',
  );

  // Exported permission: access backup and migrate.
  $permissions['access backup and migrate'] = array(
    'name' => 'access backup and migrate',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'backup_migrate',
  );

  // Exported permission: access backup files.
  $permissions['access backup files'] = array(
    'name' => 'access backup files',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'backup_migrate',
  );

  // Exported permission: access comments.
  $permissions['access comments'] = array(
    'name' => 'access comments',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'comment',
  );

  // Exported permission: access content.
  $permissions['access content'] = array(
    'name' => 'access content',
    'roles' => array(
      0 => 'Valgsekretær',
      1 => 'administrator',
      2 => 'authenticated user',
    ),
    'module' => 'node',
  );

  // Exported permission: access content overview.
  $permissions['access content overview'] = array(
    'name' => 'access content overview',
    'roles' => array(
      0 => 'Valgsekretær',
      1 => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: access contextual links.
  $permissions['access contextual links'] = array(
    'name' => 'access contextual links',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'contextual',
  );

  // Exported permission: access dashboard.
  $permissions['access dashboard'] = array(
    'name' => 'access dashboard',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'dashboard',
  );

  // Exported permission: access rules debug.
  $permissions['access rules debug'] = array(
    'name' => 'access rules debug',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'rules',
  );

  // Exported permission: access site in maintenance mode.
  $permissions['access site in maintenance mode'] = array(
    'name' => 'access site in maintenance mode',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'system',
  );

  // Exported permission: access site reports.
  $permissions['access site reports'] = array(
    'name' => 'access site reports',
    'roles' => array(
      0 => 'Valgsekretær',
      1 => 'administrator',
    ),
    'module' => 'system',
  );

  // Exported permission: access site-wide contact form.
  $permissions['access site-wide contact form'] = array(
    'name' => 'access site-wide contact form',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'contact',
  );

  // Exported permission: access toolbar.
  $permissions['access toolbar'] = array(
    'name' => 'access toolbar',
    'roles' => array(
      0 => 'Valgsekretær',
      1 => 'administrator',
    ),
    'module' => 'toolbar',
  );

  // Exported permission: access user contact forms.
  $permissions['access user contact forms'] = array(
    'name' => 'access user contact forms',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'contact',
  );

  // Exported permission: access user profiles.
  $permissions['access user profiles'] = array(
    'name' => 'access user profiles',
    'roles' => array(
      0 => 'Valgsekretær',
      1 => 'administrator',
    ),
    'module' => 'user',
  );

  // Exported permission: administer actions.
  $permissions['administer actions'] = array(
    'name' => 'administer actions',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'system',
  );

  // Exported permission: administer advanced pane settings.
  $permissions['administer advanced pane settings'] = array(
    'name' => 'administer advanced pane settings',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'panels',
  );

  // Exported permission: administer backup and migrate.
  $permissions['administer backup and migrate'] = array(
    'name' => 'administer backup and migrate',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'backup_migrate',
  );

  // Exported permission: administer blocks.
  $permissions['administer blocks'] = array(
    'name' => 'administer blocks',
    'roles' => array(
      0 => 'Valgsekretær',
    ),
    'module' => 'block',
  );

  // Exported permission: administer ckeditor.
  $permissions['administer ckeditor'] = array(
    'name' => 'administer ckeditor',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'ckeditor',
  );

  // Exported permission: administer comments.
  $permissions['administer comments'] = array(
    'name' => 'administer comments',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'comment',
  );

  // Exported permission: administer contact forms.
  $permissions['administer contact forms'] = array(
    'name' => 'administer contact forms',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'contact',
  );

  // Exported permission: administer content types.
  $permissions['administer content types'] = array(
    'name' => 'administer content types',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: administer ctools access ruleset.
  $permissions['administer ctools access ruleset'] = array(
    'name' => 'administer ctools access ruleset',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'ctools_access_ruleset',
  );

  // Exported permission: administer custom content.
  $permissions['administer custom content'] = array(
    'name' => 'administer custom content',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'ctools_custom_content',
  );

  // Exported permission: administer date tools.
  $permissions['administer date tools'] = array(
    'name' => 'administer date tools',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'date_tools',
  );

  // Exported permission: administer features.
  $permissions['administer features'] = array(
    'name' => 'administer features',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'features',
  );

  // Exported permission: administer fieldgroups.
  $permissions['administer fieldgroups'] = array(
    'name' => 'administer fieldgroups',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'field_group',
  );

  // Exported permission: administer filters.
  $permissions['administer filters'] = array(
    'name' => 'administer filters',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'filter',
  );

  // Exported permission: administer group.
  $permissions['administer group'] = array(
    'name' => 'administer group',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'og',
  );

  // Exported permission: administer image styles.
  $permissions['administer image styles'] = array(
    'name' => 'administer image styles',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'image',
  );

  // Exported permission: administer imce.
  $permissions['administer imce'] = array(
    'name' => 'administer imce',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'imce',
  );

  // Exported permission: administer languages.
  $permissions['administer languages'] = array(
    'name' => 'administer languages',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'locale',
  );

  // Exported permission: administer locationmap.
  $permissions['administer locationmap'] = array(
    'name' => 'administer locationmap',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'locationmap',
  );

  // Exported permission: administer menu.
  $permissions['administer menu'] = array(
    'name' => 'administer menu',
    'roles' => array(
      0 => 'Valgsekretær',
      1 => 'administrator',
    ),
    'module' => 'menu',
  );

  // Exported permission: administer message types.
  $permissions['administer message types'] = array(
    'name' => 'administer message types',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'message',
  );

  // Exported permission: administer modules.
  $permissions['administer modules'] = array(
    'name' => 'administer modules',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'system',
  );

  // Exported permission: administer nodes.
  $permissions['administer nodes'] = array(
    'name' => 'administer nodes',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: administer page manager.
  $permissions['administer page manager'] = array(
    'name' => 'administer page manager',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'page_manager',
  );

  // Exported permission: administer pane access.
  $permissions['administer pane access'] = array(
    'name' => 'administer pane access',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'panels',
  );

  // Exported permission: administer panel-nodes.
  $permissions['administer panel-nodes'] = array(
    'name' => 'administer panel-nodes',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'panels_node',
  );

  // Exported permission: administer panels layouts.
  $permissions['administer panels layouts'] = array(
    'name' => 'administer panels layouts',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'panels',
  );

  // Exported permission: administer permissions.
  $permissions['administer permissions'] = array(
    'name' => 'administer permissions',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'user',
  );

  // Exported permission: administer rules.
  $permissions['administer rules'] = array(
    'name' => 'administer rules',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'rules',
  );

  // Exported permission: administer search.
  $permissions['administer search'] = array(
    'name' => 'administer search',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'search',
  );

  // Exported permission: administer shortcuts.
  $permissions['administer shortcuts'] = array(
    'name' => 'administer shortcuts',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'shortcut',
  );

  // Exported permission: administer site configuration.
  $permissions['administer site configuration'] = array(
    'name' => 'administer site configuration',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'system',
  );

  // Exported permission: administer software updates.
  $permissions['administer software updates'] = array(
    'name' => 'administer software updates',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'system',
  );

  // Exported permission: administer sub secretaries.
  $permissions['administer sub secretaries'] = array(
    'name' => 'administer sub secretaries',
    'roles' => array(
      0 => 'Partisekretær',
      1 => 'Valgsekretær',
      2 => 'administrator',
    ),
    'module' => 'valhalla_volunteers',
  );

  // Exported permission: administer taxonomy.
  $permissions['administer taxonomy'] = array(
    'name' => 'administer taxonomy',
    'roles' => array(
      0 => 'Valgsekretær',
      1 => 'administrator',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: administer themes.
  $permissions['administer themes'] = array(
    'name' => 'administer themes',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'system',
  );

  // Exported permission: administer url aliases.
  $permissions['administer url aliases'] = array(
    'name' => 'administer url aliases',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'path',
  );

  // Exported permission: administer users.
  $permissions['administer users'] = array(
    'name' => 'administer users',
    'roles' => array(
      0 => 'Valgsekretær',
      1 => 'administrator',
    ),
    'module' => 'user',
  );

  // Exported permission: administer uuid.
  $permissions['administer uuid'] = array(
    'name' => 'administer uuid',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'uuid',
  );

  // Exported permission: administer valhalla.
  $permissions['administer valhalla'] = array(
    'name' => 'administer valhalla',
    'roles' => array(
      0 => 'Valgsekretær',
      1 => 'administrator',
    ),
    'module' => 'valhalla_volunteers',
  );

  // Exported permission: administer views.
  $permissions['administer views'] = array(
    'name' => 'administer views',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'views',
  );

  // Exported permission: administer volunteers.
  $permissions['administer volunteers'] = array(
    'name' => 'administer volunteers',
    'roles' => array(
      0 => 'Partisekretær',
      1 => 'Valgsekretær',
      2 => 'administrator',
    ),
    'module' => 'valhalla_volunteers',
  );

  // Exported permission: assign Partisekretær role.
  $permissions['assign Partisekretær role'] = array(
    'name' => 'assign Partisekretær role',
    'roles' => array(
      0 => 'Valgsekretær',
      1 => 'administrator',
    ),
    'module' => 'role_delegation',
  );

  // Exported permission: assign Valgsekretær role.
  $permissions['assign Valgsekretær role'] = array(
    'name' => 'assign Valgsekretær role',
    'roles' => array(
      0 => 'Valgsekretær',
      1 => 'administrator',
    ),
    'module' => 'role_delegation',
  );

  // Exported permission: assign all roles.
  $permissions['assign all roles'] = array(
    'name' => 'assign all roles',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'role_delegation',
  );

  // Exported permission: block IP addresses.
  $permissions['block IP addresses'] = array(
    'name' => 'block IP addresses',
    'roles' => array(
      0 => 'Valgsekretær',
      1 => 'administrator',
    ),
    'module' => 'system',
  );

  // Exported permission: bypass node access.
  $permissions['bypass node access'] = array(
    'name' => 'bypass node access',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: bypass rules access.
  $permissions['bypass rules access'] = array(
    'name' => 'bypass rules access',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'rules',
  );

  // Exported permission: cancel account.
  $permissions['cancel account'] = array(
    'name' => 'cancel account',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'user',
  );

  // Exported permission: change own username.
  $permissions['change own username'] = array(
    'name' => 'change own username',
    'roles' => array(
      0 => 'Valgsekretær',
      1 => 'administrator',
    ),
    'module' => 'user',
  );

  // Exported permission: create absentee_ballot content.
  $permissions['create absentee_ballot content'] = array(
    'name' => 'create absentee_ballot content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: create article content.
  $permissions['create article content'] = array(
    'name' => 'create article content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: create constituency content.
  $permissions['create constituency content'] = array(
    'name' => 'create constituency content',
    'roles' => array(
      0 => 'Valgsekretær',
      1 => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: create election content.
  $permissions['create election content'] = array(
    'name' => 'create election content',
    'roles' => array(
      0 => 'Valgsekretær',
      1 => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: create email content.
  $permissions['create email content'] = array(
    'name' => 'create email content',
    'roles' => array(
      0 => 'Valgsekretær',
      1 => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: create messages.
  $permissions['create messages'] = array(
    'name' => 'create messages',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'message',
  );

  // Exported permission: create page content.
  $permissions['create page content'] = array(
    'name' => 'create page content',
    'roles' => array(
      0 => 'Valgsekretær',
      1 => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: create panel content.
  $permissions['create panel content'] = array(
    'name' => 'create panel content',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: create panel-nodes.
  $permissions['create panel-nodes'] = array(
    'name' => 'create panel-nodes',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'panels_node',
  );

  // Exported permission: create polling_station content.
  $permissions['create polling_station content'] = array(
    'name' => 'create polling_station content',
    'roles' => array(
      0 => 'Valgsekretær',
      1 => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: create roles content.
  $permissions['create roles content'] = array(
    'name' => 'create roles content',
    'roles' => array(
      0 => 'Valgsekretær',
      1 => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: create url aliases.
  $permissions['create url aliases'] = array(
    'name' => 'create url aliases',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'path',
  );

  // Exported permission: create volunteers content.
  $permissions['create volunteers content'] = array(
    'name' => 'create volunteers content',
    'roles' => array(
      0 => 'Partisekretær',
      1 => 'Valgsekretær',
      2 => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: customize ckeditor.
  $permissions['customize ckeditor'] = array(
    'name' => 'customize ckeditor',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'ckeditor',
  );

  // Exported permission: customize shortcut links.
  $permissions['customize shortcut links'] = array(
    'name' => 'customize shortcut links',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'shortcut',
  );

  // Exported permission: delete any absentee_ballot content.
  $permissions['delete any absentee_ballot content'] = array(
    'name' => 'delete any absentee_ballot content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: delete any article content.
  $permissions['delete any article content'] = array(
    'name' => 'delete any article content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: delete any constituency content.
  $permissions['delete any constituency content'] = array(
    'name' => 'delete any constituency content',
    'roles' => array(
      0 => 'Valgsekretær',
      1 => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: delete any election content.
  $permissions['delete any election content'] = array(
    'name' => 'delete any election content',
    'roles' => array(
      0 => 'Valgsekretær',
      1 => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: delete any email content.
  $permissions['delete any email content'] = array(
    'name' => 'delete any email content',
    'roles' => array(
      0 => 'Valgsekretær',
    ),
    'module' => 'node',
  );

  // Exported permission: delete any page content.
  $permissions['delete any page content'] = array(
    'name' => 'delete any page content',
    'roles' => array(
      0 => 'Valgsekretær',
      1 => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: delete any panel content.
  $permissions['delete any panel content'] = array(
    'name' => 'delete any panel content',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: delete any panel-nodes.
  $permissions['delete any panel-nodes'] = array(
    'name' => 'delete any panel-nodes',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'panels_node',
  );

  // Exported permission: delete any polling_station content.
  $permissions['delete any polling_station content'] = array(
    'name' => 'delete any polling_station content',
    'roles' => array(
      0 => 'Valgsekretær',
      1 => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: delete any roles content.
  $permissions['delete any roles content'] = array(
    'name' => 'delete any roles content',
    'roles' => array(
      0 => 'Valgsekretær',
      1 => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: delete any volunteers content.
  $permissions['delete any volunteers content'] = array(
    'name' => 'delete any volunteers content',
    'roles' => array(
      0 => 'Partisekretær',
      1 => 'Valgsekretær',
      2 => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: delete backup files.
  $permissions['delete backup files'] = array(
    'name' => 'delete backup files',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'backup_migrate',
  );

  // Exported permission: delete own absentee_ballot content.
  $permissions['delete own absentee_ballot content'] = array(
    'name' => 'delete own absentee_ballot content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: delete own article content.
  $permissions['delete own article content'] = array(
    'name' => 'delete own article content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: delete own constituency content.
  $permissions['delete own constituency content'] = array(
    'name' => 'delete own constituency content',
    'roles' => array(
      0 => 'Valgsekretær',
      1 => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: delete own election content.
  $permissions['delete own election content'] = array(
    'name' => 'delete own election content',
    'roles' => array(
      0 => 'Valgsekretær',
      1 => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: delete own email content.
  $permissions['delete own email content'] = array(
    'name' => 'delete own email content',
    'roles' => array(
      0 => 'Valgsekretær',
      1 => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: delete own page content.
  $permissions['delete own page content'] = array(
    'name' => 'delete own page content',
    'roles' => array(
      0 => 'Valgsekretær',
      1 => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: delete own panel content.
  $permissions['delete own panel content'] = array(
    'name' => 'delete own panel content',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: delete own panel-nodes.
  $permissions['delete own panel-nodes'] = array(
    'name' => 'delete own panel-nodes',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'panels_node',
  );

  // Exported permission: delete own polling_station content.
  $permissions['delete own polling_station content'] = array(
    'name' => 'delete own polling_station content',
    'roles' => array(
      0 => 'Valgsekretær',
      1 => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: delete own roles content.
  $permissions['delete own roles content'] = array(
    'name' => 'delete own roles content',
    'roles' => array(
      0 => 'Valgsekretær',
      1 => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: delete own volunteers content.
  $permissions['delete own volunteers content'] = array(
    'name' => 'delete own volunteers content',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: delete revisions.
  $permissions['delete revisions'] = array(
    'name' => 'delete revisions',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: delete terms in 1.
  $permissions['delete terms in 1'] = array(
    'name' => 'delete terms in 1',
    'roles' => array(
      0 => 'Valgsekretær',
      1 => 'administrator',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: delete terms in 2.
  $permissions['delete terms in 2'] = array(
    'name' => 'delete terms in 2',
    'roles' => array(
      0 => 'Valgsekretær',
      1 => 'administrator',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: delete terms in 4.
  $permissions['delete terms in 4'] = array(
    'name' => 'delete terms in 4',
    'roles' => array(
      0 => 'Valgsekretær',
      1 => 'administrator',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: edit any absentee_ballot content.
  $permissions['edit any absentee_ballot content'] = array(
    'name' => 'edit any absentee_ballot content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: edit any article content.
  $permissions['edit any article content'] = array(
    'name' => 'edit any article content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: edit any constituency content.
  $permissions['edit any constituency content'] = array(
    'name' => 'edit any constituency content',
    'roles' => array(
      0 => 'Valgsekretær',
      1 => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: edit any election content.
  $permissions['edit any election content'] = array(
    'name' => 'edit any election content',
    'roles' => array(
      0 => 'Valgsekretær',
      1 => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: edit any email content.
  $permissions['edit any email content'] = array(
    'name' => 'edit any email content',
    'roles' => array(
      0 => 'Valgsekretær',
      1 => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: edit any page content.
  $permissions['edit any page content'] = array(
    'name' => 'edit any page content',
    'roles' => array(
      0 => 'Valgsekretær',
      1 => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: edit any panel content.
  $permissions['edit any panel content'] = array(
    'name' => 'edit any panel content',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: edit any panel-nodes.
  $permissions['edit any panel-nodes'] = array(
    'name' => 'edit any panel-nodes',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'panels_node',
  );

  // Exported permission: edit any polling_station content.
  $permissions['edit any polling_station content'] = array(
    'name' => 'edit any polling_station content',
    'roles' => array(
      0 => 'Valgsekretær',
      1 => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: edit any roles content.
  $permissions['edit any roles content'] = array(
    'name' => 'edit any roles content',
    'roles' => array(
      0 => 'Valgsekretær',
      1 => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: edit any volunteers content.
  $permissions['edit any volunteers content'] = array(
    'name' => 'edit any volunteers content',
    'roles' => array(
      0 => 'Partisekretær',
      1 => 'Valgsekretær',
      2 => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: edit own absentee_ballot content.
  $permissions['edit own absentee_ballot content'] = array(
    'name' => 'edit own absentee_ballot content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: edit own article content.
  $permissions['edit own article content'] = array(
    'name' => 'edit own article content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: edit own comments.
  $permissions['edit own comments'] = array(
    'name' => 'edit own comments',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'comment',
  );

  // Exported permission: edit own constituency content.
  $permissions['edit own constituency content'] = array(
    'name' => 'edit own constituency content',
    'roles' => array(
      0 => 'Valgsekretær',
      1 => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: edit own election content.
  $permissions['edit own election content'] = array(
    'name' => 'edit own election content',
    'roles' => array(
      0 => 'Valgsekretær',
      1 => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: edit own email content.
  $permissions['edit own email content'] = array(
    'name' => 'edit own email content',
    'roles' => array(
      0 => 'Valgsekretær',
      1 => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: edit own page content.
  $permissions['edit own page content'] = array(
    'name' => 'edit own page content',
    'roles' => array(
      0 => 'Valgsekretær',
      1 => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: edit own panel content.
  $permissions['edit own panel content'] = array(
    'name' => 'edit own panel content',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: edit own panel-nodes.
  $permissions['edit own panel-nodes'] = array(
    'name' => 'edit own panel-nodes',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'panels_node',
  );

  // Exported permission: edit own polling_station content.
  $permissions['edit own polling_station content'] = array(
    'name' => 'edit own polling_station content',
    'roles' => array(
      0 => 'Valgsekretær',
      1 => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: edit own roles content.
  $permissions['edit own roles content'] = array(
    'name' => 'edit own roles content',
    'roles' => array(
      0 => 'Valgsekretær',
      1 => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: edit own volunteers content.
  $permissions['edit own volunteers content'] = array(
    'name' => 'edit own volunteers content',
    'roles' => array(
      0 => 'Valgsekretær',
      1 => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: edit terms in 1.
  $permissions['edit terms in 1'] = array(
    'name' => 'edit terms in 1',
    'roles' => array(
      0 => 'Valgsekretær',
      1 => 'administrator',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: edit terms in 2.
  $permissions['edit terms in 2'] = array(
    'name' => 'edit terms in 2',
    'roles' => array(
      0 => 'Valgsekretær',
      1 => 'administrator',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: edit terms in 3.
  $permissions['edit terms in 3'] = array(
    'name' => 'edit terms in 3',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: edit terms in 4.
  $permissions['edit terms in 4'] = array(
    'name' => 'edit terms in 4',
    'roles' => array(
      0 => 'Valgsekretær',
      1 => 'administrator',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: export nodes.
  $permissions['export nodes'] = array(
    'name' => 'export nodes',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'node_export',
  );

  // Exported permission: export own nodes.
  $permissions['export own nodes'] = array(
    'name' => 'export own nodes',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'node_export',
  );

  // Exported permission: manage features.
  $permissions['manage features'] = array(
    'name' => 'manage features',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'features',
  );

  // Exported permission: perform backup.
  $permissions['perform backup'] = array(
    'name' => 'perform backup',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'backup_migrate',
  );

  // Exported permission: post comments.
  $permissions['post comments'] = array(
    'name' => 'post comments',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'comment',
  );

  // Exported permission: restore from backup.
  $permissions['restore from backup'] = array(
    'name' => 'restore from backup',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'backup_migrate',
  );

  // Exported permission: revert revisions.
  $permissions['revert revisions'] = array(
    'name' => 'revert revisions',
    'roles' => array(
      0 => 'Valgsekretær',
      1 => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: search content.
  $permissions['search content'] = array(
    'name' => 'search content',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'search',
  );

  // Exported permission: select account cancellation method.
  $permissions['select account cancellation method'] = array(
    'name' => 'select account cancellation method',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'user',
  );

  // Exported permission: skip comment approval.
  $permissions['skip comment approval'] = array(
    'name' => 'skip comment approval',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'comment',
  );

  // Exported permission: switch shortcut sets.
  $permissions['switch shortcut sets'] = array(
    'name' => 'switch shortcut sets',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'shortcut',
  );

  // Exported permission: translate interface.
  $permissions['translate interface'] = array(
    'name' => 'translate interface',
    'roles' => array(
      0 => 'Valgsekretær',
      1 => 'administrator',
    ),
    'module' => 'locale',
  );

  // Exported permission: use PHP to import nodes.
  $permissions['use PHP to import nodes'] = array(
    'name' => 'use PHP to import nodes',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'node_export',
  );

  // Exported permission: use advanced search.
  $permissions['use advanced search'] = array(
    'name' => 'use advanced search',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'search',
  );

  // Exported permission: use bulk exporter.
  $permissions['use bulk exporter'] = array(
    'name' => 'use bulk exporter',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'bulk_export',
  );

  // Exported permission: use page manager.
  $permissions['use page manager'] = array(
    'name' => 'use page manager',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'page_manager',
  );

  // Exported permission: use panels caching features.
  $permissions['use panels caching features'] = array(
    'name' => 'use panels caching features',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'panels',
  );

  // Exported permission: use panels dashboard.
  $permissions['use panels dashboard'] = array(
    'name' => 'use panels dashboard',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'panels',
  );

  // Exported permission: use panels in place editing.
  $permissions['use panels in place editing'] = array(
    'name' => 'use panels in place editing',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'panels',
  );

  // Exported permission: use text format filtered_html.
  $permissions['use text format filtered_html'] = array(
    'name' => 'use text format filtered_html',
    'roles' => array(
      0 => 'administrator',
      1 => 'authenticated user',
    ),
    'module' => 'filter',
  );

  // Exported permission: use text format full_html.
  $permissions['use text format full_html'] = array(
    'name' => 'use text format full_html',
    'roles' => array(
      0 => 'Valgsekretær',
      1 => 'administrator',
    ),
    'module' => 'filter',
  );

  // Exported permission: view own unpublished content.
  $permissions['view own unpublished content'] = array(
    'name' => 'view own unpublished content',
    'roles' => array(
      0 => 'Valgsekretær',
      1 => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: view pane admin links.
  $permissions['view pane admin links'] = array(
    'name' => 'view pane admin links',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'panels',
  );

  // Exported permission: view revisions.
  $permissions['view revisions'] = array(
    'name' => 'view revisions',
    'roles' => array(
      0 => 'Valgsekretær',
      1 => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: view the administration theme.
  $permissions['view the administration theme'] = array(
    'name' => 'view the administration theme',
    'roles' => array(
      0 => 'Valgsekretær',
      1 => 'administrator',
    ),
    'module' => 'system',
  );

  // Exported permission: volunteers rsvp.
  $permissions['volunteers rsvp'] = array(
    'name' => 'volunteers rsvp',
    'roles' => array(
      0 => 'Valgsekretær',
      1 => 'administrator',
      2 => 'anonymous user',
      3 => 'authenticated user',
    ),
    'module' => 'valhalla_volunteers',
  );

  return $permissions;
}
