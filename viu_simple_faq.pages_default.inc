<?php
/**
 * @file
 * viu_simple_faq.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_handlers().
 */
function viu_simple_faq_default_page_manager_handlers() {
  $export = array();

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'node_edit__simple-faq-section-edit-page';
  $handler->task = 'node_edit';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = -27;
  $handler->conf = array(
    'title' => 'Simple FAQ Section Edit Page',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'css_id' => 'node-edit',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'node_type',
          'settings' => array(
            'type' => array(
              'oa_section' => 'oa_section',
            ),
          ),
          'context' => 'argument_node_edit_1',
          'not' => FALSE,
        ),
        1 => array(
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
          'context' => 'argument_node_edit_1',
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
    'name' => 'simple-faq-section-edit-page',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
  );
  $display = new panels_display();
  $display->layout = 'radix_burr_flipped';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'contentmain' => NULL,
      'sidebar' => NULL,
    ),
    'sidebar' => array(
      'style' => '0',
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '563a3f84-c66d-4903-a574-105c0a2c1c73';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-7bb00809-e8b7-4edf-879b-c1bb584d2baf';
  $pane->panel = 'contentmain';
  $pane->type = 'simple_faq_admin_pane';
  $pane->subtype = 'simple_faq_admin_pane';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'term' => NULL,
    'view_mode' => NULL,
    'override_title' => 1,
    'override_title_text' => 'FAQ Section Administration',
    'override_title_heading' => 'h2',
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
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '7bb00809-e8b7-4edf-879b-c1bb584d2baf';
  $display->content['new-7bb00809-e8b7-4edf-879b-c1bb584d2baf'] = $pane;
  $display->panels['contentmain'][0] = 'new-7bb00809-e8b7-4edf-879b-c1bb584d2baf';
  $pane = new stdClass();
  $pane->pid = 'new-aa634e94-5af3-45d9-b467-95a598e4f927';
  $pane->panel = 'contentmain';
  $pane->type = 'node_form_title';
  $pane->subtype = 'node_form_title';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'context' => 'argument_node_edit_1',
    'override_title' => 1,
    'override_title_text' => '',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = 'aa634e94-5af3-45d9-b467-95a598e4f927';
  $display->content['new-aa634e94-5af3-45d9-b467-95a598e4f927'] = $pane;
  $display->panels['contentmain'][1] = 'new-aa634e94-5af3-45d9-b467-95a598e4f927';
  $pane = new stdClass();
  $pane->pid = 'new-e95138dd-b809-4362-994e-120d7eba3241';
  $pane->panel = 'contentmain';
  $pane->type = 'entity_form_field';
  $pane->subtype = 'node:field_url_name';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => '',
    'formatter' => '',
    'context' => 'argument_node_edit_1',
    'override_title' => 0,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
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
  $pane->position = 2;
  $pane->locks = array();
  $pane->uuid = 'e95138dd-b809-4362-994e-120d7eba3241';
  $display->content['new-e95138dd-b809-4362-994e-120d7eba3241'] = $pane;
  $display->panels['contentmain'][2] = 'new-e95138dd-b809-4362-994e-120d7eba3241';
  $pane = new stdClass();
  $pane->pid = 'new-24ec7526-d8c1-44b2-91df-a6ab6f456c40';
  $pane->panel = 'contentmain';
  $pane->type = 'form';
  $pane->subtype = 'form';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'context' => 'argument_node_edit_1',
    'override_title' => 1,
    'override_title_text' => '',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 3;
  $pane->locks = array();
  $pane->uuid = '24ec7526-d8c1-44b2-91df-a6ab6f456c40';
  $display->content['new-24ec7526-d8c1-44b2-91df-a6ab6f456c40'] = $pane;
  $display->panels['contentmain'][3] = 'new-24ec7526-d8c1-44b2-91df-a6ab6f456c40';
  $pane = new stdClass();
  $pane->pid = 'new-46cc1635-49e8-4fc4-9308-16c25aa33df5';
  $pane->panel = 'sidebar';
  $pane->type = 'entity_form_field';
  $pane->subtype = 'node:field_oa_group_ref';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => '',
    'formatter' => '',
    'context' => 'argument_node_edit_1',
    'override_title' => 1,
    'override_title_text' => 'Section Visibility',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '46cc1635-49e8-4fc4-9308-16c25aa33df5';
  $display->content['new-46cc1635-49e8-4fc4-9308-16c25aa33df5'] = $pane;
  $display->panels['sidebar'][0] = 'new-46cc1635-49e8-4fc4-9308-16c25aa33df5';
  $pane = new stdClass();
  $pane->pid = 'new-6e6ee8aa-adff-4dc7-900e-ef9d3f8e75ac';
  $pane->panel = 'sidebar';
  $pane->type = 'entity_form_field';
  $pane->subtype = 'node:field_oa_team_ref';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => '',
    'formatter' => '',
    'context' => 'argument_node_edit_1',
    'override_title' => 0,
    'override_title_text' => '',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = '6e6ee8aa-adff-4dc7-900e-ef9d3f8e75ac';
  $display->content['new-6e6ee8aa-adff-4dc7-900e-ef9d3f8e75ac'] = $pane;
  $display->panels['sidebar'][1] = 'new-6e6ee8aa-adff-4dc7-900e-ef9d3f8e75ac';
  $pane = new stdClass();
  $pane->pid = 'new-72c0d70a-67ac-4c38-8aaf-77ec8cbd5f6e';
  $pane->panel = 'sidebar';
  $pane->type = 'entity_form_field';
  $pane->subtype = 'node:field_oa_user_ref';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => '',
    'formatter' => '',
    'context' => 'argument_node_edit_1',
    'override_title' => 0,
    'override_title_text' => '',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 2;
  $pane->locks = array();
  $pane->uuid = '72c0d70a-67ac-4c38-8aaf-77ec8cbd5f6e';
  $display->content['new-72c0d70a-67ac-4c38-8aaf-77ec8cbd5f6e'] = $pane;
  $display->panels['sidebar'][2] = 'new-72c0d70a-67ac-4c38-8aaf-77ec8cbd5f6e';
  $pane = new stdClass();
  $pane->pid = 'new-87ab1eca-a386-4079-a448-ca9dd19399b9';
  $pane->panel = 'sidebar';
  $pane->type = 'node_form_oa_notifications';
  $pane->subtype = 'node_form_oa_notifications';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array();
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 3;
  $pane->locks = array();
  $pane->uuid = '87ab1eca-a386-4079-a448-ca9dd19399b9';
  $display->content['new-87ab1eca-a386-4079-a448-ca9dd19399b9'] = $pane;
  $display->panels['sidebar'][3] = 'new-87ab1eca-a386-4079-a448-ca9dd19399b9';
  $pane = new stdClass();
  $pane->pid = 'new-c05d2a58-37bd-4746-8a7b-87f9993ad0bb';
  $pane->panel = 'sidebar';
  $pane->type = 'entity_form_field';
  $pane->subtype = 'node:field_featured_image';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => '',
    'formatter' => '',
    'context' => 'argument_node_edit_1',
    'override_title' => 1,
    'override_title_text' => 'Featured image',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 4;
  $pane->locks = array();
  $pane->uuid = 'c05d2a58-37bd-4746-8a7b-87f9993ad0bb';
  $display->content['new-c05d2a58-37bd-4746-8a7b-87f9993ad0bb'] = $pane;
  $display->panels['sidebar'][4] = 'new-c05d2a58-37bd-4746-8a7b-87f9993ad0bb';
  $pane = new stdClass();
  $pane->pid = 'new-de50f2a5-e620-4233-9282-63600c09374c';
  $pane->panel = 'sidebar';
  $pane->type = 'entity_form_field';
  $pane->subtype = 'node:field_featured_categories';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => '',
    'formatter' => '',
    'context' => 'argument_node_edit_1',
    'override_title' => 1,
    'override_title_text' => 'Content category',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 5;
  $pane->locks = array();
  $pane->uuid = 'de50f2a5-e620-4233-9282-63600c09374c';
  $display->content['new-de50f2a5-e620-4233-9282-63600c09374c'] = $pane;
  $display->panels['sidebar'][5] = 'new-de50f2a5-e620-4233-9282-63600c09374c';
  $pane = new stdClass();
  $pane->pid = 'new-d5933ecb-c588-41e4-b034-c32f633858d5';
  $pane->panel = 'sidebar';
  $pane->type = 'node_form_menu';
  $pane->subtype = 'node_form_menu';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'context' => 'argument_node_edit_1',
    'override_title' => 0,
    'override_title_text' => '',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 6;
  $pane->locks = array();
  $pane->uuid = 'd5933ecb-c588-41e4-b034-c32f633858d5';
  $display->content['new-d5933ecb-c588-41e4-b034-c32f633858d5'] = $pane;
  $display->panels['sidebar'][6] = 'new-d5933ecb-c588-41e4-b034-c32f633858d5';
  $pane = new stdClass();
  $pane->pid = 'new-c96e32b6-0181-46ef-9766-99aa0fe75da3';
  $pane->panel = 'sidebar';
  $pane->type = 'node_form_publishing';
  $pane->subtype = 'node_form_publishing';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'context' => 'argument_node_edit_1',
    'override_title' => 0,
    'override_title_text' => '',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 7;
  $pane->locks = array();
  $pane->uuid = 'c96e32b6-0181-46ef-9766-99aa0fe75da3';
  $display->content['new-c96e32b6-0181-46ef-9766-99aa0fe75da3'] = $pane;
  $display->panels['sidebar'][7] = 'new-c96e32b6-0181-46ef-9766-99aa0fe75da3';
  $pane = new stdClass();
  $pane->pid = 'new-58d201ba-93ed-4044-b2d6-5e312c180620';
  $pane->panel = 'sidebar';
  $pane->type = 'node_form_author';
  $pane->subtype = 'node_form_author';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'context' => array(),
    'override_title' => 0,
    'override_title_text' => '',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 8;
  $pane->locks = array();
  $pane->uuid = '58d201ba-93ed-4044-b2d6-5e312c180620';
  $display->content['new-58d201ba-93ed-4044-b2d6-5e312c180620'] = $pane;
  $display->panels['sidebar'][8] = 'new-58d201ba-93ed-4044-b2d6-5e312c180620';
  $pane = new stdClass();
  $pane->pid = 'new-5b92ecd3-a44a-40e8-9da0-a826187b64ae';
  $pane->panel = 'sidebar';
  $pane->type = 'node_form_comment';
  $pane->subtype = 'node_form_comment';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'context' => 'argument_node_edit_1',
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
  $pane->position = 9;
  $pane->locks = array();
  $pane->uuid = '5b92ecd3-a44a-40e8-9da0-a826187b64ae';
  $display->content['new-5b92ecd3-a44a-40e8-9da0-a826187b64ae'] = $pane;
  $display->panels['sidebar'][9] = 'new-5b92ecd3-a44a-40e8-9da0-a826187b64ae';
  $pane = new stdClass();
  $pane->pid = 'new-aa9e83a8-3ff8-4b5e-a3af-b22f94e4d4a6';
  $pane->panel = 'sidebar';
  $pane->type = 'node_form_buttons';
  $pane->subtype = 'node_form_buttons';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'context' => array(),
    'override_title' => 1,
    'override_title_text' => '',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 10;
  $pane->locks = array();
  $pane->uuid = 'aa9e83a8-3ff8-4b5e-a3af-b22f94e4d4a6';
  $display->content['new-aa9e83a8-3ff8-4b5e-a3af-b22f94e4d4a6'] = $pane;
  $display->panels['sidebar'][10] = 'new-aa9e83a8-3ff8-4b5e-a3af-b22f94e4d4a6';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['node_edit__simple-faq-section-edit-page'] = $handler;

  return $export;
}
