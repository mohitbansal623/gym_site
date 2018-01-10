<?php
/**
 * @file
 * feature_client_dashboard_context.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function feature_client_dashboard_context_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "context" && $api == "context") {
    return array("version" => "3");
  }
}
