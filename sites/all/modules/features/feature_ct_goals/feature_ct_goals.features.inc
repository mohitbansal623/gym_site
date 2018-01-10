<?php
/**
 * @file
 * feature_ct_goals.features.inc
 */

/**
 * Implements hook_node_info().
 */
function feature_ct_goals_node_info() {
  $items = array(
    'goals' => array(
      'name' => t('Goals'),
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
