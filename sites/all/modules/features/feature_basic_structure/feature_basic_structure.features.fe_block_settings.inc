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

  $export['block-kay_footer_about'] = array(
    'cache' => -1,
    'custom' => 0,
    'machine_name' => 'kay_footer_about',
    'module' => 'block',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'kay_default' => array(
        'region' => 'footer',
        'status' => 1,
        'theme' => 'kay_default',
        'weight' => 0,
      ),
    ),
    'title' => 'Mikä Käyttäjän ystävät?',
    'visibility' => 0,
  );

  $export['block-kay_footer_contact'] = array(
    'cache' => -1,
    'custom' => 0,
    'machine_name' => 'kay_footer_contact',
    'module' => 'block',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'kay_default' => array(
        'region' => 'footer',
        'status' => 1,
        'theme' => 'kay_default',
        'weight' => 1,
      ),
    ),
    'title' => 'Yhteystiedot',
    'visibility' => 0,
  );

  return $export;
}
