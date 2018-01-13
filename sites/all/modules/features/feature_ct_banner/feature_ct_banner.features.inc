<?php
/**
 * @file
 * feature_ct_banner.features.inc
 */

/**
 * Implements hook_views_api().
 */
function feature_ct_banner_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_image_default_styles().
 */
function feature_ct_banner_image_default_styles() {
  $styles = array();

  // Exported image style: banner.
  $styles['banner'] = array(
    'label' => 'Banner',
    'effects' => array(
      1 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 1500,
          'height' => 400,
        ),
        'weight' => 1,
      ),
    ),
  );

  return $styles;
}
