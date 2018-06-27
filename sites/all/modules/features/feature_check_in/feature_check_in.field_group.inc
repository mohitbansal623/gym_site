<?php
/**
 * @file
 * feature_check_in.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function feature_check_in_field_group_info() {
  $field_groups = array();

  $field_group = new stdClass();
  $field_group->disabled = TRUE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_body_composition|node|check_in|form';
  $field_group->group_name = 'group_body_composition';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'check_in';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Body Composition',
    'weight' => '3',
    'children' => array(
      0 => 'field_bodyweight',
      1 => 'field_percent_bodyfat',
      2 => 'field_bodyfat_kg',
      3 => 'field_muscle_mass',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-body-composition field-group-fieldset',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $field_groups['group_body_composition|node|check_in|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_circumference_measures|node|check_in|form';
  $field_group->group_name = 'group_circumference_measures';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'check_in';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Circumference Measures',
    'weight' => '5',
    'children' => array(
      0 => 'field_chest_cm',
      1 => 'field_hips_cm',
      2 => 'field_left_arm_cm',
      3 => 'field_left_calf_cm',
      4 => 'field_left_leg_cm',
      5 => 'field_neck_cm',
      6 => 'field_right_arm_cm',
      7 => 'field_right_calf_cm',
      8 => 'field_right_leg_cm',
      9 => 'field_total_cm',
      10 => 'field_waist_cm',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-circumference-measures field-group-fieldset',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $field_groups['group_circumference_measures|node|check_in|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = TRUE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_performance_report|node|check_in|form';
  $field_group->group_name = 'group_performance_report';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'check_in';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Performance Report',
    'weight' => '7',
    'children' => array(
      0 => 'field_personal_records',
      1 => 'field_training_sessions_complete',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-performance-report field-group-fieldset',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $field_groups['group_performance_report|node|check_in|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_progress_photo|node|check_in|form';
  $field_group->group_name = 'group_progress_photo';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'check_in';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Progress Photo',
    'weight' => '7',
    'children' => array(
      0 => 'field_progress_picture_back',
      1 => 'field_progress_picture_front',
      2 => 'field_progress_picture_side',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-progress-photo field-group-fieldset',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $field_groups['group_progress_photo|node|check_in|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_skinfolds|node|check_in|form';
  $field_group->group_name = 'group_skinfolds';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'check_in';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Skinfolds',
    'weight' => '6',
    'children' => array(
      0 => 'field_abdominal_mm',
      1 => 'field_subscapular_mm',
      2 => 'field_suprailiac_mm',
      3 => 'field_thigh_mm',
      4 => 'field_total_calipers',
      5 => 'field_tricep_mm',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-skinfolds field-group-fieldset',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $field_groups['group_skinfolds|node|check_in|form'] = $field_group;

  // Translatables
  // Included for use with string extractors like potx.
  t('Body Composition');
  t('Circumference Measures');
  t('Performance Report');
  t('Progress Photo');
  t('Skinfolds');

  return $field_groups;
}
