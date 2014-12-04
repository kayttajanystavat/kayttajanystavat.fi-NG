<?php
/**
 * @file
 * feature_events_and_registration.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function feature_events_and_registration_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'kay_events_old';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'KaY Events Old';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Tapahtumia vuosien varrelta';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'lisää';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Käytä';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Palauta oletusarvoihin';
  $handler->display->display_options['exposed_form']['options']['exposed_sorts_label'] = 'Lajittele';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['style_options']['grouping'] = array(
    0 => array(
      'field' => 'field_datetime_1',
      'rendered' => 1,
      'rendered_strip' => 0,
    ),
  );
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['default_field_elements'] = FALSE;
  /* Kenttä: Sisältö: Otsikko */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['text'] = '[title], ';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Kenttä: Sisältö: Tapahtuman ajankohta */
  $handler->display->display_options['fields']['field_datetime']['id'] = 'field_datetime';
  $handler->display->display_options['fields']['field_datetime']['table'] = 'field_data_field_datetime';
  $handler->display->display_options['fields']['field_datetime']['field'] = 'field_datetime';
  $handler->display->display_options['fields']['field_datetime']['label'] = '';
  $handler->display->display_options['fields']['field_datetime']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_datetime']['settings'] = array(
    'format_type' => 'month_and_year',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Kenttä: Tapahtuman vuosi */
  $handler->display->display_options['fields']['field_datetime_1']['id'] = 'field_datetime_1';
  $handler->display->display_options['fields']['field_datetime_1']['table'] = 'field_data_field_datetime';
  $handler->display->display_options['fields']['field_datetime_1']['field'] = 'field_datetime';
  $handler->display->display_options['fields']['field_datetime_1']['ui_name'] = 'Tapahtuman vuosi';
  $handler->display->display_options['fields']['field_datetime_1']['label'] = '';
  $handler->display->display_options['fields']['field_datetime_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_datetime_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_datetime_1']['settings'] = array(
    'format_type' => 'year_only',
    'fromto' => 'value',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Lajittelukriteeri: Sisältö: Tapahtuman ajankohta -  start date (field_datetime) */
  $handler->display->display_options['sorts']['field_datetime_value']['id'] = 'field_datetime_value';
  $handler->display->display_options['sorts']['field_datetime_value']['table'] = 'field_data_field_datetime';
  $handler->display->display_options['sorts']['field_datetime_value']['field'] = 'field_datetime_value';
  $handler->display->display_options['sorts']['field_datetime_value']['order'] = 'DESC';
  /* Suodatinkriteeri: Sisältö: Julkaistu */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Suodatinkriteeri: Sisältö: Tyyppi */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'event' => 'event',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'tapahtumat/menneet';
  $translatables['kay_events_old'] = array(
    t('Master'),
    t('Tapahtumia vuosien varrelta'),
    t('lisää'),
    t('Käytä'),
    t('Palauta oletusarvoihin'),
    t('Lajittele'),
    t('Asc'),
    t('Desc'),
    t('[title], '),
    t('Page'),
  );
  $export['kay_events_old'] = $view;

  $view = new view();
  $view->name = 'kay_events_recent';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'KaY Events Recent';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Menneet tapahtumat';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'lisää';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Käytä';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Palauta oletusarvoihin';
  $handler->display->display_options['exposed_form']['options']['exposed_sorts_label'] = 'Lajittele';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Alatunniste: Yleinen: Tekstialue */
  $handler->display->display_options['footer']['area']['id'] = 'area';
  $handler->display->display_options['footer']['area']['table'] = 'views';
  $handler->display->display_options['footer']['area']['field'] = 'area';
  $handler->display->display_options['footer']['area']['label'] = 'Aikaisemmat tapahtumat';
  $handler->display->display_options['footer']['area']['content'] = '<div class="older-events"><a href="/tapahtumat/menneet">Kaikki menneet tapahtumat</a></div>';
  $handler->display->display_options['footer']['area']['format'] = 'full_html';
  /* Kenttä: Sisältö: Otsikko */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['text'] = '<h2>[title]</h2>';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Kenttä: Sisältö: Tapahtuman ajankohta */
  $handler->display->display_options['fields']['field_datetime']['id'] = 'field_datetime';
  $handler->display->display_options['fields']['field_datetime']['table'] = 'field_data_field_datetime';
  $handler->display->display_options['fields']['field_datetime']['field'] = 'field_datetime';
  $handler->display->display_options['fields']['field_datetime']['label'] = '';
  $handler->display->display_options['fields']['field_datetime']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_datetime']['settings'] = array(
    'format_type' => 'month_and_year',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Kenttä: Sisältö: Kertomus */
  $handler->display->display_options['fields']['field_story']['id'] = 'field_story';
  $handler->display->display_options['fields']['field_story']['table'] = 'field_data_field_story';
  $handler->display->display_options['fields']['field_story']['field'] = 'field_story';
  $handler->display->display_options['fields']['field_story']['label'] = '';
  $handler->display->display_options['fields']['field_story']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_story']['settings'] = array(
    'trim_length' => '600',
  );
  /* Lajittelukriteeri: Sisältö: Lähetetty */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Suodatinkriteeri: Sisältö: Julkaistu */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Suodatinkriteeri: Sisältö: Tyyppi */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'event' => 'event',
  );
  /* Suodatinkriteeri: Sisältö: Kertomus (field_story) */
  $handler->display->display_options['filters']['field_story_value']['id'] = 'field_story_value';
  $handler->display->display_options['filters']['field_story_value']['table'] = 'field_data_field_story';
  $handler->display->display_options['filters']['field_story_value']['field'] = 'field_story_value';
  $handler->display->display_options['filters']['field_story_value']['operator'] = 'not empty';

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $translatables['kay_events_recent'] = array(
    t('Master'),
    t('Menneet tapahtumat'),
    t('lisää'),
    t('Käytä'),
    t('Palauta oletusarvoihin'),
    t('Lajittele'),
    t('Asc'),
    t('Desc'),
    t('Aikaisemmat tapahtumat'),
    t('<div class="older-events"><a href="/tapahtumat/menneet">Kaikki menneet tapahtumat</a></div>'),
    t('<h2>[title]</h2>'),
    t('Block'),
  );
  $export['kay_events_recent'] = $view;

  $view = new view();
  $view->name = 'kay_events_upcoming';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'KaY Events Upcoming';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Tapahtumat';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'lisää';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Käytä';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Palauta oletusarvoihin';
  $handler->display->display_options['exposed_form']['options']['exposed_sorts_label'] = 'Lajittele';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'node';
  $handler->display->display_options['row_options']['links'] = FALSE;
  /* Kenttä: Sisältö: Otsikko */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Lajittelukriteeri: Sisältö: Tapahtuman ajankohta -  start date (field_datetime) */
  $handler->display->display_options['sorts']['field_datetime_value']['id'] = 'field_datetime_value';
  $handler->display->display_options['sorts']['field_datetime_value']['table'] = 'field_data_field_datetime';
  $handler->display->display_options['sorts']['field_datetime_value']['field'] = 'field_datetime_value';
  $handler->display->display_options['sorts']['field_datetime_value']['order'] = 'DESC';
  /* Suodatinkriteeri: Sisältö: Julkaistu */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Suodatinkriteeri: Sisältö: Tyyppi */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'event' => 'event',
  );
  /* Suodatinkriteeri: Sisältö: Tapahtuman ajankohta - end date (field_datetime:value2) */
  $handler->display->display_options['filters']['field_datetime_value2']['id'] = 'field_datetime_value2';
  $handler->display->display_options['filters']['field_datetime_value2']['table'] = 'field_data_field_datetime';
  $handler->display->display_options['filters']['field_datetime_value2']['field'] = 'field_datetime_value2';
  $handler->display->display_options['filters']['field_datetime_value2']['operator'] = '>=';
  $handler->display->display_options['filters']['field_datetime_value2']['default_date'] = 'now';

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'tapahtumat';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Tapahtumat';
  $handler->display->display_options['menu']['name'] = 'main-menu';

  /* Display: Lohko */
  $handler = $view->new_display('block', 'Lohko', 'block_1');
  $translatables['kay_events_upcoming'] = array(
    t('Master'),
    t('Tapahtumat'),
    t('lisää'),
    t('Käytä'),
    t('Palauta oletusarvoihin'),
    t('Lajittele'),
    t('Asc'),
    t('Desc'),
    t('Page'),
    t('Lohko'),
  );
  $export['kay_events_upcoming'] = $view;

  return $export;
}
