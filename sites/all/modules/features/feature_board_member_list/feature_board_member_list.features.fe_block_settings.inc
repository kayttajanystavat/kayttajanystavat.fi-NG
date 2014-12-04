<?php
/**
 * @file
 * feature_board_member_list.features.fe_block_settings.inc
 */

/**
 * Implements hook_default_fe_block_settings().
 */
function feature_board_member_list_default_fe_block_settings() {
  $export = array();

  $export['version'] = '2.0';

  $export['views-kay_board_current-block'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'kay_board_current-block',
    'module' => 'views',
    'node_types' => array(),
    'pages' => 'yhdistys',
    'roles' => array(),
    'themes' => array(
      'kay_default' => array(
        'region' => 'content',
        'status' => 1,
        'theme' => 'kay_default',
        'weight' => -4,
      ),
    ),
    'title' => '',
    'visibility' => 1,
  );

  return $export;
}
