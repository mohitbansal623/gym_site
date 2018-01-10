<?php
/**
 * @file
 * feature_client_dashboard_context.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function feature_client_dashboard_context_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'client_dashboard';
  $context->description = '';
  $context->tag = 'gym';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'client/dashboard' => 'client/dashboard',
      ),
    ),
  );
  $context->reactions = array();
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('gym');
  $export['client_dashboard'] = $context;

  return $export;
}
