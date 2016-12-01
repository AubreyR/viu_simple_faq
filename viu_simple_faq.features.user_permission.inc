<?php
/**
 * @file
 * viu_simple_faq.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function viu_simple_faq_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'administer panelizer node viu_simple_faq_question defaults'.
  $permissions['administer panelizer node viu_simple_faq_question defaults'] = array(
    'name' => 'administer panelizer node viu_simple_faq_question defaults',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'create viu_simple_faq_question content'.
  $permissions['create viu_simple_faq_question content'] = array(
    'name' => 'create viu_simple_faq_question content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any viu_simple_faq_question content'.
  $permissions['delete any viu_simple_faq_question content'] = array(
    'name' => 'delete any viu_simple_faq_question content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own viu_simple_faq_question content'.
  $permissions['delete own viu_simple_faq_question content'] = array(
    'name' => 'delete own viu_simple_faq_question content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any viu_simple_faq_question content'.
  $permissions['edit any viu_simple_faq_question content'] = array(
    'name' => 'edit any viu_simple_faq_question content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own viu_simple_faq_question content'.
  $permissions['edit own viu_simple_faq_question content'] = array(
    'name' => 'edit own viu_simple_faq_question content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'trash any viu_simple_faq_question content'.
  $permissions['trash any viu_simple_faq_question content'] = array(
    'name' => 'trash any viu_simple_faq_question content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'trash_flag',
  );

  // Exported permission: 'trash own viu_simple_faq_question content'.
  $permissions['trash own viu_simple_faq_question content'] = array(
    'name' => 'trash own viu_simple_faq_question content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'trash_flag',
  );

  // Exported permission: 'untrash any viu_simple_faq_question content'.
  $permissions['untrash any viu_simple_faq_question content'] = array(
    'name' => 'untrash any viu_simple_faq_question content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'trash_flag',
  );

  // Exported permission: 'untrash own viu_simple_faq_question content'.
  $permissions['untrash own viu_simple_faq_question content'] = array(
    'name' => 'untrash own viu_simple_faq_question content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'trash_flag',
  );

  return $permissions;
}
