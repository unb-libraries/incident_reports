<?php
/**
 * @file
 * incident_reports.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function incident_reports_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'incident_reports';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Incident Reports';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Incident Reports';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Date and Time of Incident */
  $handler->display->display_options['fields']['field_date_and_time_of_incident_1']['id'] = 'field_date_and_time_of_incident_1';
  $handler->display->display_options['fields']['field_date_and_time_of_incident_1']['table'] = 'field_data_field_date_and_time_of_incident';
  $handler->display->display_options['fields']['field_date_and_time_of_incident_1']['field'] = 'field_date_and_time_of_incident';
  $handler->display->display_options['fields']['field_date_and_time_of_incident_1']['label'] = '';
  $handler->display->display_options['fields']['field_date_and_time_of_incident_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_date_and_time_of_incident_1']['settings'] = array(
    'format_type' => 'long',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Content: Nature of Incident */
  $handler->display->display_options['fields']['field_nature_of_incident_1']['id'] = 'field_nature_of_incident_1';
  $handler->display->display_options['fields']['field_nature_of_incident_1']['table'] = 'field_data_field_nature_of_incident';
  $handler->display->display_options['fields']['field_nature_of_incident_1']['field'] = 'field_nature_of_incident';
  $handler->display->display_options['fields']['field_nature_of_incident_1']['label'] = '';
  $handler->display->display_options['fields']['field_nature_of_incident_1']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_nature_of_incident_1']['alter']['text'] = 'Nature of Incident: [field_nature_of_incident_1]';
  $handler->display->display_options['fields']['field_nature_of_incident_1']['element_label_colon'] = FALSE;
  /* Field: Content: SCI Rooms */
  $handler->display->display_options['fields']['field_sci_rooms']['id'] = 'field_sci_rooms';
  $handler->display->display_options['fields']['field_sci_rooms']['table'] = 'field_data_field_sci_rooms';
  $handler->display->display_options['fields']['field_sci_rooms']['field'] = 'field_sci_rooms';
  $handler->display->display_options['fields']['field_sci_rooms']['label'] = '';
  $handler->display->display_options['fields']['field_sci_rooms']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_sci_rooms']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_sci_rooms']['alter']['text'] = ', [field_sci_rooms]';
  $handler->display->display_options['fields']['field_sci_rooms']['element_label_colon'] = FALSE;
  /* Field: Content: ENG Rooms */
  $handler->display->display_options['fields']['field_eng_rooms']['id'] = 'field_eng_rooms';
  $handler->display->display_options['fields']['field_eng_rooms']['table'] = 'field_data_field_eng_rooms';
  $handler->display->display_options['fields']['field_eng_rooms']['field'] = 'field_eng_rooms';
  $handler->display->display_options['fields']['field_eng_rooms']['label'] = '';
  $handler->display->display_options['fields']['field_eng_rooms']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_eng_rooms']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_eng_rooms']['alter']['text'] = ', [field_eng_rooms]';
  $handler->display->display_options['fields']['field_eng_rooms']['element_label_colon'] = FALSE;
  /* Field: Content: HIL Rooms */
  $handler->display->display_options['fields']['field_hil_rooms']['id'] = 'field_hil_rooms';
  $handler->display->display_options['fields']['field_hil_rooms']['table'] = 'field_data_field_hil_rooms';
  $handler->display->display_options['fields']['field_hil_rooms']['field'] = 'field_hil_rooms';
  $handler->display->display_options['fields']['field_hil_rooms']['label'] = '';
  $handler->display->display_options['fields']['field_hil_rooms']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_hil_rooms']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_hil_rooms']['alter']['text'] = ', [field_hil_rooms]';
  $handler->display->display_options['fields']['field_hil_rooms']['element_label_colon'] = FALSE;
  /* Field: Content: South Gym Rooms */
  $handler->display->display_options['fields']['field_south_gym_rooms']['id'] = 'field_south_gym_rooms';
  $handler->display->display_options['fields']['field_south_gym_rooms']['table'] = 'field_data_field_south_gym_rooms';
  $handler->display->display_options['fields']['field_south_gym_rooms']['field'] = 'field_south_gym_rooms';
  $handler->display->display_options['fields']['field_south_gym_rooms']['label'] = '';
  $handler->display->display_options['fields']['field_south_gym_rooms']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_south_gym_rooms']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_south_gym_rooms']['alter']['text'] = ', [field_south_gym_rooms]';
  $handler->display->display_options['fields']['field_south_gym_rooms']['element_label_colon'] = FALSE;
  /* Field: Content: Location of Incident */
  $handler->display->display_options['fields']['field_location_of_incident_1']['id'] = 'field_location_of_incident_1';
  $handler->display->display_options['fields']['field_location_of_incident_1']['table'] = 'field_data_field_location_of_incident';
  $handler->display->display_options['fields']['field_location_of_incident_1']['field'] = 'field_location_of_incident';
  $handler->display->display_options['fields']['field_location_of_incident_1']['label'] = '';
  $handler->display->display_options['fields']['field_location_of_incident_1']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_location_of_incident_1']['alter']['text'] = 'Location: [field_location_of_incident_1][field_hil_rooms][field_sci_rooms][field_eng_rooms][field_south_gym_rooms]';
  $handler->display->display_options['fields']['field_location_of_incident_1']['element_label_colon'] = FALSE;
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
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'incident_report' => 'incident_report',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'incident-reports';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Incident Reports';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;
  $export['incident_reports'] = $view;

  return $export;
}
