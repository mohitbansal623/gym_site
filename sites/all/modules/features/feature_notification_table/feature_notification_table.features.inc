<?php
/**
 * @file
 * feature_notification_table.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function feature_notification_table_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "data" && $api == "data_default") {
    return array("version" => "1");
  }
}
