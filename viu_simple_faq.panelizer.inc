<?php
/**
 * @file
 * viu_simple_faq.panelizer.inc
 */

/**
 * Implements hook_panelizer_defaults().
 */
function viu_simple_faq_panelizer_defaults() {
  $export = array();

  $panelizer = new stdClass();
  $panelizer->disabled = FALSE; /* Edit this to true to make a default panelizer disabled initially */
  $panelizer->api_version = 1;
  $panelizer->name = 'node:oa_section:simple_faq_section';
  $panelizer->title = 'Simple FAQ Section';
  $panelizer->panelizer_type = 'node';
  $panelizer->panelizer_key = 'oa_section';
  $panelizer->no_blocks = FALSE;
  $panelizer->css_id = '';
  $panelizer->css = '';
  $panelizer->pipeline = 'ipe_node_access';
  $panelizer->contexts = array();
  $panelizer->relationships = array(
    0 => array(
      'identifier' => 'Space',
      'keyword' => 'space',
      'name' => 'entity_from_field:og_group_ref-node-node',
      'delta' => 0,
      'context' => 'panelizer',
      'id' => 1,
    ),
  );
  $panelizer->access = array(
    'plugins' => array(
      0 => array(
        'name' => 'entity_field_value:node:oa_section:field_oa_section',
        'settings' => array(
          'field_oa_section' => array(
            'und' => array(
              0 => array(
                'tid' => '3',
              ),
            ),
          ),
          'field_oa_section_tid' => array(
            0 => '3',
          ),
        ),
        'context' => 'panelizer',
        'not' => FALSE,
      ),
    ),
    'logic' => 'and',
  );
  $panelizer->view_mode = 'page_manager';
  $panelizer->css_class = '';
  $panelizer->title_element = 'H2';
  $panelizer->link_to_entity = TRUE;
  $panelizer->extra = array(
    'panels_breadcrumbs_state' => 0,
    'panels_breadcrumbs_titles' => '',
    'panels_breadcrumbs_paths' => '',
    'panels_breadcrumbs_home' => 1,
  );
  $display = new panels_display();
  $display->layout = 'viu_radix_bryant_brenham_hybrid_flipped';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'sidebar' => array(
        'region_title' => '',
        'heading_style_class' => 'headline',
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
          'margin-bottom-30' => 0,
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
      'contentmain' => array(
        'region_title' => '',
        'heading_style_class' => 'headline',
        'hide_classes' => array(
          'hidden-xs' => 0,
          'hidden-sm' => 0,
          'hidden-md' => 0,
          'hidden-lg' => 0,
        ),
        'additional_classes' => array(
          'margin-bottom-40' => 'margin-bottom-40',
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
          'margin-bottom-30' => 0,
          'margin-bottom-35' => 0,
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
      'header' => NULL,
      'footer' => NULL,
    ),
    'sidebar' => array(
      'style' => 'bootstrap_styles:normal',
    ),
    'contentmain' => array(
      'style' => 'bootstrap_styles:normal',
    ),
  );
  $display->cache = array();
  $display->title = '%node:title';
  $display->uuid = '4da17148-a7a9-4da8-a9bf-ef168121174a';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-00c90249-89f1-4f8a-8509-7a1d98c6b29e';
  $pane->panel = 'contentmain';
  $pane->type = 'views_panes';
  $pane->subtype = 'simple_faq_views-panel_pane_1';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'view_settings' => 'fields',
    'header_type' => 'titles',
    'view_mode' => 'teaser',
  );
  $pane->cache = array();
  $pane->style = array(
    'style' => 'bootstrap_styles:panel',
    'settings' => array(
      'modifier_class' => 'panel-u',
      'collapsible' => 0,
      'collapsed' => 0,
      'hide_classes' => array(
        'hidden-xs' => 0,
        'hidden-sm' => 0,
        'hidden-md' => 0,
        'hidden-lg' => 0,
      ),
    ),
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '00c90249-89f1-4f8a-8509-7a1d98c6b29e';
  $display->content['new-00c90249-89f1-4f8a-8509-7a1d98c6b29e'] = $pane;
  $display->panels['contentmain'][0] = 'new-00c90249-89f1-4f8a-8509-7a1d98c6b29e';
  $pane = new stdClass();
  $pane->pid = 'new-c6614dee-17c9-45d3-acc8-bbba3f12d2b7';
  $pane->panel = 'contentmain';
  $pane->type = 'views_panes';
  $pane->subtype = 'simple_faq_views-panel_pane_2';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'view_settings' => 'fields',
    'header_type' => 'none',
    'view_mode' => 'teaser',
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
        'margin-bottom-30' => 0,
        'margin-bottom-35' => 1,
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
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = 'c6614dee-17c9-45d3-acc8-bbba3f12d2b7';
  $display->content['new-c6614dee-17c9-45d3-acc8-bbba3f12d2b7'] = $pane;
  $display->panels['contentmain'][1] = 'new-c6614dee-17c9-45d3-acc8-bbba3f12d2b7';
  $pane = new stdClass();
  $pane->pid = 'new-2010ab8d-8b3a-4f76-8bcd-a9b92ba1417b';
  $pane->panel = 'header';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:body';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'hidden',
    'formatter' => 'text_default',
    'delta_limit' => 0,
    'delta_offset' => '0',
    'delta_reversed' => FALSE,
    'formatter_settings' => array(),
    'context' => 'panelizer',
    'override_title' => 0,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '2010ab8d-8b3a-4f76-8bcd-a9b92ba1417b';
  $display->content['new-2010ab8d-8b3a-4f76-8bcd-a9b92ba1417b'] = $pane;
  $display->panels['header'][0] = 'new-2010ab8d-8b3a-4f76-8bcd-a9b92ba1417b';
  $pane = new stdClass();
  $pane->pid = 'new-122c10ce-6746-4869-8d69-203eccbb4336';
  $pane->panel = 'sidebar';
  $pane->type = 'og_menu_single_menu';
  $pane->subtype = 'og_menu_single_menu';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'parent' => 0,
    'return' => 'Finish',
    'cancel' => 'Cancel',
    'override_title' => 1,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
    'og_menu_single_depth' => '0',
    'og_menu_single_parent' => 'auto',
    'form_build_id' => 'form-ksLq7fleZg4rPbSub0ohTg00SWISTkjbMQC7WbBQ_ds',
    'form_token' => 'IC8vcDsef_8APXo_MkLGmPUGfEpGaQzNDUyWvhPpPHY',
    'form_id' => 'og_menu_single_pane_edit_form',
    'op' => 'Finish',
  );
  $pane->cache = array();
  $pane->style = array(
    'style' => 'bootstrap_styles:normal',
    'settings' => array(
      'heading_style_class' => 'headline',
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
        'margin-bottom-30' => 0,
        'margin-bottom-35' => 1,
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
  $pane->uuid = '122c10ce-6746-4869-8d69-203eccbb4336';
  $display->content['new-122c10ce-6746-4869-8d69-203eccbb4336'] = $pane;
  $display->panels['sidebar'][0] = 'new-122c10ce-6746-4869-8d69-203eccbb4336';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $panelizer->display = $display;
  $export['node:oa_section:simple_faq_section'] = $panelizer;

  return $export;
}
