<?php
/**
 * @file
 * feature_pages.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function feature_pages_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function feature_pages_node_info() {
  $items = array(
    'page' => array(
      'name' => t('Sivu'),
      'base' => 'node_content',
      'description' => t('Tavallinen sisältösivu'),
      'has_title' => '1',
      'title_label' => t('Otsikko'),
      'help' => '',
    ),
  );
  return $items;
}
