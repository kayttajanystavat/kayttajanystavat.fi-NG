<?php
/**
 * @file
 * feature_basic_structure.features.fe_block_settings.inc
 */

/**
 * Implements hook_default_fe_block_settings().
 */
function feature_basic_structure_default_fe_block_settings() {
  $export = array();

  $export['version'] = '2.0';

  $export['block-introtext_conversations'] = array(
    'cache' => -1,
    'custom' => 0,
    'machine_name' => 'introtext_conversations',
    'module' => 'block',
    'node_types' => array(),
    'pages' => '<front>',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'kay_default' => array(
        'region' => 'content',
        'status' => 1,
        'theme' => 'kay_default',
        'weight' => -8,
      ),
    ),
    'title' => 'Keskustelemme alan asioista',
    'visibility' => 1,
  );

  $export['block-introtext_excursions'] = array(
    'cache' => -1,
    'custom' => 0,
    'machine_name' => 'introtext_excursions',
    'module' => 'block',
    'node_types' => array(),
    'pages' => '<front>',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'kay_default' => array(
        'region' => 'content',
        'status' => 1,
        'theme' => 'kay_default',
        'weight' => -9,
      ),
    ),
    'title' => 'Järjestämme ekskursioita',
    'visibility' => 1,
  );

  $export['block-introtext_goals'] = array(
    'cache' => -1,
    'custom' => 0,
    'machine_name' => 'introtext_goals',
    'module' => 'block',
    'node_types' => array(),
    'pages' => '<front>',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'kay_default' => array(
        'region' => 'content',
        'status' => 1,
        'theme' => 'kay_default',
        'weight' => -10,
      ),
    ),
    'title' => 'Yhdistämme ihmisiä monialaisesti',
    'visibility' => 1,
  );

  return $export;
}
