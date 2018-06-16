<?php
/**
 * @file
 * feature_admin_dashboard.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function feature_admin_dashboard_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: main-menu_admin-dashboard:admin-dashboard.
  $menu_links['main-menu_admin-dashboard:admin-dashboard'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'admin-dashboard',
    'router_path' => 'admin-dashboard',
    'link_title' => 'Admin Dashboard',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'alter' => TRUE,
      'identifier' => 'main-menu_admin-dashboard:admin-dashboard',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -46,
    'customized' => 1,
    'parent_identifier' => 'main-menu_path-to-fitness:<front>',
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Admin Dashboard');

  return $menu_links;
}
