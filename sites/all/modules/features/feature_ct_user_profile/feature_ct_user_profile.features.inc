<?php
/**
 * @file
 * feature_ct_user_profile.features.inc
 */

/**
 * Implements hook_node_info().
 */
function feature_ct_user_profile_node_info() {
  $items = array(
    'user_profile' => array(
      'name' => t('User Profile'),
      'base' => 'node_content',
      'description' => t('This will contain user basic information'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
