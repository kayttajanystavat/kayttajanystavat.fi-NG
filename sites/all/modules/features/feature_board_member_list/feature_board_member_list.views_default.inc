<?php
/**
 * @file
 * feature_board_member_list.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function feature_board_member_list_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'kay_board_current';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'KaY Board current';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Hallitus';
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
  $handler->display->display_options['row_plugin'] = 'node';
  $handler->display->display_options['row_options']['links'] = FALSE;
  /* Kenttä: Sisältö: Otsikko */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Lajittelukriteeri: Sisältö: Hallitusrooli (field_role) */
  $handler->display->display_options['sorts']['field_role_value']['id'] = 'field_role_value';
  $handler->display->display_options['sorts']['field_role_value']['table'] = 'field_data_field_role';
  $handler->display->display_options['sorts']['field_role_value']['field'] = 'field_role_value';
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
    'board_member' => 'board_member',
  );
  /* Suodatinkriteeri: Sisältö: Hallitusvuosi (field_hallitusvuosi) */
  $handler->display->display_options['filters']['field_hallitusvuosi_value']['id'] = 'field_hallitusvuosi_value';
  $handler->display->display_options['filters']['field_hallitusvuosi_value']['table'] = 'field_data_field_hallitusvuosi';
  $handler->display->display_options['filters']['field_hallitusvuosi_value']['field'] = 'field_hallitusvuosi_value';
  $handler->display->display_options['filters']['field_hallitusvuosi_value']['granularity'] = 'year';
  $handler->display->display_options['filters']['field_hallitusvuosi_value']['default_date'] = 'now';
  $handler->display->display_options['filters']['field_hallitusvuosi_value']['year_range'] = '-0:+0';

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $translatables['kay_board_current'] = array(
    t('Master'),
    t('Hallitus'),
    t('lisää'),
    t('Käytä'),
    t('Palauta oletusarvoihin'),
    t('Lajittele'),
    t('Asc'),
    t('Desc'),
    t('Block'),
  );
  $export['kay_board_current'] = $view;

  return $export;
}
