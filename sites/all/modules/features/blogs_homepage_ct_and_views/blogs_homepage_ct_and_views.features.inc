<?php
/**
 * @file
 * blogs_homepage_ct_and_views.features.inc
 */

/**
 * Implements hook_views_api().
 */
function blogs_homepage_ct_and_views_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function blogs_homepage_ct_and_views_node_info() {
  $items = array(
    'blogs' => array(
      'name' => t('Blogs'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
