<?php
/**
 * @file
 * blogs_homepage_ct_and_views.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function blogs_homepage_ct_and_views_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'blogs_view';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Blogs View';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Blogs';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '20';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Relationship: Content: Author */
  $handler->display->display_options['relationships']['uid']['id'] = 'uid';
  $handler->display->display_options['relationships']['uid']['table'] = 'node';
  $handler->display->display_options['relationships']['uid']['field'] = 'uid';
  /* Field: Content: Add Video */
  $handler->display->display_options['fields']['field_add_video']['id'] = 'field_add_video';
  $handler->display->display_options['fields']['field_add_video']['table'] = 'field_data_field_add_video';
  $handler->display->display_options['fields']['field_add_video']['field'] = 'field_add_video';
  $handler->display->display_options['fields']['field_add_video']['label'] = '';
  $handler->display->display_options['fields']['field_add_video']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_add_video']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_add_video']['type'] = 'file_rendered';
  $handler->display->display_options['fields']['field_add_video']['settings'] = array(
    'file_view_mode' => 'default',
  );
  /* Field: User: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'users';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['relationship'] = 'uid';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['name']['link_to_user'] = FALSE;
  /* Field: Content: Post date */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'node';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['label'] = '';
  $handler->display->display_options['fields']['created']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['created']['date_format'] = 'long';
  $handler->display->display_options['fields']['created']['second_date_format'] = 'long';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['alter']['max_length'] = '100';
  $handler->display->display_options['fields']['body']['alter']['more_link'] = TRUE;
  $handler->display->display_options['fields']['body']['alter']['more_link_text'] = 'read more';
  $handler->display->display_options['fields']['body']['alter']['more_link_path'] = 'node/[nid]';
  $handler->display->display_options['fields']['body']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
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
    'blogs' => 'blogs',
  );

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $handler->display->display_options['block_description'] = 'Homepage Blogs Videos';
  $export['blogs_view'] = $view;

  $view = new view();
  $view->name = 'iron_fitness';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Iron Fitness';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'better_exposed_filters';
  $handler->display->display_options['exposed_form']['options']['autosubmit'] = TRUE;
  $handler->display->display_options['exposed_form']['options']['bef'] = array(
    'general' => array(
      'input_required' => 0,
      'text_input_required' => array(
        'text_input_required' => array(
          'value' => 'Select any filter and click on Apply to see results',
          'format' => 'filtered_html',
        ),
      ),
      'allow_secondary' => 0,
      'secondary_label' => 'Advanced options',
      'secondary_collapse_override' => '0',
    ),
    'field_select_category_value' => array(
      'bef_format' => 'bef_links',
      'more_options' => array(
        'bef_select_all_none' => FALSE,
        'bef_collapsible' => 0,
        'autosubmit' => 0,
        'is_secondary' => 0,
        'any_label' => 'All',
        'bef_filter_description' => '',
        'tokens' => array(
          'available' => array(
            0 => 'global_types',
          ),
        ),
        'rewrite' => array(
          'filter_rewrite_values' => '',
        ),
      ),
    ),
    'title' => array(
      'bef_format' => 'default',
      'more_options' => array(
        'autosubmit' => 0,
        'is_secondary' => 0,
        'any_label' => 'SEARCH',
        'bef_filter_description' => '',
        'tokens' => array(
          'available' => array(
            0 => 'global_types',
          ),
        ),
        'rewrite' => array(
          'filter_rewrite_values' => '',
        ),
      ),
    ),
  );
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = 'No results found.';
  $handler->display->display_options['empty']['area']['format'] = 'filtered_html';
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  /* Field: Global: PHP */
  $handler->display->display_options['fields']['php']['id'] = 'php';
  $handler->display->display_options['fields']['php']['table'] = 'views';
  $handler->display->display_options['fields']['php']['field'] = 'php';
  $handler->display->display_options['fields']['php']['label'] = '';
  $handler->display->display_options['fields']['php']['exclude'] = TRUE;
  $handler->display->display_options['fields']['php']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['php']['use_php_setup'] = 0;
  $handler->display->display_options['fields']['php']['php_output'] = '<?php
$video_id = NULL;
$node = node_load($row->nid);
  $video = field_get_items(\'node\', $node, \'field_add_video\');
  if(empty($video)) {
    return $video_id;
  }
  $video = file_load($video[0][\'fid\']);
  $wrapper = file_stream_wrapper_get_instance_by_uri($video->uri);
  $parts = $wrapper->get_parameters();
  $video_id = check_plain($parts[\'v\']);

echo $video_id;


?>';
  $handler->display->display_options['fields']['php']['use_php_click_sortable'] = '0';
  $handler->display->display_options['fields']['php']['php_click_sortable'] = '';
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<div class="col-container">
<div class="image">
<a target = "_blank" href="https://www.youtube.com/watch?v=[php]" class="video-trigger" data-sub-html=\\\'[title]\\\'>
  <img src="https://img.youtube.com/vi/[php]/mqdefault.jpg">
</a>
</div>
</div>';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
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
    'blogs' => 'blogs',
  );
  /* Filter criterion: Content: Select Category (field_select_category) */
  $handler->display->display_options['filters']['field_select_category_value']['id'] = 'field_select_category_value';
  $handler->display->display_options['filters']['field_select_category_value']['table'] = 'field_data_field_select_category';
  $handler->display->display_options['filters']['field_select_category_value']['field'] = 'field_select_category_value';
  $handler->display->display_options['filters']['field_select_category_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_select_category_value']['expose']['operator_id'] = 'field_select_category_value_op';
  $handler->display->display_options['filters']['field_select_category_value']['expose']['operator'] = 'field_select_category_value_op';
  $handler->display->display_options['filters']['field_select_category_value']['expose']['identifier'] = 'field_select_category_value';
  $handler->display->display_options['filters']['field_select_category_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
    6 => 0,
  );
  /* Filter criterion: Content: Iron Category (field_iron_category) */
  $handler->display->display_options['filters']['field_iron_category_tid']['id'] = 'field_iron_category_tid';
  $handler->display->display_options['filters']['field_iron_category_tid']['table'] = 'field_data_field_iron_category';
  $handler->display->display_options['filters']['field_iron_category_tid']['field'] = 'field_iron_category_tid';
  $handler->display->display_options['filters']['field_iron_category_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_iron_category_tid']['vocabulary'] = 'iron_barbell';

  /* Display: Iron Finess */
  $handler = $view->new_display('page', 'Iron Finess', 'page');
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
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
    'blogs' => 'blogs',
  );
  /* Filter criterion: Content: Select Category (field_select_category) */
  $handler->display->display_options['filters']['field_select_category_value']['id'] = 'field_select_category_value';
  $handler->display->display_options['filters']['field_select_category_value']['table'] = 'field_data_field_select_category';
  $handler->display->display_options['filters']['field_select_category_value']['field'] = 'field_select_category_value';
  $handler->display->display_options['filters']['field_select_category_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_select_category_value']['expose']['operator_id'] = 'field_select_category_value_op';
  $handler->display->display_options['filters']['field_select_category_value']['expose']['operator'] = 'field_select_category_value_op';
  $handler->display->display_options['filters']['field_select_category_value']['expose']['identifier'] = 'field_select_category_value';
  $handler->display->display_options['filters']['field_select_category_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
    6 => 0,
  );
  /* Filter criterion: Content: Iron Category (field_iron_category) */
  $handler->display->display_options['filters']['field_iron_category_tid']['id'] = 'field_iron_category_tid';
  $handler->display->display_options['filters']['field_iron_category_tid']['table'] = 'field_data_field_iron_category';
  $handler->display->display_options['filters']['field_iron_category_tid']['field'] = 'field_iron_category_tid';
  $handler->display->display_options['filters']['field_iron_category_tid']['value'] = array(
    1 => '1',
  );
  $handler->display->display_options['filters']['field_iron_category_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_iron_category_tid']['vocabulary'] = 'iron_barbell';
  /* Filter criterion: Content: Title */
  $handler->display->display_options['filters']['title']['id'] = 'title';
  $handler->display->display_options['filters']['title']['table'] = 'node';
  $handler->display->display_options['filters']['title']['field'] = 'title';
  $handler->display->display_options['filters']['title']['operator'] = 'contains';
  $handler->display->display_options['filters']['title']['exposed'] = TRUE;
  $handler->display->display_options['filters']['title']['expose']['operator_id'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['operator'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['identifier'] = 'title';
  $handler->display->display_options['filters']['title']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
    6 => 0,
  );
  $handler->display->display_options['path'] = 'iron-fitness';

  /* Display: Iron Bodies */
  $handler = $view->new_display('page', 'Iron Bodies', 'page_1');
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
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
    'blogs' => 'blogs',
  );
  /* Filter criterion: Content: Select Category (field_select_category) */
  $handler->display->display_options['filters']['field_select_category_value']['id'] = 'field_select_category_value';
  $handler->display->display_options['filters']['field_select_category_value']['table'] = 'field_data_field_select_category';
  $handler->display->display_options['filters']['field_select_category_value']['field'] = 'field_select_category_value';
  $handler->display->display_options['filters']['field_select_category_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_select_category_value']['expose']['operator_id'] = 'field_select_category_value_op';
  $handler->display->display_options['filters']['field_select_category_value']['expose']['operator'] = 'field_select_category_value_op';
  $handler->display->display_options['filters']['field_select_category_value']['expose']['identifier'] = 'field_select_category_value';
  $handler->display->display_options['filters']['field_select_category_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
    6 => 0,
  );
  /* Filter criterion: Content: Iron Category (field_iron_category) */
  $handler->display->display_options['filters']['field_iron_category_tid']['id'] = 'field_iron_category_tid';
  $handler->display->display_options['filters']['field_iron_category_tid']['table'] = 'field_data_field_iron_category';
  $handler->display->display_options['filters']['field_iron_category_tid']['field'] = 'field_iron_category_tid';
  $handler->display->display_options['filters']['field_iron_category_tid']['value'] = array(
    2 => '2',
  );
  $handler->display->display_options['filters']['field_iron_category_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_iron_category_tid']['vocabulary'] = 'iron_barbell';
  /* Filter criterion: Content: Title */
  $handler->display->display_options['filters']['title']['id'] = 'title';
  $handler->display->display_options['filters']['title']['table'] = 'node';
  $handler->display->display_options['filters']['title']['field'] = 'title';
  $handler->display->display_options['filters']['title']['exposed'] = TRUE;
  $handler->display->display_options['filters']['title']['expose']['operator_id'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['operator'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['identifier'] = 'title';
  $handler->display->display_options['filters']['title']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
    6 => 0,
  );
  $handler->display->display_options['path'] = 'iron-bodies';

  /* Display: Iron Academy */
  $handler = $view->new_display('page', 'Iron Academy', 'page_2');
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
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
    'blogs' => 'blogs',
  );
  /* Filter criterion: Content: Select Category (field_select_category) */
  $handler->display->display_options['filters']['field_select_category_value']['id'] = 'field_select_category_value';
  $handler->display->display_options['filters']['field_select_category_value']['table'] = 'field_data_field_select_category';
  $handler->display->display_options['filters']['field_select_category_value']['field'] = 'field_select_category_value';
  $handler->display->display_options['filters']['field_select_category_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_select_category_value']['expose']['operator_id'] = 'field_select_category_value_op';
  $handler->display->display_options['filters']['field_select_category_value']['expose']['operator'] = 'field_select_category_value_op';
  $handler->display->display_options['filters']['field_select_category_value']['expose']['identifier'] = 'field_select_category_value';
  $handler->display->display_options['filters']['field_select_category_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
    6 => 0,
  );
  /* Filter criterion: Content: Iron Category (field_iron_category) */
  $handler->display->display_options['filters']['field_iron_category_tid']['id'] = 'field_iron_category_tid';
  $handler->display->display_options['filters']['field_iron_category_tid']['table'] = 'field_data_field_iron_category';
  $handler->display->display_options['filters']['field_iron_category_tid']['field'] = 'field_iron_category_tid';
  $handler->display->display_options['filters']['field_iron_category_tid']['value'] = array(
    3 => '3',
  );
  $handler->display->display_options['filters']['field_iron_category_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_iron_category_tid']['vocabulary'] = 'iron_barbell';
  /* Filter criterion: Content: Title */
  $handler->display->display_options['filters']['title']['id'] = 'title';
  $handler->display->display_options['filters']['title']['table'] = 'node';
  $handler->display->display_options['filters']['title']['field'] = 'title';
  $handler->display->display_options['filters']['title']['exposed'] = TRUE;
  $handler->display->display_options['filters']['title']['expose']['operator_id'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['operator'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['identifier'] = 'title';
  $handler->display->display_options['filters']['title']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
    6 => 0,
  );
  $handler->display->display_options['path'] = 'iron-academy';

  /* Display: Iron Fitness Youth */
  $handler = $view->new_display('page', 'Iron Fitness Youth', 'page_3');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
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
    'blogs' => 'blogs',
  );
  /* Filter criterion: Content: Select Category (field_select_category) */
  $handler->display->display_options['filters']['field_select_category_value']['id'] = 'field_select_category_value';
  $handler->display->display_options['filters']['field_select_category_value']['table'] = 'field_data_field_select_category';
  $handler->display->display_options['filters']['field_select_category_value']['field'] = 'field_select_category_value';
  $handler->display->display_options['filters']['field_select_category_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_select_category_value']['expose']['operator_id'] = 'field_select_category_value_op';
  $handler->display->display_options['filters']['field_select_category_value']['expose']['operator'] = 'field_select_category_value_op';
  $handler->display->display_options['filters']['field_select_category_value']['expose']['identifier'] = 'field_select_category_value';
  $handler->display->display_options['filters']['field_select_category_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
    6 => 0,
  );
  /* Filter criterion: Content: Iron Category (field_iron_category) */
  $handler->display->display_options['filters']['field_iron_category_tid']['id'] = 'field_iron_category_tid';
  $handler->display->display_options['filters']['field_iron_category_tid']['table'] = 'field_data_field_iron_category';
  $handler->display->display_options['filters']['field_iron_category_tid']['field'] = 'field_iron_category_tid';
  $handler->display->display_options['filters']['field_iron_category_tid']['value'] = array(
    4 => '4',
  );
  $handler->display->display_options['filters']['field_iron_category_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_iron_category_tid']['vocabulary'] = 'iron_barbell';
  /* Filter criterion: Content: Title */
  $handler->display->display_options['filters']['title']['id'] = 'title';
  $handler->display->display_options['filters']['title']['table'] = 'node';
  $handler->display->display_options['filters']['title']['field'] = 'title';
  $handler->display->display_options['filters']['title']['exposed'] = TRUE;
  $handler->display->display_options['filters']['title']['expose']['operator_id'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['operator'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['identifier'] = 'title';
  $handler->display->display_options['filters']['title']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
    6 => 0,
  );
  $handler->display->display_options['path'] = 'iron-fitness-youth';
  $export['iron_fitness'] = $view;

  return $export;
}
