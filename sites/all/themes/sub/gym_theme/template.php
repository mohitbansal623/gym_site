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
  $fullpage_lib = libraries_get_path('fullpage.js');

  if (drupal_is_front_page()) {
    // drupal_add_js($slick_lib .'/slick/slick.min.js');
    // drupal_add_css($slick_lib .'/slick/slick.css');
    // drupal_add_css($slick_lib .'/slick/slick-theme.css');
    drupal_add_js($theme_path . '/js/home.js');
    drupal_add_css($theme_path . '/css/home.css');
  }
}

/**
 * Implements hook_preprocess_node().
 */
function gym_theme_preprocess_node(&$variables) {
  $theme_path = drupal_get_path('theme', 'gym_theme');
}
