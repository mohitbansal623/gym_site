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

  // Exported menu link: main-menu_add-goal:node/add/goals.
  $menu_links['main-menu_add-goal:node/add/goals'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/add/goals',
    'router_path' => 'node/add/goals',
    'link_title' => 'Add Goal',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'alter' => TRUE,
      'identifier' => 'main-menu_add-goal:node/add/goals',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -48,
    'customized' => 1,
  );
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
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -47,
    'customized' => 1,
  );
  // Exported menu link: main-menu_home:<front>.
  $menu_links['main-menu_home:<front>'] = array(
    'menu_name' => 'main-menu',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => 'Home',
    'options' => array(
      'identifier' => 'main-menu_home:<front>',
      'alter' => TRUE,
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 1,
  );
  // Exported menu link: main-menu_register-coach-client:register.
  $menu_links['main-menu_register-coach-client:register'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'register',
    'router_path' => 'register',
    'link_title' => 'Register Coach/ Client',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'alter' => TRUE,
      'identifier' => 'main-menu_register-coach-client:register',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -49,
    'customized' => 1,
  );
  // Exported menu link: user-menu_log-in:user/login.
  $menu_links['user-menu_log-in:user/login'] = array(
    'menu_name' => 'user-menu',
    'link_path' => 'user/login',
    'router_path' => 'user/login',
    'link_title' => 'Log in',
    'options' => array(
      'alter' => TRUE,
      'identifier' => 'user-menu_log-in:user/login',
    ),
    'module' => 'system',
    'hidden' => -1,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Add Goal');
  t('Add Path to Fitness');
  t('Home');
  t('Log in');
  t('Register Coach/ Client');

  return $menu_links;
}
