<?php
/**
 * @file
 * viu_simple_faq.features.uuid_term.inc
 */

/**
 * Implements hook_uuid_features_default_terms().
 */
function viu_simple_faq_uuid_features_default_terms() {
  $terms = array();

  $terms[] = array(
    'name' => 'Frequently Asked Questions',
    'description' => '<p>Section used to store and display Simple FAQ items. &nbsp;It will also display entries from other sites which have the "visible on other sites" option for the current site.</p>',
    'format' => 'panopoly_wysiwyg_text',
    'weight' => 0,
    'uuid' => 'b8314cd7-46b2-480f-ac52-ba3f1fa9696e',
    'vocabulary_machine_name' => 'section_type',
    'field_oa_icon_class' => array(
      'und' => array(
        0 => array(
          'value' => 'fa-question-circle-o',
          'format' => NULL,
        ),
      ),
    ),
    'field_oa_icon_image' => array(),
    'field_oa_section_type_menu' => array(
      'und' => array(
        0 => array(
          'value' => 1,
        ),
      ),
    ),
    'field_oa_node_types' => array(
      'und' => array(
        0 => array(
          'value' => 'viu_simple_faq_question',
        ),
      ),
    ),
    'field_oa_section_layout' => array(
      'und' => array(
        0 => array(
          'value' => 'node:oa_section:simple_faq_section',
        ),
      ),
    ),
    'path' => array(
      'pathauto' => 0,
    ),
  );
  return $terms;
}
