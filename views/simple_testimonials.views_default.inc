<?php

/**
 * @file
 *   testimonials.views_default.inc
 */

/**
 * Implementation of hook_views_default_views().
 */
function simple_testimonials_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'testimonials';
  $view->description = 'A testimonials page and blocks';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Testimonials';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['css_class'] = 'testimonials-page';
  $handler->display->display_options['use_more_always'] = TRUE;
  $handler->display->display_options['use_more_text'] = 'View all Testimonials';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'node';
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = 'There are currently no testimonials.';
  $handler->display->display_options['empty']['area']['format'] = 'filtered_html';
  /* Field: Content: Testimonial image */
  $handler->display->display_options['fields']['field_testimonial_image']['id'] = 'field_testimonial_image';
  $handler->display->display_options['fields']['field_testimonial_image']['table'] = 'field_data_field_testimonial_image';
  $handler->display->display_options['fields']['field_testimonial_image']['field'] = 'field_testimonial_image';
  $handler->display->display_options['fields']['field_testimonial_image']['label'] = '';
  $handler->display->display_options['fields']['field_testimonial_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_testimonial_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_testimonial_image']['settings'] = array(
    'image_style' => 'testimonial_small',
    'image_link' => 'content',
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['element_type'] = 'h2';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Content: Testimonial */
  $handler->display->display_options['fields']['field_testimonial_text']['id'] = 'field_testimonial_text';
  $handler->display->display_options['fields']['field_testimonial_text']['table'] = 'field_data_field_testimonial_text';
  $handler->display->display_options['fields']['field_testimonial_text']['field'] = 'field_testimonial_text';
  $handler->display->display_options['fields']['field_testimonial_text']['label'] = '';
  $handler->display->display_options['fields']['field_testimonial_text']['element_type'] = 'p';
  $handler->display->display_options['fields']['field_testimonial_text']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_testimonial_text']['type'] = 'text_plain';
  /* Field: Content: Author name */
  $handler->display->display_options['fields']['field_testimonial_author_name']['id'] = 'field_testimonial_author_name';
  $handler->display->display_options['fields']['field_testimonial_author_name']['table'] = 'field_data_field_testimonial_author_name';
  $handler->display->display_options['fields']['field_testimonial_author_name']['field'] = 'field_testimonial_author_name';
  $handler->display->display_options['fields']['field_testimonial_author_name']['label'] = '';
  $handler->display->display_options['fields']['field_testimonial_author_name']['element_type'] = 'h4';
  $handler->display->display_options['fields']['field_testimonial_author_name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_testimonial_author_name']['type'] = 'text_plain';
  /* Field: Content: Author Role */
  $handler->display->display_options['fields']['field_testimonial_author_role']['id'] = 'field_testimonial_author_role';
  $handler->display->display_options['fields']['field_testimonial_author_role']['table'] = 'field_data_field_testimonial_author_role';
  $handler->display->display_options['fields']['field_testimonial_author_role']['field'] = 'field_testimonial_author_role';
  $handler->display->display_options['fields']['field_testimonial_author_role']['label'] = '';
  $handler->display->display_options['fields']['field_testimonial_author_role']['element_type'] = 'h5';
  $handler->display->display_options['fields']['field_testimonial_author_role']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_testimonial_author_role']['type'] = 'text_plain';
  /* Field: Content: Company/ Location */
  $handler->display->display_options['fields']['field_testimonial_author_company']['id'] = 'field_testimonial_author_company';
  $handler->display->display_options['fields']['field_testimonial_author_company']['table'] = 'field_data_field_testimonial_author_company';
  $handler->display->display_options['fields']['field_testimonial_author_company']['field'] = 'field_testimonial_author_company';
  $handler->display->display_options['fields']['field_testimonial_author_company']['label'] = '';
  $handler->display->display_options['fields']['field_testimonial_author_company']['element_type'] = 'h6';
  $handler->display->display_options['fields']['field_testimonial_author_company']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_testimonial_author_company']['type'] = 'text_plain';
  /* Sort criterion: Content: Sticky */
  $handler->display->display_options['sorts']['sticky']['id'] = 'sticky';
  $handler->display->display_options['sorts']['sticky']['table'] = 'node';
  $handler->display->display_options['sorts']['sticky']['field'] = 'sticky';
  $handler->display->display_options['sorts']['sticky']['order'] = 'DESC';
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 0;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'testimonial' => 'testimonial',
  );

  /* Display: Block - Recent Testimonials */
  $handler = $view->new_display('block', 'Block - Recent Testimonials', 'testimonials_recent');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['css_class'] = 'testimonials-latest';
  $handler->display->display_options['defaults']['use_more'] = FALSE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'flexslider';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Testimonial image */
  $handler->display->display_options['fields']['field_testimonial_image']['id'] = 'field_testimonial_image';
  $handler->display->display_options['fields']['field_testimonial_image']['table'] = 'field_data_field_testimonial_image';
  $handler->display->display_options['fields']['field_testimonial_image']['field'] = 'field_testimonial_image';
  $handler->display->display_options['fields']['field_testimonial_image']['label'] = '';
  $handler->display->display_options['fields']['field_testimonial_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_testimonial_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_testimonial_image']['settings'] = array(
    'image_style' => 'testimonial_medium',
    'image_link' => '',
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['element_type'] = 'h2';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Content: Testimonial */
  $handler->display->display_options['fields']['field_testimonial_text']['id'] = 'field_testimonial_text';
  $handler->display->display_options['fields']['field_testimonial_text']['table'] = 'field_data_field_testimonial_text';
  $handler->display->display_options['fields']['field_testimonial_text']['field'] = 'field_testimonial_text';
  $handler->display->display_options['fields']['field_testimonial_text']['label'] = '';
  $handler->display->display_options['fields']['field_testimonial_text']['element_type'] = 'p';
  $handler->display->display_options['fields']['field_testimonial_text']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_testimonial_text']['type'] = 'text_plain';
  /* Field: Content: Author name */
  $handler->display->display_options['fields']['field_testimonial_author_name']['id'] = 'field_testimonial_author_name';
  $handler->display->display_options['fields']['field_testimonial_author_name']['table'] = 'field_data_field_testimonial_author_name';
  $handler->display->display_options['fields']['field_testimonial_author_name']['field'] = 'field_testimonial_author_name';
  $handler->display->display_options['fields']['field_testimonial_author_name']['label'] = '';
  $handler->display->display_options['fields']['field_testimonial_author_name']['element_type'] = 'h4';
  $handler->display->display_options['fields']['field_testimonial_author_name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_testimonial_author_name']['type'] = 'text_plain';
  /* Field: Content: Author Role */
  $handler->display->display_options['fields']['field_testimonial_author_role']['id'] = 'field_testimonial_author_role';
  $handler->display->display_options['fields']['field_testimonial_author_role']['table'] = 'field_data_field_testimonial_author_role';
  $handler->display->display_options['fields']['field_testimonial_author_role']['field'] = 'field_testimonial_author_role';
  $handler->display->display_options['fields']['field_testimonial_author_role']['label'] = '';
  $handler->display->display_options['fields']['field_testimonial_author_role']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_testimonial_author_role']['element_type'] = 'h5';
  $handler->display->display_options['fields']['field_testimonial_author_role']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_testimonial_author_role']['type'] = 'text_plain';
  /* Field: Content: Company/ Location */
  $handler->display->display_options['fields']['field_testimonial_author_company']['id'] = 'field_testimonial_author_company';
  $handler->display->display_options['fields']['field_testimonial_author_company']['table'] = 'field_data_field_testimonial_author_company';
  $handler->display->display_options['fields']['field_testimonial_author_company']['field'] = 'field_testimonial_author_company';
  $handler->display->display_options['fields']['field_testimonial_author_company']['label'] = '';
  $handler->display->display_options['fields']['field_testimonial_author_company']['element_type'] = 'h6';
  $handler->display->display_options['fields']['field_testimonial_author_company']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_testimonial_author_company']['empty'] = '[field_testimonial_author_role]';
  $handler->display->display_options['fields']['field_testimonial_author_company']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['field_testimonial_author_company']['type'] = 'text_plain';
  /* Field: Global: System variable */
  $handler->display->display_options['fields']['variable']['id'] = 'variable';
  $handler->display->display_options['fields']['variable']['table'] = 'views';
  $handler->display->display_options['fields']['variable']['field'] = 'variable';
  $handler->display->display_options['fields']['variable']['label'] = '';
  $handler->display->display_options['fields']['variable']['exclude'] = TRUE;
  $handler->display->display_options['fields']['variable']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['variable']['variable_name'] = 'testimonials_title';
  /* Field: Global: System variable */
  $handler->display->display_options['fields']['variable_1']['id'] = 'variable_1';
  $handler->display->display_options['fields']['variable_1']['table'] = 'views';
  $handler->display->display_options['fields']['variable_1']['field'] = 'variable';
  $handler->display->display_options['fields']['variable_1']['label'] = '';
  $handler->display->display_options['fields']['variable_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['variable_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['variable_1']['variable_name'] = 'testimonials_description';
  $handler->display->display_options['block_description'] = 'Recent Testimonials';

  /* Display: Block - Random Testimonials */
  $handler = $view->new_display('block', 'Block - Random Testimonials', 'testimonials_random');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Testimonials';
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['css_class'] = 'testimonials-random';
  $handler->display->display_options['defaults']['use_more'] = FALSE;
  $handler->display->display_options['use_more'] = TRUE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Testimonial image */
  $handler->display->display_options['fields']['field_testimonial_image']['id'] = 'field_testimonial_image';
  $handler->display->display_options['fields']['field_testimonial_image']['table'] = 'field_data_field_testimonial_image';
  $handler->display->display_options['fields']['field_testimonial_image']['field'] = 'field_testimonial_image';
  $handler->display->display_options['fields']['field_testimonial_image']['label'] = '';
  $handler->display->display_options['fields']['field_testimonial_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_testimonial_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_testimonial_image']['settings'] = array(
    'image_style' => 'testimonial_medium',
    'image_link' => 'content',
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['element_type'] = 'h2';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Content: Testimonial */
  $handler->display->display_options['fields']['field_testimonial_text']['id'] = 'field_testimonial_text';
  $handler->display->display_options['fields']['field_testimonial_text']['table'] = 'field_data_field_testimonial_text';
  $handler->display->display_options['fields']['field_testimonial_text']['field'] = 'field_testimonial_text';
  $handler->display->display_options['fields']['field_testimonial_text']['label'] = '';
  $handler->display->display_options['fields']['field_testimonial_text']['element_type'] = 'p';
  $handler->display->display_options['fields']['field_testimonial_text']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_testimonial_text']['type'] = 'text_plain';
  /* Field: Content: Author name */
  $handler->display->display_options['fields']['field_testimonial_author_name']['id'] = 'field_testimonial_author_name';
  $handler->display->display_options['fields']['field_testimonial_author_name']['table'] = 'field_data_field_testimonial_author_name';
  $handler->display->display_options['fields']['field_testimonial_author_name']['field'] = 'field_testimonial_author_name';
  $handler->display->display_options['fields']['field_testimonial_author_name']['label'] = '';
  $handler->display->display_options['fields']['field_testimonial_author_name']['element_type'] = 'h4';
  $handler->display->display_options['fields']['field_testimonial_author_name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_testimonial_author_name']['type'] = 'text_plain';
  /* Field: Content: Author Role */
  $handler->display->display_options['fields']['field_testimonial_author_role']['id'] = 'field_testimonial_author_role';
  $handler->display->display_options['fields']['field_testimonial_author_role']['table'] = 'field_data_field_testimonial_author_role';
  $handler->display->display_options['fields']['field_testimonial_author_role']['field'] = 'field_testimonial_author_role';
  $handler->display->display_options['fields']['field_testimonial_author_role']['label'] = '';
  $handler->display->display_options['fields']['field_testimonial_author_role']['element_type'] = 'h5';
  $handler->display->display_options['fields']['field_testimonial_author_role']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_testimonial_author_role']['type'] = 'text_plain';
  /* Field: Content: Company/ Location */
  $handler->display->display_options['fields']['field_testimonial_author_company']['id'] = 'field_testimonial_author_company';
  $handler->display->display_options['fields']['field_testimonial_author_company']['table'] = 'field_data_field_testimonial_author_company';
  $handler->display->display_options['fields']['field_testimonial_author_company']['field'] = 'field_testimonial_author_company';
  $handler->display->display_options['fields']['field_testimonial_author_company']['label'] = '';
  $handler->display->display_options['fields']['field_testimonial_author_company']['element_type'] = 'h6';
  $handler->display->display_options['fields']['field_testimonial_author_company']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_testimonial_author_company']['type'] = 'text_plain';
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Global: Random */
  $handler->display->display_options['sorts']['random']['id'] = 'random';
  $handler->display->display_options['sorts']['random']['table'] = 'views';
  $handler->display->display_options['sorts']['random']['field'] = 'random';
  $handler->display->display_options['block_description'] = 'Block: Random Testimonials';

  /* Display: Page - Testimonials */
  $handler = $view->new_display('page', 'Page - Testimonials', 'testimonials_page');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: Unfiltered text */
  $handler->display->display_options['header']['area_text_custom']['id'] = 'area_text_custom';
  $handler->display->display_options['header']['area_text_custom']['table'] = 'views';
  $handler->display->display_options['header']['area_text_custom']['field'] = 'area_text_custom';
  $handler->display->display_options['header']['area_text_custom']['content'] = '<h1>[variable]</h1>
<h2>[variable_1]</h2>
<hr>';
  $handler->display->display_options['header']['area_text_custom']['tokenize'] = TRUE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Testimonial image */
  $handler->display->display_options['fields']['field_testimonial_image']['id'] = 'field_testimonial_image';
  $handler->display->display_options['fields']['field_testimonial_image']['table'] = 'field_data_field_testimonial_image';
  $handler->display->display_options['fields']['field_testimonial_image']['field'] = 'field_testimonial_image';
  $handler->display->display_options['fields']['field_testimonial_image']['label'] = '';
  $handler->display->display_options['fields']['field_testimonial_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_testimonial_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_testimonial_image']['settings'] = array(
    'image_style' => 'testimonial_medium',
    'image_link' => 'content',
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['element_type'] = 'h2';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Content: Testimonial */
  $handler->display->display_options['fields']['field_testimonial_text']['id'] = 'field_testimonial_text';
  $handler->display->display_options['fields']['field_testimonial_text']['table'] = 'field_data_field_testimonial_text';
  $handler->display->display_options['fields']['field_testimonial_text']['field'] = 'field_testimonial_text';
  $handler->display->display_options['fields']['field_testimonial_text']['label'] = '';
  $handler->display->display_options['fields']['field_testimonial_text']['element_type'] = 'p';
  $handler->display->display_options['fields']['field_testimonial_text']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_testimonial_text']['type'] = 'text_plain';
  /* Field: Content: Author name */
  $handler->display->display_options['fields']['field_testimonial_author_name']['id'] = 'field_testimonial_author_name';
  $handler->display->display_options['fields']['field_testimonial_author_name']['table'] = 'field_data_field_testimonial_author_name';
  $handler->display->display_options['fields']['field_testimonial_author_name']['field'] = 'field_testimonial_author_name';
  $handler->display->display_options['fields']['field_testimonial_author_name']['label'] = '';
  $handler->display->display_options['fields']['field_testimonial_author_name']['element_type'] = 'h4';
  $handler->display->display_options['fields']['field_testimonial_author_name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_testimonial_author_name']['type'] = 'text_plain';
  /* Field: Content: Author Role */
  $handler->display->display_options['fields']['field_testimonial_author_role']['id'] = 'field_testimonial_author_role';
  $handler->display->display_options['fields']['field_testimonial_author_role']['table'] = 'field_data_field_testimonial_author_role';
  $handler->display->display_options['fields']['field_testimonial_author_role']['field'] = 'field_testimonial_author_role';
  $handler->display->display_options['fields']['field_testimonial_author_role']['label'] = '';
  $handler->display->display_options['fields']['field_testimonial_author_role']['element_type'] = 'h5';
  $handler->display->display_options['fields']['field_testimonial_author_role']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_testimonial_author_role']['type'] = 'text_plain';
  /* Field: Content: Company/ Location */
  $handler->display->display_options['fields']['field_testimonial_author_company']['id'] = 'field_testimonial_author_company';
  $handler->display->display_options['fields']['field_testimonial_author_company']['table'] = 'field_data_field_testimonial_author_company';
  $handler->display->display_options['fields']['field_testimonial_author_company']['field'] = 'field_testimonial_author_company';
  $handler->display->display_options['fields']['field_testimonial_author_company']['label'] = '';
  $handler->display->display_options['fields']['field_testimonial_author_company']['element_type'] = 'h6';
  $handler->display->display_options['fields']['field_testimonial_author_company']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_testimonial_author_company']['type'] = 'text_plain';
  /* Field: Global: System variable */
  $handler->display->display_options['fields']['variable']['id'] = 'variable';
  $handler->display->display_options['fields']['variable']['table'] = 'views';
  $handler->display->display_options['fields']['variable']['field'] = 'variable';
  $handler->display->display_options['fields']['variable']['label'] = '';
  $handler->display->display_options['fields']['variable']['exclude'] = TRUE;
  $handler->display->display_options['fields']['variable']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['variable']['variable_name'] = 'testimonials_title';
  /* Field: Global: System variable */
  $handler->display->display_options['fields']['variable_1']['id'] = 'variable_1';
  $handler->display->display_options['fields']['variable_1']['table'] = 'views';
  $handler->display->display_options['fields']['variable_1']['field'] = 'variable';
  $handler->display->display_options['fields']['variable_1']['label'] = '';
  $handler->display->display_options['fields']['variable_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['variable_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['variable_1']['variable_name'] = 'testimonials_description';
  /* Field: Global: System variable */
  $handler->display->display_options['fields']['variable_2']['id'] = 'variable_2';
  $handler->display->display_options['fields']['variable_2']['table'] = 'views';
  $handler->display->display_options['fields']['variable_2']['field'] = 'variable';
  $handler->display->display_options['fields']['variable_2']['label'] = '';
  $handler->display->display_options['fields']['variable_2']['exclude'] = TRUE;
  $handler->display->display_options['fields']['variable_2']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['variable_2']['variable_name'] = 'testimonials_path';
  $handler->display->display_options['path'] = 'testimonials';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Testimonials';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'main-menu';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;



  $export[$view->name] = $view;

  return $export;
}
