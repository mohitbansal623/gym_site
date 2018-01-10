<?php
/**
 * @file
 * feature_ct_path_to_fitness.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function feature_ct_path_to_fitness_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance: 'node-path_to_fitness-field_client_ref'.
  $field_instances['node-path_to_fitness-field_client_ref'] = array(
    'bundle' => 'path_to_fitness',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'entityreference',
        'settings' => array(
          'bypass_access' => FALSE,
          'link' => FALSE,
        ),
        'type' => 'entityreference_label',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_client_ref',
    'label' => 'Client Ref',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 3,
    ),
  );

  // Exported field_instance: 'node-path_to_fitness-field_daily_activity'.
  $field_instances['node-path_to_fitness-field_daily_activity'] = array(
    'bundle' => 'path_to_fitness',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Base activity includes general day to day activity and contributes to most of your fat metabolism.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 6,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_daily_activity',
    'label' => 'Daily Activity',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 1,
    ),
  );

  // Exported field_instance: 'node-path_to_fitness-field_nutrition_protocol'.
  $field_instances['node-path_to_fitness-field_nutrition_protocol'] = array(
    'bundle' => 'path_to_fitness',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 4,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_nutrition_protocol',
    'label' => 'Nutrition Protocol',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => -1,
    ),
  );

  // Exported field_instance: 'node-path_to_fitness-field_re_feeds'.
  $field_instances['node-path_to_fitness-field_re_feeds'] = array(
    'bundle' => 'path_to_fitness',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'The learner you are, the most frequent these are to be taken',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 5,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_re_feeds',
    'label' => 'Re-Feeds',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 0,
    ),
  );

  // Exported field_instance: 'node-path_to_fitness-field_recovery'.
  $field_instances['node-path_to_fitness-field_recovery'] = array(
    'bundle' => 'path_to_fitness',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'For every 3 training sessions, 1 recovery session per week is recommended.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 3,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_recovery',
    'label' => 'Recovery',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => -2,
    ),
  );

  // Exported field_instance: 'node-path_to_fitness-field_speciality_sessions'.
  $field_instances['node-path_to_fitness-field_speciality_sessions'] = array(
    'bundle' => 'path_to_fitness',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'For kinesiology imbalances it is recommend one of your training sessions/week comes from rehab',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 2,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_speciality_sessions',
    'label' => 'Speciality Sessions (rehab/skill focus)',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => -3,
    ),
  );

  // Exported field_instance:
  // 'node-path_to_fitness-field_total_training_sessions'.
  $field_instances['node-path_to_fitness-field_total_training_sessions'] = array(
    'bundle' => 'path_to_fitness',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 1,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_total_training_sessions',
    'label' => 'Total training sessions per Month',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => -4,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Base activity includes general day to day activity and contributes to most of your fat metabolism.');
  t('Client Ref');
  t('Daily Activity');
  t('For every 3 training sessions, 1 recovery session per week is recommended.');
  t('For kinesiology imbalances it is recommend one of your training sessions/week comes from rehab');
  t('Nutrition Protocol');
  t('Re-Feeds');
  t('Recovery');
  t('Speciality Sessions (rehab/skill focus)');
  t('The learner you are, the most frequent these are to be taken');
  t('Total training sessions per Month');

  return $field_instances;
}
