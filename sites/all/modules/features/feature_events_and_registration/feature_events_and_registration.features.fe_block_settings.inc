<?php
/**
 * @file
 * feature_events_and_registration.features.fe_block_settings.inc
 */

/**
 * Implements hook_default_fe_block_settings().
 */
function feature_events_and_registration_default_fe_block_settings() {
  $export = array();

  $export['version'] = '2.0';

  $export['views-kay_events_upcoming-block_1'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'kay_events_upcoming-block_1',
    'module' => 'views',
    'node_types' => array(),
    'pages' => '<front>',
    'roles' => array(),
    'themes' => array(
      'kay_default' => array(
        'region' => 'content',
        'status' => 1,
        'theme' => 'kay_default',
        'weight' => -10,
      ),
    ),
    'title' => '',
    'visibility' => 1,
  );

  return $export;
}
