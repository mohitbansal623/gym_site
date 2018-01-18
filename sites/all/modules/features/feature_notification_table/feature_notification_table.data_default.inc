<?php
/**
 * @file
 * feature_notification_table.data_default.inc
 */

/**
 * Implements hook_data_default().
 */
function feature_notification_table_data_default() {
  $export = array();

  $data_table = new stdClass();
  $data_table->disabled = FALSE; /* Edit this to true to make a default data_table disabled initially */
  $data_table->api_version = 1;
  $data_table->title = 'Notify Coach';
  $data_table->name = 'notify_coach';
  $data_table->table_schema = array(
    'description' => '',
    'fields' => array(
      'seq_id' => array(
        'type' => 'serial',
        'size' => 'normal',
        'not null' => TRUE,
        'description' => '',
      ),
      'client_id' => array(
        'type' => 'int',
        'size' => 'normal',
        'not null' => FALSE,
        'description' => '',
      ),
      'coach_id' => array(
        'type' => 'int',
        'size' => 'normal',
        'not null' => FALSE,
        'description' => '',
      ),
      'message' => array(
        'type' => 'varchar',
        'size' => 'normal',
        'length' => '255',
        'not null' => FALSE,
        'description' => '',
      ),
      'status' => array(
        'type' => 'int',
        'size' => 'normal',
        'not null' => FALSE,
        'description' => '',
      ),
      'time_stamp' => array(
        'type' => 'int',
        'size' => 'normal',
        'not null' => FALSE,
        'description' => '',
      ),
    ),
    'name' => 'notify_coach',
    'primary key' => array(
      0 => 'seq_id',
    ),
  );
  $data_table->meta = array(
    'fields' => array(
      'seq_id' => array(
        'label' => 'Seq ID',
      ),
      'client_id' => array(
        'label' => 'Client ID',
      ),
      'coach_id' => array(
        'label' => 'Coach ID',
      ),
      'message' => array(
        'label' => 'Message',
      ),
      'status' => array(
        'label' => 'Status',
      ),
      'time_stamp' => array(
        'label' => 'Time Saved',
      ),
    ),
  );
  $export['notify_coach'] = $data_table;

  return $export;
}
