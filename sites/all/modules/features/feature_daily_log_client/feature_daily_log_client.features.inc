<?php
/**
 * @file
 * feature_daily_log_client.features.inc
 */

/**
 * Implements hook_node_info().
 */
function feature_daily_log_client_node_info() {
  $items = array(
    'daily_log' => array(
      'name' => t('Daily Log'),
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
