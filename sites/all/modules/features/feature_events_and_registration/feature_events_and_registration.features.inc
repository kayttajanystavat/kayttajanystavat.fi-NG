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
