<?php
/**
 * @file
 * feature_board_member_list.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function feature_board_member_list_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function feature_board_member_list_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_image_default_styles().
 */
function feature_board_member_list_image_default_styles() {
  $styles = array();

  // Exported image style: board_member.
  $styles['board_member'] = array(
    'name' => 'board_member',
    'label' => 'Hallitus',
    'effects' => array(
      1 => array(
        'label' => 'Skaalaa ja leikkaa',
        'help' => 'Skaala ja leikkaa toiminto säilyttää kuvan alkuperäisen kuvasuhteen leikkaamalla pois alkuperäisen kuvasuhteen ylittävän osuuden kuvasta. Tämä on käytännöllistä kun halutaan luoda täsmälleen neliön muotoisia pikakuvakkeita venyttämättä itse kuvaa.',
        'effect callback' => 'image_scale_and_crop_effect',
        'dimensions callback' => 'image_resize_dimensions',
        'form callback' => 'image_resize_form',
        'summary theme' => 'image_resize_summary',
        'module' => 'image',
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 400,
          'height' => 400,
        ),
        'weight' => 1,
      ),
    ),
  );

  return $styles;
}

/**
 * Implements hook_node_info().
 */
function feature_board_member_list_node_info() {
  $items = array(
    'board_member' => array(
      'name' => t('Hallituksen jäsen'),
      'base' => 'node_content',
      'description' => t('Näytetään julkisesti listana hallituksen jäsenistä'),
      'has_title' => '1',
      'title_label' => t('Nimi'),
      'help' => '',
    ),
  );
  return $items;
}
