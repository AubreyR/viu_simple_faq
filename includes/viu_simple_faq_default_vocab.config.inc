<?php
/**
 * Default taxonomy structure for passing to OG Vocab Taxonomy creation functions
 */

$og_vocab =

$vocabulary = (object) array(
   'name' => 'xxx',
   'machine_name' => 'xxx',
   'description' => 'xxx',
   'hierarchy' => '0',
   'weight' => 0,
   'og_vocab_relation' =>
  array (
    'group_type' => 'node',
    'gid' => 'xxx',
  ),
   'og_vocab' =>
  array (
    'fieldable_panels_pane:fieldable_panels_pane' =>
    array (
    'node:viu_simple_faq_question' =>
    array ( //ANOTE: Build out this manually and attach it
      'entity' =>
      OgVocab::__set_state(array(
         'entity_type' => 'file',
         'bundle' => 'document',
         'settings' =>
        array (
          'required' => false,
          'widget_type' => 'options_select',
          'cardinality' => -1,
        ),
         'entityType' => 'og_vocab',
         'entityInfo' =>
        array (
          'label' => 'OG vocab',
          'label callback' => 'og_vocab_label',
          'uri callback' => 'og_vocab_uri',
          'controller class' => 'EntityAPIController',
          'entity class' => 'OgVocab',
          'base table' => 'og_vocab',
          'fieldable' => true,
          'entity keys' =>
          array (
            'id' => 'id',
            'revision' => '',
            'bundle' => '',
          ),
          'bundles' =>
          array (
            'og_vocab' =>
            array (
              'label' => 'OG vocab',
            ),
          ),
          'module' => 'og_vocab',
          'static cache' => true,
          'field cache' => true,
          'load hook' => 'og_vocab_load',
          'view modes' =>
          array (
            'token' =>
            array (
              'label' => 'Tokens',
              'custom settings' => false,
            ),
          ),
          'translation' =>
          array (
          ),
          'base table field types' =>
          array (
            'id' => 'serial',
            'vid' => 'int',
            'entity_type' => 'varchar',
            'bundle' => 'varchar',
            'settings' => 'text',
            'field_name' => 'varchar',
          ),
          'schema_fields_sql' =>
          array (
            'base table' =>
            array (
              0 => 'id',
              1 => 'vid',
              2 => 'entity_type',
              3 => 'bundle',
              4 => 'settings',
              5 => 'field_name',
            ),
          ),
          'token type' => 'og_vocab',
          'redirect' => false,
          'configuration' => false,
        ),
         'idKey' => 'id',
         'nameKey' => 'id',
         'statusKey' => 'status',
         'defaultLabel' => false,
         'wrapper' => NULL,
         'vid' => 0,
         'field_name' => 'og_vocabulary',
         'is_new' => true,
      )),
      'status' => 0,
      'widget_type' => 'options_select',
      'required' => 0,
      'cardinality' => '-1',
      'field_name' => 'og_vocabulary',
    ),
  ),
   'op' => 'Save',
));
