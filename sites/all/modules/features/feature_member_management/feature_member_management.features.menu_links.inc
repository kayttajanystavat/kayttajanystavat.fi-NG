<?php
/**
 * @file
 * feature_member_management.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function feature_member_management_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: main-menu_liity-jseneksi:user/register
  $menu_links['main-menu_liity-jseneksi:user/register'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'user/register',
    'router_path' => 'user/register',
    'link_title' => 'Liity jäseneksi',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_liity-jseneksi:user/register',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 40,
    'customized' => 1,
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Liity jäseneksi');


  return $menu_links;
}
