<?php
/**
 * @file
 * viu_simple_faq.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function viu_simple_faq_taxonomy_default_vocabularies() {
  return array(
    'faq_categories' => array(
      'name' => 'FAQ Categories',
      'machine_name' => 'faq_categories',
      'description' => 'Categorize your FAQ Q&A Pairs',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
  );
}
