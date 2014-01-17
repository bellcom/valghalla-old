<?php
/**
 * @file
 * liste_beskeder.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function liste_beskeder_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'Beskeder';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Liste Beskeder';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Beskeder';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'mere';
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    3 => '3',
    8 => '8',
  );
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Udfør';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Gendan';
  $handler->display->display_options['exposed_form']['options']['exposed_sorts_label'] = 'Sortér efter';
  $handler->display->display_options['exposed_form']['options']['sort_asc_label'] = 'Stigende';
  $handler->display->display_options['exposed_form']['options']['sort_desc_label'] = 'Faldende';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '50';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_label'] = 'Elementer pr. side';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options_all_label'] = '- Alle -';
  $handler->display->display_options['pager']['options']['expose']['offset_label'] = 'Forskydning';
  $handler->display->display_options['pager']['options']['tags']['first'] = '« første';
  $handler->display->display_options['pager']['options']['tags']['previous'] = '‹ forrige';
  $handler->display->display_options['pager']['options']['tags']['next'] = 'næste ›';
  $handler->display->display_options['pager']['options']['tags']['last'] = 'sidste »';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'timestamp' => 'timestamp',
    'title' => 'field_rsvp_comment',
    'field_label' => 'timestamp',
    'field_rsvp' => 'timestamp',
    'field_polling_station' => 'field_rsvp_comment',
    'field_rsvp_comment' => 'field_rsvp_comment',
    'last_updated' => 'last_updated',
    'field_party' => 'timestamp',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'timestamp' => array(
      'align' => '',
      'separator' => ' / ',
      'empty_column' => 0,
    ),
    'title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_label' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_rsvp' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_polling_station' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_rsvp_comment' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '<br />',
      'empty_column' => 0,
    ),
    'last_updated' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_party' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* Field: Content: Has new content */
  $handler->display->display_options['fields']['timestamp']['id'] = 'timestamp';
  $handler->display->display_options['fields']['timestamp']['table'] = 'history';
  $handler->display->display_options['fields']['timestamp']['field'] = 'timestamp';
  $handler->display->display_options['fields']['timestamp']['label'] = 'Status';
  $handler->display->display_options['fields']['timestamp']['element_label_colon'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Label */
  $handler->display->display_options['fields']['field_label']['id'] = 'field_label';
  $handler->display->display_options['fields']['field_label']['table'] = 'field_data_field_label';
  $handler->display->display_options['fields']['field_label']['field'] = 'field_label';
  $handler->display->display_options['fields']['field_label']['label'] = '';
  $handler->display->display_options['fields']['field_label']['element_label_colon'] = FALSE;
  /* Field: Content: Status */
  $handler->display->display_options['fields']['field_rsvp']['id'] = 'field_rsvp';
  $handler->display->display_options['fields']['field_rsvp']['table'] = 'field_data_field_rsvp';
  $handler->display->display_options['fields']['field_rsvp']['field'] = 'field_rsvp';
  $handler->display->display_options['fields']['field_rsvp']['label'] = '';
  $handler->display->display_options['fields']['field_rsvp']['element_label_colon'] = FALSE;
  /* Field: Field: Begræns adgang til følgende valgsteder */
  $handler->display->display_options['fields']['field_polling_station']['id'] = 'field_polling_station';
  $handler->display->display_options['fields']['field_polling_station']['table'] = 'field_data_field_polling_station';
  $handler->display->display_options['fields']['field_polling_station']['field'] = 'field_polling_station';
  $handler->display->display_options['fields']['field_polling_station']['label'] = 'valgsted';
  $handler->display->display_options['fields']['field_polling_station']['delta_offset'] = '0';
  /* Field: Content: Status besked */
  $handler->display->display_options['fields']['field_rsvp_comment']['id'] = 'field_rsvp_comment';
  $handler->display->display_options['fields']['field_rsvp_comment']['table'] = 'field_data_field_rsvp_comment';
  $handler->display->display_options['fields']['field_rsvp_comment']['field'] = 'field_rsvp_comment';
  $handler->display->display_options['fields']['field_rsvp_comment']['label'] = '';
  $handler->display->display_options['fields']['field_rsvp_comment']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_rsvp_comment']['hide_alter_empty'] = FALSE;
  /* Field: Content: Updated/commented date */
  $handler->display->display_options['fields']['last_updated']['id'] = 'last_updated';
  $handler->display->display_options['fields']['last_updated']['table'] = 'node_comment_statistics';
  $handler->display->display_options['fields']['last_updated']['field'] = 'last_updated';
  $handler->display->display_options['fields']['last_updated']['label'] = 'Opdateret';
  $handler->display->display_options['fields']['last_updated']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['last_updated']['date_format'] = 'time ago';
  /* Field: Field: Parti */
  $handler->display->display_options['fields']['field_party']['id'] = 'field_party';
  $handler->display->display_options['fields']['field_party']['table'] = 'field_data_field_party';
  $handler->display->display_options['fields']['field_party']['field'] = 'field_party';
  $handler->display->display_options['fields']['field_party']['hide_alter_empty'] = FALSE;
  /* Sort criterion: Content: Updated date */
  $handler->display->display_options['sorts']['changed']['id'] = 'changed';
  $handler->display->display_options['sorts']['changed']['table'] = 'node';
  $handler->display->display_options['sorts']['changed']['field'] = 'changed';
  $handler->display->display_options['sorts']['changed']['order'] = 'DESC';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 0;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'volunteers' => 'volunteers',
  );
  /* Filter criterion: Content: Status besked (field_rsvp_comment) */
  $handler->display->display_options['filters']['field_rsvp_comment_value']['id'] = 'field_rsvp_comment_value';
  $handler->display->display_options['filters']['field_rsvp_comment_value']['table'] = 'field_data_field_rsvp_comment';
  $handler->display->display_options['filters']['field_rsvp_comment_value']['field'] = 'field_rsvp_comment_value';
  $handler->display->display_options['filters']['field_rsvp_comment_value']['operator'] = 'longerthan';
  $handler->display->display_options['filters']['field_rsvp_comment_value']['value'] = '1';

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['path'] = 'valhalla_lists/beskeder';
  $translatables['Beskeder'] = array(
    t('Master'),
    t('Beskeder'),
    t('mere'),
    t('Udfør'),
    t('Gendan'),
    t('Sortér efter'),
    t('Stigende'),
    t('Faldende'),
    t('Elementer pr. side'),
    t('- Alle -'),
    t('Forskydning'),
    t('« første'),
    t('‹ forrige'),
    t('næste ›'),
    t('sidste »'),
    t('Status'),
    t('valgsted'),
    t('Opdateret'),
    t('Parti'),
    t('Page'),
    t('more'),
  );
  $export['Beskeder'] = $view;

  return $export;
}
