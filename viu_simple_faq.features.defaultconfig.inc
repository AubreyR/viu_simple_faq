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
      'strongarm' => 'strongarm',
      'user_default_permissions' => 'user_default_permissions',
    ),
  );
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

/**
 * Implements hook_defaultconfig_user_default_permissions().
 */
function viu_simple_faq_defaultconfig_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'administer panelizer taxonomy_term faq_categories defaults'.
  $permissions['administer panelizer taxonomy_term faq_categories defaults'] = array(
    'name' => 'administer panelizer taxonomy_term faq_categories defaults',
    'roles' => array(),
    'module' => 'panelizer',
  );

  // Exported permission: 'delete terms in faq_categories'.
  $permissions['delete terms in faq_categories'] = array(
    'name' => 'delete terms in faq_categories',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in faq_categories'.
  $permissions['edit terms in faq_categories'] = array(
    'name' => 'edit terms in faq_categories',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  return $permissions;
}
