<?php
/**
 * @file
 * feature_ct_path_to_fitness.features.inc
 */

/**
 * Implements hook_node_info().
 */
function feature_ct_path_to_fitness_node_info() {
  $items = array(
    'path_to_fitness' => array(
      'name' => t('Path to Fitness'),
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
