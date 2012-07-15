<?php
/**
 * @file
 * ref_txn.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function ref_txn_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_ref_txn_dir|node|ref_txn|form';
  $field_group->group_name = 'group_ref_txn_dir';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'ref_txn';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Directional',
    'weight' => '5',
    'children' => array(
      0 => 'field_ref_txn_dir_chat',
      1 => 'field_ref_txn_dir_email',
      2 => 'field_ref_txn_dir_mail',
      3 => 'field_ref_txn_dir_person',
      4 => 'field_ref_txn_dir_phone',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'classes' => '',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_ref_txn_dir|node|ref_txn|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_ref_txn_docs|node|ref_txn|form';
  $field_group->group_name = 'group_ref_txn_docs';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'ref_txn';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Government Documents',
    'weight' => '8',
    'children' => array(
      0 => 'field_ref_txn_docs_person',
      1 => 'field_ref_txn_docs_phone',
      2 => 'field_ref_txn_docs_email',
      3 => 'field_ref_txn_docs_chat',
      4 => 'field_ref_txn_docs_mail',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'classes' => '',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_ref_txn_docs|node|ref_txn|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_ref_txn_ref|node|ref_txn|form';
  $field_group->group_name = 'group_ref_txn_ref';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'ref_txn';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Reference',
    'weight' => '6',
    'children' => array(
      0 => 'field_ref_txn_ref_chat',
      1 => 'field_ref_txn_ref_email',
      2 => 'field_ref_txn_ref_mail',
      3 => 'field_ref_txn_ref_person',
      4 => 'field_ref_txn_ref_phone',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'classes' => '',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_ref_txn_ref|node|ref_txn|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_ref_txn_tech|node|ref_txn|form';
  $field_group->group_name = 'group_ref_txn_tech';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'ref_txn';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Technical Assistance',
    'weight' => '7',
    'children' => array(
      0 => 'field_ref_txn_tech_chat',
      1 => 'field_ref_txn_tech_email',
      2 => 'field_ref_txn_tech_mail',
      3 => 'field_ref_txn_tech_person',
      4 => 'field_ref_txn_tech_phone',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'classes' => '',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_ref_txn_tech|node|ref_txn|form'] = $field_group;

  return $export;
}
