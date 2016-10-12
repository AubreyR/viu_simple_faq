<?php
/**
 * @file
 * viu_simple_faq.features.features_overrides.inc
 */

/**
 * Implements hook_features_override_default_overrides().
 */
function viu_simple_faq_features_override_default_overrides() {
  // This code is only used for UI in features. Exported alters hooks do the magic.
  $overrides = array();

  // Exported overrides for: field_base
  $overrides["field_base.og_vocabulary.settings|handler_settings|target_bundles|faq_categories"] = 'faq_categories';

 return $overrides;
}
