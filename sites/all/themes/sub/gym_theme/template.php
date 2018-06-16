<?php
/**
 * @file
 * The primary PHP file for this theme.
 */


/**
 * Implements hook_preprocess_page().
 */
function gym_theme_preprocess_page(&$vars, $hook) {
  $path = current_path();
  $alias = drupal_get_path_alias($path);
  $theme_path = drupal_get_path('theme', 'gym_theme');
  $slick_lib = libraries_get_path('slick');
  drupal_add_js($slick_lib .'/slick/slick.min.js');
  drupal_add_css($slick_lib .'/slick/slick.css');
  drupal_add_css($slick_lib .'/slick/slick-theme.css');
  drupal_add_css($theme_path . '/css/home.css');

  if (drupal_is_front_page()) {
    drupal_add_js($theme_path . '/js/wow.min.js');
    drupal_add_js("new WOW().init()", 'inline');
    drupal_add_css($theme_path . '/css/animate.css');
    drupal_add_js($theme_path . '/js/home.js');
    drupal_add_css($theme_path . '/css/home.css');
  }

  $alias = drupal_get_path_alias();
  $pattern = 'dashboard/*';
  if (drupal_match_path($path, $pattern)) {
    drupal_add_css($theme_path . '/css/dashboard.css');
  }
  switch ($alias) {
    case 'days-on-plan-leaderboard':
    case 'mass-lost-leaderboard':
      drupal_add_css($theme_path . '/css/dashboard.css');
      break;

    case 'iron-fitness':
    case 'iron-bodies':
    case 'iron-academy':
    case 'iron-fitness-youth':
      drupal_add_css($theme_path . '/css/category_lp.css');
      break;
  }
  if (isset($vars['node']->type) && $vars['node']->type == 'blogs') {
    // If the content type's machine name is "my_machine_name" the file
    // name will be "page--my-machine-name.tpl.php".
    drupal_add_css($theme_path . '/css/blogs.css');
    // $vars['theme_hook_suggestions'][] = 'page__blog';
  }
}

/**
 * Implements hook_preprocess_node().
 */
function gym_theme_preprocess_node(&$variables) {
  $theme_path = drupal_get_path('theme', 'gym_theme');
  if (isset($variables['uid'])) {
    $uid = user_load($variables['uid']);
    $name = $uid->name;
    $variables['user_name'] = "By " . $name;

    $creation_date = $variables['created'];
    $creation_date = date('F j, Y', $creation_date);
    $variables['creation_date'] = $creation_date;

    $variables['comment_total'] = $variables['comment_count'];
    $comments_data = array();

    if (isset($variables['content']['comments']['comments']) && !empty($variables['content']['comments']['comments'])) {
      $comments = $variables['content']['comments']['comments'];

      foreach ($comments as $key => $value) {
        if (is_numeric($key)) {
          $comments_data[$key]['name'] = $value['comment_body']['#object']->name;
          $post_date = $value['comment_body']['#object']->created;
          $post_date = date('F j, Y g:ia', $post_date);
          $comments_data[$key]['post_date'] = $post_date;
          $pic_id = !empty($value['comment_body']['#object']->picture) ? $value['comment_body']['#object']->picture: NULL ;
          $comments_data[$key]['comment'] = $value['comment_body']['#object']->comment_body['und'][0]['value'];
          if (!empty($pic_id)) {
            $pic = file_load($pic_id);
            $profile_pic = image_style_url('thumbnail', $pic->uri);
            $comments_data[$key]['pic'] = $profile_pic;
          }
          else {
            $comments_data[$key]['pic'] = '';
          }
        }
      }
    }
  }

  $variables['comments_data'] = $comments_data;
}

function gym_theme_menu_tree(&$variables) {
  return '<div class="nav-collapse"><ul class="menu nav">' . $variables['tree'] . '</ul></div>'; // added the nav-collapse wrapper so you can hide the nav at small size
}


function gym_theme_menu_link(array $variables) {
  $element = $variables['element'];
  $sub_menu = '';

    if ($element['#below']) {
    // Ad our own wrapper
    unset($element['#below']['#theme_wrappers']);
    $sub_menu = '<ul>' . drupal_render($element['#below']) . '</ul>'; // removed flyout class in ul
    unset($element['#localized_options']['attributes']['class']); // removed flydown class
    unset($element['#localized_options']['attributes']['data-toggle']); // removed data toggler

    // Check if this element is nested within another
    if ((!empty($element['#original_link']['depth'])) && ($element['#original_link']['depth'] > 1)) {

      unset($element['#attributes']['class']); // removed flyout class
    }
    else {
      unset($element['#attributes']['class']); // unset flyout class
      $element['#localized_options']['html'] = TRUE;
      $element['#title'] .= ''; // removed carat spans flyout
    }

    // Set dropdown trigger element to # to prevent inadvertent page loading with submenu click
    $element['#localized_options']['attributes']['data-target'] = '#'; // You could unset this too as its no longer necessary.
  }

  $output = l($element['#title'], $element['#href'], $element['#localized_options']);
  return '<li' . drupal_attributes($element['#attributes']) . '>' . $output . $sub_menu . "</li>\n";
}
