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
      'title_link' => '',
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

/**
 * Implements hook_default_page_manager_pages().
 */
function opl_landing_default_page_manager_pages() {
  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'opl_2013_annual_report_landing_page';
  $page->task = 'page';
  $page->admin_title = 'opl_2013_annual_report_landing_page';
  $page->admin_description = '';
  $page->path = 'annual-report-2013';
  $page->access = array();
  $page->menu = array();
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_opl_2013_annual_report_landing_page__panel_context_829c89f0-5aef-40f9-9df5-b1cd65aced80';
  $handler->task = 'page';
  $handler->subtask = 'opl_2013_annual_report_landing_page';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => '2013 Annual Report',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'name' => '',
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
  $display->uuid = 'af178b6c-dc69-41d7-b047-549aafb84b92';
  $display->storage_type = 'page_manager';
  $display->storage_id = '';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-9e7f0e84-a131-4c0b-93da-2092daae2a96';
  $pane->panel = 'middle';
  $pane->type = 'views';
  $pane->subtype = 'about_landing_page';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_pager_settings' => 0,
    'use_pager' => 0,
    'nodes_per_page' => '10',
    'pager_id' => '0',
    'offset' => '0',
    'more_link' => 0,
    'feed_icons' => 0,
    'panel_args' => 0,
    'link_to_view' => 0,
    'args' => '',
    'url' => '',
    'display' => 'embed_4',
    'override_title' => 0,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => '',
    'css_class' => 'program-event-cards',
  );
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '9e7f0e84-a131-4c0b-93da-2092daae2a96';
  $display->content['new-9e7f0e84-a131-4c0b-93da-2092daae2a96'] = $pane;
  $display->panels['middle'][0] = 'new-9e7f0e84-a131-4c0b-93da-2092daae2a96';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-9e7f0e84-a131-4c0b-93da-2092daae2a96';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['opl_2013_annual_report_landing_page'] = $page;

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'opl_2014_annual_report_landing_page';
  $page->task = 'page';
  $page->admin_title = 'opl_2014_annual_report_landing_page';
  $page->admin_description = '';
  $page->path = 'annual-report-2014';
  $page->access = array();
  $page->menu = array();
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_opl_2014_annual_report_landing_page__panel_context_0d92d844-4da1-4718-b6d2-e3b0ddb5dc8a';
  $handler->task = 'page';
  $handler->subtask = 'opl_2014_annual_report_landing_page';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => '2014 Annual Report',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'name' => '',
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
  $display->uuid = '5a7dfc10-33be-4841-965c-a6d3717ec4d4';
  $display->storage_type = 'page_manager';
  $display->storage_id = '';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-6ebb901a-d750-463b-9714-b937e56df58b';
  $pane->panel = 'middle';
  $pane->type = 'views';
  $pane->subtype = 'about_landing_page';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_pager_settings' => 0,
    'use_pager' => 0,
    'nodes_per_page' => '10',
    'pager_id' => '0',
    'offset' => '0',
    'more_link' => 0,
    'feed_icons' => 0,
    'panel_args' => 0,
    'link_to_view' => 0,
    'args' => '',
    'url' => '',
    'display' => 'embed_6',
    'override_title' => 0,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => '',
    'css_class' => 'program-event-cards',
  );
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '6ebb901a-d750-463b-9714-b937e56df58b';
  $display->content['new-6ebb901a-d750-463b-9714-b937e56df58b'] = $pane;
  $display->panels['middle'][0] = 'new-6ebb901a-d750-463b-9714-b937e56df58b';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-6ebb901a-d750-463b-9714-b937e56df58b';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['opl_2014_annual_report_landing_page'] = $page;

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'opl_about';
  $page->task = 'page';
  $page->admin_title = 'opl_about_landing_page';
  $page->admin_description = '';
  $page->path = 'about';
  $page->access = array();
  $page->menu = array();
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_opl_about__panel_context_0c69aa89-f221-4639-955a-f5b3c6f45ecd';
  $handler->task = 'page';
  $handler->subtask = 'opl_about';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'About the library',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'name' => '',
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
  $display->title = 'About the library';
  $display->uuid = '13db7bd0-7f21-427c-acea-0b21075a3284';
  $display->storage_type = 'page_manager';
  $display->storage_id = '';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-83513dee-d822-4052-a362-c509f556bc75';
  $pane->panel = 'middle';
  $pane->type = 'views';
  $pane->subtype = 'about_landing_page';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_pager_settings' => 0,
    'use_pager' => 0,
    'nodes_per_page' => '10',
    'pager_id' => '0',
    'offset' => '0',
    'more_link' => 0,
    'feed_icons' => 0,
    'panel_args' => 0,
    'link_to_view' => 0,
    'args' => '',
    'url' => '',
    'display' => 'embed_2',
    'override_title' => 1,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => '',
    'css_class' => 'program-event-cards',
  );
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '83513dee-d822-4052-a362-c509f556bc75';
  $display->content['new-83513dee-d822-4052-a362-c509f556bc75'] = $pane;
  $display->panels['middle'][0] = 'new-83513dee-d822-4052-a362-c509f556bc75';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-83513dee-d822-4052-a362-c509f556bc75';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['opl_about'] = $page;

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'opl_browse_landing_page';
  $page->task = 'page';
  $page->admin_title = 'opl_browse_landing_page';
  $page->admin_description = '';
  $page->path = 'browse';
  $page->access = array();
  $page->menu = array();
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_opl_browse_landing_page__panel_context_48d3c5a9-fb47-4d72-8632-fd694e14cb92';
  $handler->task = 'page';
  $handler->subtask = 'opl_browse_landing_page';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Browse',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'name' => '',
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
  $display->uuid = 'dadeb860-bbab-4f9a-b0a6-5e6eacaf97da';
  $display->storage_type = 'page_manager';
  $display->storage_id = '';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-9c4fb6a9-9daa-46de-ac21-8884f9b08d7c';
  $pane->panel = 'middle';
  $pane->type = 'views';
  $pane->subtype = 'about_landing_page';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_pager_settings' => 0,
    'use_pager' => 0,
    'nodes_per_page' => '10',
    'pager_id' => '0',
    'offset' => '0',
    'more_link' => 0,
    'feed_icons' => 0,
    'panel_args' => 0,
    'link_to_view' => 0,
    'args' => '',
    'url' => '',
    'display' => 'embed_5',
    'override_title' => 0,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => '',
    'css_class' => 'program-event-cards',
  );
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '9c4fb6a9-9daa-46de-ac21-8884f9b08d7c';
  $display->content['new-9c4fb6a9-9daa-46de-ac21-8884f9b08d7c'] = $pane;
  $display->panels['middle'][0] = 'new-9c4fb6a9-9daa-46de-ac21-8884f9b08d7c';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-9c4fb6a9-9daa-46de-ac21-8884f9b08d7c';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['opl_browse_landing_page'] = $page;

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'opl_contact';
  $page->task = 'page';
  $page->admin_title = 'opl_contact';
  $page->admin_description = '';
  $page->path = 'contact';
  $page->access = array();
  $page->menu = array();
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_opl_contact__panel';
  $handler->task = 'page';
  $handler->subtask = 'opl_contact';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Panel',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'name' => 'panel',
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
  $display->title = 'Contact us';
  $display->uuid = '2a5d2d6b-e39c-4167-8dce-25b8084a8a68';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'page_opl_contact__panel';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-df785261-f84e-403c-baf9-682a2f5f20f3';
  $pane->panel = 'middle';
  $pane->type = 'views';
  $pane->subtype = 'about_landing_page';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_pager_settings' => 0,
    'use_pager' => 0,
    'nodes_per_page' => '10',
    'pager_id' => '0',
    'offset' => '0',
    'more_link' => 0,
    'feed_icons' => 0,
    'panel_args' => 0,
    'link_to_view' => 0,
    'args' => '',
    'url' => '',
    'display' => 'embed_1',
    'override_title' => 1,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => '',
    'css_class' => 'program-event-cards',
  );
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = 'df785261-f84e-403c-baf9-682a2f5f20f3';
  $display->content['new-df785261-f84e-403c-baf9-682a2f5f20f3'] = $pane;
  $display->panels['middle'][0] = 'new-df785261-f84e-403c-baf9-682a2f5f20f3';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-df785261-f84e-403c-baf9-682a2f5f20f3';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['opl_contact'] = $page;

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'opl_human_library_landing_page';
  $page->task = 'page';
  $page->admin_title = 'opl_human_library_landing_page';
  $page->admin_description = '';
  $page->path = 'human-library';
  $page->access = array();
  $page->menu = array();
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_opl_human_library_landing_page__panel_context_b22fe0b5-96ab-4b94-9183-9a3a4495fcb8';
  $handler->task = 'page';
  $handler->subtask = 'opl_human_library_landing_page';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Panel',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'name' => '',
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
  $display->uuid = '38d4008e-7989-48d1-a51c-fecfe6394ce6';
  $display->storage_type = 'page_manager';
  $display->storage_id = '';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-0368d8df-bc99-4eac-bbd4-92bbf79c1ae7';
  $pane->panel = 'middle';
  $pane->type = 'views';
  $pane->subtype = 'about_landing_page';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_pager_settings' => 0,
    'use_pager' => 0,
    'nodes_per_page' => '10',
    'pager_id' => '0',
    'offset' => '0',
    'more_link' => 0,
    'feed_icons' => 0,
    'panel_args' => 0,
    'link_to_view' => 0,
    'args' => '',
    'url' => '',
    'display' => 'embed_7',
    'override_title' => 0,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => '',
    'css_class' => 'program-event-cards',
  );
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '0368d8df-bc99-4eac-bbd4-92bbf79c1ae7';
  $display->content['new-0368d8df-bc99-4eac-bbd4-92bbf79c1ae7'] = $pane;
  $display->panels['middle'][0] = 'new-0368d8df-bc99-4eac-bbd4-92bbf79c1ae7';
  $pane = new stdClass();
  $pane->pid = 'new-766b90eb-2102-426d-bbb8-6fc0ce17ef2a';
  $pane->panel = 'middle';
  $pane->type = 'views';
  $pane->subtype = 'human_library';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_pager_settings' => 0,
    'use_pager' => 0,
    'nodes_per_page' => '0',
    'pager_id' => '0',
    'offset' => '0',
    'more_link' => 0,
    'feed_icons' => 0,
    'panel_args' => 0,
    'link_to_view' => 0,
    'args' => '',
    'url' => '',
    'display' => 'embed_1',
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
  $pane->uuid = '766b90eb-2102-426d-bbb8-6fc0ce17ef2a';
  $display->content['new-766b90eb-2102-426d-bbb8-6fc0ce17ef2a'] = $pane;
  $display->panels['middle'][1] = 'new-766b90eb-2102-426d-bbb8-6fc0ce17ef2a';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-0368d8df-bc99-4eac-bbd4-92bbf79c1ae7';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['opl_human_library_landing_page'] = $page;

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'opl_make_a_booking';
  $page->task = 'page';
  $page->admin_title = 'opl_make_a_booking';
  $page->admin_description = '';
  $page->path = 'make-booking';
  $page->access = array();
  $page->menu = array();
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_opl_make_a_booking__panel_context_2ecb6869-55f7-436a-acb1-cade14745795';
  $handler->task = 'page';
  $handler->subtask = 'opl_make_a_booking';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Panel',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'name' => '',
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
  $display->uuid = '3ace5b4b-c954-40ed-a414-1baab8b32aa6';
  $display->storage_type = 'page_manager';
  $display->storage_id = '';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-f9b5ef0c-86e0-461d-bea5-f29e1b435d75';
  $pane->panel = 'middle';
  $pane->type = 'views';
  $pane->subtype = 'about_landing_page';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_pager_settings' => 0,
    'use_pager' => 0,
    'nodes_per_page' => '10',
    'pager_id' => '0',
    'offset' => '0',
    'more_link' => 0,
    'feed_icons' => 0,
    'panel_args' => 0,
    'link_to_view' => 0,
    'args' => '',
    'url' => '',
    'display' => 'embed_8',
    'override_title' => 0,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => '',
    'css_class' => 'program-event-cards',
  );
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = 'f9b5ef0c-86e0-461d-bea5-f29e1b435d75';
  $display->content['new-f9b5ef0c-86e0-461d-bea5-f29e1b435d75'] = $pane;
  $display->panels['middle'][0] = 'new-f9b5ef0c-86e0-461d-bea5-f29e1b435d75';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-f9b5ef0c-86e0-461d-bea5-f29e1b435d75';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['opl_make_a_booking'] = $page;

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'opl_services_landing_page';
  $page->task = 'page';
  $page->admin_title = 'opl_services_landing_page';
  $page->admin_description = '';
  $page->path = 'services';
  $page->access = array();
  $page->menu = array();
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_opl_services_landing_page__panel_context_5a2de431-3ba3-47a4-8a1b-1ecbd09b82cc';
  $handler->task = 'page';
  $handler->subtask = 'opl_services_landing_page';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Panel',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'name' => '',
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
  $display->title = 'Services at the library';
  $display->uuid = '2a5d2d6b-e39c-4167-8dce-25b8084a8a68';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'page_opl_contact__panel';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-3102c1e6-e8b7-4d6f-b227-cbed31ba7dc9';
  $pane->panel = 'middle';
  $pane->type = 'views';
  $pane->subtype = 'services_1on1';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_pager_settings' => 0,
    'use_pager' => 0,
    'nodes_per_page' => '10',
    'pager_id' => '0',
    'offset' => '0',
    'more_link' => 0,
    'feed_icons' => 0,
    'panel_args' => 0,
    'link_to_view' => 0,
    'args' => '',
    'url' => '',
    'display' => 'embed_1',
    'override_title' => 1,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => '',
    'css_class' => 'program-event-cards',
  );
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '3102c1e6-e8b7-4d6f-b227-cbed31ba7dc9';
  $display->content['new-3102c1e6-e8b7-4d6f-b227-cbed31ba7dc9'] = $pane;
  $display->panels['middle'][0] = 'new-3102c1e6-e8b7-4d6f-b227-cbed31ba7dc9';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['opl_services_landing_page'] = $page;

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'opl_support_landing_page';
  $page->task = 'page';
  $page->admin_title = 'opl_support_landing_page';
  $page->admin_description = '';
  $page->path = 'make-donation';
  $page->access = array();
  $page->menu = array();
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_opl_support_landing_page__panel_context_5c240505-7083-40a1-893c-e22ecb5cfe41';
  $handler->task = 'page';
  $handler->subtask = 'opl_support_landing_page';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Support the library',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'name' => '',
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
  $display->uuid = 'f63554ff-f950-45a8-9e28-c360b1103e8b';
  $display->storage_type = 'page_manager';
  $display->storage_id = '';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-14384f92-5262-402e-b290-66051196204b';
  $pane->panel = 'middle';
  $pane->type = 'views';
  $pane->subtype = 'about_landing_page';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_pager_settings' => 0,
    'use_pager' => 0,
    'nodes_per_page' => '10',
    'pager_id' => '0',
    'offset' => '0',
    'more_link' => 0,
    'feed_icons' => 0,
    'panel_args' => 0,
    'link_to_view' => 0,
    'args' => '',
    'url' => '',
    'display' => 'embed_3',
    'override_title' => 0,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => '',
    'css_class' => 'program-event-cards',
  );
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '14384f92-5262-402e-b290-66051196204b';
  $display->content['new-14384f92-5262-402e-b290-66051196204b'] = $pane;
  $display->panels['middle'][0] = 'new-14384f92-5262-402e-b290-66051196204b';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-14384f92-5262-402e-b290-66051196204b';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['opl_support_landing_page'] = $page;

  return $pages;

}
