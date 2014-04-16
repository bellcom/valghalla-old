<?php
/**
 * @file
 * valhalla_views.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function valhalla_views_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'list';
  $view->description = '';
  $view->tag = '';
  $view->base_table = 'node';
  $view->human_name = 'list';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Defaults */
  $handler = $view->new_display('default', 'Defaults', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'mere';
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Udfør';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Gendan';
  $handler->display->display_options['exposed_form']['options']['exposed_sorts_label'] = 'Sortér efter';
  $handler->display->display_options['exposed_form']['options']['sort_asc_label'] = 'Stigende';
  $handler->display->display_options['exposed_form']['options']['sort_desc_label'] = 'Faldende';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['grouping'] = '';
  $handler->display->display_options['style_options']['columns'] = array(
    'field_label' => 'field_label',
    'field_polling_station_post' => 'field_polling_station_post',
    'entity_id_6' => 'entity_id_6',
    'nid' => 'nid',
    'title' => 'title',
    'entity_id' => 'entity_id',
    'entity_id_1' => 'entity_id_1',
    'entity_id_2' => 'entity_id_2',
    'entity_id_3' => 'entity_id_3',
    'entity_id_4' => 'entity_id_4',
    'entity_id_5' => 'entity_id_5',
    'entity_id_7' => 'entity_id_7',
    'entity_id_8' => 'entity_id_8',
    'entity_id_9' => 'entity_id_9',
    'nothing' => 'nothing',
    'field_cpr_number' => 'field_cpr_number',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'field_label' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
    ),
    'field_polling_station_post' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
    ),
    'entity_id_6' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
    ),
    'nid' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
    ),
    'title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
    ),
    'entity_id' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
    ),
    'entity_id_1' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
    ),
    'entity_id_2' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
    ),
    'entity_id_3' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
    ),
    'entity_id_4' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
    ),
    'entity_id_5' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
    ),
    'entity_id_7' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
    ),
    'entity_id_8' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
    ),
    'entity_id_9' => array(
      'align' => '',
      'separator' => '',
    ),
    'nothing' => array(
      'align' => '',
      'separator' => '',
    ),
    'field_cpr_number' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
    ),
  );
  /* Forbindelse: Indhold: Taksonomitermer på node */
  $handler->display->display_options['relationships']['term_node_tid']['id'] = 'term_node_tid';
  $handler->display->display_options['relationships']['term_node_tid']['table'] = 'node';
  $handler->display->display_options['relationships']['term_node_tid']['field'] = 'term_node_tid';
  /* Felt: Indhold: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['link_to_node'] = TRUE;
  /* Felt: Indhold: Titel */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'Navn';
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Felt: Indhold: CPR */
  $handler->display->display_options['fields']['field_cpr_number']['id'] = 'field_cpr_number';
  $handler->display->display_options['fields']['field_cpr_number']['table'] = 'field_data_field_cpr_number';
  $handler->display->display_options['fields']['field_cpr_number']['field'] = 'field_cpr_number';
  $handler->display->display_options['fields']['field_cpr_number']['exclude'] = TRUE;
  /* Felt: Felt: Parti */
  $handler->display->display_options['fields']['entity_id_6']['id'] = 'entity_id_6';
  $handler->display->display_options['fields']['entity_id_6']['table'] = 'field_data_field_party';
  $handler->display->display_options['fields']['entity_id_6']['field'] = 'field_party';
  $handler->display->display_options['fields']['entity_id_6']['element_type'] = '0';
  $handler->display->display_options['fields']['entity_id_6']['element_label_type'] = '0';
  $handler->display->display_options['fields']['entity_id_6']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['entity_id_6']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['entity_id_6']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['entity_id_6']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['entity_id_6']['type'] = 'taxonomy_term_reference_plain';
  /* Felt: Indhold: City */
  $handler->display->display_options['fields']['entity_id']['id'] = 'entity_id';
  $handler->display->display_options['fields']['entity_id']['table'] = 'field_data_field_address_city';
  $handler->display->display_options['fields']['entity_id']['field'] = 'field_address_city';
  $handler->display->display_options['fields']['entity_id']['label'] = 'field_address_door';
  $handler->display->display_options['fields']['entity_id']['exclude'] = TRUE;
  $handler->display->display_options['fields']['entity_id']['hide_empty'] = TRUE;
  /* Felt: Indhold: Door / Side */
  $handler->display->display_options['fields']['entity_id_1']['id'] = 'entity_id_1';
  $handler->display->display_options['fields']['entity_id_1']['table'] = 'field_data_field_address_door';
  $handler->display->display_options['fields']['entity_id_1']['field'] = 'field_address_door';
  $handler->display->display_options['fields']['entity_id_1']['label'] = 'field_address_door';
  $handler->display->display_options['fields']['entity_id_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['entity_id_1']['hide_empty'] = TRUE;
  /* Felt: Indhold: Floor */
  $handler->display->display_options['fields']['entity_id_2']['id'] = 'entity_id_2';
  $handler->display->display_options['fields']['entity_id_2']['table'] = 'field_data_field_address_floor';
  $handler->display->display_options['fields']['entity_id_2']['field'] = 'field_address_floor';
  $handler->display->display_options['fields']['entity_id_2']['label'] = 'field_address_floor';
  $handler->display->display_options['fields']['entity_id_2']['exclude'] = TRUE;
  $handler->display->display_options['fields']['entity_id_2']['hide_empty'] = TRUE;
  /* Felt: Indhold: Address */
  $handler->display->display_options['fields']['entity_id_3']['id'] = 'entity_id_3';
  $handler->display->display_options['fields']['entity_id_3']['table'] = 'field_data_field_address_road';
  $handler->display->display_options['fields']['entity_id_3']['field'] = 'field_address_road';
  $handler->display->display_options['fields']['entity_id_3']['label'] = 'field_address_road';
  $handler->display->display_options['fields']['entity_id_3']['exclude'] = TRUE;
  $handler->display->display_options['fields']['entity_id_3']['hide_empty'] = TRUE;
  /* Felt: Indhold: House no. */
  $handler->display->display_options['fields']['entity_id_4']['id'] = 'entity_id_4';
  $handler->display->display_options['fields']['entity_id_4']['table'] = 'field_data_field_address_road_no';
  $handler->display->display_options['fields']['entity_id_4']['field'] = 'field_address_road_no';
  $handler->display->display_options['fields']['entity_id_4']['label'] = 'field_address_road_no';
  $handler->display->display_options['fields']['entity_id_4']['exclude'] = TRUE;
  $handler->display->display_options['fields']['entity_id_4']['hide_empty'] = TRUE;
  /* Felt: Indhold: Zip code */
  $handler->display->display_options['fields']['entity_id_5']['id'] = 'entity_id_5';
  $handler->display->display_options['fields']['entity_id_5']['table'] = 'field_data_field_address_zipcode';
  $handler->display->display_options['fields']['entity_id_5']['field'] = 'field_address_zipcode';
  $handler->display->display_options['fields']['entity_id_5']['label'] = 'field_address_zipcode';
  $handler->display->display_options['fields']['entity_id_5']['exclude'] = TRUE;
  $handler->display->display_options['fields']['entity_id_5']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['entity_id_5']['settings'] = array(
    'thousand_separator' => ' ',
    'prefix_suffix' => 1,
  );
  /* Felt: Indhold: Telefon */
  $handler->display->display_options['fields']['entity_id_7']['id'] = 'entity_id_7';
  $handler->display->display_options['fields']['entity_id_7']['table'] = 'field_data_field_phone';
  $handler->display->display_options['fields']['entity_id_7']['field'] = 'field_phone';
  $handler->display->display_options['fields']['entity_id_7']['exclude'] = TRUE;
  $handler->display->display_options['fields']['entity_id_7']['element_type'] = '0';
  $handler->display->display_options['fields']['entity_id_7']['element_label_type'] = 'span';
  $handler->display->display_options['fields']['entity_id_7']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['entity_id_7']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['entity_id_7']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['entity_id_7']['type'] = 'text_plain';
  /* Felt: Indhold: Telefon 2 */
  $handler->display->display_options['fields']['entity_id_8']['id'] = 'entity_id_8';
  $handler->display->display_options['fields']['entity_id_8']['table'] = 'field_data_field_phone2';
  $handler->display->display_options['fields']['entity_id_8']['field'] = 'field_phone2';
  $handler->display->display_options['fields']['entity_id_8']['exclude'] = TRUE;
  $handler->display->display_options['fields']['entity_id_8']['hide_empty'] = TRUE;
  /* Felt: Felt: Begræns adgang til følgende valgsteder */
  $handler->display->display_options['fields']['entity_id_9']['id'] = 'entity_id_9';
  $handler->display->display_options['fields']['entity_id_9']['table'] = 'field_data_field_polling_station';
  $handler->display->display_options['fields']['entity_id_9']['field'] = 'field_polling_station';
  $handler->display->display_options['fields']['entity_id_9']['label'] = 'Valgsted';
  $handler->display->display_options['fields']['entity_id_9']['exclude'] = TRUE;
  $handler->display->display_options['fields']['entity_id_9']['element_type'] = 'span';
  $handler->display->display_options['fields']['entity_id_9']['element_label_type'] = 'span';
  $handler->display->display_options['fields']['entity_id_9']['element_wrapper_type'] = 'span';
  $handler->display->display_options['fields']['entity_id_9']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['entity_id_9']['type'] = 'node_reference_plain';
  /* Felt: Global: Tilpasset tekst */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<div>
<h4>[title] ([entity_id_6] )</h4>
<div>[entity_id_3] [entity_id_4] [entity_id_2] [entity_id_1]<br />
</div>
</div>';
  $handler->display->display_options['fields']['nothing']['alter']['make_link'] = TRUE;
  /* Felt: Indhold: Polling Station post */
  $handler->display->display_options['fields']['field_polling_station_post']['id'] = 'field_polling_station_post';
  $handler->display->display_options['fields']['field_polling_station_post']['table'] = 'field_data_field_polling_station_post';
  $handler->display->display_options['fields']['field_polling_station_post']['field'] = 'field_polling_station_post';
  $handler->display->display_options['fields']['field_polling_station_post']['label'] = 'Placering';
  $handler->display->display_options['fields']['field_polling_station_post']['type'] = 'number_unformatted';
  $handler->display->display_options['fields']['field_polling_station_post']['settings'] = array(
    'thousand_separator' => ' ',
    'prefix_suffix' => 1,
  );
  /* Felt: Global: Tilpasset tekst */
  $handler->display->display_options['fields']['nothing_1']['id'] = 'nothing_1';
  $handler->display->display_options['fields']['nothing_1']['table'] = 'views';
  $handler->display->display_options['fields']['nothing_1']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing_1']['label'] = 'Kvittering';
  /* Sorteringskriterie: Indhold: Status (field_rsvp) */
  $handler->display->display_options['sorts']['field_rsvp_value']['id'] = 'field_rsvp_value';
  $handler->display->display_options['sorts']['field_rsvp_value']['table'] = 'field_data_field_rsvp';
  $handler->display->display_options['sorts']['field_rsvp_value']['field'] = 'field_rsvp_value';
  /* Sorteringskriterie: Ord i ordforråd: Navn */
  $handler->display->display_options['sorts']['name']['id'] = 'name';
  $handler->display->display_options['sorts']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['sorts']['name']['field'] = 'name';
  $handler->display->display_options['sorts']['name']['relationship'] = 'term_node_tid';
  /* Sorteringskriterie: Indhold: Titel */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
  /* Kontekstuelt filter: Felt: Begræns adgang til følgende valgsteder (field_polling_station) */
  $handler->display->display_options['arguments']['field_polling_station_nid']['id'] = 'field_polling_station_nid';
  $handler->display->display_options['arguments']['field_polling_station_nid']['table'] = 'field_data_field_polling_station';
  $handler->display->display_options['arguments']['field_polling_station_nid']['field'] = 'field_polling_station_nid';
  $handler->display->display_options['arguments']['field_polling_station_nid']['exception']['title'] = 'Alle';
  $handler->display->display_options['arguments']['field_polling_station_nid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['field_polling_station_nid']['summary']['format'] = 'default_summary';
  /* Filterkriterie: Indhold: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'volunteers' => 'volunteers',
  );
  $handler->display->display_options['filters']['type']['group'] = '0';
  /* Filterkriterie: Felt: Begræns adgang til følgende valgsteder (field_polling_station) */
  $handler->display->display_options['filters']['field_polling_station_nid']['id'] = 'field_polling_station_nid';
  $handler->display->display_options['filters']['field_polling_station_nid']['table'] = 'field_data_field_polling_station';
  $handler->display->display_options['filters']['field_polling_station_nid']['field'] = 'field_polling_station_nid';
  $handler->display->display_options['filters']['field_polling_station_nid']['operator'] = 'not empty';
  $handler->display->display_options['filters']['field_polling_station_nid']['group'] = '0';
  /* Filterkriterie: Indhold: Polling Station post (field_polling_station_post) */
  $handler->display->display_options['filters']['field_polling_station_post_value']['id'] = 'field_polling_station_post_value';
  $handler->display->display_options['filters']['field_polling_station_post_value']['table'] = 'field_data_field_polling_station_post';
  $handler->display->display_options['filters']['field_polling_station_post_value']['field'] = 'field_polling_station_post_value';
  $handler->display->display_options['filters']['field_polling_station_post_value']['operator'] = '>=';
  $handler->display->display_options['filters']['field_polling_station_post_value']['value']['value'] = '1';
  $handler->display->display_options['filters']['field_polling_station_post_value']['group'] = '0';

  /* Display: Content pane */
  $handler = $view->new_display('panel_pane', 'Content pane', 'panel_pane_1');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['access'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    8 => '8',
  );
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['grouping'] = '';
  $handler->display->display_options['style_options']['columns'] = array(
    'nid' => 'nid',
    'title' => 'title',
    'entity_id_6' => 'entity_id_6',
    'entity_id' => 'entity_id',
    'entity_id_1' => 'entity_id_1',
    'entity_id_2' => 'entity_id_2',
    'entity_id_3' => 'entity_id_3',
    'entity_id_4' => 'entity_id_4',
    'entity_id_5' => 'entity_id_5',
    'entity_id_7' => 'entity_id_7',
    'entity_id_8' => 'entity_id_8',
    'entity_id_9' => 'entity_id_9',
    'nothing' => 'nothing',
  );
  $handler->display->display_options['style_options']['default'] = 'entity_id_6';
  $handler->display->display_options['style_options']['info'] = array(
    'nid' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
    ),
    'title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
    ),
    'entity_id_6' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
    ),
    'entity_id' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
    ),
    'entity_id_1' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
    ),
    'entity_id_2' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
    ),
    'entity_id_3' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
    ),
    'entity_id_4' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
    ),
    'entity_id_5' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
    ),
    'entity_id_7' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
    ),
    'entity_id_8' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
    ),
    'entity_id_9' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
    ),
    'nothing' => array(
      'align' => '',
      'separator' => '',
    ),
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Kontekstuelt filter: Felt: Begræns adgang til følgende valgsteder (field_polling_station) */
  $handler->display->display_options['arguments']['field_polling_station_nid']['id'] = 'field_polling_station_nid';
  $handler->display->display_options['arguments']['field_polling_station_nid']['table'] = 'field_data_field_polling_station';
  $handler->display->display_options['arguments']['field_polling_station_nid']['field'] = 'field_polling_station_nid';
  $handler->display->display_options['arguments']['field_polling_station_nid']['exception']['title_enable'] = TRUE;
  $handler->display->display_options['arguments']['field_polling_station_nid']['exception']['title'] = 'Alle';
  $handler->display->display_options['arguments']['field_polling_station_nid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['field_polling_station_nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_polling_station_nid']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['field_polling_station_nid']['validate']['fail'] = 'ignore';
  $handler->display->display_options['allow']['use_pager'] = 0;
  $handler->display->display_options['allow']['items_per_page'] = 0;
  $handler->display->display_options['allow']['offset'] = 0;
  $handler->display->display_options['allow']['link_to_view'] = 0;
  $handler->display->display_options['allow']['more_link'] = 0;
  $handler->display->display_options['allow']['path_override'] = 0;
  $handler->display->display_options['allow']['title_override'] = 0;
  $handler->display->display_options['allow']['exposed_form'] = 0;
  $handler->display->display_options['allow']['fields_override'] = 'fields_override';
  $handler->display->display_options['argument_input'] = array(
    'field_polling_station_nid' => array(
      'type' => 'context',
      'context' => 'node.nid',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'Fields: field_polling_station (field_polling_station) - nid',
    ),
  );

  /* Display: Content pane Partivisning */
  $handler = $view->new_display('panel_pane', 'Content pane Partivisning', 'panel_pane_2');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['access'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    4 => '4',
  );
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['grouping'] = '';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['inline'] = array(
    'title' => 'title',
    'entity_id_6' => 'entity_id_6',
    'entity_id_7' => 'entity_id_7',
    'entity_id_8' => 'entity_id_8',
  );
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Felt: Indhold: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['link_to_node'] = TRUE;
  /* Felt: Felt: Parti */
  $handler->display->display_options['fields']['entity_id_6']['id'] = 'entity_id_6';
  $handler->display->display_options['fields']['entity_id_6']['table'] = 'field_data_field_party';
  $handler->display->display_options['fields']['entity_id_6']['field'] = 'field_party';
  $handler->display->display_options['fields']['entity_id_6']['label'] = '';
  $handler->display->display_options['fields']['entity_id_6']['element_type'] = '0';
  $handler->display->display_options['fields']['entity_id_6']['element_label_type'] = '0';
  $handler->display->display_options['fields']['entity_id_6']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['entity_id_6']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['entity_id_6']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['entity_id_6']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['entity_id_6']['type'] = 'taxonomy_term_reference_plain';
  /* Felt: Indhold: Titel */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'Navn';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  /* Felt: Telefon */
  $handler->display->display_options['fields']['entity_id_7']['id'] = 'entity_id_7';
  $handler->display->display_options['fields']['entity_id_7']['table'] = 'field_data_field_phone';
  $handler->display->display_options['fields']['entity_id_7']['field'] = 'field_phone';
  $handler->display->display_options['fields']['entity_id_7']['ui_name'] = 'Telefon';
  $handler->display->display_options['fields']['entity_id_7']['exclude'] = TRUE;
  $handler->display->display_options['fields']['entity_id_7']['element_type'] = '0';
  $handler->display->display_options['fields']['entity_id_7']['element_label_type'] = '0';
  $handler->display->display_options['fields']['entity_id_7']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['entity_id_7']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['entity_id_7']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['entity_id_7']['type'] = 'text_plain';
  /* Felt: Indhold: Telefon 2 */
  $handler->display->display_options['fields']['entity_id_8']['id'] = 'entity_id_8';
  $handler->display->display_options['fields']['entity_id_8']['table'] = 'field_data_field_phone2';
  $handler->display->display_options['fields']['entity_id_8']['field'] = 'field_phone2';
  $handler->display->display_options['fields']['entity_id_8']['exclude'] = TRUE;
  $handler->display->display_options['fields']['entity_id_8']['alter']['text'] = '/ [entity_id_8]';
  $handler->display->display_options['fields']['entity_id_8']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['entity_id_8']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['entity_id_8']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['entity_id_8']['hide_empty'] = TRUE;
  /* Felt: Indhold: City */
  $handler->display->display_options['fields']['entity_id']['id'] = 'entity_id';
  $handler->display->display_options['fields']['entity_id']['table'] = 'field_data_field_address_city';
  $handler->display->display_options['fields']['entity_id']['field'] = 'field_address_city';
  $handler->display->display_options['fields']['entity_id']['label'] = 'field_address_door';
  $handler->display->display_options['fields']['entity_id']['exclude'] = TRUE;
  $handler->display->display_options['fields']['entity_id']['hide_empty'] = TRUE;
  /* Felt: Indhold: Door / Side */
  $handler->display->display_options['fields']['entity_id_1']['id'] = 'entity_id_1';
  $handler->display->display_options['fields']['entity_id_1']['table'] = 'field_data_field_address_door';
  $handler->display->display_options['fields']['entity_id_1']['field'] = 'field_address_door';
  $handler->display->display_options['fields']['entity_id_1']['label'] = 'field_address_door';
  $handler->display->display_options['fields']['entity_id_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['entity_id_1']['hide_empty'] = TRUE;
  /* Felt: Indhold: Floor */
  $handler->display->display_options['fields']['entity_id_2']['id'] = 'entity_id_2';
  $handler->display->display_options['fields']['entity_id_2']['table'] = 'field_data_field_address_floor';
  $handler->display->display_options['fields']['entity_id_2']['field'] = 'field_address_floor';
  $handler->display->display_options['fields']['entity_id_2']['label'] = 'field_address_floor';
  $handler->display->display_options['fields']['entity_id_2']['exclude'] = TRUE;
  $handler->display->display_options['fields']['entity_id_2']['hide_empty'] = TRUE;
  /* Felt: Indhold: Address */
  $handler->display->display_options['fields']['entity_id_3']['id'] = 'entity_id_3';
  $handler->display->display_options['fields']['entity_id_3']['table'] = 'field_data_field_address_road';
  $handler->display->display_options['fields']['entity_id_3']['field'] = 'field_address_road';
  $handler->display->display_options['fields']['entity_id_3']['label'] = 'field_address_road';
  $handler->display->display_options['fields']['entity_id_3']['exclude'] = TRUE;
  $handler->display->display_options['fields']['entity_id_3']['hide_empty'] = TRUE;
  /* Felt: Indhold: House no. */
  $handler->display->display_options['fields']['entity_id_4']['id'] = 'entity_id_4';
  $handler->display->display_options['fields']['entity_id_4']['table'] = 'field_data_field_address_road_no';
  $handler->display->display_options['fields']['entity_id_4']['field'] = 'field_address_road_no';
  $handler->display->display_options['fields']['entity_id_4']['label'] = 'field_address_road_no';
  $handler->display->display_options['fields']['entity_id_4']['exclude'] = TRUE;
  $handler->display->display_options['fields']['entity_id_4']['hide_empty'] = TRUE;
  /* Felt: Indhold: Zip code */
  $handler->display->display_options['fields']['entity_id_5']['id'] = 'entity_id_5';
  $handler->display->display_options['fields']['entity_id_5']['table'] = 'field_data_field_address_zipcode';
  $handler->display->display_options['fields']['entity_id_5']['field'] = 'field_address_zipcode';
  $handler->display->display_options['fields']['entity_id_5']['label'] = 'field_address_zipcode';
  $handler->display->display_options['fields']['entity_id_5']['exclude'] = TRUE;
  $handler->display->display_options['fields']['entity_id_5']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['entity_id_5']['settings'] = array(
    'thousand_separator' => ' ',
    'prefix_suffix' => 1,
  );
  /* Felt: Felt: Begræns adgang til følgende valgsteder */
  $handler->display->display_options['fields']['entity_id_9']['id'] = 'entity_id_9';
  $handler->display->display_options['fields']['entity_id_9']['table'] = 'field_data_field_polling_station';
  $handler->display->display_options['fields']['entity_id_9']['field'] = 'field_polling_station';
  $handler->display->display_options['fields']['entity_id_9']['label'] = 'Valgsted';
  $handler->display->display_options['fields']['entity_id_9']['exclude'] = TRUE;
  $handler->display->display_options['fields']['entity_id_9']['element_type'] = 'span';
  $handler->display->display_options['fields']['entity_id_9']['element_label_type'] = 'span';
  $handler->display->display_options['fields']['entity_id_9']['element_wrapper_type'] = 'span';
  $handler->display->display_options['fields']['entity_id_9']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['entity_id_9']['type'] = 'node_reference_plain';
  /* Felt: Global: Tilpasset tekst */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<div>
<h4>[title] ([entity_id_6] )</h4>
<span calss="mobile">[entity_id_7] [entity_id_8]
</span>
</div>';
  $handler->display->display_options['fields']['nothing']['alter']['make_link'] = TRUE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Kontekstuelt filter: Felt: Begræns adgang til følgende valgsteder (field_polling_station) */
  $handler->display->display_options['arguments']['field_polling_station_nid']['id'] = 'field_polling_station_nid';
  $handler->display->display_options['arguments']['field_polling_station_nid']['table'] = 'field_data_field_polling_station';
  $handler->display->display_options['arguments']['field_polling_station_nid']['field'] = 'field_polling_station_nid';
  $handler->display->display_options['arguments']['field_polling_station_nid']['exception']['title_enable'] = TRUE;
  $handler->display->display_options['arguments']['field_polling_station_nid']['exception']['title'] = 'Alle';
  $handler->display->display_options['arguments']['field_polling_station_nid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['field_polling_station_nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_polling_station_nid']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['field_polling_station_nid']['validate']['fail'] = 'ignore';
  $handler->display->display_options['allow']['use_pager'] = 0;
  $handler->display->display_options['allow']['items_per_page'] = 0;
  $handler->display->display_options['allow']['offset'] = 0;
  $handler->display->display_options['allow']['link_to_view'] = 0;
  $handler->display->display_options['allow']['more_link'] = 0;
  $handler->display->display_options['allow']['path_override'] = 0;
  $handler->display->display_options['allow']['title_override'] = 0;
  $handler->display->display_options['allow']['exposed_form'] = 0;
  $handler->display->display_options['allow']['fields_override'] = 'fields_override';
  $handler->display->display_options['argument_input'] = array(
    'field_polling_station_nid' => array(
      'type' => 'context',
      'context' => 'node.nid',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'Fields: field_polling_station (field_polling_station) - nid',
    ),
  );

  /* Display: Kvitteringsliste for diæter */
  $handler = $view->new_display('panel_pane', 'Kvitteringsliste for diæter', 'panel_pane_3');
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['css_class'] = 'Kvitteringsliste';
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Felt: Indhold: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['link_to_node'] = TRUE;
  /* Felt: Indhold: Titel */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'Navn';
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Felt: Indhold: CPR */
  $handler->display->display_options['fields']['field_cpr_number']['id'] = 'field_cpr_number';
  $handler->display->display_options['fields']['field_cpr_number']['table'] = 'field_data_field_cpr_number';
  $handler->display->display_options['fields']['field_cpr_number']['field'] = 'field_cpr_number';
  $handler->display->display_options['fields']['field_cpr_number']['exclude'] = TRUE;
  /* Felt: Felt: Parti */
  $handler->display->display_options['fields']['entity_id_6']['id'] = 'entity_id_6';
  $handler->display->display_options['fields']['entity_id_6']['table'] = 'field_data_field_party';
  $handler->display->display_options['fields']['entity_id_6']['field'] = 'field_party';
  $handler->display->display_options['fields']['entity_id_6']['exclude'] = TRUE;
  $handler->display->display_options['fields']['entity_id_6']['element_type'] = '0';
  $handler->display->display_options['fields']['entity_id_6']['element_label_type'] = '0';
  $handler->display->display_options['fields']['entity_id_6']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['entity_id_6']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['entity_id_6']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['entity_id_6']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['entity_id_6']['type'] = 'taxonomy_term_reference_plain';
  /* Felt: Indhold: City */
  $handler->display->display_options['fields']['entity_id']['id'] = 'entity_id';
  $handler->display->display_options['fields']['entity_id']['table'] = 'field_data_field_address_city';
  $handler->display->display_options['fields']['entity_id']['field'] = 'field_address_city';
  $handler->display->display_options['fields']['entity_id']['label'] = 'field_address_door';
  $handler->display->display_options['fields']['entity_id']['exclude'] = TRUE;
  $handler->display->display_options['fields']['entity_id']['hide_empty'] = TRUE;
  /* Felt: Indhold: Door / Side */
  $handler->display->display_options['fields']['entity_id_1']['id'] = 'entity_id_1';
  $handler->display->display_options['fields']['entity_id_1']['table'] = 'field_data_field_address_door';
  $handler->display->display_options['fields']['entity_id_1']['field'] = 'field_address_door';
  $handler->display->display_options['fields']['entity_id_1']['label'] = 'field_address_door';
  $handler->display->display_options['fields']['entity_id_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['entity_id_1']['hide_empty'] = TRUE;
  /* Felt: Indhold: Floor */
  $handler->display->display_options['fields']['entity_id_2']['id'] = 'entity_id_2';
  $handler->display->display_options['fields']['entity_id_2']['table'] = 'field_data_field_address_floor';
  $handler->display->display_options['fields']['entity_id_2']['field'] = 'field_address_floor';
  $handler->display->display_options['fields']['entity_id_2']['label'] = 'field_address_floor';
  $handler->display->display_options['fields']['entity_id_2']['exclude'] = TRUE;
  $handler->display->display_options['fields']['entity_id_2']['hide_empty'] = TRUE;
  /* Felt: Indhold: Address */
  $handler->display->display_options['fields']['entity_id_3']['id'] = 'entity_id_3';
  $handler->display->display_options['fields']['entity_id_3']['table'] = 'field_data_field_address_road';
  $handler->display->display_options['fields']['entity_id_3']['field'] = 'field_address_road';
  $handler->display->display_options['fields']['entity_id_3']['label'] = 'field_address_road';
  $handler->display->display_options['fields']['entity_id_3']['exclude'] = TRUE;
  $handler->display->display_options['fields']['entity_id_3']['hide_empty'] = TRUE;
  /* Felt: Indhold: House no. */
  $handler->display->display_options['fields']['entity_id_4']['id'] = 'entity_id_4';
  $handler->display->display_options['fields']['entity_id_4']['table'] = 'field_data_field_address_road_no';
  $handler->display->display_options['fields']['entity_id_4']['field'] = 'field_address_road_no';
  $handler->display->display_options['fields']['entity_id_4']['label'] = 'field_address_road_no';
  $handler->display->display_options['fields']['entity_id_4']['exclude'] = TRUE;
  $handler->display->display_options['fields']['entity_id_4']['hide_empty'] = TRUE;
  /* Felt: Indhold: Zip code */
  $handler->display->display_options['fields']['entity_id_5']['id'] = 'entity_id_5';
  $handler->display->display_options['fields']['entity_id_5']['table'] = 'field_data_field_address_zipcode';
  $handler->display->display_options['fields']['entity_id_5']['field'] = 'field_address_zipcode';
  $handler->display->display_options['fields']['entity_id_5']['label'] = 'field_address_zipcode';
  $handler->display->display_options['fields']['entity_id_5']['exclude'] = TRUE;
  $handler->display->display_options['fields']['entity_id_5']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['entity_id_5']['settings'] = array(
    'thousand_separator' => ' ',
    'prefix_suffix' => 1,
  );
  /* Felt: Indhold: Telefon */
  $handler->display->display_options['fields']['entity_id_7']['id'] = 'entity_id_7';
  $handler->display->display_options['fields']['entity_id_7']['table'] = 'field_data_field_phone';
  $handler->display->display_options['fields']['entity_id_7']['field'] = 'field_phone';
  $handler->display->display_options['fields']['entity_id_7']['exclude'] = TRUE;
  $handler->display->display_options['fields']['entity_id_7']['element_type'] = '0';
  $handler->display->display_options['fields']['entity_id_7']['element_label_type'] = 'span';
  $handler->display->display_options['fields']['entity_id_7']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['entity_id_7']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['entity_id_7']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['entity_id_7']['type'] = 'text_plain';
  /* Felt: Indhold: Telefon 2 */
  $handler->display->display_options['fields']['entity_id_8']['id'] = 'entity_id_8';
  $handler->display->display_options['fields']['entity_id_8']['table'] = 'field_data_field_phone2';
  $handler->display->display_options['fields']['entity_id_8']['field'] = 'field_phone2';
  $handler->display->display_options['fields']['entity_id_8']['exclude'] = TRUE;
  $handler->display->display_options['fields']['entity_id_8']['hide_empty'] = TRUE;
  /* Felt: Felt: Begræns adgang til følgende valgsteder */
  $handler->display->display_options['fields']['entity_id_9']['id'] = 'entity_id_9';
  $handler->display->display_options['fields']['entity_id_9']['table'] = 'field_data_field_polling_station';
  $handler->display->display_options['fields']['entity_id_9']['field'] = 'field_polling_station';
  $handler->display->display_options['fields']['entity_id_9']['label'] = 'Valgsted';
  $handler->display->display_options['fields']['entity_id_9']['exclude'] = TRUE;
  $handler->display->display_options['fields']['entity_id_9']['element_type'] = 'span';
  $handler->display->display_options['fields']['entity_id_9']['element_label_type'] = 'span';
  $handler->display->display_options['fields']['entity_id_9']['element_wrapper_type'] = 'span';
  $handler->display->display_options['fields']['entity_id_9']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['entity_id_9']['type'] = 'node_reference_plain';
  /* Felt: Global: Tilpasset tekst */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<div>
<h4>[title] ([entity_id_6] )</h4>
<div>[entity_id_3] [entity_id_4] [entity_id_2] [entity_id_1]<br />
</div>
</div>';
  $handler->display->display_options['fields']['nothing']['alter']['make_link'] = TRUE;
  /* Felt: Indhold: Polling Station post */
  $handler->display->display_options['fields']['field_polling_station_post']['id'] = 'field_polling_station_post';
  $handler->display->display_options['fields']['field_polling_station_post']['table'] = 'field_data_field_polling_station_post';
  $handler->display->display_options['fields']['field_polling_station_post']['field'] = 'field_polling_station_post';
  $handler->display->display_options['fields']['field_polling_station_post']['label'] = 'Placering';
  $handler->display->display_options['fields']['field_polling_station_post']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_polling_station_post']['type'] = 'number_unformatted';
  $handler->display->display_options['fields']['field_polling_station_post']['settings'] = array(
    'thousand_separator' => ' ',
    'prefix_suffix' => 1,
  );
  /* Felt: Indhold: Diæt */
  $handler->display->display_options['fields']['field_diaet']['id'] = 'field_diaet';
  $handler->display->display_options['fields']['field_diaet']['table'] = 'field_data_field_diaet';
  $handler->display->display_options['fields']['field_diaet']['field'] = 'field_diaet';
  $handler->display->display_options['fields']['field_diaet']['empty'] = '1.185';
  $handler->display->display_options['fields']['field_diaet']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['field_diaet']['settings'] = array(
    'thousand_separator' => ' ',
    'prefix_suffix' => 1,
  );
  /* Felt: Global: Tilpasset tekst */
  $handler->display->display_options['fields']['nothing_1']['id'] = 'nothing_1';
  $handler->display->display_options['fields']['nothing_1']['table'] = 'views';
  $handler->display->display_options['fields']['nothing_1']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing_1']['label'] = 'Kvittering';
  $handler->display->display_options['argument_input'] = array(
    'field_polling_station_nid' => array(
      'type' => 'panel',
      'context' => 'entity:user.field_polling_station',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'Felt: Begræns adgang til følgende valgsteder (field_polling_station)',
    ),
  );

  /* Display: Valgstyrere og tilforordnede */
  $handler = $view->new_display('page', 'Valgstyrere og tilforordnede', 'page_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Valgstyrere og tilforordnede';
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Overskrift: Global: View-område */
  $handler->display->display_options['header']['view']['id'] = 'view';
  $handler->display->display_options['header']['view']['table'] = 'views';
  $handler->display->display_options['header']['view']['field'] = 'view';
  $handler->display->display_options['header']['view']['view_to_insert'] = 'valgsted:ctools_context_1';
  $handler->display->display_options['header']['view']['inherit_arguments'] = TRUE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Felt: Indhold: Label */
  $handler->display->display_options['fields']['field_label']['id'] = 'field_label';
  $handler->display->display_options['fields']['field_label']['table'] = 'field_data_field_label';
  $handler->display->display_options['fields']['field_label']['field'] = 'field_label';
  $handler->display->display_options['fields']['field_label']['label'] = 'Rolle';
  $handler->display->display_options['fields']['field_label']['element_label_colon'] = FALSE;
  /* Felt: Indhold: Polling Station post */
  $handler->display->display_options['fields']['field_polling_station_post']['id'] = 'field_polling_station_post';
  $handler->display->display_options['fields']['field_polling_station_post']['table'] = 'field_data_field_polling_station_post';
  $handler->display->display_options['fields']['field_polling_station_post']['field'] = 'field_polling_station_post';
  $handler->display->display_options['fields']['field_polling_station_post']['label'] = 'Placering';
  $handler->display->display_options['fields']['field_polling_station_post']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_polling_station_post']['type'] = 'number_unformatted';
  $handler->display->display_options['fields']['field_polling_station_post']['settings'] = array(
    'thousand_separator' => ' ',
    'prefix_suffix' => 1,
  );
  /* Felt: Felt: Parti */
  $handler->display->display_options['fields']['entity_id_6']['id'] = 'entity_id_6';
  $handler->display->display_options['fields']['entity_id_6']['table'] = 'field_data_field_party';
  $handler->display->display_options['fields']['entity_id_6']['field'] = 'field_party';
  $handler->display->display_options['fields']['entity_id_6']['element_type'] = '0';
  $handler->display->display_options['fields']['entity_id_6']['element_label_type'] = '0';
  $handler->display->display_options['fields']['entity_id_6']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['entity_id_6']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['entity_id_6']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['entity_id_6']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['entity_id_6']['type'] = 'taxonomy_term_reference_plain';
  /* Felt: Indhold: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['link_to_node'] = TRUE;
  /* Felt: Indhold: Titel */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'Navn';
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Felt: Indhold: City */
  $handler->display->display_options['fields']['entity_id']['id'] = 'entity_id';
  $handler->display->display_options['fields']['entity_id']['table'] = 'field_data_field_address_city';
  $handler->display->display_options['fields']['entity_id']['field'] = 'field_address_city';
  $handler->display->display_options['fields']['entity_id']['label'] = 'field_address_door';
  $handler->display->display_options['fields']['entity_id']['exclude'] = TRUE;
  $handler->display->display_options['fields']['entity_id']['hide_empty'] = TRUE;
  /* Felt: Indhold: Door / Side */
  $handler->display->display_options['fields']['entity_id_1']['id'] = 'entity_id_1';
  $handler->display->display_options['fields']['entity_id_1']['table'] = 'field_data_field_address_door';
  $handler->display->display_options['fields']['entity_id_1']['field'] = 'field_address_door';
  $handler->display->display_options['fields']['entity_id_1']['label'] = 'field_address_door';
  $handler->display->display_options['fields']['entity_id_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['entity_id_1']['hide_empty'] = TRUE;
  /* Felt: Indhold: Floor */
  $handler->display->display_options['fields']['entity_id_2']['id'] = 'entity_id_2';
  $handler->display->display_options['fields']['entity_id_2']['table'] = 'field_data_field_address_floor';
  $handler->display->display_options['fields']['entity_id_2']['field'] = 'field_address_floor';
  $handler->display->display_options['fields']['entity_id_2']['label'] = 'field_address_floor';
  $handler->display->display_options['fields']['entity_id_2']['exclude'] = TRUE;
  $handler->display->display_options['fields']['entity_id_2']['hide_empty'] = TRUE;
  /* Felt: Indhold: Address */
  $handler->display->display_options['fields']['entity_id_3']['id'] = 'entity_id_3';
  $handler->display->display_options['fields']['entity_id_3']['table'] = 'field_data_field_address_road';
  $handler->display->display_options['fields']['entity_id_3']['field'] = 'field_address_road';
  $handler->display->display_options['fields']['entity_id_3']['label'] = 'field_address_road';
  $handler->display->display_options['fields']['entity_id_3']['exclude'] = TRUE;
  $handler->display->display_options['fields']['entity_id_3']['hide_empty'] = TRUE;
  /* Felt: Indhold: House no. */
  $handler->display->display_options['fields']['entity_id_4']['id'] = 'entity_id_4';
  $handler->display->display_options['fields']['entity_id_4']['table'] = 'field_data_field_address_road_no';
  $handler->display->display_options['fields']['entity_id_4']['field'] = 'field_address_road_no';
  $handler->display->display_options['fields']['entity_id_4']['label'] = 'field_address_road_no';
  $handler->display->display_options['fields']['entity_id_4']['exclude'] = TRUE;
  $handler->display->display_options['fields']['entity_id_4']['hide_empty'] = TRUE;
  /* Felt: Indhold: Zip code */
  $handler->display->display_options['fields']['entity_id_5']['id'] = 'entity_id_5';
  $handler->display->display_options['fields']['entity_id_5']['table'] = 'field_data_field_address_zipcode';
  $handler->display->display_options['fields']['entity_id_5']['field'] = 'field_address_zipcode';
  $handler->display->display_options['fields']['entity_id_5']['label'] = 'Adresse';
  $handler->display->display_options['fields']['entity_id_5']['exclude'] = TRUE;
  $handler->display->display_options['fields']['entity_id_5']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['entity_id_5']['alter']['text'] = '[entity_id_3] [entity_id_4]  [entity_id_2] [entity_id_1], [entity_id_5] [entity_id]';
  $handler->display->display_options['fields']['entity_id_5']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['entity_id_5']['settings'] = array(
    'thousand_separator' => ' ',
    'prefix_suffix' => 1,
  );
  /* Felt: Indhold: Telefon */
  $handler->display->display_options['fields']['entity_id_7']['id'] = 'entity_id_7';
  $handler->display->display_options['fields']['entity_id_7']['table'] = 'field_data_field_phone';
  $handler->display->display_options['fields']['entity_id_7']['field'] = 'field_phone';
  $handler->display->display_options['fields']['entity_id_7']['exclude'] = TRUE;
  $handler->display->display_options['fields']['entity_id_7']['element_type'] = '0';
  $handler->display->display_options['fields']['entity_id_7']['element_label_type'] = 'span';
  $handler->display->display_options['fields']['entity_id_7']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['entity_id_7']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['entity_id_7']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['entity_id_7']['type'] = 'text_plain';
  /* Felt: Indhold: Telefon 2 */
  $handler->display->display_options['fields']['entity_id_8']['id'] = 'entity_id_8';
  $handler->display->display_options['fields']['entity_id_8']['table'] = 'field_data_field_phone2';
  $handler->display->display_options['fields']['entity_id_8']['field'] = 'field_phone2';
  $handler->display->display_options['fields']['entity_id_8']['exclude'] = TRUE;
  $handler->display->display_options['fields']['entity_id_8']['hide_empty'] = TRUE;
  /* Felt: Felt: Begræns adgang til følgende valgsteder */
  $handler->display->display_options['fields']['entity_id_9']['id'] = 'entity_id_9';
  $handler->display->display_options['fields']['entity_id_9']['table'] = 'field_data_field_polling_station';
  $handler->display->display_options['fields']['entity_id_9']['field'] = 'field_polling_station';
  $handler->display->display_options['fields']['entity_id_9']['label'] = 'Valgsted';
  $handler->display->display_options['fields']['entity_id_9']['exclude'] = TRUE;
  $handler->display->display_options['fields']['entity_id_9']['element_type'] = 'span';
  $handler->display->display_options['fields']['entity_id_9']['element_label_type'] = 'span';
  $handler->display->display_options['fields']['entity_id_9']['element_wrapper_type'] = 'span';
  $handler->display->display_options['fields']['entity_id_9']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['entity_id_9']['type'] = 'node_reference_plain';
  /* Felt: Global: Tilpasset tekst */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<div>
<h4>[title] ([entity_id_6] )</h4>
<div>[entity_id_3] [entity_id_4] [entity_id_2] [entity_id_1]<br />
</div>
</div>';
  $handler->display->display_options['fields']['nothing']['alter']['make_link'] = TRUE;
  /* Felt: Indhold: CPR */
  $handler->display->display_options['fields']['field_cpr_number']['id'] = 'field_cpr_number';
  $handler->display->display_options['fields']['field_cpr_number']['table'] = 'field_data_field_cpr_number';
  $handler->display->display_options['fields']['field_cpr_number']['field'] = 'field_cpr_number';
  $handler->display->display_options['fields']['field_cpr_number']['exclude'] = TRUE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sorteringskriterie: Ord i ordforråd: Navn */
  $handler->display->display_options['sorts']['name']['id'] = 'name';
  $handler->display->display_options['sorts']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['sorts']['name']['field'] = 'name';
  /* Sorteringskriterie: Indhold: Polling Station post (field_polling_station_post) */
  $handler->display->display_options['sorts']['field_polling_station_post_value']['id'] = 'field_polling_station_post_value';
  $handler->display->display_options['sorts']['field_polling_station_post_value']['table'] = 'field_data_field_polling_station_post';
  $handler->display->display_options['sorts']['field_polling_station_post_value']['field'] = 'field_polling_station_post_value';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['filter_groups']['groups'] = array(
    1 => 'AND',
    2 => 'AND',
  );
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filterkriterie: Indhold: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'volunteers' => 'volunteers',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filterkriterie: Felt: Begræns adgang til følgende valgsteder (field_polling_station) */
  $handler->display->display_options['filters']['field_polling_station_nid']['id'] = 'field_polling_station_nid';
  $handler->display->display_options['filters']['field_polling_station_nid']['table'] = 'field_data_field_polling_station';
  $handler->display->display_options['filters']['field_polling_station_nid']['field'] = 'field_polling_station_nid';
  $handler->display->display_options['filters']['field_polling_station_nid']['operator'] = 'not empty';
  $handler->display->display_options['filters']['field_polling_station_nid']['group'] = 1;
  /* Filterkriterie: Indhold: Polling Station post (field_polling_station_post) */
  $handler->display->display_options['filters']['field_polling_station_post_value']['id'] = 'field_polling_station_post_value';
  $handler->display->display_options['filters']['field_polling_station_post_value']['table'] = 'field_data_field_polling_station_post';
  $handler->display->display_options['filters']['field_polling_station_post_value']['field'] = 'field_polling_station_post_value';
  $handler->display->display_options['filters']['field_polling_station_post_value']['operator'] = '>=';
  $handler->display->display_options['filters']['field_polling_station_post_value']['value']['value'] = '1';
  $handler->display->display_options['filters']['field_polling_station_post_value']['group'] = 1;
  $handler->display->display_options['path'] = 'node/%/valgstederu';

  /* Display: Valgstyrere og tilforordnede */
  $handler = $view->new_display('page', 'Valgstyrere og tilforordnede', 'page_2');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Valgstyrere og tilforordnede';
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Overskrift: Global: View-område */
  $handler->display->display_options['header']['view']['id'] = 'view';
  $handler->display->display_options['header']['view']['table'] = 'views';
  $handler->display->display_options['header']['view']['field'] = 'view';
  $handler->display->display_options['header']['view']['view_to_insert'] = 'valgsted:ctools_context_1';
  $handler->display->display_options['header']['view']['inherit_arguments'] = TRUE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Felt: Indhold: Label */
  $handler->display->display_options['fields']['field_label']['id'] = 'field_label';
  $handler->display->display_options['fields']['field_label']['table'] = 'field_data_field_label';
  $handler->display->display_options['fields']['field_label']['field'] = 'field_label';
  $handler->display->display_options['fields']['field_label']['label'] = 'Rolle';
  $handler->display->display_options['fields']['field_label']['element_label_colon'] = FALSE;
  /* Felt: Indhold: Polling Station post */
  $handler->display->display_options['fields']['field_polling_station_post']['id'] = 'field_polling_station_post';
  $handler->display->display_options['fields']['field_polling_station_post']['table'] = 'field_data_field_polling_station_post';
  $handler->display->display_options['fields']['field_polling_station_post']['field'] = 'field_polling_station_post';
  $handler->display->display_options['fields']['field_polling_station_post']['label'] = 'Placering';
  $handler->display->display_options['fields']['field_polling_station_post']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_polling_station_post']['type'] = 'number_unformatted';
  $handler->display->display_options['fields']['field_polling_station_post']['settings'] = array(
    'thousand_separator' => ' ',
    'prefix_suffix' => 1,
  );
  /* Felt: Felt: Parti */
  $handler->display->display_options['fields']['entity_id_6']['id'] = 'entity_id_6';
  $handler->display->display_options['fields']['entity_id_6']['table'] = 'field_data_field_party';
  $handler->display->display_options['fields']['entity_id_6']['field'] = 'field_party';
  $handler->display->display_options['fields']['entity_id_6']['element_type'] = '0';
  $handler->display->display_options['fields']['entity_id_6']['element_label_type'] = '0';
  $handler->display->display_options['fields']['entity_id_6']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['entity_id_6']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['entity_id_6']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['entity_id_6']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['entity_id_6']['type'] = 'taxonomy_term_reference_plain';
  /* Felt: Indhold: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['link_to_node'] = TRUE;
  /* Felt: Indhold: Titel */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'Navn';
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Felt: Indhold: City */
  $handler->display->display_options['fields']['entity_id']['id'] = 'entity_id';
  $handler->display->display_options['fields']['entity_id']['table'] = 'field_data_field_address_city';
  $handler->display->display_options['fields']['entity_id']['field'] = 'field_address_city';
  $handler->display->display_options['fields']['entity_id']['label'] = 'field_address_door';
  $handler->display->display_options['fields']['entity_id']['exclude'] = TRUE;
  $handler->display->display_options['fields']['entity_id']['hide_empty'] = TRUE;
  /* Felt: Indhold: Door / Side */
  $handler->display->display_options['fields']['entity_id_1']['id'] = 'entity_id_1';
  $handler->display->display_options['fields']['entity_id_1']['table'] = 'field_data_field_address_door';
  $handler->display->display_options['fields']['entity_id_1']['field'] = 'field_address_door';
  $handler->display->display_options['fields']['entity_id_1']['label'] = 'field_address_door';
  $handler->display->display_options['fields']['entity_id_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['entity_id_1']['hide_empty'] = TRUE;
  /* Felt: Indhold: Floor */
  $handler->display->display_options['fields']['entity_id_2']['id'] = 'entity_id_2';
  $handler->display->display_options['fields']['entity_id_2']['table'] = 'field_data_field_address_floor';
  $handler->display->display_options['fields']['entity_id_2']['field'] = 'field_address_floor';
  $handler->display->display_options['fields']['entity_id_2']['label'] = 'field_address_floor';
  $handler->display->display_options['fields']['entity_id_2']['exclude'] = TRUE;
  $handler->display->display_options['fields']['entity_id_2']['hide_empty'] = TRUE;
  /* Felt: Indhold: Address */
  $handler->display->display_options['fields']['entity_id_3']['id'] = 'entity_id_3';
  $handler->display->display_options['fields']['entity_id_3']['table'] = 'field_data_field_address_road';
  $handler->display->display_options['fields']['entity_id_3']['field'] = 'field_address_road';
  $handler->display->display_options['fields']['entity_id_3']['label'] = 'field_address_road';
  $handler->display->display_options['fields']['entity_id_3']['exclude'] = TRUE;
  $handler->display->display_options['fields']['entity_id_3']['hide_empty'] = TRUE;
  /* Felt: Indhold: House no. */
  $handler->display->display_options['fields']['entity_id_4']['id'] = 'entity_id_4';
  $handler->display->display_options['fields']['entity_id_4']['table'] = 'field_data_field_address_road_no';
  $handler->display->display_options['fields']['entity_id_4']['field'] = 'field_address_road_no';
  $handler->display->display_options['fields']['entity_id_4']['label'] = 'field_address_road_no';
  $handler->display->display_options['fields']['entity_id_4']['exclude'] = TRUE;
  $handler->display->display_options['fields']['entity_id_4']['hide_empty'] = TRUE;
  /* Felt: Indhold: Zip code */
  $handler->display->display_options['fields']['entity_id_5']['id'] = 'entity_id_5';
  $handler->display->display_options['fields']['entity_id_5']['table'] = 'field_data_field_address_zipcode';
  $handler->display->display_options['fields']['entity_id_5']['field'] = 'field_address_zipcode';
  $handler->display->display_options['fields']['entity_id_5']['label'] = 'Adresse';
  $handler->display->display_options['fields']['entity_id_5']['exclude'] = TRUE;
  $handler->display->display_options['fields']['entity_id_5']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['entity_id_5']['alter']['text'] = '[entity_id_3] [entity_id_4]  [entity_id_2] [entity_id_1], [entity_id_5] [entity_id]';
  $handler->display->display_options['fields']['entity_id_5']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['entity_id_5']['settings'] = array(
    'thousand_separator' => ' ',
    'prefix_suffix' => 1,
  );
  /* Felt: Indhold: Telefon */
  $handler->display->display_options['fields']['entity_id_7']['id'] = 'entity_id_7';
  $handler->display->display_options['fields']['entity_id_7']['table'] = 'field_data_field_phone';
  $handler->display->display_options['fields']['entity_id_7']['field'] = 'field_phone';
  $handler->display->display_options['fields']['entity_id_7']['exclude'] = TRUE;
  $handler->display->display_options['fields']['entity_id_7']['element_type'] = '0';
  $handler->display->display_options['fields']['entity_id_7']['element_label_type'] = 'span';
  $handler->display->display_options['fields']['entity_id_7']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['entity_id_7']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['entity_id_7']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['entity_id_7']['type'] = 'text_plain';
  /* Felt: Indhold: Telefon 2 */
  $handler->display->display_options['fields']['entity_id_8']['id'] = 'entity_id_8';
  $handler->display->display_options['fields']['entity_id_8']['table'] = 'field_data_field_phone2';
  $handler->display->display_options['fields']['entity_id_8']['field'] = 'field_phone2';
  $handler->display->display_options['fields']['entity_id_8']['exclude'] = TRUE;
  $handler->display->display_options['fields']['entity_id_8']['hide_empty'] = TRUE;
  /* Felt: Felt: Begræns adgang til følgende valgsteder */
  $handler->display->display_options['fields']['entity_id_9']['id'] = 'entity_id_9';
  $handler->display->display_options['fields']['entity_id_9']['table'] = 'field_data_field_polling_station';
  $handler->display->display_options['fields']['entity_id_9']['field'] = 'field_polling_station';
  $handler->display->display_options['fields']['entity_id_9']['label'] = 'Valgsted';
  $handler->display->display_options['fields']['entity_id_9']['element_type'] = 'span';
  $handler->display->display_options['fields']['entity_id_9']['element_label_type'] = 'span';
  $handler->display->display_options['fields']['entity_id_9']['element_wrapper_type'] = 'span';
  $handler->display->display_options['fields']['entity_id_9']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['entity_id_9']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['entity_id_9']['type'] = 'node_reference_plain';
  $handler->display->display_options['fields']['entity_id_9']['delta_offset'] = '0';
  /* Felt: Global: Tilpasset tekst */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<div>
<h4>[title] ([entity_id_6] )</h4>
<div>[entity_id_3] [entity_id_4] [entity_id_2] [entity_id_1]<br />
</div>
</div>';
  $handler->display->display_options['fields']['nothing']['alter']['make_link'] = TRUE;
  /* Felt: Indhold: CPR */
  $handler->display->display_options['fields']['field_cpr_number']['id'] = 'field_cpr_number';
  $handler->display->display_options['fields']['field_cpr_number']['table'] = 'field_data_field_cpr_number';
  $handler->display->display_options['fields']['field_cpr_number']['field'] = 'field_cpr_number';
  $handler->display->display_options['fields']['field_cpr_number']['exclude'] = TRUE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sorteringskriterie: Ord i ordforråd: Navn */
  $handler->display->display_options['sorts']['name']['id'] = 'name';
  $handler->display->display_options['sorts']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['sorts']['name']['field'] = 'name';
  /* Sorteringskriterie: Indhold: Polling Station post (field_polling_station_post) */
  $handler->display->display_options['sorts']['field_polling_station_post_value']['id'] = 'field_polling_station_post_value';
  $handler->display->display_options['sorts']['field_polling_station_post_value']['table'] = 'field_data_field_polling_station_post';
  $handler->display->display_options['sorts']['field_polling_station_post_value']['field'] = 'field_polling_station_post_value';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['filter_groups']['groups'] = array(
    1 => 'AND',
    2 => 'AND',
  );
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filterkriterie: Indhold: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'volunteers' => 'volunteers',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filterkriterie: Felt: Begræns adgang til følgende valgsteder (field_polling_station) */
  $handler->display->display_options['filters']['field_polling_station_nid']['id'] = 'field_polling_station_nid';
  $handler->display->display_options['filters']['field_polling_station_nid']['table'] = 'field_data_field_polling_station';
  $handler->display->display_options['filters']['field_polling_station_nid']['field'] = 'field_polling_station_nid';
  $handler->display->display_options['filters']['field_polling_station_nid']['operator'] = 'not empty';
  $handler->display->display_options['filters']['field_polling_station_nid']['group'] = 1;
  /* Filterkriterie: Indhold: Polling Station post (field_polling_station_post) */
  $handler->display->display_options['filters']['field_polling_station_post_value']['id'] = 'field_polling_station_post_value';
  $handler->display->display_options['filters']['field_polling_station_post_value']['table'] = 'field_data_field_polling_station_post';
  $handler->display->display_options['filters']['field_polling_station_post_value']['field'] = 'field_polling_station_post_value';
  $handler->display->display_options['filters']['field_polling_station_post_value']['operator'] = '>=';
  $handler->display->display_options['filters']['field_polling_station_post_value']['value']['value'] = '1';
  $handler->display->display_options['filters']['field_polling_station_post_value']['group'] = 1;
  $handler->display->display_options['path'] = 'node/%/valgstederu2';
  $translatables['list'] = array(
    t('Defaults'),
    t('mere'),
    t('Udfør'),
    t('Gendan'),
    t('Sortér efter'),
    t('Stigende'),
    t('Faldende'),
    t('term'),
    t('Nid'),
    t('Navn'),
    t('CPR'),
    t('Parti'),
    t('field_address_door'),
    t('field_address_floor'),
    t('field_address_road'),
    t('field_address_road_no'),
    t('field_address_zipcode'),
    t('Telefon'),
    t('Telefon 2'),
    t('Valgsted'),
    t('<div>
<h4>[title] ([entity_id_6] )</h4>
<div>[entity_id_3] [entity_id_4] [entity_id_2] [entity_id_1]<br />
</div>
</div>'),
    t('Placering'),
    t('Kvittering'),
    t('Alle'),
    t('Content pane'),
    t('View panes'),
    t('Content pane Partivisning'),
    t('/ [entity_id_8]'),
    t('<div>
<h4>[title] ([entity_id_6] )</h4>
<span calss="mobile">[entity_id_7] [entity_id_8]
</span>
</div>'),
    t('Kvitteringsliste for diæter'),
    t('Diæt'),
    t('1.185'),
    t('Valgstyrere og tilforordnede'),
    t('Rolle'),
    t('Adresse'),
    t('[entity_id_3] [entity_id_4]  [entity_id_2] [entity_id_1], [entity_id_5] [entity_id]'),
  );
  $export['list'] = $view;

  $view = new view();
  $view->name = 'lister_til_valgsted';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'lister_til_valgsted';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Liste til valgsted';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'mere';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Udfør';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Gendan';
  $handler->display->display_options['exposed_form']['options']['exposed_sorts_label'] = 'Sortér efter';
  $handler->display->display_options['exposed_form']['options']['sort_asc_label'] = 'Stigende';
  $handler->display->display_options['exposed_form']['options']['sort_desc_label'] = 'Faldende';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_label'] = 'Elementer pr. side';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options_all_label'] = '- Alle -';
  $handler->display->display_options['pager']['options']['expose']['offset_label'] = 'Forskydning';
  $handler->display->display_options['pager']['options']['tags']['first'] = '« første';
  $handler->display->display_options['pager']['options']['tags']['previous'] = '‹ forrige';
  $handler->display->display_options['pager']['options']['tags']['next'] = 'næste ›';
  $handler->display->display_options['pager']['options']['tags']['last'] = 'sidste »';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['grouping'] = '';
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
    'field_cpr_number' => 'title',
    'edit_node' => 'title',
    'field_phone' => 'field_phone',
    'field_phone2' => 'field_phone2',
    'title_1' => 'title_1',
    'name' => 'name',
    'name_1' => 'name_1',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
    ),
    'field_cpr_number' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
    ),
    'edit_node' => array(
      'align' => '',
      'separator' => '',
    ),
    'field_phone' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
    ),
    'field_phone2' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
    ),
    'title_1' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
    ),
    'name' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
    ),
    'name_1' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
    ),
  );
  /* Felt: Indhold: Titel */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Felt: Indhold: CPR */
  $handler->display->display_options['fields']['field_cpr_number']['id'] = 'field_cpr_number';
  $handler->display->display_options['fields']['field_cpr_number']['table'] = 'field_data_field_cpr_number';
  $handler->display->display_options['fields']['field_cpr_number']['field'] = 'field_cpr_number';
  $handler->display->display_options['fields']['field_cpr_number']['exclude'] = TRUE;
  /* Felt: Indhold: Redigér-link */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  /* Felt: Indhold: Telefon */
  $handler->display->display_options['fields']['field_phone']['id'] = 'field_phone';
  $handler->display->display_options['fields']['field_phone']['table'] = 'field_data_field_phone';
  $handler->display->display_options['fields']['field_phone']['field'] = 'field_phone';
  $handler->display->display_options['fields']['field_phone']['exclude'] = TRUE;
  /* Felt: Indhold: Telefon 2 */
  $handler->display->display_options['fields']['field_phone2']['id'] = 'field_phone2';
  $handler->display->display_options['fields']['field_phone2']['table'] = 'field_data_field_phone2';
  $handler->display->display_options['fields']['field_phone2']['field'] = 'field_phone2';
  $handler->display->display_options['fields']['field_phone2']['exclude'] = TRUE;
  /* Felt: Indhold: Titel */
  $handler->display->display_options['fields']['title_1']['id'] = 'title_1';
  $handler->display->display_options['fields']['title_1']['table'] = 'node';
  $handler->display->display_options['fields']['title_1']['field'] = 'title';
  /* Felt: Ord i ordforråd: Navn */
  $handler->display->display_options['fields']['name_1']['id'] = 'name_1';
  $handler->display->display_options['fields']['name_1']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['name_1']['field'] = 'name';
  $handler->display->display_options['fields']['name_1']['label'] = 'Parti';
  /* Sorteringskriterie: Indhold: Oprettelsesdato */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filterkriterie: Indhold: Udgivet */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 0;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filterkriterie: Indhold: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'volunteers' => 'volunteers',
  );
  $handler->display->display_options['filters']['type']['group'] = '0';

  /* Display: Content pane */
  $handler = $view->new_display('panel_pane', 'Content pane', 'panel_pane_1');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['argument_input'] = array(
    'nid' => array(
      'type' => 'context',
      'context' => 'node.nid',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'Indhold: Nid',
    ),
  );
  $handler->display->display_options['inherit_panels_path'] = '1';
  $translatables['lister_til_valgsted'] = array(
    t('Master'),
    t('Liste til valgsted'),
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
    t('CPR'),
    t('Redigér-link'),
    t('Telefon'),
    t('Telefon 2'),
    t('Titel'),
    t('Parti'),
    t('Content pane'),
    t('View panes'),
  );
  $export['lister_til_valgsted'] = $view;

  $view = new view();
  $view->name = 'ulriks_test';
  $view->description = 'random stuff';
  $view->tag = 'valhalla';
  $view->base_table = 'node';
  $view->human_name = 'ulriks test';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Standarder */
  $handler = $view->new_display('default', 'Standarder', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'mere';
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Udfør';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Gendan';
  $handler->display->display_options['exposed_form']['options']['exposed_sorts_label'] = 'Sortér efter';
  $handler->display->display_options['exposed_form']['options']['sort_asc_label'] = 'Stigende';
  $handler->display->display_options['exposed_form']['options']['sort_desc_label'] = 'Faldende';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '0';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_label'] = 'Elementer pr. side';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options_all_label'] = '- Alle -';
  $handler->display->display_options['pager']['options']['expose']['offset_label'] = 'Forskydning';
  $handler->display->display_options['pager']['options']['tags']['first'] = '« første';
  $handler->display->display_options['pager']['options']['tags']['previous'] = '‹ forrige';
  $handler->display->display_options['pager']['options']['tags']['next'] = 'næste ›';
  $handler->display->display_options['pager']['options']['tags']['last'] = 'sidste »';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['grouping'] = '';
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
    'entity_id' => 'entity_id',
    'entity_id_1' => 'entity_id_1',
    'entity_id_3' => 'entity_id_3',
    'entity_id_4' => 'entity_id_4',
    'entity_id_5' => 'entity_id_5',
    'entity_id_6' => 'entity_id_6',
    'entity_id_7' => 'entity_id_7',
    'entity_id_2' => 'entity_id_2',
    'entity_id_8' => 'entity_id_8',
    'entity_id_9' => 'entity_id_9',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'title' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
    ),
    'entity_id' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
    ),
    'entity_id_1' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
    ),
    'entity_id_3' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
    ),
    'entity_id_4' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
    ),
    'entity_id_5' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
    ),
    'entity_id_6' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
    ),
    'entity_id_7' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
    ),
    'entity_id_2' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
    ),
    'entity_id_8' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
    ),
    'entity_id_9' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
    ),
  );
  /* Felt: Indhold: Titel */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  /* Felt: Indhold: CPR */
  $handler->display->display_options['fields']['entity_id']['id'] = 'entity_id';
  $handler->display->display_options['fields']['entity_id']['table'] = 'field_data_field_cpr_number';
  $handler->display->display_options['fields']['entity_id']['field'] = 'field_cpr_number';
  $handler->display->display_options['fields']['entity_id']['label'] = 'field_cpr_number';
  /* Felt: Indhold: Email */
  $handler->display->display_options['fields']['entity_id_1']['id'] = 'entity_id_1';
  $handler->display->display_options['fields']['entity_id_1']['table'] = 'field_data_field_email';
  $handler->display->display_options['fields']['entity_id_1']['field'] = 'field_email';
  $handler->display->display_options['fields']['entity_id_1']['label'] = 'field_email';
  /* Felt: Felt: Parti */
  $handler->display->display_options['fields']['entity_id_3']['id'] = 'entity_id_3';
  $handler->display->display_options['fields']['entity_id_3']['table'] = 'field_data_field_party';
  $handler->display->display_options['fields']['entity_id_3']['field'] = 'field_party';
  $handler->display->display_options['fields']['entity_id_3']['label'] = 'field_party';
  /* Felt: Indhold: Telefon */
  $handler->display->display_options['fields']['entity_id_4']['id'] = 'entity_id_4';
  $handler->display->display_options['fields']['entity_id_4']['table'] = 'field_data_field_phone';
  $handler->display->display_options['fields']['entity_id_4']['field'] = 'field_phone';
  $handler->display->display_options['fields']['entity_id_4']['label'] = 'field_phone';
  /* Felt: Indhold: Telefon 2 */
  $handler->display->display_options['fields']['entity_id_5']['id'] = 'entity_id_5';
  $handler->display->display_options['fields']['entity_id_5']['table'] = 'field_data_field_phone2';
  $handler->display->display_options['fields']['entity_id_5']['field'] = 'field_phone2';
  $handler->display->display_options['fields']['entity_id_5']['label'] = 'field_phone2';
  /* Felt: Felt: Begræns adgang til følgende valgsteder */
  $handler->display->display_options['fields']['entity_id_6']['id'] = 'entity_id_6';
  $handler->display->display_options['fields']['entity_id_6']['table'] = 'field_data_field_polling_station';
  $handler->display->display_options['fields']['entity_id_6']['field'] = 'field_polling_station';
  $handler->display->display_options['fields']['entity_id_6']['label'] = 'field_polling_station';
  /* Felt: Indhold: Polling Station post */
  $handler->display->display_options['fields']['entity_id_7']['id'] = 'entity_id_7';
  $handler->display->display_options['fields']['entity_id_7']['table'] = 'field_data_field_polling_station_post';
  $handler->display->display_options['fields']['entity_id_7']['field'] = 'field_polling_station_post';
  $handler->display->display_options['fields']['entity_id_7']['label'] = 'field_polling_station_post';
  $handler->display->display_options['fields']['entity_id_7']['settings'] = array(
    'thousand_separator' => ' ',
    'prefix_suffix' => 1,
  );
  /* Felt: Indhold: Label */
  $handler->display->display_options['fields']['entity_id_2']['id'] = 'entity_id_2';
  $handler->display->display_options['fields']['entity_id_2']['table'] = 'field_data_field_label';
  $handler->display->display_options['fields']['entity_id_2']['field'] = 'field_label';
  $handler->display->display_options['fields']['entity_id_2']['label'] = 'field_label';
  /* Felt: Indhold: Status */
  $handler->display->display_options['fields']['entity_id_8']['id'] = 'entity_id_8';
  $handler->display->display_options['fields']['entity_id_8']['table'] = 'field_data_field_rsvp';
  $handler->display->display_options['fields']['entity_id_8']['field'] = 'field_rsvp';
  $handler->display->display_options['fields']['entity_id_8']['label'] = 'field_rsvp';
  /* Felt: Indhold: Token */
  $handler->display->display_options['fields']['entity_id_9']['id'] = 'entity_id_9';
  $handler->display->display_options['fields']['entity_id_9']['table'] = 'field_data_field_token';
  $handler->display->display_options['fields']['entity_id_9']['field'] = 'field_token';
  $handler->display->display_options['fields']['entity_id_9']['label'] = 'field_token';
  /* Sorteringskriterie: Felt: Parti (field_party) */
  $handler->display->display_options['sorts']['field_party_tid']['id'] = 'field_party_tid';
  $handler->display->display_options['sorts']['field_party_tid']['table'] = 'field_data_field_party';
  $handler->display->display_options['sorts']['field_party_tid']['field'] = 'field_party_tid';
  /* Sorteringskriterie: Felt: Begræns adgang til følgende valgsteder (field_polling_station) */
  $handler->display->display_options['sorts']['field_polling_station_nid']['id'] = 'field_polling_station_nid';
  $handler->display->display_options['sorts']['field_polling_station_nid']['table'] = 'field_data_field_polling_station';
  $handler->display->display_options['sorts']['field_polling_station_nid']['field'] = 'field_polling_station_nid';
  /* Filterkriterie: Indhold: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'volunteers' => 'volunteers',
  );
  $handler->display->display_options['filters']['type']['group'] = '0';

  /* Display: Side */
  $handler = $view->new_display('page', 'Side', 'page_1');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['path'] = 'ulriks-test-1';
  $translatables['ulriks_test'] = array(
    t('Standarder'),
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
    t('Titel'),
    t('field_cpr_number'),
    t('field_email'),
    t('field_party'),
    t('field_phone'),
    t('field_phone2'),
    t('field_polling_station'),
    t('field_polling_station_post'),
    t('field_label'),
    t('field_rsvp'),
    t('field_token'),
    t('Side'),
  );
  $export['ulriks_test'] = $view;

  $view = new view();
  $view->name = 'valg';
  $view->description = 'valg';
  $view->tag = 'valhalla';
  $view->base_table = 'node';
  $view->human_name = 'valg';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Defaults */
  $handler = $view->new_display('default', 'Defaults', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'mere';
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Udfør';
  $handler->display->display_options['exposed_form']['options']['reset_button'] = TRUE;
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Gendan';
  $handler->display->display_options['exposed_form']['options']['exposed_sorts_label'] = 'Sortér efter';
  $handler->display->display_options['exposed_form']['options']['sort_asc_label'] = 'Stigende';
  $handler->display->display_options['exposed_form']['options']['sort_desc_label'] = 'Faldende';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_label'] = 'Elementer pr. side';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options_all_label'] = '- Alle -';
  $handler->display->display_options['pager']['options']['expose']['offset_label'] = 'Forskydning';
  $handler->display->display_options['pager']['options']['tags']['first'] = '« første';
  $handler->display->display_options['pager']['options']['tags']['previous'] = '‹ forrige';
  $handler->display->display_options['pager']['options']['tags']['next'] = 'næste ›';
  $handler->display->display_options['pager']['options']['tags']['last'] = 'sidste »';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
    'entity_id' => 'entity_id',
    'entity_id_1' => 'entity_id_1',
    'entity_id_2' => 'entity_id_2',
    'nid' => 'nid',
    'field_election_status' => 'field_election_status',
    'field_election_mails_send' => 'field_election_mails_send',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'entity_id' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'entity_id_1' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'entity_id_2' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'nid' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_election_status' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '|',
      'empty_column' => 0,
    ),
    'field_election_mails_send' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['style_options']['sticky'] = TRUE;
  /* Felt: Indhold: Titel */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Felt: Indhold: Dato */
  $handler->display->display_options['fields']['entity_id']['id'] = 'entity_id';
  $handler->display->display_options['fields']['entity_id']['table'] = 'field_data_field_date';
  $handler->display->display_options['fields']['entity_id']['field'] = 'field_date';
  $handler->display->display_options['fields']['entity_id']['settings'] = array(
    'format_type' => 'long',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_repeat_rule' => 'show',
  );
  /* Felt: Indhold: Sæt igang */
  $handler->display->display_options['fields']['entity_id_1']['id'] = 'entity_id_1';
  $handler->display->display_options['fields']['entity_id_1']['table'] = 'field_data_field_election_status';
  $handler->display->display_options['fields']['entity_id_1']['field'] = 'field_election_status';
  $handler->display->display_options['fields']['entity_id_1']['label'] = 'Status';
  $handler->display->display_options['fields']['entity_id_1']['alter']['text'] = 'i gang';
  $handler->display->display_options['fields']['entity_id_1']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['entity_id_1']['type'] = 'list_key';
  /* Felt: Indhold: Type */
  $handler->display->display_options['fields']['entity_id_2']['id'] = 'entity_id_2';
  $handler->display->display_options['fields']['entity_id_2']['table'] = 'field_data_field_election_type';
  $handler->display->display_options['fields']['entity_id_2']['field'] = 'field_election_type';
  $handler->display->display_options['fields']['entity_id_2']['type'] = 'taxonomy_term_reference_plain';
  /* Felt: Indhold: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  /* Felt: Indhold: Sæt igang */
  $handler->display->display_options['fields']['field_election_status']['id'] = 'field_election_status';
  $handler->display->display_options['fields']['field_election_status']['table'] = 'field_data_field_election_status';
  $handler->display->display_options['fields']['field_election_status']['field'] = 'field_election_status';
  $handler->display->display_options['fields']['field_election_status']['label'] = '';
  $handler->display->display_options['fields']['field_election_status']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_election_status']['alter']['text'] = '<a href="/node/[nid]/edit">ret</a> | 
  <a href="/admin/valhalla/stop-election/[nid]">stop</a>';
  $handler->display->display_options['fields']['field_election_status']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_election_status']['empty'] = '<a href="/node/[nid]/edit">ret</a> | 
 <a href="/admin/valhalla/start-election/[nid]">aktiver</a> ';
  $handler->display->display_options['fields']['field_election_status']['empty_zero'] = TRUE;
  $handler->display->display_options['fields']['field_election_status']['type'] = 'list_key';
  /* Felt: Indhold: Emails sendt */
  $handler->display->display_options['fields']['field_election_mails_send']['id'] = 'field_election_mails_send';
  $handler->display->display_options['fields']['field_election_mails_send']['table'] = 'field_data_field_election_mails_send';
  $handler->display->display_options['fields']['field_election_mails_send']['field'] = 'field_election_mails_send';
  $handler->display->display_options['fields']['field_election_mails_send']['empty'] = '  <a href="/admin/valhalla/sendinvitation">send invitationer</a>';
  $handler->display->display_options['fields']['field_election_mails_send']['hide_alter_empty'] = FALSE;
  /* Sorteringskriterie: Indhold: Dato (field_date) */
  $handler->display->display_options['sorts']['field_date_value']['id'] = 'field_date_value';
  $handler->display->display_options['sorts']['field_date_value']['table'] = 'field_data_field_date';
  $handler->display->display_options['sorts']['field_date_value']['field'] = 'field_date_value';
  /* Filterkriterie: Dato: Dato (node) */
  $handler->display->display_options['filters']['date_filter']['id'] = 'date_filter';
  $handler->display->display_options['filters']['date_filter']['table'] = 'node';
  $handler->display->display_options['filters']['date_filter']['field'] = 'date_filter';
  $handler->display->display_options['filters']['date_filter']['operator'] = '>=';
  $handler->display->display_options['filters']['date_filter']['group'] = '0';
  $handler->display->display_options['filters']['date_filter']['default_date'] = 'now -1 day';
  $handler->display->display_options['filters']['date_filter']['date_fields'] = array(
    'field_data_field_date.field_date_value' => 'field_data_field_date.field_date_value',
  );
  /* Filterkriterie: Indhold: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'election' => 'election',
  );
  $handler->display->display_options['filters']['type']['group'] = '0';
  $translatables['valg'] = array(
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
    t('Titel'),
    t('Dato'),
    t('Status'),
    t('i gang'),
    t('Type'),
    t('<a href="/node/[nid]/edit">ret</a> | 
  <a href="/admin/valhalla/stop-election/[nid]">stop</a>'),
    t('<a href="/node/[nid]/edit">ret</a> | 
 <a href="/admin/valhalla/start-election/[nid]">aktiver</a> '),
    t('Emails sendt'),
    t('  <a href="/admin/valhalla/sendinvitation">send invitationer</a>'),
  );
  $export['valg'] = $view;

  $view = new view();
  $view->name = 'valgsted';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Valgsted';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Kvitteringsliste for diæter';
  $handler->display->display_options['css_class'] = 'kvitteringsliste-header';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'mere';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Udfør';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Gendan';
  $handler->display->display_options['exposed_form']['options']['exposed_sorts_label'] = 'Sortér efter';
  $handler->display->display_options['exposed_form']['options']['sort_asc_label'] = 'Stigende';
  $handler->display->display_options['exposed_form']['options']['sort_desc_label'] = 'Faldende';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['grouping'] = '';
  $handler->display->display_options['row_plugin'] = 'panels_fields';
  $handler->display->display_options['row_options']['inline'] = array(
    'field_constituency' => 'field_constituency',
    'field_venue_skolekode' => 'field_venue_skolekode',
    'body' => 'body',
    'field_chairman' => 'field_chairman',
    'field_venue_contact' => 'field_venue_contact',
    'field_venue_teams' => 'field_venue_teams',
    'field_contact' => 'field_contact',
    'field_venue_contact_name' => 'field_venue_contact_name',
    'field_venue_team_members' => 'field_venue_team_members',
    'field_volunteers_pr_party' => 'field_volunteers_pr_party',
  );
  $handler->display->display_options['row_options']['hide_empty'] = 0;
  $handler->display->display_options['row_options']['layout'] = 'onecol';
  $handler->display->display_options['row_options']['regions'] = array(
    'field_constituency' => 'middle',
    'title' => 'middle',
    'field_venue_skolekode' => 'middle',
    'body' => 'middle',
    'field_chairman' => 'middle',
    'field_venue_contact' => 'middle',
    'field_venue_teams' => 'middle',
    'field_contact' => 'middle',
    'field_venue_contact_name' => 'middle',
    'field_venue_team_members' => 'middle',
    'field_volunteers_pr_party' => 'middle',
  );
  /* Felt: Indhold: Valgkreds */
  $handler->display->display_options['fields']['field_constituency']['id'] = 'field_constituency';
  $handler->display->display_options['fields']['field_constituency']['table'] = 'field_data_field_constituency';
  $handler->display->display_options['fields']['field_constituency']['field'] = 'field_constituency';
  $handler->display->display_options['fields']['field_constituency']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_constituency']['element_type'] = 'span';
  $handler->display->display_options['fields']['field_constituency']['element_label_type'] = 'span';
  $handler->display->display_options['fields']['field_constituency']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['field_constituency']['type'] = 'node_reference_plain';
  /* Felt: Indhold: Titel */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Felt: Indhold: Skolekode */
  $handler->display->display_options['fields']['field_venue_skolekode']['id'] = 'field_venue_skolekode';
  $handler->display->display_options['fields']['field_venue_skolekode']['table'] = 'field_data_field_venue_skolekode';
  $handler->display->display_options['fields']['field_venue_skolekode']['field'] = 'field_venue_skolekode';
  $handler->display->display_options['fields']['field_venue_skolekode']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_venue_skolekode']['element_type'] = 'span';
  $handler->display->display_options['fields']['field_venue_skolekode']['element_label_type'] = 'span';
  $handler->display->display_options['fields']['field_venue_skolekode']['element_wrapper_type'] = 'div';
  /* Felt: Indhold: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['element_label_type'] = 'div';
  $handler->display->display_options['fields']['body']['element_label_class'] = 'valgstedsbeskrivelse';
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['element_default_classes'] = FALSE;
  /* Felt: : field_chairman */
  $handler->display->display_options['fields']['field_chairman']['id'] = 'field_chairman';
  $handler->display->display_options['fields']['field_chairman']['table'] = 'field_data_field_chairman';
  $handler->display->display_options['fields']['field_chairman']['field'] = 'field_chairman';
  $handler->display->display_options['fields']['field_chairman']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_chairman']['element_type'] = 'span';
  $handler->display->display_options['fields']['field_chairman']['element_label_type'] = 'span';
  $handler->display->display_options['fields']['field_chairman']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['field_chairman']['element_default_classes'] = FALSE;
  /* Felt: Indhold: Andre kontaktoplysninger */
  $handler->display->display_options['fields']['field_venue_contact']['id'] = 'field_venue_contact';
  $handler->display->display_options['fields']['field_venue_contact']['table'] = 'field_data_field_venue_contact';
  $handler->display->display_options['fields']['field_venue_contact']['field'] = 'field_venue_contact';
  $handler->display->display_options['fields']['field_venue_contact']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_venue_contact']['element_type'] = 'span';
  $handler->display->display_options['fields']['field_venue_contact']['element_label_type'] = 'span';
  $handler->display->display_options['fields']['field_venue_contact']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['field_venue_contact']['element_default_classes'] = FALSE;
  /* Felt: Indhold: Borde */
  $handler->display->display_options['fields']['field_venue_teams']['id'] = 'field_venue_teams';
  $handler->display->display_options['fields']['field_venue_teams']['table'] = 'field_data_field_venue_teams';
  $handler->display->display_options['fields']['field_venue_teams']['field'] = 'field_venue_teams';
  $handler->display->display_options['fields']['field_venue_teams']['label'] = 'Antal borde';
  $handler->display->display_options['fields']['field_venue_teams']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_venue_teams']['element_type'] = 'span';
  $handler->display->display_options['fields']['field_venue_teams']['element_label_type'] = 'span';
  $handler->display->display_options['fields']['field_venue_teams']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['field_venue_teams']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_venue_teams']['settings'] = array(
    'thousand_separator' => ' ',
    'prefix_suffix' => 1,
  );
  /* Felt: Indhold: Valgkontakt */
  $handler->display->display_options['fields']['field_contact']['id'] = 'field_contact';
  $handler->display->display_options['fields']['field_contact']['table'] = 'field_data_field_contact';
  $handler->display->display_options['fields']['field_contact']['field'] = 'field_contact';
  $handler->display->display_options['fields']['field_contact']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_contact']['element_type'] = 'span';
  $handler->display->display_options['fields']['field_contact']['element_label_type'] = 'span';
  $handler->display->display_options['fields']['field_contact']['element_wrapper_type'] = 'div';
  /* Felt: Indhold: Lokalekontakt */
  $handler->display->display_options['fields']['field_venue_contact_name']['id'] = 'field_venue_contact_name';
  $handler->display->display_options['fields']['field_venue_contact_name']['table'] = 'field_data_field_venue_contact_name';
  $handler->display->display_options['fields']['field_venue_contact_name']['field'] = 'field_venue_contact_name';
  $handler->display->display_options['fields']['field_venue_contact_name']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_venue_contact_name']['element_type'] = 'span';
  $handler->display->display_options['fields']['field_venue_contact_name']['element_label_type'] = 'span';
  $handler->display->display_options['fields']['field_venue_contact_name']['element_wrapper_type'] = 'div';
  /* Felt: Indhold: Pladser per bord */
  $handler->display->display_options['fields']['field_venue_team_members']['id'] = 'field_venue_team_members';
  $handler->display->display_options['fields']['field_venue_team_members']['table'] = 'field_data_field_venue_team_members';
  $handler->display->display_options['fields']['field_venue_team_members']['field'] = 'field_venue_team_members';
  $handler->display->display_options['fields']['field_venue_team_members']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_venue_team_members']['element_type'] = 'span';
  $handler->display->display_options['fields']['field_venue_team_members']['element_label_type'] = 'span';
  $handler->display->display_options['fields']['field_venue_team_members']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['field_venue_team_members']['settings'] = array(
    'thousand_separator' => ' ',
    'prefix_suffix' => 1,
  );
  /* Felt: Handler mangler eller er i stykker */
  $handler->display->display_options['fields']['field_volunteers_pr_party']['id'] = 'field_volunteers_pr_party';
  $handler->display->display_options['fields']['field_volunteers_pr_party']['table'] = 'field_data_field_volunteers_pr_party';
  $handler->display->display_options['fields']['field_volunteers_pr_party']['field'] = 'field_volunteers_pr_party';
  $handler->display->display_options['fields']['field_volunteers_pr_party']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_volunteers_pr_party']['element_type'] = 'p';
  $handler->display->display_options['fields']['field_volunteers_pr_party']['element_label_type'] = 'span';
  $handler->display->display_options['fields']['field_volunteers_pr_party']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['field_volunteers_pr_party']['element_wrapper_class'] = 'antalperparti';
  /* Felt: Indhold: Door / Side */
  $handler->display->display_options['fields']['field_address_door']['id'] = 'field_address_door';
  $handler->display->display_options['fields']['field_address_door']['table'] = 'field_data_field_address_door';
  $handler->display->display_options['fields']['field_address_door']['field'] = 'field_address_door';
  $handler->display->display_options['fields']['field_address_door']['label'] = '';
  $handler->display->display_options['fields']['field_address_door']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_address_door']['element_label_colon'] = FALSE;
  /* Felt: Indhold: House no. */
  $handler->display->display_options['fields']['field_address_road_no']['id'] = 'field_address_road_no';
  $handler->display->display_options['fields']['field_address_road_no']['table'] = 'field_data_field_address_road_no';
  $handler->display->display_options['fields']['field_address_road_no']['field'] = 'field_address_road_no';
  $handler->display->display_options['fields']['field_address_road_no']['label'] = '';
  $handler->display->display_options['fields']['field_address_road_no']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_address_road_no']['element_label_colon'] = FALSE;
  /* Felt: Indhold: Zip code */
  $handler->display->display_options['fields']['field_address_zipcode']['id'] = 'field_address_zipcode';
  $handler->display->display_options['fields']['field_address_zipcode']['table'] = 'field_data_field_address_zipcode';
  $handler->display->display_options['fields']['field_address_zipcode']['field'] = 'field_address_zipcode';
  $handler->display->display_options['fields']['field_address_zipcode']['label'] = '';
  $handler->display->display_options['fields']['field_address_zipcode']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_address_zipcode']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_address_zipcode']['settings'] = array(
    'thousand_separator' => ' ',
    'prefix_suffix' => 1,
  );
  /* Felt: Indhold: City */
  $handler->display->display_options['fields']['field_address_city']['id'] = 'field_address_city';
  $handler->display->display_options['fields']['field_address_city']['table'] = 'field_data_field_address_city';
  $handler->display->display_options['fields']['field_address_city']['field'] = 'field_address_city';
  $handler->display->display_options['fields']['field_address_city']['label'] = '';
  $handler->display->display_options['fields']['field_address_city']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_address_city']['element_label_colon'] = FALSE;
  /* Felt: Indhold: Floor */
  $handler->display->display_options['fields']['field_address_floor']['id'] = 'field_address_floor';
  $handler->display->display_options['fields']['field_address_floor']['table'] = 'field_data_field_address_floor';
  $handler->display->display_options['fields']['field_address_floor']['field'] = 'field_address_floor';
  $handler->display->display_options['fields']['field_address_floor']['label'] = '';
  $handler->display->display_options['fields']['field_address_floor']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_address_floor']['element_label_colon'] = FALSE;
  /* Felt: Indhold: Address */
  $handler->display->display_options['fields']['field_address_road']['id'] = 'field_address_road';
  $handler->display->display_options['fields']['field_address_road']['table'] = 'field_data_field_address_road';
  $handler->display->display_options['fields']['field_address_road']['field'] = 'field_address_road';
  $handler->display->display_options['fields']['field_address_road']['label'] = '';
  $handler->display->display_options['fields']['field_address_road']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_address_road']['alter']['text'] = '<center>[field_constituency] <br />[title], [field_address_road] [field_address_road_no] [field_address_floor] [field_address_door], [field_address_zipcode] [field_address_city] - Skolekode [field_venue_skolekode]</center>';
  $handler->display->display_options['fields']['field_address_road']['element_label_colon'] = FALSE;
  /* Sorteringskriterie: Indhold: Oprettelsesdato */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Kontekstuelt filter: Indhold: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['exception']['title'] = 'Alle';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  /* Filterkriterie: Indhold: Udgivet */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 0;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filterkriterie: Indhold: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'polling_station' => 'polling_station',
  );

  /* Display: Kontekst */
  $handler = $view->new_display('ctools_context', 'Kontekst', 'ctools_context_1');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'ctools_context';
  $handler->display->display_options['row_plugin'] = 'fields';
  $translatables['valgsted'] = array(
    t('Master'),
    t('Kvitteringsliste for diæter'),
    t('mere'),
    t('Udfør'),
    t('Gendan'),
    t('Sortér efter'),
    t('Stigende'),
    t('Faldende'),
    t('Valgkreds'),
    t('Skolekode'),
    t('field_chairman'),
    t('Andre kontaktoplysninger'),
    t('Antal borde'),
    t('Valgkontakt'),
    t('Lokalekontakt'),
    t('Pladser per bord'),
    t('Handler i stykker field_data_field_volunteers_pr_party.field_volunteers_pr_party'),
    t('<center>[field_constituency] <br />[title], [field_address_road] [field_address_road_no] [field_address_floor] [field_address_door], [field_address_zipcode] [field_address_city] - Skolekode [field_venue_skolekode]</center>'),
    t('Alle'),
    t('Kontekst'),
  );
  $export['valgsted'] = $view;

  $view = new view();
  $view->name = 'valgsteder';
  $view->description = '';
  $view->tag = '';
  $view->base_table = 'node';
  $view->human_name = 'Valgsteder';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Defaults */
  $handler = $view->new_display('default', 'Defaults', 'default');
  $handler->display->display_options['css_class'] = 'valgsteder';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'mere';
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Udfør';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Gendan';
  $handler->display->display_options['exposed_form']['options']['exposed_sorts_label'] = 'Sortér efter';
  $handler->display->display_options['exposed_form']['options']['sort_asc_label'] = 'Stigende';
  $handler->display->display_options['exposed_form']['options']['sort_desc_label'] = 'Faldende';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_label'] = 'Elementer pr. side';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options_all_label'] = '- Alle -';
  $handler->display->display_options['pager']['options']['expose']['offset_label'] = 'Forskydning';
  $handler->display->display_options['pager']['options']['tags']['first'] = '« første';
  $handler->display->display_options['pager']['options']['tags']['previous'] = '‹ forrige';
  $handler->display->display_options['pager']['options']['tags']['next'] = 'næste ›';
  $handler->display->display_options['pager']['options']['tags']['last'] = 'sidste »';
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['style_options']['grouping'] = 'entity_id_9';
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['inline'] = array(
    'entity_id_3' => 'entity_id_3',
    'entity_id_6' => 'entity_id_6',
    'entity_id_7' => 'entity_id_7',
  );
  $handler->display->display_options['row_options']['hide_empty'] = TRUE;
  /* Felt: Indhold: Titel */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Felt: Indhold: Body */
  $handler->display->display_options['fields']['entity_id']['id'] = 'entity_id';
  $handler->display->display_options['fields']['entity_id']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['entity_id']['field'] = 'body';
  $handler->display->display_options['fields']['entity_id']['label'] = 'indhold';
  /* Felt: : field_chairman */
  $handler->display->display_options['fields']['entity_id_2']['id'] = 'entity_id_2';
  $handler->display->display_options['fields']['entity_id_2']['table'] = 'field_data_field_chairman';
  $handler->display->display_options['fields']['entity_id_2']['field'] = 'field_chairman';
  /* Felt: Indhold: Valgkontakt */
  $handler->display->display_options['fields']['entity_id_3']['id'] = 'entity_id_3';
  $handler->display->display_options['fields']['entity_id_3']['table'] = 'field_data_field_contact';
  $handler->display->display_options['fields']['entity_id_3']['field'] = 'field_contact';
  /* Felt: Felt: Parti */
  $handler->display->display_options['fields']['entity_id_5']['id'] = 'entity_id_5';
  $handler->display->display_options['fields']['entity_id_5']['table'] = 'field_data_field_party';
  $handler->display->display_options['fields']['entity_id_5']['field'] = 'field_party';
  /* Felt: Indhold: Andre kontaktoplysninger */
  $handler->display->display_options['fields']['entity_id_6']['id'] = 'entity_id_6';
  $handler->display->display_options['fields']['entity_id_6']['table'] = 'field_data_field_venue_contact';
  $handler->display->display_options['fields']['entity_id_6']['field'] = 'field_venue_contact';
  /* Felt: Indhold: Lokalekontakt */
  $handler->display->display_options['fields']['entity_id_7']['id'] = 'entity_id_7';
  $handler->display->display_options['fields']['entity_id_7']['table'] = 'field_data_field_venue_contact_name';
  $handler->display->display_options['fields']['entity_id_7']['field'] = 'field_venue_contact_name';
  /* Felt: Handler mangler eller er i stykker */
  $handler->display->display_options['fields']['entity_id_8']['id'] = 'entity_id_8';
  $handler->display->display_options['fields']['entity_id_8']['table'] = 'field_data_field_volunteers_pr_party';
  $handler->display->display_options['fields']['entity_id_8']['field'] = 'field_volunteers_pr_party';
  /* Felt: Indhold: Valgkreds */
  $handler->display->display_options['fields']['entity_id_9']['id'] = 'entity_id_9';
  $handler->display->display_options['fields']['entity_id_9']['table'] = 'field_data_field_constituency';
  $handler->display->display_options['fields']['entity_id_9']['field'] = 'field_constituency';
  /* Sorteringskriterie: Indhold: Titel */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
  /* Kontekstuelt filter: Indhold: Type */
  $handler->display->display_options['arguments']['type']['id'] = 'type';
  $handler->display->display_options['arguments']['type']['table'] = 'node';
  $handler->display->display_options['arguments']['type']['field'] = 'type';
  $handler->display->display_options['arguments']['type']['exception']['title_enable'] = TRUE;
  $handler->display->display_options['arguments']['type']['exception']['title'] = 'Alle';
  $handler->display->display_options['arguments']['type']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['type']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['type']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['type']['validate']['type'] = 'node';
  $handler->display->display_options['arguments']['type']['validate_options']['types'] = array(
    'polling_station' => 'polling_station',
  );
  /* Filterkriterie: Indhold: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'polling_station' => 'polling_station',
  );
  $handler->display->display_options['filters']['type']['group'] = '0';

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block_1');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['style_options']['grouping'] = 'entity_id_9';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Felt: Indhold: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['element_type'] = 'h4';
  $handler->display->display_options['fields']['nid']['element_label_type'] = '0';
  $handler->display->display_options['fields']['nid']['element_wrapper_type'] = '0';
  /* Felt: : field_chairman */
  $handler->display->display_options['fields']['entity_id_2']['id'] = 'entity_id_2';
  $handler->display->display_options['fields']['entity_id_2']['table'] = 'field_data_field_chairman';
  $handler->display->display_options['fields']['entity_id_2']['field'] = 'field_chairman';
  $handler->display->display_options['fields']['entity_id_2']['exclude'] = TRUE;
  $handler->display->display_options['fields']['entity_id_2']['click_sort_column'] = 'value';
  $handler->display->display_options['fields']['entity_id_2']['type'] = 'text_default';
  $handler->display->display_options['fields']['entity_id_2']['group_column'] = 'value';
  /* Felt: Felt: Parti */
  $handler->display->display_options['fields']['entity_id_5']['id'] = 'entity_id_5';
  $handler->display->display_options['fields']['entity_id_5']['table'] = 'field_data_field_party';
  $handler->display->display_options['fields']['entity_id_5']['field'] = 'field_party';
  $handler->display->display_options['fields']['entity_id_5']['label'] = 'field_party';
  $handler->display->display_options['fields']['entity_id_5']['exclude'] = TRUE;
  /* Felt: Indhold: Valgkreds */
  $handler->display->display_options['fields']['entity_id_9']['id'] = 'entity_id_9';
  $handler->display->display_options['fields']['entity_id_9']['table'] = 'field_data_field_constituency';
  $handler->display->display_options['fields']['entity_id_9']['field'] = 'field_constituency';
  $handler->display->display_options['fields']['entity_id_9']['label'] = '';
  $handler->display->display_options['fields']['entity_id_9']['exclude'] = TRUE;
  $handler->display->display_options['fields']['entity_id_9']['element_label_type'] = '0';
  $handler->display->display_options['fields']['entity_id_9']['element_wrapper_type'] = 'h3';
  $handler->display->display_options['fields']['entity_id_9']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['entity_id_9']['type'] = 'node_reference_plain';
  /* Felt: Indhold: Titel */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['path'] = 'volunteers/station/[nid]';
  $handler->display->display_options['fields']['title']['element_label_type'] = '0';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_wrapper_type'] = 'h4';
  $handler->display->display_options['fields']['title']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sorteringskriterie: Indhold: Titel */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['filter_groups']['groups'] = array(
    1 => 'AND',
    2 => 'AND',
  );
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filterkriterie: Indhold: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'polling_station' => 'polling_station',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;

  /* Display: Side m  CPR */
  $handler = $view->new_display('page', 'Side m  CPR', 'page_1');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['access'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    3 => '3',
    8 => '8',
  );
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['style_options']['grouping'] = 'entity_id_9';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['inline'] = array(
    'title' => 'title',
    'entity_id' => 'entity_id',
    'entity_id_2' => 'entity_id_2',
    'entity_id_3' => 'entity_id_3',
    'entity_id_5' => 'entity_id_5',
    'entity_id_6' => 'entity_id_6',
    'entity_id_7' => 'entity_id_7',
    'entity_id_8' => 'entity_id_8',
    'entity_id_9' => 'entity_id_9',
  );
  $handler->display->display_options['row_options']['separator'] = ' / ';
  $handler->display->display_options['row_options']['hide_empty'] = TRUE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Felt: Indhold: Titel */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Felt: Indhold: Body */
  $handler->display->display_options['fields']['entity_id']['id'] = 'entity_id';
  $handler->display->display_options['fields']['entity_id']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['entity_id']['field'] = 'body';
  $handler->display->display_options['fields']['entity_id']['label'] = 'indhold';
  $handler->display->display_options['fields']['entity_id']['exclude'] = TRUE;
  /* Felt: : field_chairman */
  $handler->display->display_options['fields']['entity_id_2']['id'] = 'entity_id_2';
  $handler->display->display_options['fields']['entity_id_2']['table'] = 'field_data_field_chairman';
  $handler->display->display_options['fields']['entity_id_2']['field'] = 'field_chairman';
  /* Felt: Indhold: Valgkontakt */
  $handler->display->display_options['fields']['entity_id_3']['id'] = 'entity_id_3';
  $handler->display->display_options['fields']['entity_id_3']['table'] = 'field_data_field_contact';
  $handler->display->display_options['fields']['entity_id_3']['field'] = 'field_contact';
  $handler->display->display_options['fields']['entity_id_3']['exclude'] = TRUE;
  /* Felt: Felt: Parti */
  $handler->display->display_options['fields']['entity_id_5']['id'] = 'entity_id_5';
  $handler->display->display_options['fields']['entity_id_5']['table'] = 'field_data_field_party';
  $handler->display->display_options['fields']['entity_id_5']['field'] = 'field_party';
  $handler->display->display_options['fields']['entity_id_5']['exclude'] = TRUE;
  /* Felt: Indhold: Andre kontaktoplysninger */
  $handler->display->display_options['fields']['entity_id_6']['id'] = 'entity_id_6';
  $handler->display->display_options['fields']['entity_id_6']['table'] = 'field_data_field_venue_contact';
  $handler->display->display_options['fields']['entity_id_6']['field'] = 'field_venue_contact';
  $handler->display->display_options['fields']['entity_id_6']['exclude'] = TRUE;
  /* Felt: Indhold: Lokalekontakt */
  $handler->display->display_options['fields']['entity_id_7']['id'] = 'entity_id_7';
  $handler->display->display_options['fields']['entity_id_7']['table'] = 'field_data_field_venue_contact_name';
  $handler->display->display_options['fields']['entity_id_7']['field'] = 'field_venue_contact_name';
  $handler->display->display_options['fields']['entity_id_7']['exclude'] = TRUE;
  /* Felt: Handler mangler eller er i stykker */
  $handler->display->display_options['fields']['entity_id_8']['id'] = 'entity_id_8';
  $handler->display->display_options['fields']['entity_id_8']['table'] = 'field_data_field_volunteers_pr_party';
  $handler->display->display_options['fields']['entity_id_8']['field'] = 'field_volunteers_pr_party';
  $handler->display->display_options['fields']['entity_id_8']['exclude'] = TRUE;
  /* Felt: Indhold: Valgkreds */
  $handler->display->display_options['fields']['entity_id_9']['id'] = 'entity_id_9';
  $handler->display->display_options['fields']['entity_id_9']['table'] = 'field_data_field_constituency';
  $handler->display->display_options['fields']['entity_id_9']['field'] = 'field_constituency';
  $handler->display->display_options['fields']['entity_id_9']['exclude'] = TRUE;
  $handler->display->display_options['path'] = 'valgsteder';

  /* Display: Side u CPR */
  $handler = $view->new_display('page', 'Side u CPR', 'page_2');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['access'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    3 => '3',
    8 => '8',
  );
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['style_options']['grouping'] = 'entity_id_9';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['inline'] = array(
    'title' => 'title',
    'entity_id' => 'entity_id',
    'entity_id_2' => 'entity_id_2',
    'entity_id_3' => 'entity_id_3',
    'entity_id_5' => 'entity_id_5',
    'entity_id_6' => 'entity_id_6',
    'entity_id_7' => 'entity_id_7',
    'entity_id_8' => 'entity_id_8',
    'entity_id_9' => 'entity_id_9',
  );
  $handler->display->display_options['row_options']['separator'] = ' / ';
  $handler->display->display_options['row_options']['hide_empty'] = TRUE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Felt: Indhold: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  /* Felt: Indhold: Titel */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['text'] = '<a href="node/[nid]/valgstederU">[title]</a>';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Felt: Indhold: Body */
  $handler->display->display_options['fields']['entity_id']['id'] = 'entity_id';
  $handler->display->display_options['fields']['entity_id']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['entity_id']['field'] = 'body';
  $handler->display->display_options['fields']['entity_id']['label'] = 'indhold';
  $handler->display->display_options['fields']['entity_id']['exclude'] = TRUE;
  /* Felt: : field_chairman */
  $handler->display->display_options['fields']['entity_id_2']['id'] = 'entity_id_2';
  $handler->display->display_options['fields']['entity_id_2']['table'] = 'field_data_field_chairman';
  $handler->display->display_options['fields']['entity_id_2']['field'] = 'field_chairman';
  /* Felt: Indhold: Valgkontakt */
  $handler->display->display_options['fields']['entity_id_3']['id'] = 'entity_id_3';
  $handler->display->display_options['fields']['entity_id_3']['table'] = 'field_data_field_contact';
  $handler->display->display_options['fields']['entity_id_3']['field'] = 'field_contact';
  $handler->display->display_options['fields']['entity_id_3']['exclude'] = TRUE;
  /* Felt: Felt: Parti */
  $handler->display->display_options['fields']['entity_id_5']['id'] = 'entity_id_5';
  $handler->display->display_options['fields']['entity_id_5']['table'] = 'field_data_field_party';
  $handler->display->display_options['fields']['entity_id_5']['field'] = 'field_party';
  $handler->display->display_options['fields']['entity_id_5']['exclude'] = TRUE;
  /* Felt: Indhold: Andre kontaktoplysninger */
  $handler->display->display_options['fields']['entity_id_6']['id'] = 'entity_id_6';
  $handler->display->display_options['fields']['entity_id_6']['table'] = 'field_data_field_venue_contact';
  $handler->display->display_options['fields']['entity_id_6']['field'] = 'field_venue_contact';
  $handler->display->display_options['fields']['entity_id_6']['exclude'] = TRUE;
  /* Felt: Indhold: Lokalekontakt */
  $handler->display->display_options['fields']['entity_id_7']['id'] = 'entity_id_7';
  $handler->display->display_options['fields']['entity_id_7']['table'] = 'field_data_field_venue_contact_name';
  $handler->display->display_options['fields']['entity_id_7']['field'] = 'field_venue_contact_name';
  $handler->display->display_options['fields']['entity_id_7']['exclude'] = TRUE;
  /* Felt: Handler mangler eller er i stykker */
  $handler->display->display_options['fields']['entity_id_8']['id'] = 'entity_id_8';
  $handler->display->display_options['fields']['entity_id_8']['table'] = 'field_data_field_volunteers_pr_party';
  $handler->display->display_options['fields']['entity_id_8']['field'] = 'field_volunteers_pr_party';
  $handler->display->display_options['fields']['entity_id_8']['exclude'] = TRUE;
  /* Felt: Indhold: Valgkreds */
  $handler->display->display_options['fields']['entity_id_9']['id'] = 'entity_id_9';
  $handler->display->display_options['fields']['entity_id_9']['table'] = 'field_data_field_constituency';
  $handler->display->display_options['fields']['entity_id_9']['field'] = 'field_constituency';
  $handler->display->display_options['fields']['entity_id_9']['exclude'] = TRUE;
  $handler->display->display_options['path'] = 'valgstederU';
  $translatables['valgsteder'] = array(
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
    t('indhold'),
    t('field_chairman'),
    t('Valgkontakt'),
    t('Parti'),
    t('Andre kontaktoplysninger'),
    t('Lokalekontakt'),
    t('Handler i stykker field_data_field_volunteers_pr_party.field_volunteers_pr_party'),
    t('Valgkreds'),
    t('Alle'),
    t('Block'),
    t('Nid'),
    t('field_party'),
    t('Side m  CPR'),
    t('Side u CPR'),
    t('<a href="node/[nid]/valgstederU">[title]</a>'),
  );
  $export['valgsteder'] = $view;

  $view = new view();
  $view->name = 'volunteer_admin_lists';
  $view->description = 'various volunteer lists';
  $view->tag = 'valhalla';
  $view->base_table = 'node';
  $view->human_name = 'volunteer admin lists';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Standarder */
  $handler = $view->new_display('default', 'Standarder', 'default');
  $handler->display->display_options['css_class'] = 'kvitteringsliste';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'mere';
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    3 => '3',
    4 => '4',
    8 => '8',
  );
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
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
  $handler->display->display_options['pager']['options']['expose']['items_per_page_label'] = 'Elementer pr. side';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options_all_label'] = '- Alle -';
  $handler->display->display_options['pager']['options']['expose']['offset_label'] = 'Forskydning';
  $handler->display->display_options['pager']['options']['tags']['first'] = '« første';
  $handler->display->display_options['pager']['options']['tags']['previous'] = '‹ forrige';
  $handler->display->display_options['pager']['options']['tags']['next'] = 'næste ›';
  $handler->display->display_options['pager']['options']['tags']['last'] = 'sidste »';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['grouping'] = '';
  $handler->display->display_options['style_options']['columns'] = array(
    'edit_node' => 'edit_node',
    'delete_node' => 'delete_node',
    'title' => 'title',
    'entity_id' => 'entity_id',
    'entity_id_1' => 'entity_id_1',
    'entity_id_2' => 'entity_id_2',
    'entity_id_3' => 'entity_id_3',
    'entity_id_4' => 'entity_id_4',
    'entity_id_5' => 'entity_id_5',
    'entity_id_6' => 'entity_id_6',
    'view_node' => 'view_node',
  );
  $handler->display->display_options['style_options']['default'] = 'title';
  $handler->display->display_options['style_options']['info'] = array(
    'edit_node' => array(
      'align' => '',
      'separator' => '',
    ),
    'delete_node' => array(
      'align' => '',
      'separator' => '',
    ),
    'title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
    ),
    'entity_id' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
    ),
    'entity_id_1' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
    ),
    'entity_id_2' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
    ),
    'entity_id_3' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
    ),
    'entity_id_4' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
    ),
    'entity_id_5' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
    ),
    'entity_id_6' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
    ),
    'view_node' => array(
      'align' => 'views-align-right',
      'separator' => '',
    ),
  );
  /* Forbindelse: Felt: Parti (field_party) */
  $handler->display->display_options['relationships']['field_party_tid']['id'] = 'field_party_tid';
  $handler->display->display_options['relationships']['field_party_tid']['table'] = 'field_data_field_party';
  $handler->display->display_options['relationships']['field_party_tid']['field'] = 'field_party_tid';
  /* Forbindelse: Felt: Begræns adgang til følgende valgsteder (field_polling_station) */
  $handler->display->display_options['relationships']['field_polling_station_nid']['id'] = 'field_polling_station_nid';
  $handler->display->display_options['relationships']['field_polling_station_nid']['table'] = 'field_data_field_polling_station';
  $handler->display->display_options['relationships']['field_polling_station_nid']['field'] = 'field_polling_station_nid';
  $handler->display->display_options['relationships']['field_polling_station_nid']['delta'] = '-1';
  /* Felt: Indhold: Redigér-link */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['exclude'] = TRUE;
  /* Felt: Indhold: Slet-link */
  $handler->display->display_options['fields']['delete_node']['id'] = 'delete_node';
  $handler->display->display_options['fields']['delete_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['delete_node']['field'] = 'delete_node';
  $handler->display->display_options['fields']['delete_node']['exclude'] = TRUE;
  /* Felt: Indhold: Titel */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  /* Felt: Indhold: CPR */
  $handler->display->display_options['fields']['entity_id']['id'] = 'entity_id';
  $handler->display->display_options['fields']['entity_id']['table'] = 'field_data_field_cpr_number';
  $handler->display->display_options['fields']['entity_id']['field'] = 'field_cpr_number';
  $handler->display->display_options['fields']['entity_id']['exclude'] = TRUE;
  /* Felt: Indhold: Email */
  $handler->display->display_options['fields']['entity_id_1']['id'] = 'entity_id_1';
  $handler->display->display_options['fields']['entity_id_1']['table'] = 'field_data_field_email';
  $handler->display->display_options['fields']['entity_id_1']['field'] = 'field_email';
  $handler->display->display_options['fields']['entity_id_1']['label'] = 'E-mail';
  $handler->display->display_options['fields']['entity_id_1']['exclude'] = TRUE;
  /* Felt: Felt: Parti */
  $handler->display->display_options['fields']['entity_id_2']['id'] = 'entity_id_2';
  $handler->display->display_options['fields']['entity_id_2']['table'] = 'field_data_field_party';
  $handler->display->display_options['fields']['entity_id_2']['field'] = 'field_party';
  $handler->display->display_options['fields']['entity_id_2']['type'] = 'taxonomy_term_reference_plain';
  /* Felt: Indhold: Telefon */
  $handler->display->display_options['fields']['entity_id_3']['id'] = 'entity_id_3';
  $handler->display->display_options['fields']['entity_id_3']['table'] = 'field_data_field_phone';
  $handler->display->display_options['fields']['entity_id_3']['field'] = 'field_phone';
  $handler->display->display_options['fields']['entity_id_3']['exclude'] = TRUE;
  /* Felt: Indhold: Telefon 2 */
  $handler->display->display_options['fields']['entity_id_4']['id'] = 'entity_id_4';
  $handler->display->display_options['fields']['entity_id_4']['table'] = 'field_data_field_phone2';
  $handler->display->display_options['fields']['entity_id_4']['field'] = 'field_phone2';
  $handler->display->display_options['fields']['entity_id_4']['exclude'] = TRUE;
  /* Felt: Felt: Begræns adgang til følgende valgsteder */
  $handler->display->display_options['fields']['entity_id_5']['id'] = 'entity_id_5';
  $handler->display->display_options['fields']['entity_id_5']['table'] = 'field_data_field_polling_station';
  $handler->display->display_options['fields']['entity_id_5']['field'] = 'field_polling_station';
  $handler->display->display_options['fields']['entity_id_5']['relationship'] = 'field_polling_station_nid';
  $handler->display->display_options['fields']['entity_id_5']['label'] = 'Valgsted';
  $handler->display->display_options['fields']['entity_id_5']['type'] = 'node_reference_plain';
  /* Felt: Felt: Begræns adgang til følgende valgsteder */
  $handler->display->display_options['fields']['field_polling_station']['id'] = 'field_polling_station';
  $handler->display->display_options['fields']['field_polling_station']['table'] = 'field_data_field_polling_station';
  $handler->display->display_options['fields']['field_polling_station']['field'] = 'field_polling_station';
  $handler->display->display_options['fields']['field_polling_station']['label'] = 'Valgsted';
  $handler->display->display_options['fields']['field_polling_station']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['field_polling_station']['type'] = 'node_reference_plain';
  $handler->display->display_options['fields']['field_polling_station']['delta_offset'] = '0';
  /* Felt: Indhold: Status */
  $handler->display->display_options['fields']['entity_id_6']['id'] = 'entity_id_6';
  $handler->display->display_options['fields']['entity_id_6']['table'] = 'field_data_field_rsvp';
  $handler->display->display_options['fields']['entity_id_6']['field'] = 'field_rsvp';
  $handler->display->display_options['fields']['entity_id_6']['label'] = 'RSVP';
  /* Felt: Indhold: Link */
  $handler->display->display_options['fields']['view_node']['id'] = 'view_node';
  $handler->display->display_options['fields']['view_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['view_node']['field'] = 'view_node';
  $handler->display->display_options['fields']['view_node']['label'] = '';
  $handler->display->display_options['fields']['view_node']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['view_node']['alter']['text'] = '[edit_node] | [delete_node]';
  /* Kontekstuelt filter: Felt: Parti (field_party) */
  $handler->display->display_options['arguments']['field_party_tid']['id'] = 'field_party_tid';
  $handler->display->display_options['arguments']['field_party_tid']['table'] = 'field_data_field_party';
  $handler->display->display_options['arguments']['field_party_tid']['field'] = 'field_party_tid';
  $handler->display->display_options['arguments']['field_party_tid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['field_party_tid']['exception']['title_enable'] = TRUE;
  $handler->display->display_options['arguments']['field_party_tid']['exception']['title'] = 'Alle';
  $handler->display->display_options['arguments']['field_party_tid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['field_party_tid']['default_argument_options']['argument'] = 'all';
  $handler->display->display_options['arguments']['field_party_tid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_party_tid']['specify_validation'] = TRUE;
  /* Filterkriterie: Indhold: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'volunteers' => 'volunteers',
  );
  $handler->display->display_options['filters']['type']['group'] = '0';
  /* Filterkriterie: Indhold: Status (field_rsvp) */
  $handler->display->display_options['filters']['field_rsvp_value']['id'] = 'field_rsvp_value';
  $handler->display->display_options['filters']['field_rsvp_value']['table'] = 'field_data_field_rsvp';
  $handler->display->display_options['filters']['field_rsvp_value']['field'] = 'field_rsvp_value';
  $handler->display->display_options['filters']['field_rsvp_value']['group'] = '0';
  $handler->display->display_options['filters']['field_rsvp_value']['expose']['label'] = 'RSVP';
  $handler->display->display_options['filters']['field_rsvp_value']['expose']['operator'] = 'field_rsvp_value_op';
  $handler->display->display_options['filters']['field_rsvp_value']['expose']['identifier'] = 'rsvp';

  /* Display: Alle frivillige */
  $handler = $view->new_display('page', 'Alle frivillige', 'all_volunteers');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Felt: Indhold: Redigér-link */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['exclude'] = TRUE;
  /* Felt: Indhold: Slet-link */
  $handler->display->display_options['fields']['delete_node']['id'] = 'delete_node';
  $handler->display->display_options['fields']['delete_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['delete_node']['field'] = 'delete_node';
  $handler->display->display_options['fields']['delete_node']['exclude'] = TRUE;
  /* Felt: Indhold: Titel */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  /* Felt: Indhold: CPR */
  $handler->display->display_options['fields']['entity_id']['id'] = 'entity_id';
  $handler->display->display_options['fields']['entity_id']['table'] = 'field_data_field_cpr_number';
  $handler->display->display_options['fields']['entity_id']['field'] = 'field_cpr_number';
  $handler->display->display_options['fields']['entity_id']['exclude'] = TRUE;
  /* Felt: Indhold: Email */
  $handler->display->display_options['fields']['entity_id_1']['id'] = 'entity_id_1';
  $handler->display->display_options['fields']['entity_id_1']['table'] = 'field_data_field_email';
  $handler->display->display_options['fields']['entity_id_1']['field'] = 'field_email';
  $handler->display->display_options['fields']['entity_id_1']['label'] = 'E-mail';
  $handler->display->display_options['fields']['entity_id_1']['exclude'] = TRUE;
  /* Felt: Felt: Parti */
  $handler->display->display_options['fields']['entity_id_2']['id'] = 'entity_id_2';
  $handler->display->display_options['fields']['entity_id_2']['table'] = 'field_data_field_party';
  $handler->display->display_options['fields']['entity_id_2']['field'] = 'field_party';
  $handler->display->display_options['fields']['entity_id_2']['type'] = 'taxonomy_term_reference_plain';
  /* Felt: Indhold: Telefon */
  $handler->display->display_options['fields']['entity_id_3']['id'] = 'entity_id_3';
  $handler->display->display_options['fields']['entity_id_3']['table'] = 'field_data_field_phone';
  $handler->display->display_options['fields']['entity_id_3']['field'] = 'field_phone';
  $handler->display->display_options['fields']['entity_id_3']['exclude'] = TRUE;
  /* Felt: Indhold: Telefon 2 */
  $handler->display->display_options['fields']['entity_id_4']['id'] = 'entity_id_4';
  $handler->display->display_options['fields']['entity_id_4']['table'] = 'field_data_field_phone2';
  $handler->display->display_options['fields']['entity_id_4']['field'] = 'field_phone2';
  $handler->display->display_options['fields']['entity_id_4']['exclude'] = TRUE;
  /* Felt: Felt: Begræns adgang til følgende valgsteder */
  $handler->display->display_options['fields']['field_polling_station']['id'] = 'field_polling_station';
  $handler->display->display_options['fields']['field_polling_station']['table'] = 'field_data_field_polling_station';
  $handler->display->display_options['fields']['field_polling_station']['field'] = 'field_polling_station';
  $handler->display->display_options['fields']['field_polling_station']['label'] = 'Valgsted';
  $handler->display->display_options['fields']['field_polling_station']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['field_polling_station']['type'] = 'node_reference_plain';
  $handler->display->display_options['fields']['field_polling_station']['delta_offset'] = '0';
  /* Felt: Indhold: Status */
  $handler->display->display_options['fields']['entity_id_6']['id'] = 'entity_id_6';
  $handler->display->display_options['fields']['entity_id_6']['table'] = 'field_data_field_rsvp';
  $handler->display->display_options['fields']['entity_id_6']['field'] = 'field_rsvp';
  $handler->display->display_options['fields']['entity_id_6']['label'] = 'RSVP';
  /* Felt: Indhold: Link */
  $handler->display->display_options['fields']['view_node']['id'] = 'view_node';
  $handler->display->display_options['fields']['view_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['view_node']['field'] = 'view_node';
  $handler->display->display_options['fields']['view_node']['label'] = '';
  $handler->display->display_options['fields']['view_node']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['view_node']['alter']['text'] = '[edit_node] | [delete_node]';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['filter_groups']['groups'] = array(
    1 => 'AND',
    2 => 'AND',
  );
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filterkriterie: Indhold: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'volunteers' => 'volunteers',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filterkriterie: Indhold: Status (field_rsvp) */
  $handler->display->display_options['filters']['field_rsvp_value']['id'] = 'field_rsvp_value';
  $handler->display->display_options['filters']['field_rsvp_value']['table'] = 'field_data_field_rsvp';
  $handler->display->display_options['filters']['field_rsvp_value']['field'] = 'field_rsvp_value';
  $handler->display->display_options['filters']['field_rsvp_value']['group'] = 1;
  $handler->display->display_options['filters']['field_rsvp_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_rsvp_value']['expose']['operator_id'] = 'field_rsvp_value_op';
  $handler->display->display_options['filters']['field_rsvp_value']['expose']['label'] = 'RSVP';
  $handler->display->display_options['filters']['field_rsvp_value']['expose']['operator'] = 'field_rsvp_value_op';
  $handler->display->display_options['filters']['field_rsvp_value']['expose']['identifier'] = 'rsvp';
  $handler->display->display_options['path'] = 'volunteers/list/all';

  /* Display: Frivillige der ønsker at blive slettet */
  $handler = $view->new_display('page', 'Frivillige der ønsker at blive slettet', 'volunteers_for_removal');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Felt: Indhold: Redigér-link */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['exclude'] = TRUE;
  /* Felt: Indhold: Slet-link */
  $handler->display->display_options['fields']['delete_node']['id'] = 'delete_node';
  $handler->display->display_options['fields']['delete_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['delete_node']['field'] = 'delete_node';
  $handler->display->display_options['fields']['delete_node']['exclude'] = TRUE;
  /* Felt: Indhold: Titel */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  /* Felt: Indhold: Link */
  $handler->display->display_options['fields']['view_node']['id'] = 'view_node';
  $handler->display->display_options['fields']['view_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['view_node']['field'] = 'view_node';
  $handler->display->display_options['fields']['view_node']['label'] = '';
  $handler->display->display_options['fields']['view_node']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['view_node']['alter']['text'] = '[edit_node] | [delete_node]';
  /* Felt: Indhold: CPR */
  $handler->display->display_options['fields']['entity_id']['id'] = 'entity_id';
  $handler->display->display_options['fields']['entity_id']['table'] = 'field_data_field_cpr_number';
  $handler->display->display_options['fields']['entity_id']['field'] = 'field_cpr_number';
  $handler->display->display_options['fields']['entity_id']['exclude'] = TRUE;
  /* Felt: Indhold: Email */
  $handler->display->display_options['fields']['entity_id_1']['id'] = 'entity_id_1';
  $handler->display->display_options['fields']['entity_id_1']['table'] = 'field_data_field_email';
  $handler->display->display_options['fields']['entity_id_1']['field'] = 'field_email';
  $handler->display->display_options['fields']['entity_id_1']['label'] = 'E-mail';
  $handler->display->display_options['fields']['entity_id_1']['exclude'] = TRUE;
  /* Felt: Felt: Parti */
  $handler->display->display_options['fields']['entity_id_2']['id'] = 'entity_id_2';
  $handler->display->display_options['fields']['entity_id_2']['table'] = 'field_data_field_party';
  $handler->display->display_options['fields']['entity_id_2']['field'] = 'field_party';
  $handler->display->display_options['fields']['entity_id_2']['type'] = 'taxonomy_term_reference_plain';
  /* Felt: Indhold: Telefon */
  $handler->display->display_options['fields']['entity_id_3']['id'] = 'entity_id_3';
  $handler->display->display_options['fields']['entity_id_3']['table'] = 'field_data_field_phone';
  $handler->display->display_options['fields']['entity_id_3']['field'] = 'field_phone';
  $handler->display->display_options['fields']['entity_id_3']['exclude'] = TRUE;
  /* Felt: Indhold: Telefon 2 */
  $handler->display->display_options['fields']['entity_id_4']['id'] = 'entity_id_4';
  $handler->display->display_options['fields']['entity_id_4']['table'] = 'field_data_field_phone2';
  $handler->display->display_options['fields']['entity_id_4']['field'] = 'field_phone2';
  $handler->display->display_options['fields']['entity_id_4']['exclude'] = TRUE;
  /* Felt: Felt: Begræns adgang til følgende valgsteder */
  $handler->display->display_options['fields']['entity_id_5']['id'] = 'entity_id_5';
  $handler->display->display_options['fields']['entity_id_5']['table'] = 'field_data_field_polling_station';
  $handler->display->display_options['fields']['entity_id_5']['field'] = 'field_polling_station';
  $handler->display->display_options['fields']['entity_id_5']['relationship'] = 'field_polling_station_nid';
  $handler->display->display_options['fields']['entity_id_5']['label'] = 'Valgsted';
  $handler->display->display_options['fields']['entity_id_5']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['entity_id_5']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['entity_id_5']['alter']['html'] = TRUE;
  $handler->display->display_options['fields']['entity_id_5']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['entity_id_5']['element_wrapper_type'] = 'span';
  $handler->display->display_options['fields']['entity_id_5']['element_default_classes'] = FALSE;
  /* Felt: Indhold: Status */
  $handler->display->display_options['fields']['entity_id_6']['id'] = 'entity_id_6';
  $handler->display->display_options['fields']['entity_id_6']['table'] = 'field_data_field_rsvp';
  $handler->display->display_options['fields']['entity_id_6']['field'] = 'field_rsvp';
  $handler->display->display_options['fields']['entity_id_6']['label'] = 'RSVP';
  $handler->display->display_options['fields']['entity_id_6']['exclude'] = TRUE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['filter_groups']['groups'] = array(
    1 => 'AND',
    2 => 'AND',
  );
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filterkriterie: Indhold: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'volunteers' => 'volunteers',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filterkriterie: Indhold: Status (field_rsvp) */
  $handler->display->display_options['filters']['field_rsvp_value']['id'] = 'field_rsvp_value';
  $handler->display->display_options['filters']['field_rsvp_value']['table'] = 'field_data_field_rsvp';
  $handler->display->display_options['filters']['field_rsvp_value']['field'] = 'field_rsvp_value';
  $handler->display->display_options['filters']['field_rsvp_value']['value'] = array(
    3 => '3',
  );
  $handler->display->display_options['filters']['field_rsvp_value']['group'] = 1;
  $handler->display->display_options['path'] = 'volunteers/list/off';

  /* Display: Frivillige der mangler at svare tilbage */
  $handler = $view->new_display('page', 'Frivillige der mangler at svare tilbage', 'volunteers_with_no_rsvp');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Felt: Indhold: Redigér-link */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['exclude'] = TRUE;
  /* Felt: Indhold: Slet-link */
  $handler->display->display_options['fields']['delete_node']['id'] = 'delete_node';
  $handler->display->display_options['fields']['delete_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['delete_node']['field'] = 'delete_node';
  $handler->display->display_options['fields']['delete_node']['exclude'] = TRUE;
  /* Felt: Indhold: Titel */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  /* Felt: Indhold: CPR */
  $handler->display->display_options['fields']['entity_id']['id'] = 'entity_id';
  $handler->display->display_options['fields']['entity_id']['table'] = 'field_data_field_cpr_number';
  $handler->display->display_options['fields']['entity_id']['field'] = 'field_cpr_number';
  $handler->display->display_options['fields']['entity_id']['exclude'] = TRUE;
  /* Felt: Indhold: Email */
  $handler->display->display_options['fields']['entity_id_1']['id'] = 'entity_id_1';
  $handler->display->display_options['fields']['entity_id_1']['table'] = 'field_data_field_email';
  $handler->display->display_options['fields']['entity_id_1']['field'] = 'field_email';
  $handler->display->display_options['fields']['entity_id_1']['label'] = 'E-mail';
  $handler->display->display_options['fields']['entity_id_1']['exclude'] = TRUE;
  /* Felt: Felt: Parti */
  $handler->display->display_options['fields']['entity_id_2']['id'] = 'entity_id_2';
  $handler->display->display_options['fields']['entity_id_2']['table'] = 'field_data_field_party';
  $handler->display->display_options['fields']['entity_id_2']['field'] = 'field_party';
  $handler->display->display_options['fields']['entity_id_2']['type'] = 'taxonomy_term_reference_plain';
  /* Felt: Indhold: Telefon */
  $handler->display->display_options['fields']['entity_id_3']['id'] = 'entity_id_3';
  $handler->display->display_options['fields']['entity_id_3']['table'] = 'field_data_field_phone';
  $handler->display->display_options['fields']['entity_id_3']['field'] = 'field_phone';
  $handler->display->display_options['fields']['entity_id_3']['exclude'] = TRUE;
  /* Felt: Indhold: Telefon 2 */
  $handler->display->display_options['fields']['entity_id_4']['id'] = 'entity_id_4';
  $handler->display->display_options['fields']['entity_id_4']['table'] = 'field_data_field_phone2';
  $handler->display->display_options['fields']['entity_id_4']['field'] = 'field_phone2';
  $handler->display->display_options['fields']['entity_id_4']['exclude'] = TRUE;
  /* Felt: Felt: Begræns adgang til følgende valgsteder */
  $handler->display->display_options['fields']['field_polling_station']['id'] = 'field_polling_station';
  $handler->display->display_options['fields']['field_polling_station']['table'] = 'field_data_field_polling_station';
  $handler->display->display_options['fields']['field_polling_station']['field'] = 'field_polling_station';
  $handler->display->display_options['fields']['field_polling_station']['label'] = 'Valgsted';
  $handler->display->display_options['fields']['field_polling_station']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['field_polling_station']['type'] = 'node_reference_plain';
  $handler->display->display_options['fields']['field_polling_station']['delta_offset'] = '0';
  /* Felt: Indhold: Status */
  $handler->display->display_options['fields']['entity_id_6']['id'] = 'entity_id_6';
  $handler->display->display_options['fields']['entity_id_6']['table'] = 'field_data_field_rsvp';
  $handler->display->display_options['fields']['entity_id_6']['field'] = 'field_rsvp';
  $handler->display->display_options['fields']['entity_id_6']['label'] = 'RSVP';
  $handler->display->display_options['fields']['entity_id_6']['exclude'] = TRUE;
  /* Felt: Indhold: Link */
  $handler->display->display_options['fields']['view_node']['id'] = 'view_node';
  $handler->display->display_options['fields']['view_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['view_node']['field'] = 'view_node';
  $handler->display->display_options['fields']['view_node']['label'] = '';
  $handler->display->display_options['fields']['view_node']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['view_node']['alter']['text'] = '[edit_node] | [delete_node]';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['filter_groups']['groups'] = array(
    1 => 'AND',
    2 => 'AND',
  );
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filterkriterie: Indhold: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'volunteers' => 'volunteers',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filterkriterie: Indhold: Status (field_rsvp) */
  $handler->display->display_options['filters']['field_rsvp_value']['id'] = 'field_rsvp_value';
  $handler->display->display_options['filters']['field_rsvp_value']['table'] = 'field_data_field_rsvp';
  $handler->display->display_options['filters']['field_rsvp_value']['field'] = 'field_rsvp_value';
  $handler->display->display_options['filters']['field_rsvp_value']['operator'] = 'empty';
  $handler->display->display_options['filters']['field_rsvp_value']['value'] = array(
    3 => '3',
  );
  $handler->display->display_options['filters']['field_rsvp_value']['group'] = 1;
  $handler->display->display_options['path'] = 'volunteers/list/rsvp-missing';
  $translatables['volunteer_admin_lists'] = array(
    t('Standarder'),
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
    t('term fra field_party'),
    t('field_polling_station'),
    t('Redigér-link'),
    t('Slet-link'),
    t('Titel'),
    t('CPR'),
    t('E-mail'),
    t('Parti'),
    t('Telefon'),
    t('Telefon 2'),
    t('Valgsted'),
    t('RSVP'),
    t('[edit_node] | [delete_node]'),
    t('Alle'),
    t('Alle frivillige'),
    t('Frivillige der ønsker at blive slettet'),
    t('Frivillige der mangler at svare tilbage'),
  );
  $export['volunteer_admin_lists'] = $view;

  $view = new view();
  $view->name = 'volunteers';
  $view->description = 'lists of volunteers';
  $view->tag = 'valhalla';
  $view->base_table = 'node';
  $view->human_name = 'volunteers';
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
    4 => '4',
    8 => '8',
  );
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
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
  /* Forbindelse: Felt: Parti (field_party) */
  $handler->display->display_options['relationships']['field_party_tid']['id'] = 'field_party_tid';
  $handler->display->display_options['relationships']['field_party_tid']['table'] = 'field_data_field_party';
  $handler->display->display_options['relationships']['field_party_tid']['field'] = 'field_party_tid';
  /* Felt: Indhold: Titel */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'Navn';
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Felt: Felt: Parti */
  $handler->display->display_options['fields']['entity_id_7']['id'] = 'entity_id_7';
  $handler->display->display_options['fields']['entity_id_7']['table'] = 'field_data_field_party';
  $handler->display->display_options['fields']['entity_id_7']['field'] = 'field_party';
  $handler->display->display_options['fields']['entity_id_7']['label'] = 'Party';
  $handler->display->display_options['fields']['entity_id_7']['type'] = 'taxonomy_term_reference_plain';
  /* Felt: Indhold: CPR */
  $handler->display->display_options['fields']['entity_id']['id'] = 'entity_id';
  $handler->display->display_options['fields']['entity_id']['table'] = 'field_data_field_cpr_number';
  $handler->display->display_options['fields']['entity_id']['field'] = 'field_cpr_number';
  $handler->display->display_options['fields']['entity_id']['exclude'] = TRUE;
  /* Felt: Indhold: Email */
  $handler->display->display_options['fields']['entity_id_1']['id'] = 'entity_id_1';
  $handler->display->display_options['fields']['entity_id_1']['table'] = 'field_data_field_email';
  $handler->display->display_options['fields']['entity_id_1']['field'] = 'field_email';
  $handler->display->display_options['fields']['entity_id_1']['label'] = 'E-mail';
  $handler->display->display_options['fields']['entity_id_1']['exclude'] = TRUE;
  /* Felt: Indhold: Telefon */
  $handler->display->display_options['fields']['entity_id_2']['id'] = 'entity_id_2';
  $handler->display->display_options['fields']['entity_id_2']['table'] = 'field_data_field_phone';
  $handler->display->display_options['fields']['entity_id_2']['field'] = 'field_phone';
  $handler->display->display_options['fields']['entity_id_2']['exclude'] = TRUE;
  /* Felt: Felt: Begræns adgang til følgende valgsteder */
  $handler->display->display_options['fields']['entity_id_3']['id'] = 'entity_id_3';
  $handler->display->display_options['fields']['entity_id_3']['table'] = 'field_data_field_polling_station';
  $handler->display->display_options['fields']['entity_id_3']['field'] = 'field_polling_station';
  $handler->display->display_options['fields']['entity_id_3']['label'] = 'Valgsted';
  /* Felt: Indhold: Polling Station post */
  $handler->display->display_options['fields']['entity_id_4']['id'] = 'entity_id_4';
  $handler->display->display_options['fields']['entity_id_4']['table'] = 'field_data_field_polling_station_post';
  $handler->display->display_options['fields']['entity_id_4']['field'] = 'field_polling_station_post';
  $handler->display->display_options['fields']['entity_id_4']['label'] = 'Placering';
  $handler->display->display_options['fields']['entity_id_4']['type'] = 'number_unformatted';
  $handler->display->display_options['fields']['entity_id_4']['settings'] = array(
    'thousand_separator' => '',
    'prefix_suffix' => 0,
  );
  /* Felt: Indhold: Status */
  $handler->display->display_options['fields']['entity_id_5']['id'] = 'entity_id_5';
  $handler->display->display_options['fields']['entity_id_5']['table'] = 'field_data_field_rsvp';
  $handler->display->display_options['fields']['entity_id_5']['field'] = 'field_rsvp';
  $handler->display->display_options['fields']['entity_id_5']['label'] = 'RSVP';
  /* Felt: Indhold: Token */
  $handler->display->display_options['fields']['entity_id_6']['id'] = 'entity_id_6';
  $handler->display->display_options['fields']['entity_id_6']['table'] = 'field_data_field_token';
  $handler->display->display_options['fields']['entity_id_6']['field'] = 'field_token';
  $handler->display->display_options['fields']['entity_id_6']['label'] = 'Symbol';
  /* Felt: Indhold: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  /* Sorteringskriterie: Indhold: Titel */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
  /* Sorteringskriterie: Felt: Begræns adgang til følgende valgsteder (field_polling_station) */
  $handler->display->display_options['sorts']['field_polling_station_nid']['id'] = 'field_polling_station_nid';
  $handler->display->display_options['sorts']['field_polling_station_nid']['table'] = 'field_data_field_polling_station';
  $handler->display->display_options['sorts']['field_polling_station_nid']['field'] = 'field_polling_station_nid';
  /* Kontekstuelt filter: Felt: Parti (field_party) */
  $handler->display->display_options['arguments']['field_party_tid']['id'] = 'field_party_tid';
  $handler->display->display_options['arguments']['field_party_tid']['table'] = 'field_data_field_party';
  $handler->display->display_options['arguments']['field_party_tid']['field'] = 'field_party_tid';
  $handler->display->display_options['arguments']['field_party_tid']['exception']['title'] = 'Alle';
  $handler->display->display_options['arguments']['field_party_tid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['field_party_tid']['summary']['format'] = 'default_summary';
  /* Filterkriterie: Indhold: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'volunteers' => 'volunteers',
  );

  /* Display: Available volunteers */
  $handler = $view->new_display('page', 'Available volunteers', 'available_volunteers_filtered');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
    'entity_id_1' => 'entity_id_1',
    'entity_id_2' => 'entity_id_2',
    'nid' => 'nid',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
    ),
    'entity_id_1' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
    ),
    'entity_id_2' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
    ),
    'nid' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
    ),
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Felt: Felt: Parti */
  $handler->display->display_options['fields']['field_party']['id'] = 'field_party';
  $handler->display->display_options['fields']['field_party']['table'] = 'field_data_field_party';
  $handler->display->display_options['fields']['field_party']['field'] = 'field_party';
  $handler->display->display_options['fields']['field_party']['label'] = 'Liste';
  $handler->display->display_options['fields']['field_party']['hide_alter_empty'] = FALSE;
  /* Felt: Indhold: Titel */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'Navn';
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Felt: Indhold: Email */
  $handler->display->display_options['fields']['entity_id_1']['id'] = 'entity_id_1';
  $handler->display->display_options['fields']['entity_id_1']['table'] = 'field_data_field_email';
  $handler->display->display_options['fields']['entity_id_1']['field'] = 'field_email';
  $handler->display->display_options['fields']['entity_id_1']['label'] = 'E-mail';
  $handler->display->display_options['fields']['entity_id_1']['exclude'] = TRUE;
  /* Felt: Indhold: Telefon */
  $handler->display->display_options['fields']['entity_id_2']['id'] = 'entity_id_2';
  $handler->display->display_options['fields']['entity_id_2']['table'] = 'field_data_field_phone';
  $handler->display->display_options['fields']['entity_id_2']['field'] = 'field_phone';
  $handler->display->display_options['fields']['entity_id_2']['exclude'] = TRUE;
  /* Felt: Indhold: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['nid']['alter']['text'] = '<a href="/ajax/volunteers/station/add/[nid]/!2/!3/!4">Vælg</a>';
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sorteringskriterie: Felt: Begræns adgang til følgende valgsteder (field_polling_station) */
  $handler->display->display_options['sorts']['field_polling_station_nid']['id'] = 'field_polling_station_nid';
  $handler->display->display_options['sorts']['field_polling_station_nid']['table'] = 'field_data_field_polling_station';
  $handler->display->display_options['sorts']['field_polling_station_nid']['field'] = 'field_polling_station_nid';
  $handler->display->display_options['sorts']['field_polling_station_nid']['order'] = 'DESC';
  /* Sorteringskriterie: Indhold: Titel */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Kontekstuelt filter: Felt: Parti (field_party) */
  $handler->display->display_options['arguments']['field_party_tid']['id'] = 'field_party_tid';
  $handler->display->display_options['arguments']['field_party_tid']['table'] = 'field_data_field_party';
  $handler->display->display_options['arguments']['field_party_tid']['field'] = 'field_party_tid';
  $handler->display->display_options['arguments']['field_party_tid']['exception']['title'] = 'Alle';
  $handler->display->display_options['arguments']['field_party_tid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['field_party_tid']['summary']['format'] = 'default_summary';
  /* Kontekstuelt filter: polling station id */
  $handler->display->display_options['arguments']['null']['id'] = 'null';
  $handler->display->display_options['arguments']['null']['table'] = 'views';
  $handler->display->display_options['arguments']['null']['field'] = 'null';
  $handler->display->display_options['arguments']['null']['ui_name'] = 'polling station id';
  $handler->display->display_options['arguments']['null']['exception']['title'] = 'Alle';
  $handler->display->display_options['arguments']['null']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['null']['summary']['format'] = 'default_summary';
  /* Kontekstuelt filter: seat number */
  $handler->display->display_options['arguments']['null_1']['id'] = 'null_1';
  $handler->display->display_options['arguments']['null_1']['table'] = 'views';
  $handler->display->display_options['arguments']['null_1']['field'] = 'null';
  $handler->display->display_options['arguments']['null_1']['ui_name'] = 'seat number';
  $handler->display->display_options['arguments']['null_1']['exception']['title'] = 'Alle';
  $handler->display->display_options['arguments']['null_1']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['null_1']['summary']['format'] = 'default_summary';
  /* Kontekstuelt filter: post */
  $handler->display->display_options['arguments']['null_2']['id'] = 'null_2';
  $handler->display->display_options['arguments']['null_2']['table'] = 'views';
  $handler->display->display_options['arguments']['null_2']['field'] = 'null';
  $handler->display->display_options['arguments']['null_2']['ui_name'] = 'post';
  $handler->display->display_options['arguments']['null_2']['exception']['title'] = 'Alle';
  $handler->display->display_options['arguments']['null_2']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['null_2']['summary']['format'] = 'default_summary';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filterkriterie: Indhold: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'volunteers' => 'volunteers',
  );
  /* Filterkriterie: Indhold: Polling Station post (field_polling_station_post) */
  $handler->display->display_options['filters']['field_polling_station_post_value']['id'] = 'field_polling_station_post_value';
  $handler->display->display_options['filters']['field_polling_station_post_value']['table'] = 'field_data_field_polling_station_post';
  $handler->display->display_options['filters']['field_polling_station_post_value']['field'] = 'field_polling_station_post_value';
  $handler->display->display_options['filters']['field_polling_station_post_value']['operator'] = 'empty';
  /* Filterkriterie: Indhold: Titel */
  $handler->display->display_options['filters']['title']['id'] = 'title';
  $handler->display->display_options['filters']['title']['table'] = 'node';
  $handler->display->display_options['filters']['title']['field'] = 'title';
  $handler->display->display_options['filters']['title']['operator'] = 'contains';
  $handler->display->display_options['filters']['title']['exposed'] = TRUE;
  $handler->display->display_options['filters']['title']['expose']['operator_id'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['label'] = 'Navn';
  $handler->display->display_options['filters']['title']['expose']['operator'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['identifier'] = 'name';
  $handler->display->display_options['path'] = 'available-volunteers';

  /* Display: Frivillige */
  $handler = $view->new_display('panel_pane', 'Frivillige', 'frivillkige_paa_dette_valgsted');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['grouping'] = 'entity_id_8';
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
    'entity_id_7' => 'title',
    'entity_id' => 'entity_id',
    'entity_id_1' => 'entity_id_1',
    'entity_id_2' => 'entity_id_2',
    'entity_id_3' => 'entity_id_3',
    'entity_id_4' => 'entity_id_4',
    'entity_id_5' => 'entity_id_5',
    'entity_id_6' => 'entity_id_6',
    'nid' => 'nid',
    'entity_id_8' => 'entity_id_8',
  );
  $handler->display->display_options['style_options']['default'] = 'title';
  $handler->display->display_options['style_options']['info'] = array(
    'title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
    ),
    'entity_id_7' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
    ),
    'entity_id' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
    ),
    'entity_id_1' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
    ),
    'entity_id_2' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
    ),
    'entity_id_3' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
    ),
    'entity_id_4' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
    ),
    'entity_id_5' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
    ),
    'entity_id_6' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
    ),
    'nid' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
    ),
    'entity_id_8' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
    ),
  );
  $handler->display->display_options['style_options']['override'] = FALSE;
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Forbindelse: Parti */
  $handler->display->display_options['relationships']['term_node_tid']['id'] = 'term_node_tid';
  $handler->display->display_options['relationships']['term_node_tid']['table'] = 'node';
  $handler->display->display_options['relationships']['term_node_tid']['field'] = 'term_node_tid';
  $handler->display->display_options['relationships']['term_node_tid']['ui_name'] = 'Parti';
  $handler->display->display_options['relationships']['term_node_tid']['label'] = 'Parti';
  $handler->display->display_options['relationships']['term_node_tid']['required'] = TRUE;
  $handler->display->display_options['relationships']['term_node_tid']['vocabularies'] = array(
    'partier' => 'partier',
    'tags' => 0,
    'valgtype' => 0,
  );
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Felt: Indhold: Titel */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'Navn';
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Felt: Felt: Parti */
  $handler->display->display_options['fields']['entity_id_7']['id'] = 'entity_id_7';
  $handler->display->display_options['fields']['entity_id_7']['table'] = 'field_data_field_party';
  $handler->display->display_options['fields']['entity_id_7']['field'] = 'field_party';
  $handler->display->display_options['fields']['entity_id_7']['label'] = 'Party';
  $handler->display->display_options['fields']['entity_id_7']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['entity_id_7']['alter']['text'] = ' ([entity_id_7])';
  $handler->display->display_options['fields']['entity_id_7']['element_type'] = '0';
  $handler->display->display_options['fields']['entity_id_7']['element_label_type'] = '0';
  $handler->display->display_options['fields']['entity_id_7']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['entity_id_7']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['entity_id_7']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['entity_id_7']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['entity_id_7']['type'] = 'taxonomy_term_reference_plain';
  /* Felt: Indhold: CPR */
  $handler->display->display_options['fields']['entity_id']['id'] = 'entity_id';
  $handler->display->display_options['fields']['entity_id']['table'] = 'field_data_field_cpr_number';
  $handler->display->display_options['fields']['entity_id']['field'] = 'field_cpr_number';
  $handler->display->display_options['fields']['entity_id']['exclude'] = TRUE;
  /* Felt: Indhold: Email */
  $handler->display->display_options['fields']['entity_id_1']['id'] = 'entity_id_1';
  $handler->display->display_options['fields']['entity_id_1']['table'] = 'field_data_field_email';
  $handler->display->display_options['fields']['entity_id_1']['field'] = 'field_email';
  $handler->display->display_options['fields']['entity_id_1']['label'] = 'E-mail';
  $handler->display->display_options['fields']['entity_id_1']['exclude'] = TRUE;
  /* Felt: Indhold: Telefon */
  $handler->display->display_options['fields']['entity_id_2']['id'] = 'entity_id_2';
  $handler->display->display_options['fields']['entity_id_2']['table'] = 'field_data_field_phone';
  $handler->display->display_options['fields']['entity_id_2']['field'] = 'field_phone';
  $handler->display->display_options['fields']['entity_id_2']['label'] = 'Phone';
  $handler->display->display_options['fields']['entity_id_2']['exclude'] = TRUE;
  /* Felt: Felt: Begræns adgang til følgende valgsteder */
  $handler->display->display_options['fields']['entity_id_3']['id'] = 'entity_id_3';
  $handler->display->display_options['fields']['entity_id_3']['table'] = 'field_data_field_polling_station';
  $handler->display->display_options['fields']['entity_id_3']['field'] = 'field_polling_station';
  $handler->display->display_options['fields']['entity_id_3']['label'] = 'Valgsted';
  $handler->display->display_options['fields']['entity_id_3']['exclude'] = TRUE;
  /* Felt: Indhold: Polling Station post */
  $handler->display->display_options['fields']['entity_id_4']['id'] = 'entity_id_4';
  $handler->display->display_options['fields']['entity_id_4']['table'] = 'field_data_field_polling_station_post';
  $handler->display->display_options['fields']['entity_id_4']['field'] = 'field_polling_station_post';
  $handler->display->display_options['fields']['entity_id_4']['label'] = 'Placering';
  $handler->display->display_options['fields']['entity_id_4']['exclude'] = TRUE;
  $handler->display->display_options['fields']['entity_id_4']['type'] = 'number_unformatted';
  $handler->display->display_options['fields']['entity_id_4']['settings'] = array(
    'thousand_separator' => '',
    'prefix_suffix' => 0,
  );
  /* Felt: Indhold: Status */
  $handler->display->display_options['fields']['entity_id_5']['id'] = 'entity_id_5';
  $handler->display->display_options['fields']['entity_id_5']['table'] = 'field_data_field_rsvp';
  $handler->display->display_options['fields']['entity_id_5']['field'] = 'field_rsvp';
  $handler->display->display_options['fields']['entity_id_5']['label'] = 'RSVP';
  $handler->display->display_options['fields']['entity_id_5']['exclude'] = TRUE;
  /* Felt: Indhold: Token */
  $handler->display->display_options['fields']['entity_id_6']['id'] = 'entity_id_6';
  $handler->display->display_options['fields']['entity_id_6']['table'] = 'field_data_field_token';
  $handler->display->display_options['fields']['entity_id_6']['field'] = 'field_token';
  $handler->display->display_options['fields']['entity_id_6']['label'] = 'Symbol';
  $handler->display->display_options['fields']['entity_id_6']['exclude'] = TRUE;
  /* Felt: Indhold: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  /* Felt: Felt: Parti */
  $handler->display->display_options['fields']['entity_id_8']['id'] = 'entity_id_8';
  $handler->display->display_options['fields']['entity_id_8']['table'] = 'field_data_field_party';
  $handler->display->display_options['fields']['entity_id_8']['field'] = 'field_party';
  $handler->display->display_options['fields']['entity_id_8']['label'] = '';
  $handler->display->display_options['fields']['entity_id_8']['exclude'] = TRUE;
  $handler->display->display_options['fields']['entity_id_8']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['entity_id_8']['alter']['text'] = '[entity_id_8]';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Kontekstuelt filter: Felt: Parti (field_party) */
  $handler->display->display_options['arguments']['field_party_tid']['id'] = 'field_party_tid';
  $handler->display->display_options['arguments']['field_party_tid']['table'] = 'field_data_field_party';
  $handler->display->display_options['arguments']['field_party_tid']['field'] = 'field_party_tid';
  $handler->display->display_options['arguments']['field_party_tid']['exception']['title'] = 'Alle';
  $handler->display->display_options['arguments']['field_party_tid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['field_party_tid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['allow']['use_pager'] = 0;
  $handler->display->display_options['allow']['items_per_page'] = 0;
  $handler->display->display_options['allow']['offset'] = 0;
  $handler->display->display_options['allow']['link_to_view'] = 0;
  $handler->display->display_options['allow']['more_link'] = 0;
  $handler->display->display_options['allow']['path_override'] = 0;
  $handler->display->display_options['allow']['title_override'] = 'title_override';
  $handler->display->display_options['allow']['exposed_form'] = 0;
  $handler->display->display_options['allow']['fields_override'] = 0;
  $handler->display->display_options['argument_input'] = array(
    'field_party_tid' => array(
      'type' => 'context',
      'context' => 'token.current-user:field-party',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'Fields: field_party (field_party) - tid',
    ),
  );

  /* Display: Frivillige på dette valgsted */
  $handler = $view->new_display('panel_pane', 'Frivillige på dette valgsted', 'panel_pane_1');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['grouping'] = 'entity_id_8';
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
    'entity_id_7' => 'title',
    'entity_id' => 'entity_id',
    'entity_id_1' => 'entity_id_1',
    'entity_id_2' => 'entity_id_2',
    'entity_id_3' => 'entity_id_3',
    'entity_id_4' => 'entity_id_4',
    'entity_id_5' => 'entity_id_5',
    'entity_id_6' => 'entity_id_6',
    'nid' => 'nid',
    'entity_id_8' => 'entity_id_8',
  );
  $handler->display->display_options['style_options']['default'] = 'title';
  $handler->display->display_options['style_options']['info'] = array(
    'title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
    ),
    'entity_id_7' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
    ),
    'entity_id' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
    ),
    'entity_id_1' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
    ),
    'entity_id_2' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
    ),
    'entity_id_3' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
    ),
    'entity_id_4' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
    ),
    'entity_id_5' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
    ),
    'entity_id_6' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
    ),
    'nid' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
    ),
    'entity_id_8' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
    ),
  );
  $handler->display->display_options['style_options']['override'] = FALSE;
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Forbindelse: Parti */
  $handler->display->display_options['relationships']['term_node_tid']['id'] = 'term_node_tid';
  $handler->display->display_options['relationships']['term_node_tid']['table'] = 'node';
  $handler->display->display_options['relationships']['term_node_tid']['field'] = 'term_node_tid';
  $handler->display->display_options['relationships']['term_node_tid']['ui_name'] = 'Parti';
  $handler->display->display_options['relationships']['term_node_tid']['label'] = 'Parti';
  $handler->display->display_options['relationships']['term_node_tid']['required'] = TRUE;
  $handler->display->display_options['relationships']['term_node_tid']['vocabularies'] = array(
    'partier' => 'partier',
    'tags' => 0,
    'valgtype' => 0,
  );
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Felt: Indhold: Titel */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'Navn';
  $handler->display->display_options['fields']['title']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Felt: Felt: Parti */
  $handler->display->display_options['fields']['entity_id_7']['id'] = 'entity_id_7';
  $handler->display->display_options['fields']['entity_id_7']['table'] = 'field_data_field_party';
  $handler->display->display_options['fields']['entity_id_7']['field'] = 'field_party';
  $handler->display->display_options['fields']['entity_id_7']['label'] = 'Party';
  $handler->display->display_options['fields']['entity_id_7']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['entity_id_7']['alter']['text'] = ' ([entity_id_7])';
  $handler->display->display_options['fields']['entity_id_7']['element_type'] = '0';
  $handler->display->display_options['fields']['entity_id_7']['element_label_type'] = '0';
  $handler->display->display_options['fields']['entity_id_7']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['entity_id_7']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['entity_id_7']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['entity_id_7']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['entity_id_7']['type'] = 'taxonomy_term_reference_plain';
  /* Felt: Indhold: CPR */
  $handler->display->display_options['fields']['entity_id']['id'] = 'entity_id';
  $handler->display->display_options['fields']['entity_id']['table'] = 'field_data_field_cpr_number';
  $handler->display->display_options['fields']['entity_id']['field'] = 'field_cpr_number';
  $handler->display->display_options['fields']['entity_id']['exclude'] = TRUE;
  /* Felt: Indhold: Email */
  $handler->display->display_options['fields']['entity_id_1']['id'] = 'entity_id_1';
  $handler->display->display_options['fields']['entity_id_1']['table'] = 'field_data_field_email';
  $handler->display->display_options['fields']['entity_id_1']['field'] = 'field_email';
  $handler->display->display_options['fields']['entity_id_1']['label'] = 'E-mail';
  $handler->display->display_options['fields']['entity_id_1']['exclude'] = TRUE;
  /* Felt: Indhold: Telefon */
  $handler->display->display_options['fields']['entity_id_2']['id'] = 'entity_id_2';
  $handler->display->display_options['fields']['entity_id_2']['table'] = 'field_data_field_phone';
  $handler->display->display_options['fields']['entity_id_2']['field'] = 'field_phone';
  $handler->display->display_options['fields']['entity_id_2']['label'] = 'Phone';
  $handler->display->display_options['fields']['entity_id_2']['exclude'] = TRUE;
  /* Felt: Felt: Begræns adgang til følgende valgsteder */
  $handler->display->display_options['fields']['entity_id_3']['id'] = 'entity_id_3';
  $handler->display->display_options['fields']['entity_id_3']['table'] = 'field_data_field_polling_station';
  $handler->display->display_options['fields']['entity_id_3']['field'] = 'field_polling_station';
  $handler->display->display_options['fields']['entity_id_3']['label'] = 'Valgsted';
  $handler->display->display_options['fields']['entity_id_3']['exclude'] = TRUE;
  /* Felt: Indhold: Polling Station post */
  $handler->display->display_options['fields']['entity_id_4']['id'] = 'entity_id_4';
  $handler->display->display_options['fields']['entity_id_4']['table'] = 'field_data_field_polling_station_post';
  $handler->display->display_options['fields']['entity_id_4']['field'] = 'field_polling_station_post';
  $handler->display->display_options['fields']['entity_id_4']['label'] = 'Placering';
  $handler->display->display_options['fields']['entity_id_4']['exclude'] = TRUE;
  $handler->display->display_options['fields']['entity_id_4']['type'] = 'number_unformatted';
  $handler->display->display_options['fields']['entity_id_4']['settings'] = array(
    'thousand_separator' => '',
    'prefix_suffix' => 0,
  );
  /* Felt: Indhold: Status */
  $handler->display->display_options['fields']['entity_id_5']['id'] = 'entity_id_5';
  $handler->display->display_options['fields']['entity_id_5']['table'] = 'field_data_field_rsvp';
  $handler->display->display_options['fields']['entity_id_5']['field'] = 'field_rsvp';
  $handler->display->display_options['fields']['entity_id_5']['label'] = 'RSVP';
  $handler->display->display_options['fields']['entity_id_5']['exclude'] = TRUE;
  /* Felt: Indhold: Token */
  $handler->display->display_options['fields']['entity_id_6']['id'] = 'entity_id_6';
  $handler->display->display_options['fields']['entity_id_6']['table'] = 'field_data_field_token';
  $handler->display->display_options['fields']['entity_id_6']['field'] = 'field_token';
  $handler->display->display_options['fields']['entity_id_6']['label'] = 'Symbol';
  $handler->display->display_options['fields']['entity_id_6']['exclude'] = TRUE;
  /* Felt: Indhold: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  /* Felt: Felt: Parti */
  $handler->display->display_options['fields']['entity_id_8']['id'] = 'entity_id_8';
  $handler->display->display_options['fields']['entity_id_8']['table'] = 'field_data_field_party';
  $handler->display->display_options['fields']['entity_id_8']['field'] = 'field_party';
  $handler->display->display_options['fields']['entity_id_8']['label'] = '';
  $handler->display->display_options['fields']['entity_id_8']['exclude'] = TRUE;
  $handler->display->display_options['fields']['entity_id_8']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['entity_id_8']['alter']['text'] = '[entity_id_8]';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Kontekstuelt filter: Felt: Parti (field_party) */
  $handler->display->display_options['arguments']['field_party_tid']['id'] = 'field_party_tid';
  $handler->display->display_options['arguments']['field_party_tid']['table'] = 'field_data_field_party';
  $handler->display->display_options['arguments']['field_party_tid']['field'] = 'field_party_tid';
  $handler->display->display_options['arguments']['field_party_tid']['exception']['title'] = 'Alle';
  $handler->display->display_options['arguments']['field_party_tid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['field_party_tid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['pane_category']['name'] = 'Oversigter';
  $handler->display->display_options['pane_category']['weight'] = '0';
  $handler->display->display_options['allow']['use_pager'] = 0;
  $handler->display->display_options['allow']['items_per_page'] = 0;
  $handler->display->display_options['allow']['offset'] = 0;
  $handler->display->display_options['allow']['link_to_view'] = 0;
  $handler->display->display_options['allow']['more_link'] = 0;
  $handler->display->display_options['allow']['path_override'] = 0;
  $handler->display->display_options['allow']['title_override'] = 'title_override';
  $handler->display->display_options['allow']['exposed_form'] = 0;
  $handler->display->display_options['allow']['fields_override'] = 0;
  $handler->display->display_options['argument_input'] = array(
    'field_party_tid' => array(
      'type' => 'context',
      'context' => 'token.current-user:field-party',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'Fields: field_party (field_party) - tid',
    ),
  );

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'Frivillige_paa_valgsted');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'fefd';
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['empty'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Felt: Indhold: Titel */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'Navn';
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Felt: Felt: Parti */
  $handler->display->display_options['fields']['entity_id_7']['id'] = 'entity_id_7';
  $handler->display->display_options['fields']['entity_id_7']['table'] = 'field_data_field_party';
  $handler->display->display_options['fields']['entity_id_7']['field'] = 'field_party';
  $handler->display->display_options['fields']['entity_id_7']['label'] = 'Party';
  $handler->display->display_options['fields']['entity_id_7']['type'] = 'taxonomy_term_reference_plain';
  /* Felt: Indhold: CPR */
  $handler->display->display_options['fields']['entity_id']['id'] = 'entity_id';
  $handler->display->display_options['fields']['entity_id']['table'] = 'field_data_field_cpr_number';
  $handler->display->display_options['fields']['entity_id']['field'] = 'field_cpr_number';
  $handler->display->display_options['fields']['entity_id']['exclude'] = TRUE;
  /* Felt: Indhold: Email */
  $handler->display->display_options['fields']['entity_id_1']['id'] = 'entity_id_1';
  $handler->display->display_options['fields']['entity_id_1']['table'] = 'field_data_field_email';
  $handler->display->display_options['fields']['entity_id_1']['field'] = 'field_email';
  $handler->display->display_options['fields']['entity_id_1']['label'] = 'E-mail';
  $handler->display->display_options['fields']['entity_id_1']['exclude'] = TRUE;
  /* Felt: Indhold: Telefon */
  $handler->display->display_options['fields']['entity_id_2']['id'] = 'entity_id_2';
  $handler->display->display_options['fields']['entity_id_2']['table'] = 'field_data_field_phone';
  $handler->display->display_options['fields']['entity_id_2']['field'] = 'field_phone';
  $handler->display->display_options['fields']['entity_id_2']['label'] = 'Phone';
  $handler->display->display_options['fields']['entity_id_2']['exclude'] = TRUE;
  /* Felt: Felt: Begræns adgang til følgende valgsteder */
  $handler->display->display_options['fields']['entity_id_3']['id'] = 'entity_id_3';
  $handler->display->display_options['fields']['entity_id_3']['table'] = 'field_data_field_polling_station';
  $handler->display->display_options['fields']['entity_id_3']['field'] = 'field_polling_station';
  $handler->display->display_options['fields']['entity_id_3']['label'] = 'Valgsted';
  /* Felt: Indhold: Polling Station post */
  $handler->display->display_options['fields']['entity_id_4']['id'] = 'entity_id_4';
  $handler->display->display_options['fields']['entity_id_4']['table'] = 'field_data_field_polling_station_post';
  $handler->display->display_options['fields']['entity_id_4']['field'] = 'field_polling_station_post';
  $handler->display->display_options['fields']['entity_id_4']['label'] = 'Placering';
  $handler->display->display_options['fields']['entity_id_4']['type'] = 'number_unformatted';
  $handler->display->display_options['fields']['entity_id_4']['settings'] = array(
    'thousand_separator' => '',
    'prefix_suffix' => 0,
  );
  /* Felt: Indhold: Status */
  $handler->display->display_options['fields']['entity_id_5']['id'] = 'entity_id_5';
  $handler->display->display_options['fields']['entity_id_5']['table'] = 'field_data_field_rsvp';
  $handler->display->display_options['fields']['entity_id_5']['field'] = 'field_rsvp';
  $handler->display->display_options['fields']['entity_id_5']['label'] = 'RSVP';
  /* Felt: Indhold: Token */
  $handler->display->display_options['fields']['entity_id_6']['id'] = 'entity_id_6';
  $handler->display->display_options['fields']['entity_id_6']['table'] = 'field_data_field_token';
  $handler->display->display_options['fields']['entity_id_6']['field'] = 'field_token';
  $handler->display->display_options['fields']['entity_id_6']['label'] = 'Symbol';
  /* Felt: Indhold: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Kontekstuelt filter: Felt: Parti (field_party) */
  $handler->display->display_options['arguments']['field_party_tid']['id'] = 'field_party_tid';
  $handler->display->display_options['arguments']['field_party_tid']['table'] = 'field_data_field_party';
  $handler->display->display_options['arguments']['field_party_tid']['field'] = 'field_party_tid';
  $handler->display->display_options['arguments']['field_party_tid']['exception']['title'] = 'Alle';
  $handler->display->display_options['arguments']['field_party_tid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['field_party_tid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_party_tid']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['field_party_tid']['validate']['type'] = 'taxonomy_term';
  $handler->display->display_options['arguments']['field_party_tid']['validate_options']['vocabularies'] = array(
    'partier' => 'partier',
  );
  $handler->display->display_options['arguments']['field_party_tid']['validate_options']['type'] = 'convert';
  $handler->display->display_options['arguments']['field_party_tid']['validate']['fail'] = 'empty';

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page_1');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Forbindelse: Polling station */
  $handler->display->display_options['relationships']['field_polling_station_nid']['id'] = 'field_polling_station_nid';
  $handler->display->display_options['relationships']['field_polling_station_nid']['table'] = 'field_data_field_polling_station';
  $handler->display->display_options['relationships']['field_polling_station_nid']['field'] = 'field_polling_station_nid';
  $handler->display->display_options['relationships']['field_polling_station_nid']['ui_name'] = 'Polling station';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Kontekstuelt filter: Indhold: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['relationship'] = 'field_polling_station_nid';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['exception']['title'] = 'Alle';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['nid']['validate']['type'] = 'node';
  $handler->display->display_options['path'] = 'huttelihut';

  /* Display: Volunteers Block */
  $handler = $view->new_display('block', 'Volunteers Block', 'block_1');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['empty'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Felt: Indhold: Titel */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'Navn';
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Felt: Felt: Parti */
  $handler->display->display_options['fields']['entity_id_7']['id'] = 'entity_id_7';
  $handler->display->display_options['fields']['entity_id_7']['table'] = 'field_data_field_party';
  $handler->display->display_options['fields']['entity_id_7']['field'] = 'field_party';
  $handler->display->display_options['fields']['entity_id_7']['label'] = 'Party';
  $handler->display->display_options['fields']['entity_id_7']['type'] = 'taxonomy_term_reference_plain';
  /* Felt: Indhold: CPR */
  $handler->display->display_options['fields']['entity_id']['id'] = 'entity_id';
  $handler->display->display_options['fields']['entity_id']['table'] = 'field_data_field_cpr_number';
  $handler->display->display_options['fields']['entity_id']['field'] = 'field_cpr_number';
  $handler->display->display_options['fields']['entity_id']['exclude'] = TRUE;
  /* Felt: Indhold: Email */
  $handler->display->display_options['fields']['entity_id_1']['id'] = 'entity_id_1';
  $handler->display->display_options['fields']['entity_id_1']['table'] = 'field_data_field_email';
  $handler->display->display_options['fields']['entity_id_1']['field'] = 'field_email';
  $handler->display->display_options['fields']['entity_id_1']['label'] = 'E-mail';
  $handler->display->display_options['fields']['entity_id_1']['exclude'] = TRUE;
  /* Felt: Indhold: Telefon */
  $handler->display->display_options['fields']['entity_id_2']['id'] = 'entity_id_2';
  $handler->display->display_options['fields']['entity_id_2']['table'] = 'field_data_field_phone';
  $handler->display->display_options['fields']['entity_id_2']['field'] = 'field_phone';
  $handler->display->display_options['fields']['entity_id_2']['label'] = 'Phone';
  $handler->display->display_options['fields']['entity_id_2']['exclude'] = TRUE;
  /* Felt: Felt: Begræns adgang til følgende valgsteder */
  $handler->display->display_options['fields']['entity_id_3']['id'] = 'entity_id_3';
  $handler->display->display_options['fields']['entity_id_3']['table'] = 'field_data_field_polling_station';
  $handler->display->display_options['fields']['entity_id_3']['field'] = 'field_polling_station';
  $handler->display->display_options['fields']['entity_id_3']['label'] = 'Valgsted';
  /* Felt: Indhold: Polling Station post */
  $handler->display->display_options['fields']['entity_id_4']['id'] = 'entity_id_4';
  $handler->display->display_options['fields']['entity_id_4']['table'] = 'field_data_field_polling_station_post';
  $handler->display->display_options['fields']['entity_id_4']['field'] = 'field_polling_station_post';
  $handler->display->display_options['fields']['entity_id_4']['label'] = 'Placering';
  $handler->display->display_options['fields']['entity_id_4']['type'] = 'number_unformatted';
  $handler->display->display_options['fields']['entity_id_4']['settings'] = array(
    'thousand_separator' => '',
    'prefix_suffix' => 0,
  );
  /* Felt: Indhold: Status */
  $handler->display->display_options['fields']['entity_id_5']['id'] = 'entity_id_5';
  $handler->display->display_options['fields']['entity_id_5']['table'] = 'field_data_field_rsvp';
  $handler->display->display_options['fields']['entity_id_5']['field'] = 'field_rsvp';
  $handler->display->display_options['fields']['entity_id_5']['label'] = 'RSVP';
  /* Felt: Indhold: Token */
  $handler->display->display_options['fields']['entity_id_6']['id'] = 'entity_id_6';
  $handler->display->display_options['fields']['entity_id_6']['table'] = 'field_data_field_token';
  $handler->display->display_options['fields']['entity_id_6']['field'] = 'field_token';
  $handler->display->display_options['fields']['entity_id_6']['label'] = 'Symbol';
  /* Felt: Indhold: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sorteringskriterie: Indhold: Titel */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Kontekstuelt filter: Indhold: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['exception']['title'] = 'Alle';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['nid']['validate']['type'] = 'node';
  $handler->display->display_options['arguments']['nid']['validate_options']['types'] = array(
    'volunteers' => 'volunteers',
  );
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filterkriterie: Indhold: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'volunteers' => 'volunteers',
  );

  /* Display: Available volunteers - unfiltered */
  $handler = $view->new_display('page', 'Available volunteers - unfiltered', 'available_volunteers_unfiltered');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
    'entity_id_1' => 'entity_id_1',
    'entity_id_2' => 'entity_id_2',
    'nid' => 'nid',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
    ),
    'entity_id_1' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
    ),
    'entity_id_2' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
    ),
    'nid' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
    ),
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Felt: Felt: Parti */
  $handler->display->display_options['fields']['entity_id']['id'] = 'entity_id';
  $handler->display->display_options['fields']['entity_id']['table'] = 'field_data_field_party';
  $handler->display->display_options['fields']['entity_id']['field'] = 'field_party';
  $handler->display->display_options['fields']['entity_id']['label'] = 'Liste';
  $handler->display->display_options['fields']['entity_id']['type'] = 'taxonomy_term_reference_plain';
  /* Felt: Indhold: Titel */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'Navn';
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Felt: Indhold: Email */
  $handler->display->display_options['fields']['entity_id_1']['id'] = 'entity_id_1';
  $handler->display->display_options['fields']['entity_id_1']['table'] = 'field_data_field_email';
  $handler->display->display_options['fields']['entity_id_1']['field'] = 'field_email';
  $handler->display->display_options['fields']['entity_id_1']['label'] = 'E-mail';
  $handler->display->display_options['fields']['entity_id_1']['exclude'] = TRUE;
  /* Felt: Indhold: Telefon */
  $handler->display->display_options['fields']['entity_id_2']['id'] = 'entity_id_2';
  $handler->display->display_options['fields']['entity_id_2']['table'] = 'field_data_field_phone';
  $handler->display->display_options['fields']['entity_id_2']['field'] = 'field_phone';
  $handler->display->display_options['fields']['entity_id_2']['exclude'] = TRUE;
  /* Felt: Indhold: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['nid']['alter']['text'] = '<a href="/ajax/volunteers/station/add/[nid]/!2/!3/!4">Vælg</a>';
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sorteringskriterie: Felt: Begræns adgang til følgende valgsteder (field_polling_station) */
  $handler->display->display_options['sorts']['field_polling_station_nid']['id'] = 'field_polling_station_nid';
  $handler->display->display_options['sorts']['field_polling_station_nid']['table'] = 'field_data_field_polling_station';
  $handler->display->display_options['sorts']['field_polling_station_nid']['field'] = 'field_polling_station_nid';
  $handler->display->display_options['sorts']['field_polling_station_nid']['order'] = 'DESC';
  /* Sorteringskriterie: Indhold: Titel */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Kontekstuelt filter: parti id */
  $handler->display->display_options['arguments']['null_3']['id'] = 'null_3';
  $handler->display->display_options['arguments']['null_3']['table'] = 'views';
  $handler->display->display_options['arguments']['null_3']['field'] = 'null';
  $handler->display->display_options['arguments']['null_3']['ui_name'] = 'parti id';
  $handler->display->display_options['arguments']['null_3']['exception']['title_enable'] = TRUE;
  $handler->display->display_options['arguments']['null_3']['exception']['title'] = 'Alle';
  $handler->display->display_options['arguments']['null_3']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['null_3']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['null_3']['specify_validation'] = TRUE;
  /* Kontekstuelt filter: polling station id */
  $handler->display->display_options['arguments']['null']['id'] = 'null';
  $handler->display->display_options['arguments']['null']['table'] = 'views';
  $handler->display->display_options['arguments']['null']['field'] = 'null';
  $handler->display->display_options['arguments']['null']['ui_name'] = 'polling station id';
  $handler->display->display_options['arguments']['null']['exception']['title'] = 'Alle';
  $handler->display->display_options['arguments']['null']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['null']['summary']['format'] = 'default_summary';
  /* Kontekstuelt filter: seat number */
  $handler->display->display_options['arguments']['null_1']['id'] = 'null_1';
  $handler->display->display_options['arguments']['null_1']['table'] = 'views';
  $handler->display->display_options['arguments']['null_1']['field'] = 'null';
  $handler->display->display_options['arguments']['null_1']['ui_name'] = 'seat number';
  $handler->display->display_options['arguments']['null_1']['exception']['title'] = 'Alle';
  $handler->display->display_options['arguments']['null_1']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['null_1']['summary']['format'] = 'default_summary';
  /* Kontekstuelt filter: post */
  $handler->display->display_options['arguments']['null_2']['id'] = 'null_2';
  $handler->display->display_options['arguments']['null_2']['table'] = 'views';
  $handler->display->display_options['arguments']['null_2']['field'] = 'null';
  $handler->display->display_options['arguments']['null_2']['ui_name'] = 'post';
  $handler->display->display_options['arguments']['null_2']['exception']['title'] = 'Alle';
  $handler->display->display_options['arguments']['null_2']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['null_2']['summary']['format'] = 'default_summary';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filterkriterie: Indhold: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'volunteers' => 'volunteers',
  );
  /* Filterkriterie: Indhold: Polling Station post (field_polling_station_post) */
  $handler->display->display_options['filters']['field_polling_station_post_value']['id'] = 'field_polling_station_post_value';
  $handler->display->display_options['filters']['field_polling_station_post_value']['table'] = 'field_data_field_polling_station_post';
  $handler->display->display_options['filters']['field_polling_station_post_value']['field'] = 'field_polling_station_post_value';
  $handler->display->display_options['filters']['field_polling_station_post_value']['operator'] = 'empty';
  /* Filterkriterie: Indhold: Titel */
  $handler->display->display_options['filters']['title']['id'] = 'title';
  $handler->display->display_options['filters']['title']['table'] = 'node';
  $handler->display->display_options['filters']['title']['field'] = 'title';
  $handler->display->display_options['filters']['title']['operator'] = 'contains';
  $handler->display->display_options['filters']['title']['exposed'] = TRUE;
  $handler->display->display_options['filters']['title']['expose']['operator_id'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['label'] = 'Navn';
  $handler->display->display_options['filters']['title']['expose']['operator'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['identifier'] = 'name';
  /* Filterkriterie: Liste */
  $handler->display->display_options['filters']['field_bogstav_value']['id'] = 'field_bogstav_value';
  $handler->display->display_options['filters']['field_bogstav_value']['table'] = 'field_data_field_bogstav';
  $handler->display->display_options['filters']['field_bogstav_value']['field'] = 'field_bogstav_value';
  $handler->display->display_options['filters']['field_bogstav_value']['relationship'] = 'field_party_tid';
  $handler->display->display_options['filters']['field_bogstav_value']['ui_name'] = 'Liste';
  $handler->display->display_options['filters']['field_bogstav_value']['group'] = '0';
  $handler->display->display_options['filters']['field_bogstav_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_bogstav_value']['expose']['operator_id'] = 'field_bogstav_value_op';
  $handler->display->display_options['filters']['field_bogstav_value']['expose']['label'] = 'Liste';
  $handler->display->display_options['filters']['field_bogstav_value']['expose']['operator'] = 'field_bogstav_value_op';
  $handler->display->display_options['filters']['field_bogstav_value']['expose']['identifier'] = 'liste';
  $handler->display->display_options['path'] = 'available-volunteers';

  /* Display: Data export */
  $handler = $view->new_display('views_data_export', 'Data export', 'views_data_export_1');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '0';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'views_data_export_csv';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Felt: Indhold: Titel */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'Navn';
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Felt: Felt: Parti */
  $handler->display->display_options['fields']['entity_id_7']['id'] = 'entity_id_7';
  $handler->display->display_options['fields']['entity_id_7']['table'] = 'field_data_field_party';
  $handler->display->display_options['fields']['entity_id_7']['field'] = 'field_party';
  $handler->display->display_options['fields']['entity_id_7']['label'] = 'Party';
  $handler->display->display_options['fields']['entity_id_7']['type'] = 'taxonomy_term_reference_plain';
  /* Felt: Indhold: CPR */
  $handler->display->display_options['fields']['entity_id']['id'] = 'entity_id';
  $handler->display->display_options['fields']['entity_id']['table'] = 'field_data_field_cpr_number';
  $handler->display->display_options['fields']['entity_id']['field'] = 'field_cpr_number';
  $handler->display->display_options['fields']['entity_id']['hide_alter_empty'] = FALSE;
  /* Felt: Indhold: Email */
  $handler->display->display_options['fields']['entity_id_1']['id'] = 'entity_id_1';
  $handler->display->display_options['fields']['entity_id_1']['table'] = 'field_data_field_email';
  $handler->display->display_options['fields']['entity_id_1']['field'] = 'field_email';
  $handler->display->display_options['fields']['entity_id_1']['label'] = 'E-mail';
  $handler->display->display_options['fields']['entity_id_1']['exclude'] = TRUE;
  /* Felt: Indhold: Telefon */
  $handler->display->display_options['fields']['entity_id_2']['id'] = 'entity_id_2';
  $handler->display->display_options['fields']['entity_id_2']['table'] = 'field_data_field_phone';
  $handler->display->display_options['fields']['entity_id_2']['field'] = 'field_phone';
  $handler->display->display_options['fields']['entity_id_2']['exclude'] = TRUE;
  /* Felt: Felt: Begræns adgang til følgende valgsteder */
  $handler->display->display_options['fields']['entity_id_3']['id'] = 'entity_id_3';
  $handler->display->display_options['fields']['entity_id_3']['table'] = 'field_data_field_polling_station';
  $handler->display->display_options['fields']['entity_id_3']['field'] = 'field_polling_station';
  $handler->display->display_options['fields']['entity_id_3']['label'] = 'Valgsted';
  /* Felt: Indhold: Polling Station post */
  $handler->display->display_options['fields']['entity_id_4']['id'] = 'entity_id_4';
  $handler->display->display_options['fields']['entity_id_4']['table'] = 'field_data_field_polling_station_post';
  $handler->display->display_options['fields']['entity_id_4']['field'] = 'field_polling_station_post';
  $handler->display->display_options['fields']['entity_id_4']['label'] = 'Placering';
  $handler->display->display_options['fields']['entity_id_4']['type'] = 'number_unformatted';
  $handler->display->display_options['fields']['entity_id_4']['settings'] = array(
    'thousand_separator' => '',
    'prefix_suffix' => 0,
  );
  /* Felt: Indhold: Status */
  $handler->display->display_options['fields']['entity_id_5']['id'] = 'entity_id_5';
  $handler->display->display_options['fields']['entity_id_5']['table'] = 'field_data_field_rsvp';
  $handler->display->display_options['fields']['entity_id_5']['field'] = 'field_rsvp';
  $handler->display->display_options['fields']['entity_id_5']['label'] = 'RSVP';
  /* Felt: Indhold: Token */
  $handler->display->display_options['fields']['entity_id_6']['id'] = 'entity_id_6';
  $handler->display->display_options['fields']['entity_id_6']['table'] = 'field_data_field_token';
  $handler->display->display_options['fields']['entity_id_6']['field'] = 'field_token';
  $handler->display->display_options['fields']['entity_id_6']['label'] = 'Symbol';
  /* Felt: Indhold: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['path'] = 'frivexp.csv';

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
  /* Felt: Indhold: Titel */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'Navn';
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Felt: Felt: Parti */
  $handler->display->display_options['fields']['entity_id_7']['id'] = 'entity_id_7';
  $handler->display->display_options['fields']['entity_id_7']['table'] = 'field_data_field_party';
  $handler->display->display_options['fields']['entity_id_7']['field'] = 'field_party';
  $handler->display->display_options['fields']['entity_id_7']['label'] = 'Party';
  $handler->display->display_options['fields']['entity_id_7']['type'] = 'taxonomy_term_reference_plain';
  /* Felt: Indhold: CPR */
  $handler->display->display_options['fields']['entity_id']['id'] = 'entity_id';
  $handler->display->display_options['fields']['entity_id']['table'] = 'field_data_field_cpr_number';
  $handler->display->display_options['fields']['entity_id']['field'] = 'field_cpr_number';
  $handler->display->display_options['fields']['entity_id']['hide_alter_empty'] = FALSE;
  /* Felt: Indhold: Email */
  $handler->display->display_options['fields']['entity_id_1']['id'] = 'entity_id_1';
  $handler->display->display_options['fields']['entity_id_1']['table'] = 'field_data_field_email';
  $handler->display->display_options['fields']['entity_id_1']['field'] = 'field_email';
  $handler->display->display_options['fields']['entity_id_1']['label'] = 'E-mail';
  $handler->display->display_options['fields']['entity_id_1']['exclude'] = TRUE;
  /* Felt: Indhold: Telefon */
  $handler->display->display_options['fields']['entity_id_2']['id'] = 'entity_id_2';
  $handler->display->display_options['fields']['entity_id_2']['table'] = 'field_data_field_phone';
  $handler->display->display_options['fields']['entity_id_2']['field'] = 'field_phone';
  $handler->display->display_options['fields']['entity_id_2']['exclude'] = TRUE;
  /* Felt: Felt: Begræns adgang til følgende valgsteder */
  $handler->display->display_options['fields']['entity_id_3']['id'] = 'entity_id_3';
  $handler->display->display_options['fields']['entity_id_3']['table'] = 'field_data_field_polling_station';
  $handler->display->display_options['fields']['entity_id_3']['field'] = 'field_polling_station';
  $handler->display->display_options['fields']['entity_id_3']['label'] = 'Valgsted';
  /* Felt: Indhold: Polling Station post */
  $handler->display->display_options['fields']['entity_id_4']['id'] = 'entity_id_4';
  $handler->display->display_options['fields']['entity_id_4']['table'] = 'field_data_field_polling_station_post';
  $handler->display->display_options['fields']['entity_id_4']['field'] = 'field_polling_station_post';
  $handler->display->display_options['fields']['entity_id_4']['label'] = 'Placering';
  $handler->display->display_options['fields']['entity_id_4']['type'] = 'number_unformatted';
  $handler->display->display_options['fields']['entity_id_4']['settings'] = array(
    'thousand_separator' => '',
    'prefix_suffix' => 0,
  );
  /* Felt: Indhold: Status */
  $handler->display->display_options['fields']['entity_id_5']['id'] = 'entity_id_5';
  $handler->display->display_options['fields']['entity_id_5']['table'] = 'field_data_field_rsvp';
  $handler->display->display_options['fields']['entity_id_5']['field'] = 'field_rsvp';
  $handler->display->display_options['fields']['entity_id_5']['label'] = 'RSVP';
  /* Felt: Indhold: Token */
  $handler->display->display_options['fields']['entity_id_6']['id'] = 'entity_id_6';
  $handler->display->display_options['fields']['entity_id_6']['table'] = 'field_data_field_token';
  $handler->display->display_options['fields']['entity_id_6']['field'] = 'field_token';
  $handler->display->display_options['fields']['entity_id_6']['label'] = 'Symbol';
  /* Felt: Indhold: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['path'] = 'frivexp.xls';

  /* Display: Available volunteers secretary */
  $handler = $view->new_display('page', 'Available volunteers secretary', 'available_volunteers_filtered_secretary');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
    'entity_id_1' => 'entity_id_1',
    'entity_id_2' => 'entity_id_2',
    'nid' => 'nid',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
    ),
    'entity_id_1' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
    ),
    'entity_id_2' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
    ),
    'nid' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
    ),
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Felt: Felt: Parti */
  $handler->display->display_options['fields']['field_party']['id'] = 'field_party';
  $handler->display->display_options['fields']['field_party']['table'] = 'field_data_field_party';
  $handler->display->display_options['fields']['field_party']['field'] = 'field_party';
  $handler->display->display_options['fields']['field_party']['label'] = 'Liste';
  $handler->display->display_options['fields']['field_party']['hide_alter_empty'] = FALSE;
  /* Felt: Indhold: Titel */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'Navn';
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Felt: Indhold: Email */
  $handler->display->display_options['fields']['entity_id_1']['id'] = 'entity_id_1';
  $handler->display->display_options['fields']['entity_id_1']['table'] = 'field_data_field_email';
  $handler->display->display_options['fields']['entity_id_1']['field'] = 'field_email';
  $handler->display->display_options['fields']['entity_id_1']['label'] = 'E-mail';
  $handler->display->display_options['fields']['entity_id_1']['exclude'] = TRUE;
  /* Felt: Indhold: Telefon */
  $handler->display->display_options['fields']['entity_id_2']['id'] = 'entity_id_2';
  $handler->display->display_options['fields']['entity_id_2']['table'] = 'field_data_field_phone';
  $handler->display->display_options['fields']['entity_id_2']['field'] = 'field_phone';
  $handler->display->display_options['fields']['entity_id_2']['exclude'] = TRUE;
  /* Felt: Indhold: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['nid']['alter']['text'] = '<a href="/ajax/volunteers/station/add/[nid]/!2/!3/!4">Vælg</a>';
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sorteringskriterie: Felt: Begræns adgang til følgende valgsteder (field_polling_station) */
  $handler->display->display_options['sorts']['field_polling_station_nid']['id'] = 'field_polling_station_nid';
  $handler->display->display_options['sorts']['field_polling_station_nid']['table'] = 'field_data_field_polling_station';
  $handler->display->display_options['sorts']['field_polling_station_nid']['field'] = 'field_polling_station_nid';
  $handler->display->display_options['sorts']['field_polling_station_nid']['order'] = 'DESC';
  /* Sorteringskriterie: Indhold: Titel */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Kontekstuelt filter: Felt: Parti (field_party) */
  $handler->display->display_options['arguments']['field_party_tid']['id'] = 'field_party_tid';
  $handler->display->display_options['arguments']['field_party_tid']['table'] = 'field_data_field_party';
  $handler->display->display_options['arguments']['field_party_tid']['field'] = 'field_party_tid';
  $handler->display->display_options['arguments']['field_party_tid']['exception']['title'] = 'Alle';
  $handler->display->display_options['arguments']['field_party_tid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['field_party_tid']['summary']['format'] = 'default_summary';
  /* Kontekstuelt filter: polling station id */
  $handler->display->display_options['arguments']['null']['id'] = 'null';
  $handler->display->display_options['arguments']['null']['table'] = 'views';
  $handler->display->display_options['arguments']['null']['field'] = 'null';
  $handler->display->display_options['arguments']['null']['ui_name'] = 'polling station id';
  $handler->display->display_options['arguments']['null']['exception']['title'] = 'Alle';
  $handler->display->display_options['arguments']['null']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['null']['summary']['format'] = 'default_summary';
  /* Kontekstuelt filter: seat number */
  $handler->display->display_options['arguments']['null_1']['id'] = 'null_1';
  $handler->display->display_options['arguments']['null_1']['table'] = 'views';
  $handler->display->display_options['arguments']['null_1']['field'] = 'null';
  $handler->display->display_options['arguments']['null_1']['ui_name'] = 'seat number';
  $handler->display->display_options['arguments']['null_1']['exception']['title'] = 'Alle';
  $handler->display->display_options['arguments']['null_1']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['null_1']['summary']['format'] = 'default_summary';
  /* Kontekstuelt filter: post */
  $handler->display->display_options['arguments']['null_2']['id'] = 'null_2';
  $handler->display->display_options['arguments']['null_2']['table'] = 'views';
  $handler->display->display_options['arguments']['null_2']['field'] = 'null';
  $handler->display->display_options['arguments']['null_2']['ui_name'] = 'post';
  $handler->display->display_options['arguments']['null_2']['exception']['title'] = 'Alle';
  $handler->display->display_options['arguments']['null_2']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['null_2']['summary']['format'] = 'default_summary';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filterkriterie: Indhold: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'volunteers' => 'volunteers',
  );
  /* Filterkriterie: Indhold: Polling Station post (field_polling_station_post) */
  $handler->display->display_options['filters']['field_polling_station_post_value']['id'] = 'field_polling_station_post_value';
  $handler->display->display_options['filters']['field_polling_station_post_value']['table'] = 'field_data_field_polling_station_post';
  $handler->display->display_options['filters']['field_polling_station_post_value']['field'] = 'field_polling_station_post_value';
  $handler->display->display_options['filters']['field_polling_station_post_value']['operator'] = 'empty';
  /* Filterkriterie: Indhold: Titel */
  $handler->display->display_options['filters']['title']['id'] = 'title';
  $handler->display->display_options['filters']['title']['table'] = 'node';
  $handler->display->display_options['filters']['title']['field'] = 'title';
  $handler->display->display_options['filters']['title']['operator'] = 'contains';
  $handler->display->display_options['filters']['title']['exposed'] = TRUE;
  $handler->display->display_options['filters']['title']['expose']['operator_id'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['label'] = 'Navn';
  $handler->display->display_options['filters']['title']['expose']['operator'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['identifier'] = 'name';
  /* Filterkriterie: Felt: Parti (field_party) */
  $handler->display->display_options['filters']['field_party_tid']['id'] = 'field_party_tid';
  $handler->display->display_options['filters']['field_party_tid']['table'] = 'field_data_field_party';
  $handler->display->display_options['filters']['field_party_tid']['field'] = 'field_party_tid';
  $handler->display->display_options['filters']['field_party_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_party_tid']['expose']['operator_id'] = 'field_party_tid_op';
  $handler->display->display_options['filters']['field_party_tid']['expose']['label'] = 'Parti';
  $handler->display->display_options['filters']['field_party_tid']['expose']['operator'] = 'field_party_tid_op';
  $handler->display->display_options['filters']['field_party_tid']['expose']['identifier'] = 'field_party_tid';
  $handler->display->display_options['filters']['field_party_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    8 => 0,
  );
  $handler->display->display_options['filters']['field_party_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_party_tid']['vocabulary'] = 'partier';
  $handler->display->display_options['path'] = 'available-volunteers';
  $translatables['volunteers'] = array(
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
    t('term fra field_party'),
    t('Navn'),
    t('Party'),
    t('CPR'),
    t('E-mail'),
    t('Telefon'),
    t('Valgsted'),
    t('Placering'),
    t('RSVP'),
    t('Symbol'),
    t('Nid'),
    t('Alle'),
    t('Available volunteers'),
    t('Liste'),
    t('<a href="/ajax/volunteers/station/add/[nid]/!2/!3/!4">Vælg</a>'),
    t('Frivillige'),
    t('Parti'),
    t(' ([entity_id_7])'),
    t('Phone'),
    t('[entity_id_8]'),
    t('View panes'),
    t('Frivillige på dette valgsted'),
    t('Oversigter'),
    t('Block'),
    t('fefd'),
    t('Page'),
    t('field_polling_station'),
    t('Volunteers Block'),
    t('Available volunteers - unfiltered'),
    t('Data export'),
    t('Data export Excel'),
    t('Available volunteers secretary'),
  );
  $export['volunteers'] = $view;

  return $export;
}
