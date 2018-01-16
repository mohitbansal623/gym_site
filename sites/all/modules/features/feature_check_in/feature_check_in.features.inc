<?php
/**
 * @file
 * feature_check_in.features.inc
 */

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
