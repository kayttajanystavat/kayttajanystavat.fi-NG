<?php
/**
 * @file
 * feature_basic_structure.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function feature_basic_structure_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}
