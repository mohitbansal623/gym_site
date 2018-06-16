<?php
/**
 * @file
 * menu_links_roles_and_permissions.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function menu_links_roles_and_permissions_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'create goals content'.
  $permissions['create goals content'] = array(
    'name' => 'create goals content',
    'roles' => array(
      'administrator' => 'administrator',
      'client' => 'client',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create path_to_fitness content'.
  $permissions['create path_to_fitness content'] = array(
    'name' => 'create path_to_fitness content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own goals content'.
  $permissions['edit own goals content'] = array(
    'name' => 'edit own goals content',
    'roles' => array(
      'administrator' => 'administrator',
      'client' => 'client',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own path_to_fitness content'.
  $permissions['edit own path_to_fitness content'] = array(
    'name' => 'edit own path_to_fitness content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  return $permissions;
}
