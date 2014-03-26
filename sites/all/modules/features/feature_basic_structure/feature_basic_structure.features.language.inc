<?php
/**
 * @file
 * feature_basic_structure.features.language.inc
 */

/**
 * Implements hook_locale_default_languages().
 */
function feature_basic_structure_locale_default_languages() {
  $languages = array();

  // Exported language: en.
  $languages['en'] = array(
    'language' => 'en',
    'name' => 'English',
    'native' => 'English',
    'direction' => 0,
    'enabled' => 1,
    'plurals' => 0,
    'formula' => '',
    'domain' => '',
    'prefix' => '',
    'weight' => 0,
  );
  // Exported language: fi.
  $languages['fi'] = array(
    'language' => 'fi',
    'name' => 'Finnish',
    'native' => 'Suomi',
    'direction' => 0,
    'enabled' => 1,
    'plurals' => 2,
    'formula' => '($n!=1)',
    'domain' => '',
    'prefix' => 'fi',
    'weight' => 0,
  );
  return $languages;
}
