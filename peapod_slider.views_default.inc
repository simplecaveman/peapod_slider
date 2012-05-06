<?php
/**
 * @file
 * peapod_slider.views_default.inc
 */

/**
 * Implementation of hook_views_default_views().
 */
function peapod_slider_views_default_views() {
  $export = array();

  $view = new view;
  $view->name = 'featured_slider';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Featured slider';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Featured slider';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $handler->display->display_options['style_plugin'] = 'slideshow';
  $handler->display->display_options['style_options']['slideshow_type'] = 'views_slideshow_cycle';
  $handler->display->display_options['style_options']['slideshow_skin'] = 'default';
  $handler->display->display_options['style_options']['skin_info'] = array(
    'class' => 'default',
    'name' => 'Default',
    'module' => 'views_slideshow',
    'path' => '',
    'stylesheets' => array(),
  );
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_pager']['weight'] = '1';
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_pager']['type'] = 'views_slideshow_pager_fields';
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_pager']['views_slideshow_pager_fields_fields'] = array(
    'field_slider_link' => 0,
    'field_slider_photo' => 0,
    'field_slider_photo_1' => 0,
  );
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_controls']['weight'] = '1';
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_controls']['type'] = 'views_slideshow_controls_text';
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_slide_counter']['weight'] = '1';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_pager']['enable'] = 1;
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_pager']['weight'] = '1';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_pager']['type'] = 'views_slideshow_pager_fields';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_pager']['views_slideshow_pager_fields_fields'] = array(
    'field_slider_photo_1' => 'field_slider_photo_1',
    'field_slider_link' => 0,
    'field_slider_photo' => 0,
  );
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_controls']['weight'] = '1';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_controls']['type'] = 'views_slideshow_controls_text';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_slide_counter']['weight'] = '1';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['timeout'] = '5000';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['speed'] = '700';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['delay'] = '0';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['start_paused'] = 0;
  $handler->display->display_options['style_options']['views_slideshow_cycle']['remember_slide_days'] = '1';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['items_per_slide'] = '1';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['wait_for_image_load_timeout'] = '3000';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['cleartype'] = 0;
  $handler->display->display_options['style_options']['views_slideshow_cycle']['cleartypenobg'] = 0;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['inline'] = array(
    'field_slider_photo_1' => 'field_slider_photo_1',
  );
  $handler->display->display_options['row_options']['hide_empty'] = 0;
  $handler->display->display_options['row_options']['default_field_elements'] = 1;
  /* Field: Content: Slider link */
  $handler->display->display_options['fields']['field_slider_link']['id'] = 'field_slider_link';
  $handler->display->display_options['fields']['field_slider_link']['table'] = 'field_data_field_slider_link';
  $handler->display->display_options['fields']['field_slider_link']['field'] = 'field_slider_link';
  $handler->display->display_options['fields']['field_slider_link']['label'] = '';
  $handler->display->display_options['fields']['field_slider_link']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_slider_link']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_slider_link']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_slider_link']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_slider_link']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_slider_link']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_slider_link']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_slider_link']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_slider_link']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_slider_link']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_slider_link']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_slider_link']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_slider_link']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_slider_link']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_slider_link']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_slider_link']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_slider_link']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_slider_link']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_slider_link']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_slider_link']['field_api_classes'] = 0;
  /* Field: Content: Slider photo */
  $handler->display->display_options['fields']['field_slider_photo']['id'] = 'field_slider_photo';
  $handler->display->display_options['fields']['field_slider_photo']['table'] = 'field_data_field_slider_photo';
  $handler->display->display_options['fields']['field_slider_photo']['field'] = 'field_slider_photo';
  $handler->display->display_options['fields']['field_slider_photo']['label'] = '';
  $handler->display->display_options['fields']['field_slider_photo']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_slider_photo']['alter']['make_link'] = 1;
  $handler->display->display_options['fields']['field_slider_photo']['alter']['path'] = '[field_slider_link]';
  $handler->display->display_options['fields']['field_slider_photo']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_slider_photo']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_slider_photo']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_slider_photo']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_slider_photo']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_slider_photo']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_slider_photo']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_slider_photo']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_slider_photo']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_slider_photo']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_slider_photo']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_slider_photo']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_slider_photo']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_slider_photo']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_slider_photo']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_slider_photo']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_slider_photo']['settings'] = array(
    'image_style' => 'slider-large',
    'image_link' => '',
  );
  $handler->display->display_options['fields']['field_slider_photo']['field_api_classes'] = 0;
  /* Field: Content: Slider photo */
  $handler->display->display_options['fields']['field_slider_photo_1']['id'] = 'field_slider_photo_1';
  $handler->display->display_options['fields']['field_slider_photo_1']['table'] = 'field_data_field_slider_photo';
  $handler->display->display_options['fields']['field_slider_photo_1']['field'] = 'field_slider_photo';
  $handler->display->display_options['fields']['field_slider_photo_1']['label'] = '';
  $handler->display->display_options['fields']['field_slider_photo_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_slider_photo_1']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_slider_photo_1']['alter']['make_link'] = 1;
  $handler->display->display_options['fields']['field_slider_photo_1']['alter']['path'] = '[field_slider_link]';
  $handler->display->display_options['fields']['field_slider_photo_1']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_slider_photo_1']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_slider_photo_1']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_slider_photo_1']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_slider_photo_1']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_slider_photo_1']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_slider_photo_1']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_slider_photo_1']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_slider_photo_1']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_slider_photo_1']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_slider_photo_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_slider_photo_1']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_slider_photo_1']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_slider_photo_1']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_slider_photo_1']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_slider_photo_1']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_slider_photo_1']['settings'] = array(
    'image_style' => 'slider-thumb',
    'image_link' => '',
  );
  $handler->display->display_options['fields']['field_slider_photo_1']['field_api_classes'] = 0;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'featured_slider' => 'featured_slider',
  );

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $export['featured_slider'] = $view;

  return $export;
}
