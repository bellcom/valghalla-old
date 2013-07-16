<?php
/**
 * @file
 * valhalla_user_roles.features.user_role.inc
 */

/**
 * Implements hook_user_default_roles().
 */
function valhalla_user_roles_user_default_roles() {
  $roles = array();

  // Exported role: Partisekretær.
  $roles['Partisekretær'] = array(
    'name' => 'Partisekretær',
    'weight' => 3,
  );

  // Exported role: Valgsekretær.
  $roles['Valgsekretær'] = array(
    'name' => 'Valgsekretær',
    'weight' => 7,
  );

  // Exported role: administrator.
  $roles['administrator'] = array(
    'name' => 'administrator',
    'weight' => 2,
  );

  return $roles;
}
