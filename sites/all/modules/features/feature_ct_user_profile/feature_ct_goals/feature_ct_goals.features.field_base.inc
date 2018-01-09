<?php
/**
 * @file
 * feature_ct_goals.features.field_base.inc
 */

/**
 * Implements hook_field_default_field_bases().
 */
function feature_ct_goals_field_default_field_bases() {
  $field_bases = array();

  // Exported field_base: 'field_client_id'.
  $field_bases['field_client_id'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_client_id',
    'indexes' => array(
      'field_reference_delta' => array(
        0 => 'delta',
      ),
      'field_reference_entity_id' => array(
        0 => 'entity_id',
      ),
      'field_reference_entity_type' => array(
        0 => 'entity_type',
      ),
      'field_reference_field_key' => array(
        0 => 'field_key',
      ),
      'field_reference_language' => array(
        0 => 'language',
      ),
      'field_reference_revision_id' => array(
        0 => 'revision_id',
      ),
    ),
    'locked' => 0,
    'module' => 'field_reference',
    'settings' => array(
      'allow_general' => 0,
      'append_id' => 0,
      'fields' => array(
        'node' => array(
          'user_profile' => array(
            'field_user_id' => 'field_user_id',
          ),
        ),
      ),
      'granularity' => array(
        'entity' => 1,
        'language' => 0,
        'revision' => 0,
        'value' => 0,
      ),
      'hide_field_locator' => 0,
      'show_value' => 0,
    ),
    'translatable' => 0,
    'type' => 'field_reference',
  );

  // Exported field_base: 'field_coach_id'.
  $field_bases['field_coach_id'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_coach_id',
    'indexes' => array(
      'field_reference_delta' => array(
        0 => 'delta',
      ),
      'field_reference_entity_id' => array(
        0 => 'entity_id',
      ),
      'field_reference_entity_type' => array(
        0 => 'entity_type',
      ),
      'field_reference_field_key' => array(
        0 => 'field_key',
      ),
      'field_reference_language' => array(
        0 => 'language',
      ),
      'field_reference_revision_id' => array(
        0 => 'revision_id',
      ),
    ),
    'locked' => 0,
    'module' => 'field_reference',
    'settings' => array(
      'allow_general' => 0,
      'append_id' => 0,
      'fields' => array(
        'node' => array(
          'user_profile' => array(
            'field_user_id' => 'field_user_id',
          ),
        ),
      ),
      'granularity' => array(
        'entity' => 1,
        'language' => 0,
        'revision' => 0,
        'value' => 0,
      ),
      'hide_field_locator' => 0,
      'show_value' => 0,
    ),
    'translatable' => 0,
    'type' => 'field_reference',
  );

  // Exported field_base: 'field_goal'.
  $field_bases['field_goal'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_goal',
    'indexes' => array(
      'format' => array(
        0 => 'format',
      ),
    ),
    'locked' => 0,
    'module' => 'text',
    'settings' => array(
      'max_length' => 255,
    ),
    'translatable' => 0,
    'type' => 'text',
  );

  // Exported field_base: 'field_inspiration'.
  $field_bases['field_inspiration'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_inspiration',
    'indexes' => array(
      'fid' => array(
        0 => 'fid',
      ),
    ),
    'locked' => 0,
    'module' => 'image',
    'settings' => array(
      'default_image' => 0,
      'uri_scheme' => 'public',
    ),
    'translatable' => 0,
    'type' => 'image',
  );

  // Exported field_base: 'field_motivation'.
  $field_bases['field_motivation'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_motivation',
    'indexes' => array(
      'format' => array(
        0 => 'format',
      ),
    ),
    'locked' => 0,
    'module' => 'text',
    'settings' => array(
      'max_length' => 255,
    ),
    'translatable' => 0,
    'type' => 'text',
  );

  // Exported field_base: 'field_start_date'.
  $field_bases['field_start_date'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_start_date',
    'indexes' => array(),
    'locked' => 0,
    'module' => 'date',
    'settings' => array(
      'cache_count' => 4,
      'cache_enabled' => 0,
      'granularity' => array(
        'day' => 'day',
        'hour' => 'hour',
        'minute' => 'minute',
        'month' => 'month',
        'second' => 0,
        'year' => 'year',
      ),
      'timezone_db' => 'UTC',
      'todate' => 'required',
      'tz_handling' => 'site',
    ),
    'translatable' => 0,
    'type' => 'datetime',
  );

  return $field_bases;
}
