<?php
/**
 * @file
 * feature_member_management.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function feature_member_management_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}
