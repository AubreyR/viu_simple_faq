<?php
/**
 * @file
 * viu_simple_faq.features.inc
 */

/**
 * Implements hook_default_command_button().
 */
function viu_simple_faq_default_command_button() {
  $items = array();
  $items['viu_simple_faq_question'] = entity_import('command_button', '{
    "bundle" : "node_add",
    "name" : "viu_simple_faq_question",
    "title" : "Create Simple FAQ - Q\\u0026A Pair",
    "language" : "und",
    "field_command_link" : { "und" : [
        {
          "url" : "node\\/add\\/viu-simple-faq-question",
          "title" : "Create Simple FAQ - Q\\u0026A Pair",
          "attributes" : []
        }
      ]
    }
  }');
  return $items;
}

/**
 * Implements hook_ctools_plugin_api().
 */
function viu_simple_faq_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
  if ($module == "page_manager" && $api == "pages_default") {
    return array("version" => "1");
  }
  if ($module == "panelizer" && $api == "panelizer") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function viu_simple_faq_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function viu_simple_faq_node_info() {
  $items = array(
    'viu_simple_faq_question' => array(
      'name' => t('FAQ Item'),
      'base' => 'node_content',
      'description' => t('Question and answer pair created by a site admin/editor to display on a single site.  This entry will be displayed on a Simple FAQ Page and in Simple FAQ content panes.'),
      'has_title' => '1',
      'title_label' => t('Question'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
