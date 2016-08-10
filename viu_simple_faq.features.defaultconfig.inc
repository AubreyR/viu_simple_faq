<?php
/**
 * @file
 * viu_simple_faq.features.defaultconfig.inc
 */

/**
 * Implements hook_defaultconfig_features().
 */
function viu_simple_faq_defaultconfig_features() {
  return array(
    'viu_simple_faq' => array(
      'panelizer_defaults' => 'panelizer_defaults',
      'strongarm' => 'strongarm',
    ),
  );
}

/**
 * Implements hook_defaultconfig_panelizer_defaults().
 */
function viu_simple_faq_defaultconfig_panelizer_defaults() {
  $export = array();

  return $export;
}

/**
 * Implements hook_defaultconfig_strongarm().
 */
function viu_simple_faq_defaultconfig_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'additional_settings__active_tab_viu_simple_faq_question';
  $strongarm->value = 'edit-panelizer';
  $export['additional_settings__active_tab_viu_simple_faq_question'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'og_menu_single_group_content__node__viu_simple_faq_question';
  $strongarm->value = 0;
  $export['og_menu_single_group_content__node__viu_simple_faq_question'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'og_menu_single_group__node__viu_simple_faq_question';
  $strongarm->value = 0;
  $export['og_menu_single_group__node__viu_simple_faq_question'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'panelizer_defaults_node_viu_simple_faq_question';
  $strongarm->value = array(
    'status' => 0,
    'help' => '',
    'view modes' => array(),
  );
  $export['panelizer_defaults_node_viu_simple_faq_question'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'panelizer_defaults_taxonomy_term_faq_categories';
  $strongarm->value = array(
    'status' => 0,
    'help' => '',
    'view modes' => array(),
  );
  $export['panelizer_defaults_taxonomy_term_faq_categories'] = $strongarm;

  return $export;
}
