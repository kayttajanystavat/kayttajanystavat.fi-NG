<?php
/**
 * @file
 * feature_events_and_registration.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function feature_events_and_registration_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'add event node registration'.
  $permissions['add event node registration'] = array(
    'name' => 'add event node registration',
    'roles' => array(
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'node_registration',
  );

  // Exported permission: 'administer node registration'.
  $permissions['administer node registration'] = array(
    'name' => 'administer node registration',
    'roles' => array(),
    'module' => 'node_registration',
  );

  // Exported permission: 'cancel own event node registration'.
  $permissions['cancel own event node registration'] = array(
    'name' => 'cancel own event node registration',
    'roles' => array(
      'Hallituksen jäsen' => 'Hallituksen jäsen',
      'Yhdistyksen jäsen' => 'Yhdistyksen jäsen',
    ),
    'module' => 'node_registration',
  );

  // Exported permission: 'create event content'.
  $permissions['create event content'] = array(
    'name' => 'create event content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'create field_diet_restrictions'.
  $permissions['create field_diet_restrictions'] = array(
    'name' => 'create field_diet_restrictions',
    'roles' => array(
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'create field_phone'.
  $permissions['create field_phone'] = array(
    'name' => 'create field_phone',
    'roles' => array(
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'delete any event content'.
  $permissions['delete any event content'] = array(
    'name' => 'delete any event content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete own event content'.
  $permissions['delete own event content'] = array(
    'name' => 'delete own event content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete own event node registration'.
  $permissions['delete own event node registration'] = array(
    'name' => 'delete own event node registration',
    'roles' => array(
      'Hallituksen jäsen' => 'Hallituksen jäsen',
      'Yhdistyksen jäsen' => 'Yhdistyksen jäsen',
    ),
    'module' => 'node_registration',
  );

  // Exported permission: 'edit any event content'.
  $permissions['edit any event content'] = array(
    'name' => 'edit any event content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit field_diet_restrictions'.
  $permissions['edit field_diet_restrictions'] = array(
    'name' => 'edit field_diet_restrictions',
    'roles' => array(
      'Hallituksen jäsen' => 'Hallituksen jäsen',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit field_phone'.
  $permissions['edit field_phone'] = array(
    'name' => 'edit field_phone',
    'roles' => array(
      'Hallituksen jäsen' => 'Hallituksen jäsen',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own event content'.
  $permissions['edit own event content'] = array(
    'name' => 'edit own event content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit own event node registration'.
  $permissions['edit own event node registration'] = array(
    'name' => 'edit own event node registration',
    'roles' => array(
      'Hallituksen jäsen' => 'Hallituksen jäsen',
      'Yhdistyksen jäsen' => 'Yhdistyksen jäsen',
    ),
    'module' => 'node_registration',
  );

  // Exported permission: 'edit own field_diet_restrictions'.
  $permissions['edit own field_diet_restrictions'] = array(
    'name' => 'edit own field_diet_restrictions',
    'roles' => array(
      'Hallituksen jäsen' => 'Hallituksen jäsen',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_phone'.
  $permissions['edit own field_phone'] = array(
    'name' => 'edit own field_phone',
    'roles' => array(
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'other node registration'.
  $permissions['other node registration'] = array(
    'name' => 'other node registration',
    'roles' => array(),
    'module' => 'node_registration',
  );

  // Exported permission: 'view event node registration'.
  $permissions['view event node registration'] = array(
    'name' => 'view event node registration',
    'roles' => array(
      'Hallituksen jäsen' => 'Hallituksen jäsen',
      'Yhdistyksen jäsen' => 'Yhdistyksen jäsen',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'node_registration',
  );

  // Exported permission: 'view field_diet_restrictions'.
  $permissions['view field_diet_restrictions'] = array(
    'name' => 'view field_diet_restrictions',
    'roles' => array(
      'Hallituksen jäsen' => 'Hallituksen jäsen',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view field_phone'.
  $permissions['view field_phone'] = array(
    'name' => 'view field_phone',
    'roles' => array(
      'Hallituksen jäsen' => 'Hallituksen jäsen',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own event node registration'.
  $permissions['view own event node registration'] = array(
    'name' => 'view own event node registration',
    'roles' => array(
      'Hallituksen jäsen' => 'Hallituksen jäsen',
      'Yhdistyksen jäsen' => 'Yhdistyksen jäsen',
    ),
    'module' => 'node_registration',
  );

  // Exported permission: 'view own field_diet_restrictions'.
  $permissions['view own field_diet_restrictions'] = array(
    'name' => 'view own field_diet_restrictions',
    'roles' => array(
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_phone'.
  $permissions['view own field_phone'] = array(
    'name' => 'view own field_phone',
    'roles' => array(
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'field_permissions',
  );

  return $permissions;
}
