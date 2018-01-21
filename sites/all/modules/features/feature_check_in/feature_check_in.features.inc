<?php
/**
 * @file
 * feature_check_in.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function feature_check_in_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function feature_check_in_node_info() {
  $items = array(
    'check_in' => array(
      'name' => t('Check In'),
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
