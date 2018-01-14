<?php
/**
 * @file
 * menu_links_roles_and_permissions.features.user_role.inc
 */

/**
 * Implements hook_user_default_roles().
 */
function menu_links_roles_and_permissions_user_default_roles() {
  $roles = array();

  // Exported role: admin.
  $roles['admin'] = array(
    'name' => 'admin',
    'weight' => 3,
  );

  // Exported role: client.
  $roles['client'] = array(
    'name' => 'client',
    'weight' => 5,
  );

  // Exported role: coach.
  $roles['coach'] = array(
    'name' => 'coach',
    'weight' => 4,
  );

  return $roles;
}
