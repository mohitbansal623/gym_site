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
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = 'No Daily log for this day.';
  $handler->display->display_options['empty']['area']['format'] = 'filtered_html';
  /* Field: Content: Date */
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
  /* Field: Content: Small Meal */
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
  /* Field: Broken/missing handler */
  $handler->display->display_options['fields']['field_meal_2_diet']['id'] = 'field_meal_2_diet';
  $handler->display->display_options['fields']['field_meal_2_diet']['table'] = 'field_data_field_meal_2_diet';
  $handler->display->display_options['fields']['field_meal_2_diet']['field'] = 'field_meal_2_diet';
  /* Field: Broken/missing handler */
  $handler->display->display_options['fields']['field_meal_2']['id'] = 'field_meal_2';
  $handler->display->display_options['fields']['field_meal_2']['table'] = 'field_data_field_meal_2';
  $handler->display->display_options['fields']['field_meal_2']['field'] = 'field_meal_2';
  /* Field: Content: Large Meal */
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
  /* Field: Broken/missing handler */
  $handler->display->display_options['fields']['field_snacks_diet']['id'] = 'field_snacks_diet';
  $handler->display->display_options['fields']['field_snacks_diet']['table'] = 'field_data_field_snacks_diet';
  $handler->display->display_options['fields']['field_snacks_diet']['field'] = 'field_snacks_diet';
  /* Field: Broken/missing handler */
  $handler->display->display_options['fields']['field_snacks']['id'] = 'field_snacks';
  $handler->display->display_options['fields']['field_snacks']['table'] = 'field_data_field_snacks';
  $handler->display->display_options['fields']['field_snacks']['field'] = 'field_snacks';
  /* Field: Broken/missing handler */
  $handler->display->display_options['fields']['field_how_do_you_feel_today_']['id'] = 'field_how_do_you_feel_today_';
  $handler->display->display_options['fields']['field_how_do_you_feel_today_']['table'] = 'field_data_field_how_do_you_feel_today_';
  $handler->display->display_options['fields']['field_how_do_you_feel_today_']['field'] = 'field_how_do_you_feel_today_';
  $handler->display->display_options['fields']['field_how_do_you_feel_today_']['label'] = 'How do you feel today?';
  /* Field: Broken/missing handler */
  $handler->display->display_options['fields']['field_daily_serving_suggestions']['id'] = 'field_daily_serving_suggestions';
  $handler->display->display_options['fields']['field_daily_serving_suggestions']['table'] = 'field_data_field_daily_serving_suggestions';
  $handler->display->display_options['fields']['field_daily_serving_suggestions']['field'] = 'field_daily_serving_suggestions';
  $handler->display->display_options['fields']['field_daily_serving_suggestions']['label'] = 'Daily Serving Suggestions';
  /* Field: Content: Was Today on Plan */
  $handler->display->display_options['fields']['field_was_today_on_plan']['id'] = 'field_was_today_on_plan';
  $handler->display->display_options['fields']['field_was_today_on_plan']['table'] = 'field_data_field_was_today_on_plan';
  $handler->display->display_options['fields']['field_was_today_on_plan']['field'] = 'field_was_today_on_plan';
  /* Field: Content: Delete link */
  $handler->display->display_options['fields']['delete_node']['id'] = 'delete_node';
  $handler->display->display_options['fields']['delete_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['delete_node']['field'] = 'delete_node';
  $handler->display->display_options['fields']['delete_node']['label'] = 'Delete';
  $handler->display->display_options['fields']['delete_node']['text'] = 'Delete';
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
  /* Filter criterion: Date: Date (node) */
  $handler->display->display_options['filters']['date_filter']['id'] = 'date_filter';
  $handler->display->display_options['filters']['date_filter']['table'] = 'node';
  $handler->display->display_options['filters']['date_filter']['field'] = 'date_filter';
  $handler->display->display_options['filters']['date_filter']['operator'] = 'between';
  $handler->display->display_options['filters']['date_filter']['exposed'] = TRUE;
  $handler->display->display_options['filters']['date_filter']['expose']['operator_id'] = 'date_filter_op';
  $handler->display->display_options['filters']['date_filter']['expose']['label'] = 'Date';
  $handler->display->display_options['filters']['date_filter']['expose']['operator'] = 'date_filter_op';
  $handler->display->display_options['filters']['date_filter']['expose']['identifier'] = 'date_filter';
  $handler->display->display_options['filters']['date_filter']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
    6 => 0,
  );
  $handler->display->display_options['filters']['date_filter']['form_type'] = 'date_popup';
  $handler->display->display_options['filters']['date_filter']['date_fields'] = array(
    'node.created' => 'node.created',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'client-daily-log/%';

  /* Display: Data export PDF */
  $handler = $view->new_display('views_data_export_pdf', 'Data export PDF', 'views_data_export_pdf_1');

  /* Display: Data export */
  $handler = $view->new_display('views_data_export', 'Data export', 'views_data_export_1');
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'views_data_export_doc';
  $handler->display->display_options['style_options']['provide_file'] = 1;
  $handler->display->display_options['style_options']['filename'] = 'daily-log-report.doc';
  $handler->display->display_options['style_options']['parent_sort'] = 0;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Date */
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
  /* Field: Content: Small Meal */
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
  /* Field: Broken/missing handler */
  $handler->display->display_options['fields']['field_meal_2_diet']['id'] = 'field_meal_2_diet';
  $handler->display->display_options['fields']['field_meal_2_diet']['table'] = 'field_data_field_meal_2_diet';
  $handler->display->display_options['fields']['field_meal_2_diet']['field'] = 'field_meal_2_diet';
  /* Field: Broken/missing handler */
  $handler->display->display_options['fields']['field_meal_2']['id'] = 'field_meal_2';
  $handler->display->display_options['fields']['field_meal_2']['table'] = 'field_data_field_meal_2';
  $handler->display->display_options['fields']['field_meal_2']['field'] = 'field_meal_2';
  /* Field: Content: Large Meal */
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
  /* Field: Broken/missing handler */
  $handler->display->display_options['fields']['field_snacks_diet']['id'] = 'field_snacks_diet';
  $handler->display->display_options['fields']['field_snacks_diet']['table'] = 'field_data_field_snacks_diet';
  $handler->display->display_options['fields']['field_snacks_diet']['field'] = 'field_snacks_diet';
  /* Field: Broken/missing handler */
  $handler->display->display_options['fields']['field_snacks']['id'] = 'field_snacks';
  $handler->display->display_options['fields']['field_snacks']['table'] = 'field_data_field_snacks';
  $handler->display->display_options['fields']['field_snacks']['field'] = 'field_snacks';
  /* Field: Broken/missing handler */
  $handler->display->display_options['fields']['field_how_do_you_feel_today_']['id'] = 'field_how_do_you_feel_today_';
  $handler->display->display_options['fields']['field_how_do_you_feel_today_']['table'] = 'field_data_field_how_do_you_feel_today_';
  $handler->display->display_options['fields']['field_how_do_you_feel_today_']['field'] = 'field_how_do_you_feel_today_';
  $handler->display->display_options['fields']['field_how_do_you_feel_today_']['label'] = 'How do you feel today?';
  /* Field: Broken/missing handler */
  $handler->display->display_options['fields']['field_daily_serving_suggestions']['id'] = 'field_daily_serving_suggestions';
  $handler->display->display_options['fields']['field_daily_serving_suggestions']['table'] = 'field_data_field_daily_serving_suggestions';
  $handler->display->display_options['fields']['field_daily_serving_suggestions']['field'] = 'field_daily_serving_suggestions';
  $handler->display->display_options['fields']['field_daily_serving_suggestions']['label'] = 'Daily Serving Suggestions';
  /* Field: Content: Was Today on Plan */
  $handler->display->display_options['fields']['field_was_today_on_plan']['id'] = 'field_was_today_on_plan';
  $handler->display->display_options['fields']['field_was_today_on_plan']['table'] = 'field_data_field_was_today_on_plan';
  $handler->display->display_options['fields']['field_was_today_on_plan']['field'] = 'field_was_today_on_plan';
  $handler->display->display_options['path'] = 'sites/default/files/daily-log-report.doc';
  $handler->display->display_options['displays'] = array(
    'page' => 'page',
    'default' => 0,
  );
  $handler->display->display_options['segment_size'] = '100';
  $translatables['client_daily_log'] = array(
    t('Master'),
    t('Client Daily Log'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Items per page'),
    t('- All -'),
    t('Offset'),
    t('« first'),
    t('‹ previous'),
    t('next ›'),
    t('last »'),
    t('No Daily log for this day.'),
    t('Date'),
    t('Small Meal'),
    t('Meal 1'),
    t('Broken handler field_data_field_meal_2_diet.field_meal_2_diet'),
    t('Broken handler field_data_field_meal_2.field_meal_2'),
    t('Large Meal'),
    t('Meal 3'),
    t('Broken handler field_data_field_snacks_diet.field_snacks_diet'),
    t('Broken handler field_data_field_snacks.field_snacks'),
    t('How do you feel today?'),
    t('Daily Serving Suggestions'),
    t('Was Today on Plan'),
    t('Delete'),
    t('All'),
    t('Page'),
    t('Data export PDF'),
    t('Data export'),
  );
  $export['client_daily_log'] = $view;

  return $export;
}
