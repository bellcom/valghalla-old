<?php
/**
 * @file
 * liste_valghalla_export.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function liste_valghalla_export_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'liste_valghalla_export';
  $view->description = 'lists of volunteers';
  $view->tag = 'valhalla';
  $view->base_table = 'node';
  $view->human_name = 'Liste Valghalla export';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Defaults */
  $handler = $view->new_display('default', 'Defaults', 'default');
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
  $handler->display->display_options['pager']['type'] = 'mini';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_label'] = 'Elementer pr. side';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options_all_label'] = '- Alle -';
  $handler->display->display_options['pager']['options']['expose']['offset_label'] = 'Forskydning';
  $handler->display->display_options['pager']['options']['tags']['first'] = '« første';
  $handler->display->display_options['pager']['options']['tags']['previous'] = '‹ forrige';
  $handler->display->display_options['pager']['options']['tags']['next'] = 'næste ›';
  $handler->display->display_options['pager']['options']['tags']['last'] = 'sidste »';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Relationship: Field: Parti (field_party) */
  $handler->display->display_options['relationships']['field_party_tid']['id'] = 'field_party_tid';
  $handler->display->display_options['relationships']['field_party_tid']['table'] = 'field_data_field_party';
  $handler->display->display_options['relationships']['field_party_tid']['field'] = 'field_party_tid';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'Navn';
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Field: Parti */
  $handler->display->display_options['fields']['entity_id_7']['id'] = 'entity_id_7';
  $handler->display->display_options['fields']['entity_id_7']['table'] = 'field_data_field_party';
  $handler->display->display_options['fields']['entity_id_7']['field'] = 'field_party';
  $handler->display->display_options['fields']['entity_id_7']['label'] = 'Party';
  $handler->display->display_options['fields']['entity_id_7']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Content: CPR Number */
  $handler->display->display_options['fields']['entity_id']['id'] = 'entity_id';
  $handler->display->display_options['fields']['entity_id']['table'] = 'field_data_field_cpr_number';
  $handler->display->display_options['fields']['entity_id']['field'] = 'field_cpr_number';
  $handler->display->display_options['fields']['entity_id']['label'] = 'CPR';
  $handler->display->display_options['fields']['entity_id']['exclude'] = TRUE;
  /* Field: Content: Email */
  $handler->display->display_options['fields']['entity_id_1']['id'] = 'entity_id_1';
  $handler->display->display_options['fields']['entity_id_1']['table'] = 'field_data_field_email';
  $handler->display->display_options['fields']['entity_id_1']['field'] = 'field_email';
  $handler->display->display_options['fields']['entity_id_1']['label'] = 'E-mail';
  $handler->display->display_options['fields']['entity_id_1']['exclude'] = TRUE;
  /* Field: Content: Telefon */
  $handler->display->display_options['fields']['entity_id_2']['id'] = 'entity_id_2';
  $handler->display->display_options['fields']['entity_id_2']['table'] = 'field_data_field_phone';
  $handler->display->display_options['fields']['entity_id_2']['field'] = 'field_phone';
  $handler->display->display_options['fields']['entity_id_2']['exclude'] = TRUE;
  /* Field: Field: Begræns adgang til følgende valgsteder */
  $handler->display->display_options['fields']['entity_id_3']['id'] = 'entity_id_3';
  $handler->display->display_options['fields']['entity_id_3']['table'] = 'field_data_field_polling_station';
  $handler->display->display_options['fields']['entity_id_3']['field'] = 'field_polling_station';
  $handler->display->display_options['fields']['entity_id_3']['label'] = 'valgsted';
  /* Field: Content: Polling Station post */
  $handler->display->display_options['fields']['entity_id_4']['id'] = 'entity_id_4';
  $handler->display->display_options['fields']['entity_id_4']['table'] = 'field_data_field_polling_station_post';
  $handler->display->display_options['fields']['entity_id_4']['field'] = 'field_polling_station_post';
  $handler->display->display_options['fields']['entity_id_4']['label'] = 'Placering';
  $handler->display->display_options['fields']['entity_id_4']['type'] = 'number_unformatted';
  $handler->display->display_options['fields']['entity_id_4']['settings'] = array(
    'thousand_separator' => '',
    'prefix_suffix' => 0,
  );
  /* Field: Content: Status */
  $handler->display->display_options['fields']['entity_id_5']['id'] = 'entity_id_5';
  $handler->display->display_options['fields']['entity_id_5']['table'] = 'field_data_field_rsvp';
  $handler->display->display_options['fields']['entity_id_5']['field'] = 'field_rsvp';
  $handler->display->display_options['fields']['entity_id_5']['label'] = 'RSVP';
  /* Field: Content: Token */
  $handler->display->display_options['fields']['entity_id_6']['id'] = 'entity_id_6';
  $handler->display->display_options['fields']['entity_id_6']['table'] = 'field_data_field_token';
  $handler->display->display_options['fields']['entity_id_6']['field'] = 'field_token';
  $handler->display->display_options['fields']['entity_id_6']['label'] = 'Symbol';
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  /* Sort criterion: Content: Title */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
  /* Sort criterion: Field: Begræns adgang til følgende valgsteder (field_polling_station) */
  $handler->display->display_options['sorts']['field_polling_station_nid']['id'] = 'field_polling_station_nid';
  $handler->display->display_options['sorts']['field_polling_station_nid']['table'] = 'field_data_field_polling_station';
  $handler->display->display_options['sorts']['field_polling_station_nid']['field'] = 'field_polling_station_nid';
  /* Contextual filter: Field: Parti (field_party) */
  $handler->display->display_options['arguments']['field_party_tid']['id'] = 'field_party_tid';
  $handler->display->display_options['arguments']['field_party_tid']['table'] = 'field_data_field_party';
  $handler->display->display_options['arguments']['field_party_tid']['field'] = 'field_party_tid';
  $handler->display->display_options['arguments']['field_party_tid']['exception']['title'] = 'Alle';
  $handler->display->display_options['arguments']['field_party_tid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['field_party_tid']['summary']['format'] = 'default_summary';
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'volunteers' => 'volunteers',
  );

  /* Display: Data export */
  $handler = $view->new_display('views_data_export', 'Data export', 'views_data_export_1');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '0';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'views_data_export_csv';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'Navn';
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Field: Parti */
  $handler->display->display_options['fields']['entity_id_7']['id'] = 'entity_id_7';
  $handler->display->display_options['fields']['entity_id_7']['table'] = 'field_data_field_party';
  $handler->display->display_options['fields']['entity_id_7']['field'] = 'field_party';
  $handler->display->display_options['fields']['entity_id_7']['label'] = 'Party';
  $handler->display->display_options['fields']['entity_id_7']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Content: CPR Number */
  $handler->display->display_options['fields']['entity_id']['id'] = 'entity_id';
  $handler->display->display_options['fields']['entity_id']['table'] = 'field_data_field_cpr_number';
  $handler->display->display_options['fields']['entity_id']['field'] = 'field_cpr_number';
  $handler->display->display_options['fields']['entity_id']['label'] = 'CPR';
  $handler->display->display_options['fields']['entity_id']['hide_alter_empty'] = FALSE;
  /* Field: Content: Email */
  $handler->display->display_options['fields']['entity_id_1']['id'] = 'entity_id_1';
  $handler->display->display_options['fields']['entity_id_1']['table'] = 'field_data_field_email';
  $handler->display->display_options['fields']['entity_id_1']['field'] = 'field_email';
  $handler->display->display_options['fields']['entity_id_1']['label'] = 'E-mail';
  $handler->display->display_options['fields']['entity_id_1']['exclude'] = TRUE;
  /* Field: Content: Telefon */
  $handler->display->display_options['fields']['entity_id_2']['id'] = 'entity_id_2';
  $handler->display->display_options['fields']['entity_id_2']['table'] = 'field_data_field_phone';
  $handler->display->display_options['fields']['entity_id_2']['field'] = 'field_phone';
  $handler->display->display_options['fields']['entity_id_2']['exclude'] = TRUE;
  /* Field: Field: Begræns adgang til følgende valgsteder */
  $handler->display->display_options['fields']['entity_id_3']['id'] = 'entity_id_3';
  $handler->display->display_options['fields']['entity_id_3']['table'] = 'field_data_field_polling_station';
  $handler->display->display_options['fields']['entity_id_3']['field'] = 'field_polling_station';
  $handler->display->display_options['fields']['entity_id_3']['label'] = 'valgsted';
  /* Field: Content: Polling Station post */
  $handler->display->display_options['fields']['entity_id_4']['id'] = 'entity_id_4';
  $handler->display->display_options['fields']['entity_id_4']['table'] = 'field_data_field_polling_station_post';
  $handler->display->display_options['fields']['entity_id_4']['field'] = 'field_polling_station_post';
  $handler->display->display_options['fields']['entity_id_4']['label'] = 'Placering';
  $handler->display->display_options['fields']['entity_id_4']['type'] = 'number_unformatted';
  $handler->display->display_options['fields']['entity_id_4']['settings'] = array(
    'thousand_separator' => '',
    'prefix_suffix' => 0,
  );
  /* Field: Content: Status */
  $handler->display->display_options['fields']['entity_id_5']['id'] = 'entity_id_5';
  $handler->display->display_options['fields']['entity_id_5']['table'] = 'field_data_field_rsvp';
  $handler->display->display_options['fields']['entity_id_5']['field'] = 'field_rsvp';
  $handler->display->display_options['fields']['entity_id_5']['label'] = 'RSVP';
  /* Field: Content: Token */
  $handler->display->display_options['fields']['entity_id_6']['id'] = 'entity_id_6';
  $handler->display->display_options['fields']['entity_id_6']['table'] = 'field_data_field_token';
  $handler->display->display_options['fields']['entity_id_6']['field'] = 'field_token';
  $handler->display->display_options['fields']['entity_id_6']['label'] = 'Symbol';
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['path'] = 'valhalla_lists/valghalla.csv';

  /* Display: Data export Excel */
  $handler = $view->new_display('views_data_export', 'Data export Excel', 'views_data_export_2');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '0';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'views_data_export_xls';
  $handler->display->display_options['style_options']['provide_file'] = 1;
  $handler->display->display_options['style_options']['parent_sort'] = 0;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Status */
  $handler->display->display_options['fields']['entity_id_5']['id'] = 'entity_id_5';
  $handler->display->display_options['fields']['entity_id_5']['table'] = 'field_data_field_rsvp';
  $handler->display->display_options['fields']['entity_id_5']['field'] = 'field_rsvp';
  $handler->display->display_options['fields']['entity_id_5']['label'] = 'RSVP';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'Navn';
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Label */
  $handler->display->display_options['fields']['field_label']['id'] = 'field_label';
  $handler->display->display_options['fields']['field_label']['table'] = 'field_data_field_label';
  $handler->display->display_options['fields']['field_label']['field'] = 'field_label';
  $handler->display->display_options['fields']['field_label']['label'] = 'Rolle';
  $handler->display->display_options['fields']['field_label']['type'] = 'text_plain';
  /* Field: Field: Parti */
  $handler->display->display_options['fields']['entity_id_7']['id'] = 'entity_id_7';
  $handler->display->display_options['fields']['entity_id_7']['table'] = 'field_data_field_party';
  $handler->display->display_options['fields']['entity_id_7']['field'] = 'field_party';
  $handler->display->display_options['fields']['entity_id_7']['label'] = 'Party';
  $handler->display->display_options['fields']['entity_id_7']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Content: CPR Number */
  $handler->display->display_options['fields']['entity_id']['id'] = 'entity_id';
  $handler->display->display_options['fields']['entity_id']['table'] = 'field_data_field_cpr_number';
  $handler->display->display_options['fields']['entity_id']['field'] = 'field_cpr_number';
  $handler->display->display_options['fields']['entity_id']['label'] = 'CPR';
  $handler->display->display_options['fields']['entity_id']['hide_alter_empty'] = FALSE;
  /* Field: Content: Email */
  $handler->display->display_options['fields']['entity_id_1']['id'] = 'entity_id_1';
  $handler->display->display_options['fields']['entity_id_1']['table'] = 'field_data_field_email';
  $handler->display->display_options['fields']['entity_id_1']['field'] = 'field_email';
  $handler->display->display_options['fields']['entity_id_1']['label'] = 'E-mail';
  /* Field: Content: Telefon */
  $handler->display->display_options['fields']['entity_id_2']['id'] = 'entity_id_2';
  $handler->display->display_options['fields']['entity_id_2']['table'] = 'field_data_field_phone';
  $handler->display->display_options['fields']['entity_id_2']['field'] = 'field_phone';
  /* Field: Field: Begræns adgang til følgende valgsteder */
  $handler->display->display_options['fields']['entity_id_3']['id'] = 'entity_id_3';
  $handler->display->display_options['fields']['entity_id_3']['table'] = 'field_data_field_polling_station';
  $handler->display->display_options['fields']['entity_id_3']['field'] = 'field_polling_station';
  $handler->display->display_options['fields']['entity_id_3']['label'] = 'valgsted';
  /* Field: Content: Polling Station post */
  $handler->display->display_options['fields']['entity_id_4']['id'] = 'entity_id_4';
  $handler->display->display_options['fields']['entity_id_4']['table'] = 'field_data_field_polling_station_post';
  $handler->display->display_options['fields']['entity_id_4']['field'] = 'field_polling_station_post';
  $handler->display->display_options['fields']['entity_id_4']['label'] = 'Placering';
  $handler->display->display_options['fields']['entity_id_4']['type'] = 'number_unformatted';
  $handler->display->display_options['fields']['entity_id_4']['settings'] = array(
    'thousand_separator' => '',
    'prefix_suffix' => 0,
  );
  /* Field: Content: Token */
  $handler->display->display_options['fields']['entity_id_6']['id'] = 'entity_id_6';
  $handler->display->display_options['fields']['entity_id_6']['table'] = 'field_data_field_token';
  $handler->display->display_options['fields']['entity_id_6']['field'] = 'field_token';
  $handler->display->display_options['fields']['entity_id_6']['label'] = 'Symbol';
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['path'] = 'valhalla_lists/valghalla.xls';

  /* Display: Data export */
  $handler = $view->new_display('views_data_export', 'Data export', 'views_data_export_3');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '0';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'views_data_export_csv';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Field: Parti */
  $handler->display->display_options['fields']['entity_id_7']['id'] = 'entity_id_7';
  $handler->display->display_options['fields']['entity_id_7']['table'] = 'field_data_field_party';
  $handler->display->display_options['fields']['entity_id_7']['field'] = 'field_party';
  $handler->display->display_options['fields']['entity_id_7']['label'] = 'partibogstav';
  $handler->display->display_options['fields']['entity_id_7']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['entity_id_7']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Content: CPR Number */
  $handler->display->display_options['fields']['entity_id']['id'] = 'entity_id';
  $handler->display->display_options['fields']['entity_id']['table'] = 'field_data_field_cpr_number';
  $handler->display->display_options['fields']['entity_id']['field'] = 'field_cpr_number';
  $handler->display->display_options['fields']['entity_id']['label'] = 'cprnummer';
  $handler->display->display_options['fields']['entity_id']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['entity_id']['hide_alter_empty'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'fulde navn';
  $handler->display->display_options['fields']['title']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Email */
  $handler->display->display_options['fields']['entity_id_1']['id'] = 'entity_id_1';
  $handler->display->display_options['fields']['entity_id_1']['table'] = 'field_data_field_email';
  $handler->display->display_options['fields']['entity_id_1']['field'] = 'field_email';
  $handler->display->display_options['fields']['entity_id_1']['label'] = 'email adresse';
  $handler->display->display_options['fields']['entity_id_1']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['entity_id_1']['type'] = 'email_plain';
  /* Field: Content: Telefon */
  $handler->display->display_options['fields']['entity_id_2']['id'] = 'entity_id_2';
  $handler->display->display_options['fields']['entity_id_2']['table'] = 'field_data_field_phone';
  $handler->display->display_options['fields']['entity_id_2']['field'] = 'field_phone';
  $handler->display->display_options['fields']['entity_id_2']['label'] = 'telefonnummer';
  $handler->display->display_options['fields']['entity_id_2']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['entity_id_2']['type'] = 'text_plain';
  /* Field: Field: Begræns adgang til følgende valgsteder */
  $handler->display->display_options['fields']['entity_id_3']['id'] = 'entity_id_3';
  $handler->display->display_options['fields']['entity_id_3']['table'] = 'field_data_field_polling_station';
  $handler->display->display_options['fields']['entity_id_3']['field'] = 'field_polling_station';
  $handler->display->display_options['fields']['entity_id_3']['label'] = 'valgsted';
  $handler->display->display_options['fields']['entity_id_3']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['entity_id_3']['type'] = 'node_reference_plain';
  $handler->display->display_options['fields']['entity_id_3']['delta_offset'] = '0';
  /* Field: Content: Polling Station post */
  $handler->display->display_options['fields']['entity_id_4']['id'] = 'entity_id_4';
  $handler->display->display_options['fields']['entity_id_4']['table'] = 'field_data_field_polling_station_post';
  $handler->display->display_options['fields']['entity_id_4']['field'] = 'field_polling_station_post';
  $handler->display->display_options['fields']['entity_id_4']['label'] = 'Placering';
  $handler->display->display_options['fields']['entity_id_4']['type'] = 'number_unformatted';
  $handler->display->display_options['fields']['entity_id_4']['settings'] = array(
    'thousand_separator' => '',
    'prefix_suffix' => 0,
  );
  /* Field: Content: Status */
  $handler->display->display_options['fields']['entity_id_5']['id'] = 'entity_id_5';
  $handler->display->display_options['fields']['entity_id_5']['table'] = 'field_data_field_rsvp';
  $handler->display->display_options['fields']['entity_id_5']['field'] = 'field_rsvp';
  $handler->display->display_options['fields']['entity_id_5']['label'] = 'RSVP';
  $handler->display->display_options['fields']['entity_id_5']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['entity_id_5']['type'] = 'list_key';
  $handler->display->display_options['path'] = 'valhalla_lists/valghalla-export.csv';
  $translatables['liste_valghalla_export'] = array(
    t('Defaults'),
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
    t('term from field_party'),
    t('Navn'),
    t('Party'),
    t('CPR'),
    t('E-mail'),
    t('Telefon'),
    t('valgsted'),
    t('Placering'),
    t('RSVP'),
    t('Symbol'),
    t('Nid'),
    t('Alle'),
    t('Data export'),
    t('more'),
    t('Data export Excel'),
    t('Rolle'),
    t('partibogstav'),
    t('cprnummer'),
    t('fulde navn'),
    t('email adresse'),
    t('telefonnummer'),
  );
  $export['liste_valghalla_export'] = $view;

  return $export;
}
