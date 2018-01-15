<?php
/**
 * @file
 * feature_view_client_goals_and_fitness.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function feature_view_client_goals_and_fitness_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'client_fitness_block';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Client Fitness Block';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Your path to fitness';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Relationship: Content: Author */
  $handler->display->display_options['relationships']['uid']['id'] = 'uid';
  $handler->display->display_options['relationships']['uid']['table'] = 'node';
  $handler->display->display_options['relationships']['uid']['field'] = 'uid';
  /* Field: Content: Total training sessions per Month */
  $handler->display->display_options['fields']['field_total_training_sessions']['id'] = 'field_total_training_sessions';
  $handler->display->display_options['fields']['field_total_training_sessions']['table'] = 'field_data_field_total_training_sessions';
  $handler->display->display_options['fields']['field_total_training_sessions']['field'] = 'field_total_training_sessions';
  $handler->display->display_options['fields']['field_total_training_sessions']['label'] = 'Total training sessions / Month';
  $handler->display->display_options['fields']['field_total_training_sessions']['element_label_colon'] = FALSE;
  /* Field: Content: Speciality Sessions (rehab/skill focus) */
  $handler->display->display_options['fields']['field_speciality_sessions']['id'] = 'field_speciality_sessions';
  $handler->display->display_options['fields']['field_speciality_sessions']['table'] = 'field_data_field_speciality_sessions';
  $handler->display->display_options['fields']['field_speciality_sessions']['field'] = 'field_speciality_sessions';
  $handler->display->display_options['fields']['field_speciality_sessions']['label'] = 'Speciality Sessions';
  $handler->display->display_options['fields']['field_speciality_sessions']['element_label_colon'] = FALSE;
  /* Field: Content: Recovery */
  $handler->display->display_options['fields']['field_recovery']['id'] = 'field_recovery';
  $handler->display->display_options['fields']['field_recovery']['table'] = 'field_data_field_recovery';
  $handler->display->display_options['fields']['field_recovery']['field'] = 'field_recovery';
  $handler->display->display_options['fields']['field_recovery']['label'] = 'Recovery Sessions';
  $handler->display->display_options['fields']['field_recovery']['element_label_colon'] = FALSE;
  /* Field: Content: Nutrition Protocol */
  $handler->display->display_options['fields']['field_nutrition_protocol']['id'] = 'field_nutrition_protocol';
  $handler->display->display_options['fields']['field_nutrition_protocol']['table'] = 'field_data_field_nutrition_protocol';
  $handler->display->display_options['fields']['field_nutrition_protocol']['field'] = 'field_nutrition_protocol';
  $handler->display->display_options['fields']['field_nutrition_protocol']['element_label_colon'] = FALSE;
  /* Field: Content: Re-Feeds */
  $handler->display->display_options['fields']['field_re_feeds']['id'] = 'field_re_feeds';
  $handler->display->display_options['fields']['field_re_feeds']['table'] = 'field_data_field_re_feeds';
  $handler->display->display_options['fields']['field_re_feeds']['field'] = 'field_re_feeds';
  $handler->display->display_options['fields']['field_re_feeds']['element_label_colon'] = FALSE;
  /* Field: Content: Daily Activity */
  $handler->display->display_options['fields']['field_daily_activity']['id'] = 'field_daily_activity';
  $handler->display->display_options['fields']['field_daily_activity']['table'] = 'field_data_field_daily_activity';
  $handler->display->display_options['fields']['field_daily_activity']['field'] = 'field_daily_activity';
  $handler->display->display_options['fields']['field_daily_activity']['element_label_colon'] = FALSE;
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
    'path_to_fitness' => 'path_to_fitness',
  );
  /* Filter criterion: User: Current */
  $handler->display->display_options['filters']['uid_current']['id'] = 'uid_current';
  $handler->display->display_options['filters']['uid_current']['table'] = 'users';
  $handler->display->display_options['filters']['uid_current']['field'] = 'uid_current';
  $handler->display->display_options['filters']['uid_current']['relationship'] = 'uid';
  $handler->display->display_options['filters']['uid_current']['value'] = '1';

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $handler->display->display_options['block_description'] = 'client_fitness';
  $export['client_fitness_block'] = $view;

  $view = new view();
  $view->name = 'client_goal_block';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Client Goal block';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'My dashboard';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Relationship: Content: Author */
  $handler->display->display_options['relationships']['uid']['id'] = 'uid';
  $handler->display->display_options['relationships']['uid']['table'] = 'node';
  $handler->display->display_options['relationships']['uid']['field'] = 'uid';
  $handler->display->display_options['relationships']['uid']['required'] = TRUE;
  /* Field: Content: Goal */
  $handler->display->display_options['fields']['field_goal']['id'] = 'field_goal';
  $handler->display->display_options['fields']['field_goal']['table'] = 'field_data_field_goal';
  $handler->display->display_options['fields']['field_goal']['field'] = 'field_goal';
  /* Field: Content: Start Date */
  $handler->display->display_options['fields']['field_start_date']['id'] = 'field_start_date';
  $handler->display->display_options['fields']['field_start_date']['table'] = 'field_data_field_start_date';
  $handler->display->display_options['fields']['field_start_date']['field'] = 'field_start_date';
  $handler->display->display_options['fields']['field_start_date']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_start_date']['settings'] = array(
    'format_type' => 'short',
    'custom_date_format' => '',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_remaining_days' => 0,
  );
  /* Field: Global: PHP */
  $handler->display->display_options['fields']['php']['id'] = 'php';
  $handler->display->display_options['fields']['php']['table'] = 'views';
  $handler->display->display_options['fields']['php']['field'] = 'php';
  $handler->display->display_options['fields']['php']['label'] = 'Days Remaining';
  $handler->display->display_options['fields']['php']['use_php_setup'] = 0;
  $handler->display->display_options['fields']['php']['php_output'] = '<?php echo $row->field_start_date; ?>';
  $handler->display->display_options['fields']['php']['use_php_click_sortable'] = '0';
  $handler->display->display_options['fields']['php']['php_click_sortable'] = '';
  /* Field: Content: Coach Ref */
  $handler->display->display_options['fields']['field_coach_ref']['id'] = 'field_coach_ref';
  $handler->display->display_options['fields']['field_coach_ref']['table'] = 'field_data_field_coach_ref';
  $handler->display->display_options['fields']['field_coach_ref']['field'] = 'field_coach_ref';
  $handler->display->display_options['fields']['field_coach_ref']['settings'] = array(
    'bypass_access' => 0,
    'link' => 0,
  );
  /* Field: Content: Motivation */
  $handler->display->display_options['fields']['field_motivation']['id'] = 'field_motivation';
  $handler->display->display_options['fields']['field_motivation']['table'] = 'field_data_field_motivation';
  $handler->display->display_options['fields']['field_motivation']['field'] = 'field_motivation';
  /* Field: Content: Inspiration */
  $handler->display->display_options['fields']['field_inspiration']['id'] = 'field_inspiration';
  $handler->display->display_options['fields']['field_inspiration']['table'] = 'field_data_field_inspiration';
  $handler->display->display_options['fields']['field_inspiration']['field'] = 'field_inspiration';
  $handler->display->display_options['fields']['field_inspiration']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_inspiration']['settings'] = array(
    'image_style' => '',
    'image_link' => '',
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
    'goals' => 'goals',
  );
  /* Filter criterion: User: Current */
  $handler->display->display_options['filters']['uid_current']['id'] = 'uid_current';
  $handler->display->display_options['filters']['uid_current']['table'] = 'users';
  $handler->display->display_options['filters']['uid_current']['field'] = 'uid_current';
  $handler->display->display_options['filters']['uid_current']['relationship'] = 'uid';
  $handler->display->display_options['filters']['uid_current']['value'] = '1';

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $handler->display->display_options['block_description'] = 'client_goal';

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page_1');
  $handler->display->display_options['path'] = 'client/dashboard';
  $export['client_goal_block'] = $view;

  return $export;
}
