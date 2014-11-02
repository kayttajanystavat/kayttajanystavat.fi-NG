<?php
/**
 * @file
 * feature_member_management.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function feature_member_management_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'members';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'users';
  $view->human_name = 'Jäsenet';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Jäsenet';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'lisää';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['access']['perm'] = 'access user profiles';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Suodata';
  $handler->display->display_options['exposed_form']['options']['reset_button'] = TRUE;
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Näytä kaikki';
  $handler->display->display_options['exposed_form']['options']['exposed_sorts_label'] = 'Lajittele';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '50';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_label'] = 'Merkintöjä sivua kohti';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options_all_label'] = '- Kaikki -';
  $handler->display->display_options['pager']['options']['tags']['first'] = '« ensimmäinen';
  $handler->display->display_options['pager']['options']['tags']['previous'] = '‹ edellinen';
  $handler->display->display_options['pager']['options']['tags']['next'] = 'seuraava ›';
  $handler->display->display_options['pager']['options']['tags']['last'] = 'viimeinen »';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'field_last_name' => 'field_last_name',
    'field_first_name' => 'field_first_name',
    'field_home_municipality' => 'field_home_municipality',
    'field_phone_number' => 'field_phone_number',
    'mail' => 'mail',
    'field_member_type' => 'field_member_type',
    'field_ayy_member' => 'field_ayy_member',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'field_last_name' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_first_name' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_home_municipality' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_phone_number' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'mail' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_member_type' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_ayy_member' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['style_options']['sticky'] = TRUE;
  /* Otsikko: Yleinen: Tulosten yhteenveto */
  $handler->display->display_options['header']['result']['id'] = 'result';
  $handler->display->display_options['header']['result']['table'] = 'views';
  $handler->display->display_options['header']['result']['field'] = 'result';
  $handler->display->display_options['header']['result']['empty'] = TRUE;
  $handler->display->display_options['header']['result']['content'] = 'Tuloksia: @total kpl';
  /* Kenttä: Bulk operations: Käyttäjä */
  $handler->display->display_options['fields']['views_bulk_operations']['id'] = 'views_bulk_operations';
  $handler->display->display_options['fields']['views_bulk_operations']['table'] = 'users';
  $handler->display->display_options['fields']['views_bulk_operations']['field'] = 'views_bulk_operations';
  $handler->display->display_options['fields']['views_bulk_operations']['label'] = '';
  $handler->display->display_options['fields']['views_bulk_operations']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['display_type'] = '1';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['enable_select_all_pages'] = 1;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['force_single'] = 0;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['entity_load_capacity'] = '10';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['skip_batching'] = 1;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_operations'] = array(
    'action::views_bulk_operations_user_cancel_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::views_bulk_operations_delete_item' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::views_bulk_operations_delete_revision' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::views_bulk_operations_script_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::system_send_email_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::views_bulk_operations_modify_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
      'settings' => array(
        'show_all_tokens' => 0,
        'display_values' => array(
          '_all_' => '_all_',
        ),
      ),
    ),
    'action::views_bulk_operations_user_roles_action' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 1,
      'override_label' => 1,
      'label' => 'Muokkaa jäsenyyksiä',
    ),
    'action::views_bulk_operations_argument_selector_action' => array(
      'selected' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
      'settings' => array(
        'url' => '',
      ),
    ),
    'action::pathauto_user_update_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::node_registration_send_mail_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::user_block_user_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
  );
  /* Kenttä: Käyttäjä: Sukunimi */
  $handler->display->display_options['fields']['field_last_name']['id'] = 'field_last_name';
  $handler->display->display_options['fields']['field_last_name']['table'] = 'field_data_field_last_name';
  $handler->display->display_options['fields']['field_last_name']['field'] = 'field_last_name';
  /* Kenttä: Käyttäjä: Etunimi */
  $handler->display->display_options['fields']['field_first_name']['id'] = 'field_first_name';
  $handler->display->display_options['fields']['field_first_name']['table'] = 'field_data_field_first_name';
  $handler->display->display_options['fields']['field_first_name']['field'] = 'field_first_name';
  /* Kenttä: Käyttäjä: Kotikunta */
  $handler->display->display_options['fields']['field_home_municipality']['id'] = 'field_home_municipality';
  $handler->display->display_options['fields']['field_home_municipality']['table'] = 'field_data_field_home_municipality';
  $handler->display->display_options['fields']['field_home_municipality']['field'] = 'field_home_municipality';
  /* Kenttä: Käyttäjä: Puhelinnumero */
  $handler->display->display_options['fields']['field_phone_number']['id'] = 'field_phone_number';
  $handler->display->display_options['fields']['field_phone_number']['table'] = 'field_data_field_phone_number';
  $handler->display->display_options['fields']['field_phone_number']['field'] = 'field_phone_number';
  /* Kenttä: Käyttäjä: Sähköposti */
  $handler->display->display_options['fields']['mail']['id'] = 'mail';
  $handler->display->display_options['fields']['mail']['table'] = 'users';
  $handler->display->display_options['fields']['mail']['field'] = 'mail';
  /* Kenttä: Käyttäjä: Jäsentyyppi */
  $handler->display->display_options['fields']['field_member_type']['id'] = 'field_member_type';
  $handler->display->display_options['fields']['field_member_type']['table'] = 'field_data_field_member_type';
  $handler->display->display_options['fields']['field_member_type']['field'] = 'field_member_type';
  /* Kenttä: Käyttäjä: AYY:n jäsen */
  $handler->display->display_options['fields']['field_ayy_member']['id'] = 'field_ayy_member';
  $handler->display->display_options['fields']['field_ayy_member']['table'] = 'field_data_field_ayy_member';
  $handler->display->display_options['fields']['field_ayy_member']['field'] = 'field_ayy_member';
  /* Kenttä: Käyttäjä: Muokkaa linkkiä */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'users';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['label'] = 'Muokkaa';
  /* Kenttä: Käyttäjä: Peruuta linkki */
  $handler->display->display_options['fields']['cancel_node']['id'] = 'cancel_node';
  $handler->display->display_options['fields']['cancel_node']['table'] = 'users';
  $handler->display->display_options['fields']['cancel_node']['field'] = 'cancel_node';
  $handler->display->display_options['fields']['cancel_node']['label'] = 'Poista';
  $handler->display->display_options['fields']['cancel_node']['text'] = 'poista';
  /* Lajittelukriteeri: Käyttäjä: Luontipäivä */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'users';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Suodatinkriteeri: Käyttäjä: Käyttäjäroolit */
  $handler->display->display_options['filters']['rid_1']['id'] = 'rid_1';
  $handler->display->display_options['filters']['rid_1']['table'] = 'users_roles';
  $handler->display->display_options['filters']['rid_1']['field'] = 'rid';
  $handler->display->display_options['filters']['rid_1']['group'] = 1;
  $handler->display->display_options['filters']['rid_1']['exposed'] = TRUE;
  $handler->display->display_options['filters']['rid_1']['expose']['operator_id'] = 'rid_1_op';
  $handler->display->display_options['filters']['rid_1']['expose']['label'] = 'Käyttäjäroolit';
  $handler->display->display_options['filters']['rid_1']['expose']['operator'] = 'rid_1_op';
  $handler->display->display_options['filters']['rid_1']['expose']['identifier'] = 'rid_1';
  $handler->display->display_options['filters']['rid_1']['is_grouped'] = TRUE;
  $handler->display->display_options['filters']['rid_1']['group_info']['label'] = 'Jäsenyydet';
  $handler->display->display_options['filters']['rid_1']['group_info']['identifier'] = 'rid_1';
  $handler->display->display_options['filters']['rid_1']['group_info']['group_items'] = array(
    1 => array(
      'title' => 'Ei jäsen',
      'operator' => 'empty',
      'value' => array(
        'all' => 'all',
      ),
    ),
    2 => array(
      'title' => 'Yhdistyksen jäsen',
      'operator' => 'or',
      'value' => array(
        4 => '4',
      ),
    ),
    3 => array(
      'title' => 'Hallituksen jäsen',
      'operator' => 'or',
      'value' => array(
        5 => '5',
      ),
    ),
    4 => array(
      'title' => '',
      'operator' => 'or',
      'value' => array(),
    ),
  );
  /* Suodatinkriteeri: Käyttäjä: Käyttäjän ID */
  $handler->display->display_options['filters']['uid_raw']['id'] = 'uid_raw';
  $handler->display->display_options['filters']['uid_raw']['table'] = 'users';
  $handler->display->display_options['filters']['uid_raw']['field'] = 'uid_raw';
  $handler->display->display_options['filters']['uid_raw']['operator'] = '!=';
  $handler->display->display_options['filters']['uid_raw']['value']['value'] = '0';
  $handler->display->display_options['filters']['uid_raw']['group'] = 1;
  /* Suodatinkriteeri: Käyttäjä: Käyttäjän ID */
  $handler->display->display_options['filters']['uid_raw_1']['id'] = 'uid_raw_1';
  $handler->display->display_options['filters']['uid_raw_1']['table'] = 'users';
  $handler->display->display_options['filters']['uid_raw_1']['field'] = 'uid_raw';
  $handler->display->display_options['filters']['uid_raw_1']['operator'] = '!=';
  $handler->display->display_options['filters']['uid_raw_1']['value']['value'] = '1';
  $handler->display->display_options['filters']['uid_raw_1']['group'] = 1;
  /* Suodatinkriteeri: Käyttäjä: AYY:n jäsen (field_ayy_member) */
  $handler->display->display_options['filters']['field_ayy_member_value']['id'] = 'field_ayy_member_value';
  $handler->display->display_options['filters']['field_ayy_member_value']['table'] = 'field_data_field_ayy_member';
  $handler->display->display_options['filters']['field_ayy_member_value']['field'] = 'field_ayy_member_value';
  $handler->display->display_options['filters']['field_ayy_member_value']['group'] = 1;
  $handler->display->display_options['filters']['field_ayy_member_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_ayy_member_value']['expose']['operator_id'] = 'field_ayy_member_value_op';
  $handler->display->display_options['filters']['field_ayy_member_value']['expose']['label'] = 'AYY:n jäsen';
  $handler->display->display_options['filters']['field_ayy_member_value']['expose']['operator'] = 'field_ayy_member_value_op';
  $handler->display->display_options['filters']['field_ayy_member_value']['expose']['identifier'] = 'field_ayy_member_value';
  $handler->display->display_options['filters']['field_ayy_member_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    4 => 0,
    5 => 0,
  );
  /* Suodatinkriteeri: Käyttäjä: Jäsentyyppi (field_member_type) */
  $handler->display->display_options['filters']['field_member_type_value']['id'] = 'field_member_type_value';
  $handler->display->display_options['filters']['field_member_type_value']['table'] = 'field_data_field_member_type';
  $handler->display->display_options['filters']['field_member_type_value']['field'] = 'field_member_type_value';
  $handler->display->display_options['filters']['field_member_type_value']['group'] = 1;
  $handler->display->display_options['filters']['field_member_type_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_member_type_value']['expose']['operator_id'] = 'field_member_type_value_op';
  $handler->display->display_options['filters']['field_member_type_value']['expose']['label'] = 'Jäsentyyppi';
  $handler->display->display_options['filters']['field_member_type_value']['expose']['operator'] = 'field_member_type_value_op';
  $handler->display->display_options['filters']['field_member_type_value']['expose']['identifier'] = 'field_member_type_value';
  $handler->display->display_options['filters']['field_member_type_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    4 => 0,
    5 => 0,
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'admin/members';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Jäsenet';
  $handler->display->display_options['menu']['name'] = 'management';
  $translatables['members'] = array(
    t('Master'),
    t('Jäsenet'),
    t('lisää'),
    t('Suodata'),
    t('Näytä kaikki'),
    t('Lajittele'),
    t('Asc'),
    t('Desc'),
    t('Merkintöjä sivua kohti'),
    t('- Kaikki -'),
    t('Offset'),
    t('« ensimmäinen'),
    t('‹ edellinen'),
    t('seuraava ›'),
    t('viimeinen »'),
    t('Tuloksia: @total kpl'),
    t('- Choose an operation -'),
    t('Muokkaa jäsenyyksiä'),
    t('Sukunimi'),
    t('Etunimi'),
    t('Kotikunta'),
    t('Puhelinnumero'),
    t('Sähköposti'),
    t('Jäsentyyppi'),
    t('AYY:n jäsen'),
    t('Muokkaa'),
    t('Poista'),
    t('poista'),
    t('Käyttäjäroolit'),
    t('Jäsenyydet'),
    t('Page'),
  );
  $export['members'] = $view;

  return $export;
}
