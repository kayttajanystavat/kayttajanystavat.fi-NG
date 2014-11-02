<?php
/**
 * @file
 * feature_member_management.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function feature_member_management_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'administer realname registration'.
  $permissions['administer realname registration'] = array(
    'name' => 'administer realname registration',
    'roles' => array(),
    'module' => 'realname_registration',
  );

  // Exported permission: 'create field_ayy_member'.
  $permissions['create field_ayy_member'] = array(
    'name' => 'create field_ayy_member',
    'roles' => array(
      'anonymous user' => 'anonymous user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'create field_first_name'.
  $permissions['create field_first_name'] = array(
    'name' => 'create field_first_name',
    'roles' => array(
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'create field_home_municipality'.
  $permissions['create field_home_municipality'] = array(
    'name' => 'create field_home_municipality',
    'roles' => array(
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'create field_last_name'.
  $permissions['create field_last_name'] = array(
    'name' => 'create field_last_name',
    'roles' => array(
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'create field_member_type'.
  $permissions['create field_member_type'] = array(
    'name' => 'create field_member_type',
    'roles' => array(
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'create field_membership_ended'.
  $permissions['create field_membership_ended'] = array(
    'name' => 'create field_membership_ended',
    'roles' => array(
      'anonymous user' => 'anonymous user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'create field_membership_ended_reason'.
  $permissions['create field_membership_ended_reason'] = array(
    'name' => 'create field_membership_ended_reason',
    'roles' => array(
      'anonymous user' => 'anonymous user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'create field_other_information'.
  $permissions['create field_other_information'] = array(
    'name' => 'create field_other_information',
    'roles' => array(
      'anonymous user' => 'anonymous user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'create field_phone_number'.
  $permissions['create field_phone_number'] = array(
    'name' => 'create field_phone_number',
    'roles' => array(
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit field_ayy_member'.
  $permissions['edit field_ayy_member'] = array(
    'name' => 'edit field_ayy_member',
    'roles' => array(
      'Hallituksen jäsen' => 'Hallituksen jäsen',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit field_first_name'.
  $permissions['edit field_first_name'] = array(
    'name' => 'edit field_first_name',
    'roles' => array(
      'Hallituksen jäsen' => 'Hallituksen jäsen',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit field_home_municipality'.
  $permissions['edit field_home_municipality'] = array(
    'name' => 'edit field_home_municipality',
    'roles' => array(
      'Hallituksen jäsen' => 'Hallituksen jäsen',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit field_last_name'.
  $permissions['edit field_last_name'] = array(
    'name' => 'edit field_last_name',
    'roles' => array(
      'Hallituksen jäsen' => 'Hallituksen jäsen',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit field_member_type'.
  $permissions['edit field_member_type'] = array(
    'name' => 'edit field_member_type',
    'roles' => array(
      'Hallituksen jäsen' => 'Hallituksen jäsen',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit field_membership_ended'.
  $permissions['edit field_membership_ended'] = array(
    'name' => 'edit field_membership_ended',
    'roles' => array(
      'Hallituksen jäsen' => 'Hallituksen jäsen',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit field_membership_ended_reason'.
  $permissions['edit field_membership_ended_reason'] = array(
    'name' => 'edit field_membership_ended_reason',
    'roles' => array(
      'Hallituksen jäsen' => 'Hallituksen jäsen',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit field_other_information'.
  $permissions['edit field_other_information'] = array(
    'name' => 'edit field_other_information',
    'roles' => array(
      'Hallituksen jäsen' => 'Hallituksen jäsen',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit field_phone_number'.
  $permissions['edit field_phone_number'] = array(
    'name' => 'edit field_phone_number',
    'roles' => array(
      'Hallituksen jäsen' => 'Hallituksen jäsen',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_ayy_member'.
  $permissions['edit own field_ayy_member'] = array(
    'name' => 'edit own field_ayy_member',
    'roles' => array(
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_first_name'.
  $permissions['edit own field_first_name'] = array(
    'name' => 'edit own field_first_name',
    'roles' => array(
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_home_municipality'.
  $permissions['edit own field_home_municipality'] = array(
    'name' => 'edit own field_home_municipality',
    'roles' => array(
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_last_name'.
  $permissions['edit own field_last_name'] = array(
    'name' => 'edit own field_last_name',
    'roles' => array(
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_member_type'.
  $permissions['edit own field_member_type'] = array(
    'name' => 'edit own field_member_type',
    'roles' => array(
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_membership_ended'.
  $permissions['edit own field_membership_ended'] = array(
    'name' => 'edit own field_membership_ended',
    'roles' => array(
      'Hallituksen jäsen' => 'Hallituksen jäsen',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_membership_ended_reason'.
  $permissions['edit own field_membership_ended_reason'] = array(
    'name' => 'edit own field_membership_ended_reason',
    'roles' => array(
      'Hallituksen jäsen' => 'Hallituksen jäsen',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_other_information'.
  $permissions['edit own field_other_information'] = array(
    'name' => 'edit own field_other_information',
    'roles' => array(
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_phone_number'.
  $permissions['edit own field_phone_number'] = array(
    'name' => 'edit own field_phone_number',
    'roles' => array(
      'Hallituksen jäsen' => 'Hallituksen jäsen',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view field_ayy_member'.
  $permissions['view field_ayy_member'] = array(
    'name' => 'view field_ayy_member',
    'roles' => array(
      'Hallituksen jäsen' => 'Hallituksen jäsen',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view field_first_name'.
  $permissions['view field_first_name'] = array(
    'name' => 'view field_first_name',
    'roles' => array(
      'Hallituksen jäsen' => 'Hallituksen jäsen',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view field_home_municipality'.
  $permissions['view field_home_municipality'] = array(
    'name' => 'view field_home_municipality',
    'roles' => array(
      'Hallituksen jäsen' => 'Hallituksen jäsen',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view field_last_name'.
  $permissions['view field_last_name'] = array(
    'name' => 'view field_last_name',
    'roles' => array(
      'Hallituksen jäsen' => 'Hallituksen jäsen',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view field_member_type'.
  $permissions['view field_member_type'] = array(
    'name' => 'view field_member_type',
    'roles' => array(
      'Hallituksen jäsen' => 'Hallituksen jäsen',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view field_membership_ended'.
  $permissions['view field_membership_ended'] = array(
    'name' => 'view field_membership_ended',
    'roles' => array(
      'Hallituksen jäsen' => 'Hallituksen jäsen',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view field_membership_ended_reason'.
  $permissions['view field_membership_ended_reason'] = array(
    'name' => 'view field_membership_ended_reason',
    'roles' => array(
      'Hallituksen jäsen' => 'Hallituksen jäsen',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view field_other_information'.
  $permissions['view field_other_information'] = array(
    'name' => 'view field_other_information',
    'roles' => array(
      'Hallituksen jäsen' => 'Hallituksen jäsen',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view field_phone_number'.
  $permissions['view field_phone_number'] = array(
    'name' => 'view field_phone_number',
    'roles' => array(
      'Hallituksen jäsen' => 'Hallituksen jäsen',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_ayy_member'.
  $permissions['view own field_ayy_member'] = array(
    'name' => 'view own field_ayy_member',
    'roles' => array(
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_first_name'.
  $permissions['view own field_first_name'] = array(
    'name' => 'view own field_first_name',
    'roles' => array(
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_home_municipality'.
  $permissions['view own field_home_municipality'] = array(
    'name' => 'view own field_home_municipality',
    'roles' => array(
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_last_name'.
  $permissions['view own field_last_name'] = array(
    'name' => 'view own field_last_name',
    'roles' => array(
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_member_type'.
  $permissions['view own field_member_type'] = array(
    'name' => 'view own field_member_type',
    'roles' => array(
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_membership_ended'.
  $permissions['view own field_membership_ended'] = array(
    'name' => 'view own field_membership_ended',
    'roles' => array(
      'Hallituksen jäsen' => 'Hallituksen jäsen',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_membership_ended_reason'.
  $permissions['view own field_membership_ended_reason'] = array(
    'name' => 'view own field_membership_ended_reason',
    'roles' => array(
      'Hallituksen jäsen' => 'Hallituksen jäsen',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_other_information'.
  $permissions['view own field_other_information'] = array(
    'name' => 'view own field_other_information',
    'roles' => array(
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_phone_number'.
  $permissions['view own field_phone_number'] = array(
    'name' => 'view own field_phone_number',
    'roles' => array(
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'field_permissions',
  );

  return $permissions;
}
