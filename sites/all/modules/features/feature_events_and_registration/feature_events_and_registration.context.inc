<?php
/**
 * @file
 * feature_events_and_registration.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function feature_events_and_registration_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'kay_events_page';
  $context->description = 'Tapahtumat -sivu';
  $context->tag = '';
  $context->conditions = array(
    'views' => array(
      'values' => array(
        'kay_events_upcoming' => 'kay_events_upcoming',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-kay_events_recent-block' => array(
          'module' => 'views',
          'delta' => 'kay_events_recent-block',
          'region' => 'content',
          'weight' => '9',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Tapahtumat -sivu');
  $export['kay_events_page'] = $context;

  return $export;
}
