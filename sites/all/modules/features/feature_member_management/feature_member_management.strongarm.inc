<?php
/**
 * @file
 * feature_member_management.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function feature_member_management_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'realname_registration_firstname_field';
  $strongarm->value = 'field_first_name';
  $export['realname_registration_firstname_field'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'realname_registration_format';
  $strongarm->value = '5';
  $export['realname_registration_format'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'realname_registration_lastname_field';
  $strongarm->value = 'field_last_name';
  $export['realname_registration_lastname_field'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'realname_registration_middlename_field';
  $strongarm->value = '';
  $export['realname_registration_middlename_field'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'realname_registration_tolower';
  $strongarm->value = 1;
  $export['realname_registration_tolower'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'realname_registration_ucfirst';
  $strongarm->value = 0;
  $export['realname_registration_ucfirst'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'realname_registration_use_validation';
  $strongarm->value = 0;
  $export['realname_registration_use_validation'] = $strongarm;

  return $export;
}
