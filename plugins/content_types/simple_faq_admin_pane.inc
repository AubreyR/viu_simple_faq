<?php

$plugin = array(
  'single' => TRUE,
  'title' => t('FAQ section administration options'),
  'description' => t('Links to administrative options for this section'),
  'category' => t('Simple FAQ'),
  'edit form' => 'viu_simple_faq_admin_pane',
  'render callback' => 'viu_simple_faq_admin_pane_render',
  'admin info' => 'viu_simple_faq_admin_pane_info',
  'defaults' => array(),
  'all contexts' => TRUE,
);

/**
 * Contents of the pane (form - ajax later)
 */
function viu_simple_faq_admin_pane_form($form, &$form_state) {
  $form['submit'] = array (
    '#type' => 'submit',
    '#value' => t('Submit Button'),
  );

  return $form;
}

/**
 * Edit form.
 */
function viu_simple_faq_admin_pane($form, &$form_state) {
  $conf = $form_state['conf']; //Configuration Form

  sdpm($form);
  sdpm($form_state);
  //Tutorial:
//  $form['term'] = array(
//    '#type' => 'textfield',
//    '#title' => t('Term ID'),
//    '#description' => t('The term, from which the root term will be displayed'),
//    '#default_value' => $conf['term'],
//  );
//
//  $entity_info = entity_get_info('taxonomy_term');
//
//  $options = array();
//  if (!empty($entity_info['view modes'])) {
//    foreach ($entity_info['view modes'] as $mode => $settings) {
//      $options[$mode] = $settings['labels'];
//    }
//  }
//
//  $form['view_mode'] = array(
//    '#type' => 'select',
//    '#options' => $options,
//    '#title' => t('View mode'),
//    '#default_value' => $conf['view_mode'],
//  );

  return $form;
}

/**
 * Edit form submit function
 */
function viu_simple_faq_admin_pane_submit($form, &$form_state) {
  $form_state['conf']['term'] = $form_state['values']['term'];
  $form_state['conf']['view_mode'] = $form_state['values']['view_mode'];
}

/**
 * Render the panel.
 */
function viu_simple_faq_admin_pane_render($subtype, $conf, $args, $context) {
  //sdpm($subtype);
  //sdpm($conf);
  //sdpm($args);
  //sdpm($context);

  if ($context['panelizer']->empty) {
    return;
  }

  // Get full term object for the root term
  $term = ctools_context_keyword_substitute($conf['term'], array(), $context);
  $parent_array = taxonomy_get_parents_all($term);
  $root = end($parent_array);

  //Render as a block
  $block = new stdClass();
  $block->module = 'viu_simple_faq';
  $block->delta = 'viu_simple_faq-admin_pane_form';

  //db
  drupal_set_message($block->delta);

  $block->content = drupal_get_form('viu_simple_faq_admin_pane_form');
  return $block;
}

/**
 * Admin info - Provides administrative summary in the Panels UI
 */
function viu_simple_faq_admin_pane_info($subtype, $conf, $contexts) {
  if (!empty($conf)) {
    $content = '<p><b>Term ID:</b> ' . $conf['term'] . '</p>';
    $content = '<p><b>View mode:</b> ' . $conf['view_mode'] . '</p>';

    $block = new stdClass();
    $block->title = $conf['override_title'] ? $conf['override_title_text'] : '';
    $block->content = $content;
    return $block;
  }
}
