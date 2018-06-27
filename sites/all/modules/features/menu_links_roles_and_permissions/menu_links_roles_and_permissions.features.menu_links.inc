<?php
/**
 * @file
 * menu_links_roles_and_permissions.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function menu_links_roles_and_permissions_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: main-menu_add-path-to-fitness:node/add/path-to-fitness.
  $menu_links['main-menu_add-path-to-fitness:node/add/path-to-fitness'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/add/path-to-fitness',
    'router_path' => 'node/add/path-to-fitness',
    'link_title' => 'Add Path to Fitness',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'alter' => TRUE,
      'identifier' => 'main-menu_add-path-to-fitness:node/add/path-to-fitness',
    ),
    'module' => 'menu',
    'hidden' => 1,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -47,
    'customized' => 1,
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Add Path to Fitness');

  return $menu_links;
}
