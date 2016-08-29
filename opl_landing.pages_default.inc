<?php
/**
 * @file
 * opl_landing.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_handlers().
 */
function opl_landing_default_page_manager_handlers() {
  $export = array();

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'entity_panels_node_landing_page_default__panel_context_cdd59b68-22fe-46cd-8e86-ca7fc15e816c';
  $handler->task = 'entity_panels';
  $handler->subtask = 'node-landing_page-default';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Landing page default',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'access' => array(
      'logic' => 'and',
    ),
  );
  $display = new panels_display();
  $display->layout = 'onecol';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'middle' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '929219d1-1faf-4db6-8404-3c1df960180f';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'entity_panels_node_landing_page_default__panel_context_a7cb6202-db62-4651-acae-f6dd6460a921';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-12267fc5-cab0-4deb-98c0-76b66dcbf552';
  $pane->panel = 'middle';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_image';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'hidden',
    'formatter' => 'image',
    'delta_limit' => 0,
    'delta_offset' => '0',
    'delta_reversed' => FALSE,
    'formatter_settings' => array(
      'image_style' => '',
      'image_link' => '',
    ),
    'context' => 'argument_entity_panels_entity_id:node_1',
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
  $pane->uuid = '12267fc5-cab0-4deb-98c0-76b66dcbf552';
  $display->content['new-12267fc5-cab0-4deb-98c0-76b66dcbf552'] = $pane;
  $display->panels['middle'][0] = 'new-12267fc5-cab0-4deb-98c0-76b66dcbf552';
  $pane = new stdClass();
  $pane->pid = 'new-007a9b35-bc4d-4d7c-af1b-0cb6d8097121';
  $pane->panel = 'middle';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:title_field';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'hidden',
    'formatter' => 'title_linked',
    'delta_limit' => 0,
    'delta_offset' => '0',
    'delta_reversed' => FALSE,
    'formatter_settings' => array(
      'title_style' => 'h2',
      'title_link' => 'content',
      'title_class' => '',
    ),
    'context' => 'argument_entity_panels_entity_id:node_1',
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
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = '007a9b35-bc4d-4d7c-af1b-0cb6d8097121';
  $display->content['new-007a9b35-bc4d-4d7c-af1b-0cb6d8097121'] = $pane;
  $display->panels['middle'][1] = 'new-007a9b35-bc4d-4d7c-af1b-0cb6d8097121';
  $pane = new stdClass();
  $pane->pid = 'new-fd6a87b3-95cd-45c5-a27f-927200ab1db2';
  $pane->panel = 'middle';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:body';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'hidden',
    'formatter' => 'text_trimmed',
    'delta_limit' => 0,
    'delta_offset' => '0',
    'delta_reversed' => FALSE,
    'formatter_settings' => array(
      'trim_length' => '600',
    ),
    'context' => 'argument_entity_panels_entity_id:node_1',
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
  $pane->position = 2;
  $pane->locks = array();
  $pane->uuid = 'fd6a87b3-95cd-45c5-a27f-927200ab1db2';
  $display->content['new-fd6a87b3-95cd-45c5-a27f-927200ab1db2'] = $pane;
  $display->panels['middle'][2] = 'new-fd6a87b3-95cd-45c5-a27f-927200ab1db2';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['entity_panels_node_landing_page_default__panel_context_cdd59b68-22fe-46cd-8e86-ca7fc15e816c'] = $handler;

  return $export;
}
