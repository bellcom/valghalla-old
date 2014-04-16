<?php
/**
 * @file
 * valhalla_volunteers.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function valhalla_volunteers_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_adress|node|volunteers|form';
  $field_group->group_name = 'group_adress';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'volunteers';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Adresse',
    'weight' => '8',
    'children' => array(
      0 => 'field_address_road',
      1 => 'field_address_road_no',
      2 => 'field_address_floor',
      3 => 'field_address_door',
      4 => 'field_address_bnummer',
      5 => 'field_address_coname',
      6 => 'field_address_city',
      7 => 'field_address_zipcode',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Adresse',
      'instance_settings' => array(
        'classes' => '',
      ),
      'formatter' => 'collapsed',
    ),
  );
  $export['group_adress|node|volunteers|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_rsvp|node|volunteers|form';
  $field_group->group_name = 'group_rsvp';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'volunteers';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Status på deltagelse',
    'weight' => '9',
    'children' => array(
      0 => 'field_rsvp',
      1 => 'field_rsvp_comment',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Status på deltagelse',
      'instance_settings' => array(
        'classes' => '',
      ),
      'formatter' => 'collapsible',
    ),
  );
  $export['group_rsvp|node|volunteers|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_system|node|volunteers|form';
  $field_group->group_name = 'group_system';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'volunteers';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'System',
    'weight' => '10',
    'children' => array(
      0 => 'field_token',
      1 => 'field_polling_station_post',
      2 => 'field_cpr_valid_date',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'System',
      'instance_settings' => array(
        'required_fields' => 0,
        'classes' => '',
        'description' => '',
      ),
      'formatter' => 'collapsed',
    ),
  );
  $export['group_system|node|volunteers|form'] = $field_group;

  return $export;
}
