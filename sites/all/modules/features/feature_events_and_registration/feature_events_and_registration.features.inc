<?php
/**
 * @file
 * feature_events_and_registration.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function feature_events_and_registration_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "context" && $api == "context") {
    return array("version" => "3");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function feature_events_and_registration_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_image_default_styles().
 */
function feature_events_and_registration_image_default_styles() {
  $styles = array();

  // Exported image style: event.
  $styles['event'] = array(
    'name' => 'event',
    'label' => 'Tapahtuma',
    'effects' => array(
      2 => array(
        'label' => 'Skaalaa ja leikkaa',
        'help' => 'Skaala ja leikkaa toiminto säilyttää kuvan alkuperäisen kuvasuhteen leikkaamalla pois alkuperäisen kuvasuhteen ylittävän osuuden kuvasta. Tämä on käytännöllistä kun halutaan luoda täsmälleen neliön muotoisia pikakuvakkeita venyttämättä itse kuvaa.',
        'effect callback' => 'image_scale_and_crop_effect',
        'dimensions callback' => 'image_resize_dimensions',
        'form callback' => 'image_resize_form',
        'summary theme' => 'image_resize_summary',
        'module' => 'image',
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 500,
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
function feature_events_and_registration_node_info() {
  $items = array(
    'event' => array(
      'name' => t('Tapahtuma'),
      'base' => 'node_content',
      'description' => t('Excu, afterwork jne...'),
      'has_title' => '1',
      'title_label' => t('Tapahtuman nimi'),
      'help' => '',
    ),
  );
  return $items;
}
