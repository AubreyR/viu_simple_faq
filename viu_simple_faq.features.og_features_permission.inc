<?php
/**
 * @file
 * viu_simple_faq.features.og_features_permission.inc
 */

/**
 * Implements hook_og_features_default_permissions().
 */
function viu_simple_faq_og_features_default_permissions() {
  $permissions = array();

  // Exported og permission: 'node:oa_group:create viu_simple_faq_question content'
  $permissions['node:oa_group:create viu_simple_faq_question content'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:oa_group:delete any viu_simple_faq_question content'
  $permissions['node:oa_group:delete any viu_simple_faq_question content'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:oa_group:delete own viu_simple_faq_question content'
  $permissions['node:oa_group:delete own viu_simple_faq_question content'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
      'member' => 'member',
    ),
  );

  // Exported og permission: 'node:oa_group:trash any viu_simple_faq_question content'
  $permissions['node:oa_group:trash any viu_simple_faq_question content'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:oa_group:trash own viu_simple_faq_question content'
  $permissions['node:oa_group:trash own viu_simple_faq_question content'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
      'member' => 'member',
    ),
  );

  // Exported og permission: 'node:oa_group:untrash any viu_simple_faq_question content'
  $permissions['node:oa_group:untrash any viu_simple_faq_question content'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:oa_group:untrash own viu_simple_faq_question content'
  $permissions['node:oa_group:untrash own viu_simple_faq_question content'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
      'member' => 'member',
    ),
  );

  // Exported og permission: 'node:oa_group:update any viu_simple_faq_question content'
  $permissions['node:oa_group:update any viu_simple_faq_question content'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:oa_group:update own viu_simple_faq_question content'
  $permissions['node:oa_group:update own viu_simple_faq_question content'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
      'member' => 'member',
    ),
  );

  // Exported og permission: 'node:oa_space:trash any viu_simple_faq_question content'
  $permissions['node:oa_space:trash any viu_simple_faq_question content'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:oa_space:trash own viu_simple_faq_question content'
  $permissions['node:oa_space:trash own viu_simple_faq_question content'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
      'member' => 'member',
    ),
  );

  // Exported og permission: 'node:oa_space:untrash any viu_simple_faq_question content'
  $permissions['node:oa_space:untrash any viu_simple_faq_question content'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:oa_space:untrash own viu_simple_faq_question content'
  $permissions['node:oa_space:untrash own viu_simple_faq_question content'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
      'member' => 'member',
    ),
  );

  return $permissions;
}
