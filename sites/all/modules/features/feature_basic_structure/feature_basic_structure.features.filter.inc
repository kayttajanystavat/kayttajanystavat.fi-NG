<?php
/**
 * @file
 * feature_basic_structure.features.filter.inc
 */

/**
 * Implements hook_filter_default_formats().
 */
function feature_basic_structure_filter_default_formats() {
  $formats = array();

  // Exported format: Täysi HTML.
  $formats['full_html'] = array(
    'format' => 'full_html',
    'name' => 'Täysi HTML',
    'cache' => 1,
    'status' => 1,
    'weight' => 0,
    'filters' => array(),
  );

  // Exported format: Plain text.
  $formats['plain_text'] = array(
    'format' => 'plain_text',
    'name' => 'Plain text',
    'cache' => 1,
    'status' => 1,
    'weight' => 10,
    'filters' => array(
      'filter_html_escape' => array(
        'weight' => 0,
        'status' => 1,
        'settings' => array(),
      ),
      'filter_url' => array(
        'weight' => 1,
        'status' => 1,
        'settings' => array(
          'filter_url_length' => 72,
        ),
      ),
      'filter_autop' => array(
        'weight' => 2,
        'status' => 1,
        'settings' => array(),
      ),
    ),
  );

  return $formats;
}
