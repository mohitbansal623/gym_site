<?php
/**
 * @file
 * user_report.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function user_report_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'user_report';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'User Report';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'User Report';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    3 => '3',
    5 => '5',
  );
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['distinct'] = TRUE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'uid' => 'uid',
    'name' => 'name',
    'php_3' => 'php_3',
    'php_4' => 'php_4',
    'php_5' => 'php_5',
    'php_6' => 'php_6',
    'php_7' => 'php_7',
    'php_8' => 'php_8',
    'php' => 'php',
    'php_1' => 'php_1',
    'php_2' => 'php_2',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'uid' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'name' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'php_3' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'php_4' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'php_5' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'php_6' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'php_7' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'php_8' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'php' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'php_1' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'php_2' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* Relationship: Content: Author */
  $handler->display->display_options['relationships']['uid']['id'] = 'uid';
  $handler->display->display_options['relationships']['uid']['table'] = 'node';
  $handler->display->display_options['relationships']['uid']['field'] = 'uid';
  /* Field: User: Uid */
  $handler->display->display_options['fields']['uid']['id'] = 'uid';
  $handler->display->display_options['fields']['uid']['table'] = 'users';
  $handler->display->display_options['fields']['uid']['field'] = 'uid';
  $handler->display->display_options['fields']['uid']['relationship'] = 'uid';
  $handler->display->display_options['fields']['uid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['uid']['link_to_user'] = FALSE;
  /* Field: User: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'users';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['relationship'] = 'uid';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['name']['link_to_user'] = FALSE;
  /* Field: Global: PHP */
  $handler->display->display_options['fields']['php_3']['id'] = 'php_3';
  $handler->display->display_options['fields']['php_3']['table'] = 'views';
  $handler->display->display_options['fields']['php_3']['field'] = 'php';
  $handler->display->display_options['fields']['php_3']['label'] = 'First Progress Pic Front';
  $handler->display->display_options['fields']['php_3']['use_php_setup'] = 0;
  $handler->display->display_options['fields']['php_3']['php_output'] = '<?php
$src = get_progress_pic($row->uid, "first", "front");
if (!empty($src)) {
echo "<img src =" . $src . " width=200 height=200>";
}
?>';
  $handler->display->display_options['fields']['php_3']['use_php_click_sortable'] = '0';
  $handler->display->display_options['fields']['php_3']['php_click_sortable'] = '';
  /* Field: Global: PHP */
  $handler->display->display_options['fields']['php_4']['id'] = 'php_4';
  $handler->display->display_options['fields']['php_4']['table'] = 'views';
  $handler->display->display_options['fields']['php_4']['field'] = 'php';
  $handler->display->display_options['fields']['php_4']['label'] = 'Current Progress Pic Front';
  $handler->display->display_options['fields']['php_4']['use_php_setup'] = 0;
  $handler->display->display_options['fields']['php_4']['php_output'] = '<?php
$src = get_progress_pic($row->uid, "current", "front");
if (!empty($src)) {
echo "<img src =" . $src . " width=200 height=200>";
}
?>';
  $handler->display->display_options['fields']['php_4']['use_php_click_sortable'] = '0';
  $handler->display->display_options['fields']['php_4']['php_click_sortable'] = '';
  /* Field: Global: PHP */
  $handler->display->display_options['fields']['php_5']['id'] = 'php_5';
  $handler->display->display_options['fields']['php_5']['table'] = 'views';
  $handler->display->display_options['fields']['php_5']['field'] = 'php';
  $handler->display->display_options['fields']['php_5']['label'] = 'First Progress Pic Back';
  $handler->display->display_options['fields']['php_5']['use_php_setup'] = 0;
  $handler->display->display_options['fields']['php_5']['php_output'] = '<?php
$src= get_progress_pic($row->uid, "first", "back");
if (!empty($src)) {
echo "<img src =" . $src . " width=200 height=200>";
}
?>';
  $handler->display->display_options['fields']['php_5']['use_php_click_sortable'] = '0';
  $handler->display->display_options['fields']['php_5']['php_click_sortable'] = '';
  /* Field: Global: PHP */
  $handler->display->display_options['fields']['php_6']['id'] = 'php_6';
  $handler->display->display_options['fields']['php_6']['table'] = 'views';
  $handler->display->display_options['fields']['php_6']['field'] = 'php';
  $handler->display->display_options['fields']['php_6']['label'] = 'Current Progress Pic Back';
  $handler->display->display_options['fields']['php_6']['use_php_setup'] = 0;
  $handler->display->display_options['fields']['php_6']['php_output'] = '<?php
$src = get_progress_pic($row->uid, "current", "back");
if (!empty($src)) {
echo "<img src =" . $src . " width=200 height=200>";
}
?>';
  $handler->display->display_options['fields']['php_6']['use_php_click_sortable'] = '0';
  $handler->display->display_options['fields']['php_6']['php_click_sortable'] = '';
  /* Field: Global: PHP */
  $handler->display->display_options['fields']['php_7']['id'] = 'php_7';
  $handler->display->display_options['fields']['php_7']['table'] = 'views';
  $handler->display->display_options['fields']['php_7']['field'] = 'php';
  $handler->display->display_options['fields']['php_7']['label'] = 'First Progress Pic Side';
  $handler->display->display_options['fields']['php_7']['use_php_setup'] = 0;
  $handler->display->display_options['fields']['php_7']['php_output'] = '<?php
$src = get_progress_pic($row->uid, "first", "side");
if (!empty($src)) {
echo "<img src =" . $src . " width=200 height=200>";
}

?>';
  $handler->display->display_options['fields']['php_7']['use_php_click_sortable'] = '0';
  $handler->display->display_options['fields']['php_7']['php_click_sortable'] = '';
  /* Field: Global: PHP */
  $handler->display->display_options['fields']['php_8']['id'] = 'php_8';
  $handler->display->display_options['fields']['php_8']['table'] = 'views';
  $handler->display->display_options['fields']['php_8']['field'] = 'php';
  $handler->display->display_options['fields']['php_8']['label'] = 'Current Progress Pic Side';
  $handler->display->display_options['fields']['php_8']['use_php_setup'] = 0;
  $handler->display->display_options['fields']['php_8']['php_output'] = '<?php
$src = get_progress_pic($row->uid, "current", "side");
if (!empty($src)) {
echo "<img src =" . $src . " width=200 height=200>";
}
?>';
  $handler->display->display_options['fields']['php_8']['use_php_click_sortable'] = '0';
  $handler->display->display_options['fields']['php_8']['php_click_sortable'] = '';
  /* Field: Global: PHP */
  $handler->display->display_options['fields']['php']['id'] = 'php';
  $handler->display->display_options['fields']['php']['table'] = 'views';
  $handler->display->display_options['fields']['php']['field'] = 'php';
  $handler->display->display_options['fields']['php']['label'] = 'Total Percent Bodyfat lost ';
  $handler->display->display_options['fields']['php']['use_php_setup'] = 0;
  $handler->display->display_options['fields']['php']['php_output'] = '<?php
$data = get_percent_body_fat_goal_vs_check_in($row->uid);
echo $data[\'rem\'];
?>';
  $handler->display->display_options['fields']['php']['use_php_click_sortable'] = '0';
  $handler->display->display_options['fields']['php']['php_click_sortable'] = '';
  /* Field: Global: PHP */
  $handler->display->display_options['fields']['php_1']['id'] = 'php_1';
  $handler->display->display_options['fields']['php_1']['table'] = 'views';
  $handler->display->display_options['fields']['php_1']['field'] = 'php';
  $handler->display->display_options['fields']['php_1']['label'] = 'Total CM Lost';
  $handler->display->display_options['fields']['php_1']['use_php_setup'] = 0;
  $handler->display->display_options['fields']['php_1']['php_output'] = '<?php
echo get_cm_loss($row->uid);
?>';
  $handler->display->display_options['fields']['php_1']['use_php_click_sortable'] = '0';
  $handler->display->display_options['fields']['php_1']['php_click_sortable'] = '';
  /* Field: Global: PHP */
  $handler->display->display_options['fields']['php_2']['id'] = 'php_2';
  $handler->display->display_options['fields']['php_2']['table'] = 'views';
  $handler->display->display_options['fields']['php_2']['field'] = 'php';
  $handler->display->display_options['fields']['php_2']['label'] = 'Total Callipers Lost';
  $handler->display->display_options['fields']['php_2']['use_php_setup'] = 0;
  $handler->display->display_options['fields']['php_2']['php_output'] = '<?php
echo get_mm_loss($row->uid);
?>';
  $handler->display->display_options['fields']['php_2']['use_php_click_sortable'] = '0';
  $handler->display->display_options['fields']['php_2']['php_click_sortable'] = '';
  /* Contextual filter: User: Uid */
  $handler->display->display_options['arguments']['uid']['id'] = 'uid';
  $handler->display->display_options['arguments']['uid']['table'] = 'users';
  $handler->display->display_options['arguments']['uid']['field'] = 'uid';
  $handler->display->display_options['arguments']['uid']['relationship'] = 'uid';
  $handler->display->display_options['arguments']['uid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['uid']['default_argument_type'] = 'current_user';
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

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['path'] = 'user-report';

  /* Display: Data export */
  $handler = $view->new_display('views_data_export', 'Data export', 'views_data_export_1');
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['style_plugin'] = 'views_data_export_doc';
  $handler->display->display_options['style_options']['provide_file'] = 1;
  $handler->display->display_options['style_options']['filename'] = 'report.doc';
  $handler->display->display_options['style_options']['parent_sort'] = 0;
  $handler->display->display_options['path'] = 'sites/default/files/report.doc';
  $handler->display->display_options['displays'] = array(
    'page' => 'page',
    'default' => 0,
  );
  $translatables['user_report'] = array(
    t('Master'),
    t('User Report'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('author'),
    t('Uid'),
    t('First Progress Pic Front'),
    t('Current Progress Pic Front'),
    t('First Progress Pic Back'),
    t('Current Progress Pic Back'),
    t('First Progress Pic Side'),
    t('Current Progress Pic Side'),
    t('Total Percent Bodyfat lost '),
    t('Total CM Lost'),
    t('Total Callipers Lost'),
    t('All'),
    t('Page'),
    t('Data export'),
  );
  $export['user_report'] = $view;

  return $export;
}
