<?php
/**
 * @file
 * viu_simple_faq.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_pages().
 */
function viu_simple_faq_default_page_manager_pages() {
  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'viu_simple_faq_terms_admin';
  $page->task = 'page';
  $page->admin_title = 'FAQ Categories';
  $page->admin_description = 'Displays admin view for specific OG vocabulary associated with a section page';
  $page->path = 'node/%node/terms/%taxonomy_vocabulary';
  $page->access = array(
    'plugins' => array(
      0 => array(
        'name' => 'node_access',
        'settings' => array(
          'type' => 'view',
        ),
        'context' => array(
          0 => 'logged-in-user',
          1 => 'argument_entity_id:node_1',
        ),
        'not' => FALSE,
      ),
      1 => array(
        'name' => 'oa_core_og_perm',
        'settings' => array(
          'perm' => 'administer taxonomy',
        ),
        'context' => array(
          0 => 'logged-in-user',
          1 => 'argument_entity_id:node_1',
        ),
        'not' => FALSE,
      ),
      2 => array(
        'name' => 'node_type',
        'settings' => array(
          'type' => array(
            'oa_section' => 'oa_section',
          ),
        ),
        'context' => 'argument_entity_id:node_1',
        'not' => FALSE,
      ),
      3 => array(
        'name' => 'oa_core_og_perm',
        'settings' => array(
          'perm' => 'administer group',
        ),
        'context' => array(
          0 => 'logged-in-user',
          1 => 'argument_entity_id:node_1',
        ),
        'not' => FALSE,
      ),
    ),
    'logic' => 'and',
  );
  $page->menu = array(
    'type' => 'tab',
    'title' => 'Categories',
    'name' => 'navigation',
    'weight' => '0',
    'parent' => array(
      'type' => 'none',
      'title' => '',
      'name' => 'navigation',
      'weight' => '0',
    ),
  );
  $page->arguments = array(
    'node' => array(
      'id' => 1,
      'identifier' => 'Node: ID',
      'name' => 'entity_id:node',
      'settings' => array(),
    ),
    'taxonomy_vocabulary' => array(
      'id' => 1,
      'identifier' => 'Taxonomy vocabulary: ID',
      'name' => 'entity_id:taxonomy_vocabulary',
      'settings' => array(),
    ),
  );
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_viu_simple_faq_terms_admin__panel';
  $handler->task = 'page';
  $handler->subtask = 'viu_simple_faq_terms_admin';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'FAQ Section OG Vocabulary Terms',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(
      0 => array(
        'identifier' => 'Site Node',
        'keyword' => 'site',
        'name' => 'entity_from_field:og_group_ref-node-node',
        'delta' => 0,
        'context' => 'argument_entity_id:node_1',
        'id' => 1,
      ),
    ),
    'name' => 'panel',
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'node_type',
          'settings' => array(
            'type' => array(
              'oa_section' => 'oa_section',
            ),
          ),
          'context' => 'argument_entity_id:node_1',
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
  );
  $display = new panels_display();
  $display->layout = 'radix_boxton';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'contentmain' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '723c7eaa-2437-448c-99ed-9348568c0a88';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-b36cd97c-4c40-44e1-895f-2035c6485163';
  $pane->panel = 'contentmain';
  $pane->type = 'views_panes';
  $pane->subtype = 'simple_faq_taxonomy_terms-faq_section_terms';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'fields_override' => array(
      'name_1' => 0,
      'name' => 1,
      'tid' => 1,
    ),
    'exposed' => array(
      'vid' => 'All',
      'name' => '',
    ),
    'override_title' => '',
    'override_title_text' => '',
    'override_title_heading' => 'h2',
    'view_settings' => 'table',
    'header_type' => 'titles',
    'view_mode' => 'full',
    'widget_title' => '',
  );
  $pane->cache = array();
  $pane->style = array(
    'style' => 'bootstrap_styles:normal',
    'settings' => array(
      'heading_style_class' => '',
      'hide_classes' => array(
        'hidden-xs' => 0,
        'hidden-sm' => 0,
        'hidden-md' => 0,
        'hidden-lg' => 0,
      ),
      'additional_classes' => array(
        'pane-outline' => 0,
        'pane-outline-thick' => 0,
        'pane-border-top' => 0,
        'no-padding' => 0,
        'no-margin' => 0,
        'margin-bottom-5' => 0,
        'margin-bottom-10' => 0,
        'margin-bottom-15' => 0,
        'margin-bottom-20' => 0,
        'margin-bottom-25' => 0,
        'margin-bottom-30' => 1,
        'margin-bottom-35' => 0,
        'margin-bottom-40' => 0,
        'margin-bottom-45' => 0,
        'margin-bottom-50' => 0,
        'margin-bottom-55' => 0,
        'margin-bottom-60' => 0,
        'margin-bottom-100' => 0,
        'margin-top-20' => 0,
        'margin-left-5' => 0,
        'margin-left-10' => 0,
        'margin-right-5' => 0,
        'margin-right-10' => 0,
      ),
    ),
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = 'b36cd97c-4c40-44e1-895f-2035c6485163';
  $display->content['new-b36cd97c-4c40-44e1-895f-2035c6485163'] = $pane;
  $display->panels['contentmain'][0] = 'new-b36cd97c-4c40-44e1-895f-2035c6485163';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['viu_simple_faq_terms_admin'] = $page;

  return $pages;

}
