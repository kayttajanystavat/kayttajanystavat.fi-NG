<?php
/**
 * @file
 * feature_basic_structure.features.user_role.inc
 */

/**
 * Implements hook_user_default_roles().
 */
function feature_basic_structure_user_default_roles() {
  $roles = array();

  // Exported role: Hallituksen jäsen.
  $roles['Hallituksen jäsen'] = array(
    'name' => 'Hallituksen jäsen',
    'weight' => 3,
  );

  // Exported role: Yhdistyksen jäsen.
  $roles['Yhdistyksen jäsen'] = array(
    'name' => 'Yhdistyksen jäsen',
    'weight' => 2,
  );

  return $roles;
}
