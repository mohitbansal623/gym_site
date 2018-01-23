<?php
/**
 * @file
 * feature_client_daily_log_view.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function feature_client_daily_log_view_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'client_daily_log';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Client Daily Log';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Client Daily Log';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'field_check_in_date' => 'field_check_in_date',
    'field_meal_1' => 'field_meal_1',
    'field_meal_1_diet' => 'field_meal_1_diet',
    'field_meal_2' => 'field_meal_2',
    'field_meal_2_diet' => 'field_meal_2_diet',
    'field_meal_3' => 'field_meal_3',
    'field_meal_3_diet' => 'field_meal_3_diet',
    'field_snacks' => 'field_snacks',
    'field_snacks_diet' => 'field_snacks_diet',
    'field_was_today_on_plan' => 'field_was_today_on_plan',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'field_check_in_date' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_meal_1' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_meal_1_diet' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_meal_2' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_meal_2_diet' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_meal_3' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_meal_3_diet' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_snacks' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_snacks_diet' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_was_today_on_plan' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* Field: Content: Log In */
  $handler->display->display_options['fields']['field_check_in_date']['id'] = 'field_check_in_date';
  $handler->display->display_options['fields']['field_check_in_date']['table'] = 'field_data_field_check_in_date';
  $handler->display->display_options['fields']['field_check_in_date']['field'] = 'field_check_in_date';
  $handler->display->display_options['fields']['field_check_in_date']['settings'] = array(
    'format_type' => 'long',
    'custom_date_format' => '',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_remaining_days' => 0,
  );
  /* Field: Content: Meal 1 Diet */
  $handler->display->display_options['fields']['field_meal_1_diet']['id'] = 'field_meal_1_diet';
  $handler->display->display_options['fields']['field_meal_1_diet']['table'] = 'field_data_field_meal_1_diet';
  $handler->display->display_options['fields']['field_meal_1_diet']['field'] = 'field_meal_1_diet';
  /* Field: Content: Meal 1 */
  $handler->display->display_options['fields']['field_meal_1']['id'] = 'field_meal_1';
  $handler->display->display_options['fields']['field_meal_1']['table'] = 'field_data_field_meal_1';
  $handler->display->display_options['fields']['field_meal_1']['field'] = 'field_meal_1';
  $handler->display->display_options['fields']['field_meal_1']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_meal_1']['settings'] = array(
    'image_style' => 'medium',
    'image_link' => '',
  );
  /* Field: Content: Meal 2 Diet */
  $handler->display->display_options['fields']['field_meal_2_diet']['id'] = 'field_meal_2_diet';
  $handler->display->display_options['fields']['field_meal_2_diet']['table'] = 'field_data_field_meal_2_diet';
  $handler->display->display_options['fields']['field_meal_2_diet']['field'] = 'field_meal_2_diet';
  /* Field: Content: Meal 2 */
  $handler->display->display_options['fields']['field_meal_2']['id'] = 'field_meal_2';
  $handler->display->display_options['fields']['field_meal_2']['table'] = 'field_data_field_meal_2';
  $handler->display->display_options['fields']['field_meal_2']['field'] = 'field_meal_2';
  $handler->display->display_options['fields']['field_meal_2']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_meal_2']['settings'] = array(
    'image_style' => 'medium',
    'image_link' => '',
  );
  /* Field: Content: Meal 3 Diet */
  $handler->display->display_options['fields']['field_meal_3_diet']['id'] = 'field_meal_3_diet';
  $handler->display->display_options['fields']['field_meal_3_diet']['table'] = 'field_data_field_meal_3_diet';
  $handler->display->display_options['fields']['field_meal_3_diet']['field'] = 'field_meal_3_diet';
  /* Field: Content: Meal 3 */
  $handler->display->display_options['fields']['field_meal_3']['id'] = 'field_meal_3';
  $handler->display->display_options['fields']['field_meal_3']['table'] = 'field_data_field_meal_3';
  $handler->display->display_options['fields']['field_meal_3']['field'] = 'field_meal_3';
  $handler->display->display_options['fields']['field_meal_3']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_meal_3']['settings'] = array(
    'image_style' => 'medium',
    'image_link' => '',
  );
  /* Field: Content: Snacks Diet */
  $handler->display->display_options['fields']['field_snacks_diet']['id'] = 'field_snacks_diet';
  $handler->display->display_options['fields']['field_snacks_diet']['table'] = 'field_data_field_snacks_diet';
  $handler->display->display_options['fields']['field_snacks_diet']['field'] = 'field_snacks_diet';
  /* Field: Content: Snacks */
  $handler->display->display_options['fields']['field_snacks']['id'] = 'field_snacks';
  $handler->display->display_options['fields']['field_snacks']['table'] = 'field_data_field_snacks';
  $handler->display->display_options['fields']['field_snacks']['field'] = 'field_snacks';
  $handler->display->display_options['fields']['field_snacks']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_snacks']['settings'] = array(
    'image_style' => 'medium',
    'image_link' => '',
  );
  /* Field: Content: Was Today on Plan */
  $handler->display->display_options['fields']['field_was_today_on_plan']['id'] = 'field_was_today_on_plan';
  $handler->display->display_options['fields']['field_was_today_on_plan']['table'] = 'field_data_field_was_today_on_plan';
  $handler->display->display_options['fields']['field_was_today_on_plan']['field'] = 'field_was_today_on_plan';
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Contextual filter: Content: Author uid */
  $handler->display->display_options['arguments']['uid']['id'] = 'uid';
  $handler->display->display_options['arguments']['uid']['table'] = 'node';
  $handler->display->display_options['arguments']['uid']['field'] = 'uid';
  $handler->display->display_options['arguments']['uid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['uid']['default_argument_type'] = 'user';
  $handler->display->display_options['arguments']['uid']['default_argument_options']['user'] = FALSE;
  $handler->display->display_options['arguments']['uid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['uid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['uid']['summary_options']['items_per_page'] = '25';
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
    'daily_log' => 'daily_log',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'client-daily-log/%';
  $export['client_daily_log'] = $view;

  return $export;
}
