<?php
/**
 * @file
 * The primary PHP file for this theme.
 */


/**
 * Implements hook_preprocess_page().
 */
function gym_theme_preprocess_page(&$vars, $hook) {
  $path = current_path();
  $alias = drupal_get_path_alias($path);
  $theme_path = drupal_get_path('theme', 'gym_theme');
  $slick_lib = libraries_get_path('slick');
  drupal_add_js($slick_lib .'/slick/slick.min.js');
  drupal_add_css($slick_lib .'/slick/slick.css');
  drupal_add_css($slick_lib .'/slick/slick-theme.css');
  drupal_add_css($theme_path . '/css/home.css');

  if (drupal_is_front_page()) {
    drupal_add_js($theme_path . '/js/wow.min.js');
    drupal_add_js("new WOW().init()", 'inline');
    drupal_add_css($theme_path . '/css/animate.css');
    drupal_add_js($theme_path . '/js/home.js');
    drupal_add_css($theme_path . '/css/home.css');
  }

  $alias = drupal_get_path_alias();
  $pattern = 'dashboard/*';
  if (drupal_match_path($path, $pattern)) {
    drupal_add_css($theme_path . '/css/dashboard.css');
  }
  switch ($alias) {
    case 'days-on-plan-leaderboard':
    case 'mass-lost-leaderboard':
      drupal_add_css($theme_path . '/css/dashboard.css');
      break;
  }

  if (isset($vars['node']->type) && $vars['node']->type == 'blogs') {
    // If the content type's machine name is "my_machine_name" the file
    // name will be "page--my-machine-name.tpl.php".
    $vars['theme_hook_suggestions'][] = 'page__blog';
  }
}

/**
 * Implements hook_preprocess_node().
 */
function gym_theme_preprocess_node(&$variables) {
  $theme_path = drupal_get_path('theme', 'gym_theme');
  // if (drupal_get_path_alias("node/{$vars['#node']->nid}")) {
  //   drupal_add_css(drupal_get_path('theme', 'MYTHEME') . "/css/foo.css");
  // }
}
