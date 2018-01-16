<?php
/**
 * @file
 * feature_view_check_in.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function feature_view_check_in_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'check_in';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'check_in';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'check_in';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: Bodyfat kg */
  $handler->display->display_options['fields']['field_bodyfat_kg']['id'] = 'field_bodyfat_kg';
  $handler->display->display_options['fields']['field_bodyfat_kg']['table'] = 'field_data_field_bodyfat_kg';
  $handler->display->display_options['fields']['field_bodyfat_kg']['field'] = 'field_bodyfat_kg';
  $handler->display->display_options['fields']['field_bodyfat_kg']['settings'] = array(
    'thousand_separator' => '',
    'prefix_suffix' => 1,
  );
  /* Field: Content: Muscle Mass */
  $handler->display->display_options['fields']['field_muscle_mass']['id'] = 'field_muscle_mass';
  $handler->display->display_options['fields']['field_muscle_mass']['table'] = 'field_data_field_muscle_mass';
  $handler->display->display_options['fields']['field_muscle_mass']['field'] = 'field_muscle_mass';
  $handler->display->display_options['fields']['field_muscle_mass']['settings'] = array(
    'thousand_separator' => '',
    'prefix_suffix' => 1,
  );
  /* Field: Content: Percent BodyFat */
  $handler->display->display_options['fields']['field_percent_bodyfat']['id'] = 'field_percent_bodyfat';
  $handler->display->display_options['fields']['field_percent_bodyfat']['table'] = 'field_data_field_percent_bodyfat';
  $handler->display->display_options['fields']['field_percent_bodyfat']['field'] = 'field_percent_bodyfat';
  $handler->display->display_options['fields']['field_percent_bodyfat']['settings'] = array(
    'thousand_separator' => '',
    'prefix_suffix' => 1,
  );
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'check_in' => 'check_in',
  );

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $handler->display->display_options['block_description'] = 'Check IN';
  $export['check_in'] = $view;

  return $export;
}
