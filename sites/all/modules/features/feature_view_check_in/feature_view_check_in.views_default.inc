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
  $handler->display->display_options['title'] = '<none>';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Relationship: Content: Author */
  $handler->display->display_options['relationships']['uid']['id'] = 'uid';
  $handler->display->display_options['relationships']['uid']['table'] = 'node';
  $handler->display->display_options['relationships']['uid']['field'] = 'uid';
  /* Field: Content: Bodyfat kg */
  $handler->display->display_options['fields']['field_bodyfat_kg']['id'] = 'field_bodyfat_kg';
  $handler->display->display_options['fields']['field_bodyfat_kg']['table'] = 'field_data_field_bodyfat_kg';
  $handler->display->display_options['fields']['field_bodyfat_kg']['field'] = 'field_bodyfat_kg';
  $handler->display->display_options['fields']['field_bodyfat_kg']['label'] = '';
  $handler->display->display_options['fields']['field_bodyfat_kg']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_bodyfat_kg']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_bodyfat_kg']['settings'] = array(
    'thousand_separator' => '',
    'prefix_suffix' => 1,
  );
  /* Field: Content: Muscle Mass */
  $handler->display->display_options['fields']['field_muscle_mass']['id'] = 'field_muscle_mass';
  $handler->display->display_options['fields']['field_muscle_mass']['table'] = 'field_data_field_muscle_mass';
  $handler->display->display_options['fields']['field_muscle_mass']['field'] = 'field_muscle_mass';
  $handler->display->display_options['fields']['field_muscle_mass']['label'] = '';
  $handler->display->display_options['fields']['field_muscle_mass']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_muscle_mass']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_muscle_mass']['settings'] = array(
    'thousand_separator' => '',
    'prefix_suffix' => 1,
  );
  /* Field: Content: Percent BodyFat */
  $handler->display->display_options['fields']['field_percent_bodyfat']['id'] = 'field_percent_bodyfat';
  $handler->display->display_options['fields']['field_percent_bodyfat']['table'] = 'field_data_field_percent_bodyfat';
  $handler->display->display_options['fields']['field_percent_bodyfat']['field'] = 'field_percent_bodyfat';
  $handler->display->display_options['fields']['field_percent_bodyfat']['label'] = '';
  $handler->display->display_options['fields']['field_percent_bodyfat']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_percent_bodyfat']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_percent_bodyfat']['settings'] = array(
    'thousand_separator' => '',
    'prefix_suffix' => 1,
  );
  /* Field: Content: Abdominal MM */
  $handler->display->display_options['fields']['field_abdominal_mm']['id'] = 'field_abdominal_mm';
  $handler->display->display_options['fields']['field_abdominal_mm']['table'] = 'field_data_field_abdominal_mm';
  $handler->display->display_options['fields']['field_abdominal_mm']['field'] = 'field_abdominal_mm';
  $handler->display->display_options['fields']['field_abdominal_mm']['label'] = '';
  $handler->display->display_options['fields']['field_abdominal_mm']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_abdominal_mm']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_abdominal_mm']['settings'] = array(
    'thousand_separator' => '',
    'prefix_suffix' => 1,
  );
  /* Field: Content: Chest CM */
  $handler->display->display_options['fields']['field_chest_cm']['id'] = 'field_chest_cm';
  $handler->display->display_options['fields']['field_chest_cm']['table'] = 'field_data_field_chest_cm';
  $handler->display->display_options['fields']['field_chest_cm']['field'] = 'field_chest_cm';
  $handler->display->display_options['fields']['field_chest_cm']['label'] = '';
  $handler->display->display_options['fields']['field_chest_cm']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_chest_cm']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_chest_cm']['settings'] = array(
    'thousand_separator' => '',
    'prefix_suffix' => 1,
  );
  /* Field: Content: Hips CM */
  $handler->display->display_options['fields']['field_hips_cm']['id'] = 'field_hips_cm';
  $handler->display->display_options['fields']['field_hips_cm']['table'] = 'field_data_field_hips_cm';
  $handler->display->display_options['fields']['field_hips_cm']['field'] = 'field_hips_cm';
  $handler->display->display_options['fields']['field_hips_cm']['label'] = '';
  $handler->display->display_options['fields']['field_hips_cm']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_hips_cm']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_hips_cm']['settings'] = array(
    'thousand_separator' => '',
    'prefix_suffix' => 1,
  );
  /* Field: Content: Left Arm CM */
  $handler->display->display_options['fields']['field_left_arm_cm']['id'] = 'field_left_arm_cm';
  $handler->display->display_options['fields']['field_left_arm_cm']['table'] = 'field_data_field_left_arm_cm';
  $handler->display->display_options['fields']['field_left_arm_cm']['field'] = 'field_left_arm_cm';
  $handler->display->display_options['fields']['field_left_arm_cm']['label'] = '';
  $handler->display->display_options['fields']['field_left_arm_cm']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_left_arm_cm']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_left_arm_cm']['settings'] = array(
    'thousand_separator' => '',
    'prefix_suffix' => 1,
  );
  /* Field: Content: Left Calf CM */
  $handler->display->display_options['fields']['field_left_calf_cm']['id'] = 'field_left_calf_cm';
  $handler->display->display_options['fields']['field_left_calf_cm']['table'] = 'field_data_field_left_calf_cm';
  $handler->display->display_options['fields']['field_left_calf_cm']['field'] = 'field_left_calf_cm';
  $handler->display->display_options['fields']['field_left_calf_cm']['label'] = '';
  $handler->display->display_options['fields']['field_left_calf_cm']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_left_calf_cm']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_left_calf_cm']['settings'] = array(
    'thousand_separator' => '',
    'prefix_suffix' => 1,
  );
  /* Field: Content: Left Leg CM */
  $handler->display->display_options['fields']['field_left_leg_cm']['id'] = 'field_left_leg_cm';
  $handler->display->display_options['fields']['field_left_leg_cm']['table'] = 'field_data_field_left_leg_cm';
  $handler->display->display_options['fields']['field_left_leg_cm']['field'] = 'field_left_leg_cm';
  $handler->display->display_options['fields']['field_left_leg_cm']['label'] = '';
  $handler->display->display_options['fields']['field_left_leg_cm']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_left_leg_cm']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_left_leg_cm']['settings'] = array(
    'thousand_separator' => '',
    'prefix_suffix' => 1,
  );
  /* Field: Content: Neck CM */
  $handler->display->display_options['fields']['field_neck_cm']['id'] = 'field_neck_cm';
  $handler->display->display_options['fields']['field_neck_cm']['table'] = 'field_data_field_neck_cm';
  $handler->display->display_options['fields']['field_neck_cm']['field'] = 'field_neck_cm';
  $handler->display->display_options['fields']['field_neck_cm']['label'] = '';
  $handler->display->display_options['fields']['field_neck_cm']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_neck_cm']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_neck_cm']['settings'] = array(
    'thousand_separator' => '',
    'prefix_suffix' => 1,
  );
  /* Field: Content: Right Arm CM */
  $handler->display->display_options['fields']['field_right_arm_cm']['id'] = 'field_right_arm_cm';
  $handler->display->display_options['fields']['field_right_arm_cm']['table'] = 'field_data_field_right_arm_cm';
  $handler->display->display_options['fields']['field_right_arm_cm']['field'] = 'field_right_arm_cm';
  $handler->display->display_options['fields']['field_right_arm_cm']['label'] = '';
  $handler->display->display_options['fields']['field_right_arm_cm']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_right_arm_cm']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_right_arm_cm']['settings'] = array(
    'thousand_separator' => '',
    'prefix_suffix' => 1,
  );
  /* Field: Content: Right Calf CM */
  $handler->display->display_options['fields']['field_right_calf_cm']['id'] = 'field_right_calf_cm';
  $handler->display->display_options['fields']['field_right_calf_cm']['table'] = 'field_data_field_right_calf_cm';
  $handler->display->display_options['fields']['field_right_calf_cm']['field'] = 'field_right_calf_cm';
  $handler->display->display_options['fields']['field_right_calf_cm']['label'] = '';
  $handler->display->display_options['fields']['field_right_calf_cm']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_right_calf_cm']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_right_calf_cm']['settings'] = array(
    'thousand_separator' => '',
    'prefix_suffix' => 1,
  );
  /* Field: Content: Right Leg CM */
  $handler->display->display_options['fields']['field_right_leg_cm']['id'] = 'field_right_leg_cm';
  $handler->display->display_options['fields']['field_right_leg_cm']['table'] = 'field_data_field_right_leg_cm';
  $handler->display->display_options['fields']['field_right_leg_cm']['field'] = 'field_right_leg_cm';
  $handler->display->display_options['fields']['field_right_leg_cm']['label'] = '';
  $handler->display->display_options['fields']['field_right_leg_cm']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_right_leg_cm']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_right_leg_cm']['settings'] = array(
    'thousand_separator' => '',
    'prefix_suffix' => 1,
  );
  /* Field: Content: Total CM */
  $handler->display->display_options['fields']['field_total_cm']['id'] = 'field_total_cm';
  $handler->display->display_options['fields']['field_total_cm']['table'] = 'field_data_field_total_cm';
  $handler->display->display_options['fields']['field_total_cm']['field'] = 'field_total_cm';
  $handler->display->display_options['fields']['field_total_cm']['label'] = '';
  $handler->display->display_options['fields']['field_total_cm']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_total_cm']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_total_cm']['settings'] = array(
    'thousand_separator' => '',
    'prefix_suffix' => 1,
  );
  /* Field: Content: Waist CM */
  $handler->display->display_options['fields']['field_waist_cm']['id'] = 'field_waist_cm';
  $handler->display->display_options['fields']['field_waist_cm']['table'] = 'field_data_field_waist_cm';
  $handler->display->display_options['fields']['field_waist_cm']['field'] = 'field_waist_cm';
  $handler->display->display_options['fields']['field_waist_cm']['label'] = '';
  $handler->display->display_options['fields']['field_waist_cm']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_waist_cm']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_waist_cm']['settings'] = array(
    'thousand_separator' => '',
    'prefix_suffix' => 1,
  );
  /* Field: Content: Client Ref */
  $handler->display->display_options['fields']['field_client_ref']['id'] = 'field_client_ref';
  $handler->display->display_options['fields']['field_client_ref']['table'] = 'field_data_field_client_ref';
  $handler->display->display_options['fields']['field_client_ref']['field'] = 'field_client_ref';
  $handler->display->display_options['fields']['field_client_ref']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_client_ref']['settings'] = array(
    'bypass_access' => 0,
    'link' => 0,
  );
  /* Field: Global: PHP */
  $handler->display->display_options['fields']['php_5']['id'] = 'php_5';
  $handler->display->display_options['fields']['php_5']['table'] = 'views';
  $handler->display->display_options['fields']['php_5']['field'] = 'php';
  $handler->display->display_options['fields']['php_5']['exclude'] = TRUE;
  $handler->display->display_options['fields']['php_5']['use_php_setup'] = 0;
  $handler->display->display_options['fields']['php_5']['php_output'] = '<?php global $user;

echo $user->uid;

?>';
  $handler->display->display_options['fields']['php_5']['use_php_click_sortable'] = '0';
  $handler->display->display_options['fields']['php_5']['php_click_sortable'] = '';
  /* Field: Global: PHP */
  $handler->display->display_options['fields']['php']['id'] = 'php';
  $handler->display->display_options['fields']['php']['table'] = 'views';
  $handler->display->display_options['fields']['php']['field'] = 'php';
  $handler->display->display_options['fields']['php']['label'] = 'Bodyfat Loss %';
  $handler->display->display_options['fields']['php']['exclude'] = TRUE;
  $handler->display->display_options['fields']['php']['use_php_setup'] = 0;
  $handler->display->display_options['fields']['php']['php_output'] = '<?php
global $user;
echo get_recent_body_fat_percentage($user->uid);
?>';
  $handler->display->display_options['fields']['php']['use_php_click_sortable'] = '0';
  $handler->display->display_options['fields']['php']['php_click_sortable'] = '';
  /* Field: Global: PHP */
  $handler->display->display_options['fields']['php_1']['id'] = 'php_1';
  $handler->display->display_options['fields']['php_1']['table'] = 'views';
  $handler->display->display_options['fields']['php_1']['field'] = 'php';
  $handler->display->display_options['fields']['php_1']['label'] = 'CM Loss';
  $handler->display->display_options['fields']['php_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['php_1']['use_php_setup'] = 0;
  $handler->display->display_options['fields']['php_1']['php_output'] = '<?php
global $user;
  echo get_cm_loss($user->uid);
?>';
  $handler->display->display_options['fields']['php_1']['use_php_click_sortable'] = '0';
  $handler->display->display_options['fields']['php_1']['php_click_sortable'] = '';
  /* Field: Global: PHP */
  $handler->display->display_options['fields']['php_2']['id'] = 'php_2';
  $handler->display->display_options['fields']['php_2']['table'] = 'views';
  $handler->display->display_options['fields']['php_2']['field'] = 'php';
  $handler->display->display_options['fields']['php_2']['label'] = 'MM Loss';
  $handler->display->display_options['fields']['php_2']['exclude'] = TRUE;
  $handler->display->display_options['fields']['php_2']['use_php_setup'] = 0;
  $handler->display->display_options['fields']['php_2']['php_output'] = '<?php
global $user;
 echo get_mm_loss($user->uid);
?>';
  $handler->display->display_options['fields']['php_2']['use_php_click_sortable'] = '0';
  $handler->display->display_options['fields']['php_2']['php_click_sortable'] = '';
  /* Field: Global: PHP */
  $handler->display->display_options['fields']['php_3']['id'] = 'php_3';
  $handler->display->display_options['fields']['php_3']['table'] = 'views';
  $handler->display->display_options['fields']['php_3']['field'] = 'php';
  $handler->display->display_options['fields']['php_3']['label'] = 'Diet Adherence';
  $handler->display->display_options['fields']['php_3']['exclude'] = TRUE;
  $handler->display->display_options['fields']['php_3']['use_php_setup'] = 0;
  $handler->display->display_options['fields']['php_3']['php_output'] = '<?php
global $user;
echo get_diet_adherence($user->uid);
?>';
  $handler->display->display_options['fields']['php_3']['use_php_click_sortable'] = '0';
  $handler->display->display_options['fields']['php_3']['php_click_sortable'] = '';
  /* Field: Global: PHP */
  $handler->display->display_options['fields']['php_4']['id'] = 'php_4';
  $handler->display->display_options['fields']['php_4']['table'] = 'views';
  $handler->display->display_options['fields']['php_4']['field'] = 'php';
  $handler->display->display_options['fields']['php_4']['label'] = 'Average Daily Activity';
  $handler->display->display_options['fields']['php_4']['exclude'] = TRUE;
  $handler->display->display_options['fields']['php_4']['use_php_setup'] = 0;
  $handler->display->display_options['fields']['php_4']['php_output'] = '<?php
global $user;
  echo get_avg_daily_activity($user->uid);
?>';
  $handler->display->display_options['fields']['php_4']['use_php_click_sortable'] = '0';
  $handler->display->display_options['fields']['php_4']['php_click_sortable'] = '';
  /* Field: Content: Training Sessions Completed */
  $handler->display->display_options['fields']['field_training_sessions_complete']['id'] = 'field_training_sessions_complete';
  $handler->display->display_options['fields']['field_training_sessions_complete']['table'] = 'field_data_field_training_sessions_complete';
  $handler->display->display_options['fields']['field_training_sessions_complete']['field'] = 'field_training_sessions_complete';
  $handler->display->display_options['fields']['field_training_sessions_complete']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_training_sessions_complete']['settings'] = array(
    'thousand_separator' => '',
    'decimal_separator' => '.',
    'scale' => '2',
    'prefix_suffix' => 1,
  );
  /* Field: Content: Personal Records */
  $handler->display->display_options['fields']['field_personal_records']['id'] = 'field_personal_records';
  $handler->display->display_options['fields']['field_personal_records']['table'] = 'field_data_field_personal_records';
  $handler->display->display_options['fields']['field_personal_records']['field'] = 'field_personal_records';
  $handler->display->display_options['fields']['field_personal_records']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_personal_records']['settings'] = array(
    'thousand_separator' => '',
    'decimal_separator' => '.',
    'scale' => '2',
    'prefix_suffix' => 1,
  );
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<div class="current-stats">
  <h2 class="block-title">Current Stats</h2>
  <div class="stats">
    <div class="stats-content">
    </div> 
    <div class="stats-content">
      <table>
        <tr>
          <td>Percent Bodyfat Lost</td>
          <td>[php]%</td>
        </tr>
        <tr>
          <td>CM Loss</td>
          <td>[php_1]</td>
        </tr>
        <tr>
          <td>MM Loss</td>
          <td>[php_2]</td>
        </tr>
        <tr>
          <td>Diet Adherence</td>
          <td>[php_3]</td>
        </tr>
        <tr>
          <td>Average Daily Activity</td>
          <td>[php_4]</td>
        </tr>
         <tr>
          <td>Training Sessions Completed</td>
          <td>[field_training_sessions_complete]</td>
        </tr>
         <tr>
          <td>Personal Records</td>
          <td>[field_personal_records]</td>
        </tr>
      </table>
    </div>
</div>
</div>';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Contextual filter: Content: Client Ref (field_client_ref) */
  $handler->display->display_options['arguments']['field_client_ref_target_id']['id'] = 'field_client_ref_target_id';
  $handler->display->display_options['arguments']['field_client_ref_target_id']['table'] = 'field_data_field_client_ref';
  $handler->display->display_options['arguments']['field_client_ref_target_id']['field'] = 'field_client_ref_target_id';
  $handler->display->display_options['arguments']['field_client_ref_target_id']['default_action'] = 'default';
  $handler->display->display_options['arguments']['field_client_ref_target_id']['default_argument_type'] = 'raw';
  $handler->display->display_options['arguments']['field_client_ref_target_id']['default_argument_options']['index'] = '1';
  $handler->display->display_options['arguments']['field_client_ref_target_id']['default_argument_options']['use_alias'] = TRUE;
  $handler->display->display_options['arguments']['field_client_ref_target_id']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_client_ref_target_id']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_client_ref_target_id']['summary_options']['items_per_page'] = '25';
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
  $translatables['check_in'] = array(
    t('Master'),
    t('<none>'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('author'),
    t('Client Ref'),
    t('PHP'),
    t('Bodyfat Loss %'),
    t('CM Loss'),
    t('MM Loss'),
    t('Diet Adherence'),
    t('Average Daily Activity'),
    t('Training Sessions Completed'),
    t('Personal Records'),
    t('<div class="current-stats">
  <h2 class="block-title">Current Stats</h2>
  <div class="stats">
    <div class="stats-content">
    </div> 
    <div class="stats-content">
      <table>
        <tr>
          <td>Percent Bodyfat Lost</td>
          <td>[php]%</td>
        </tr>
        <tr>
          <td>CM Loss</td>
          <td>[php_1]</td>
        </tr>
        <tr>
          <td>MM Loss</td>
          <td>[php_2]</td>
        </tr>
        <tr>
          <td>Diet Adherence</td>
          <td>[php_3]</td>
        </tr>
        <tr>
          <td>Average Daily Activity</td>
          <td>[php_4]</td>
        </tr>
         <tr>
          <td>Training Sessions Completed</td>
          <td>[field_training_sessions_complete]</td>
        </tr>
         <tr>
          <td>Personal Records</td>
          <td>[field_personal_records]</td>
        </tr>
      </table>
    </div>
</div>
</div>'),
    t('All'),
    t('Block'),
    t('Check IN'),
  );
  $export['check_in'] = $view;

  return $export;
}
