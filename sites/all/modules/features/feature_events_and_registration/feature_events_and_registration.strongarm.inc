<?php
/**
 * @file
 * feature_events_and_registration.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function feature_events_and_registration_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'additional_settings__active_tab_event';
  $strongarm->value = 'edit-registration';
  $export['additional_settings__active_tab_event'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_anonymous_event';
  $strongarm->value = 0;
  $export['comment_anonymous_event'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_mode_event';
  $strongarm->value = 1;
  $export['comment_default_mode_event'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_per_page_event';
  $strongarm->value = '50';
  $export['comment_default_per_page_event'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_event';
  $strongarm->value = '1';
  $export['comment_event'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_form_location_event';
  $strongarm->value = 1;
  $export['comment_form_location_event'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_preview_event';
  $strongarm->value = '1';
  $export['comment_preview_event'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_subject_field_event';
  $strongarm->value = 1;
  $export['comment_subject_field_event'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_node_registration__event';
  $strongarm->value = array(
    'view_modes' => array(),
    'extra_fields' => array(
      'form' => array(
        'email' => array(
          'weight' => '4',
        ),
        'account' => array(
          'weight' => '2',
        ),
        'slots' => array(
          'weight' => '1',
        ),
        'attended' => array(
          'weight' => '0',
        ),
      ),
      'display' => array(),
    ),
  );
  $export['field_bundle_settings_node_registration__event'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_node__event';
  $strongarm->value = array(
    'view_modes' => array(
      'full' => array(
        'custom_settings' => FALSE,
      ),
      'teaser' => array(
        'custom_settings' => FALSE,
      ),
      'rss' => array(
        'custom_settings' => FALSE,
      ),
      'token' => array(
        'custom_settings' => FALSE,
      ),
    ),
    'extra_fields' => array(
      'form' => array(
        'title' => array(
          'weight' => '0',
        ),
        'path' => array(
          'weight' => '6',
        ),
      ),
      'display' => array(
        'registration_link' => array(
          'default' => array(
            'weight' => '6',
            'visible' => TRUE,
          ),
        ),
        'registration_form' => array(
          'default' => array(
            'weight' => '7',
            'visible' => FALSE,
          ),
        ),
        'registration_slots_left' => array(
          'default' => array(
            'weight' => '5',
            'visible' => TRUE,
          ),
        ),
        'registration_unregistrable_reason' => array(
          'default' => array(
            'weight' => '10',
            'visible' => FALSE,
          ),
        ),
      ),
    ),
  );
  $export['field_bundle_settings_node__event'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'language_content_type_event';
  $strongarm->value = '0';
  $export['language_content_type_event'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_options_event';
  $strongarm->value = array();
  $export['menu_options_event'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_parent_event';
  $strongarm->value = 'main-menu:0';
  $export['menu_parent_event'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_event';
  $strongarm->value = array(
    0 => 'status',
    1 => 'promote',
  );
  $export['node_options_event'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_preview_event';
  $strongarm->value = '1';
  $export['node_preview_event'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_registration_type_settings_event';
  $strongarm->value = array(
    'toggle_enabled_in_node_form' => 1,
    'no_register_page' => 0,
    'allow_registration_until' => '1 day',
    'registration_success_message' => 'Ilmoittautumisesi on tallennettu!',
    'allow_cancellation_until' => '1 day',
    'allow_exceeding_capacity' => 1,
    'max_slots_per_registration_authenticated' => 0,
    'max_slots_per_registration_anonymous' => 1,
    'allow_email_change' => 0,
    'require_email_verification' => FALSE,
    'sender_name' => '',
    'sender_mail' => '',
    'send_mail_to_registree' => 1,
    'mail_to_registree_bcc' => '',
    'mail_to_registree_subject' => 'Olet ilmoittautunut tapahtumaan [node:title]',
    'mail_to_registree_body' => 'Olet ilmoittautunut tapahtumaan [node:title] sähköpostiosoitteellasi [node-registration:email]. Tervetuloa mukaan!

Tarvittaessa voit perua ilmoittautumisesi täällä: [node-registration:cancel-url]

Terveisin,
Käyttäjän Ystävät ry:n hallitus',
    'change_mail_for_waiting_list_registree' => 1,
    'mail_for_waiting_list_registree_subject' => 'Olet jonossa tapahtumaan [node:title]',
    'mail_for_waiting_list_registree_body' => 'Olet ilmoittautunut tapahtumaan [node:title], mutta olet jonotuslistalla. Sinulle ilmoitetaan sähköpostitse, jos mahdut mukaan.

Voit tarvittaessa perua ilmoittautumisesi täällä: [node-registration:cancel-url]

Tervesin,
Käyttäjän Ystävät ry:n hallitus',
    'send_mail_to_admin' => 0,
    'mail_to_admin_recipients' => 'admin@localhost',
    'mail_to_admin_subject' => 'Somebody\'s registered for: [node:title]',
    'mail_to_admin_body' => 'This is what they entered:

E-mail address: [node-registration:email]

To view the registration, go to [node-registration:url].',
    'send_reminder_mail_to_registrees' => 0,
    'send_reminders_before' => '1 day',
    'reminder_mail_to_registrees_subject' => '[node:title] begins in [node:time-left]',
    'reminder_mail_to_registrees_body' => 'Hey [node-registration:email],

this [node:content-type:name] starts in [node:time-left].

Don\'t forget to go! It begins at [node:event-start].',
    'send_cancel_mail_to_registree' => 0,
    'cancel_mail_to_registree_bcc' => '',
    'cancel_mail_to_registree_subject' => 'Peruit osallistumisesi tapahtumaan [node:title]',
    'cancel_mail_to_registree_body' => ':(',
    'send_cancel_mail_to_admin' => 0,
    'cancel_mail_to_admin_recipients' => 'admin@localhost',
    'cancel_mail_to_admin_subject' => 'Somebody\'s cancelled for: [node:title]',
    'cancel_mail_to_admin_body' => 'They had ID [node-registration:registration-id] but it\'s now gone...',
    'send_unwaitinglist_mail_to_registree' => 1,
    'unwaitinglist_mail_to_registree_subject' => '[node:title] - tervetuloa mukaan!',
    'unwaitinglist_mail_to_registree_body' => 'Onneksi olkoon!

Joku perui osallistumisensa tapahtumaan [node:title], joten mahduit vielä mukaan. Tapahtuma alkaa [node:event-start].

Katso lisätiedot: [node:url:absolute]

Jos haluatkin perua osallistumisesi, se onnistuu täällä: [node-registration:cancel-url]

Terveisin,
Käyttäjän Ystävät ry:n hallitus',
    'show_message_access' => 1,
    'show_message_date' => 1,
    'show_message_capacity' => 1,
    'show_message_registered' => 1,
    'date_field' => 'field_datetime',
    'max_registration_date_field' => 'field_registration_period:value2',
    'min_registration_date_field' => 'field_registration_period',
    'capacity_field' => 'field_capacity',
    'status' => 1,
    'capacity' => 20,
  );
  $export['node_registration_type_settings_event'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_submitted_event';
  $strongarm->value = 0;
  $export['node_submitted_event'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'save_continue_event';
  $strongarm->value = 'Tallenna ja lisää kenttiä';
  $export['save_continue_event'] = $strongarm;

  return $export;
}
