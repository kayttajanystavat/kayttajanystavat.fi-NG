<?php
/**
 * @file
 * feature_board_member_list.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function feature_board_member_list_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'create board_member content'.
  $permissions['create board_member content'] = array(
    'name' => 'create board_member content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete any board_member content'.
  $permissions['delete any board_member content'] = array(
    'name' => 'delete any board_member content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete own board_member content'.
  $permissions['delete own board_member content'] = array(
    'name' => 'delete own board_member content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit any board_member content'.
  $permissions['edit any board_member content'] = array(
    'name' => 'edit any board_member content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit own board_member content'.
  $permissions['edit own board_member content'] = array(
    'name' => 'edit own board_member content',
    'roles' => array(),
    'module' => 'node',
  );

  return $permissions;
}
