<?php
/**
 * @file
 * viu_simple_faq.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function viu_simple_faq_field_group_info() {
  $field_groups = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_site|node|viu_simple_faq_question|form';
  $field_group->group_name = 'group_site';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'viu_simple_faq_question';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Site/Section',
    'weight' => '3',
    'children' => array(
      0 => 'oa_other_spaces_ref',
      1 => 'oa_section_ref',
      2 => 'og_group_ref',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-site field-group-fieldset',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $field_groups['group_site|node|viu_simple_faq_question|form'] = $field_group;

  // Translatables
  // Included for use with string extractors like potx.
  t('Site/Section');

  return $field_groups;
}
