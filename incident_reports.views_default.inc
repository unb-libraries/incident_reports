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
  /* Relationship: Content: Content author */
  $handler->display->display_options['relationships']['uid']['id'] = 'uid';
  $handler->display->display_options['relationships']['uid']['table'] = 'node';
  $handler->display->display_options['relationships']['uid']['field'] = 'uid';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['text'] = '<h3>[title]</h3>';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Content: Date and Time of Incident */
  $handler->display->display_options['fields']['field_date_and_time_of_incident_1']['id'] = 'field_date_and_time_of_incident_1';
  $handler->display->display_options['fields']['field_date_and_time_of_incident_1']['table'] = 'field_data_field_date_and_time_of_incident';
  $handler->display->display_options['fields']['field_date_and_time_of_incident_1']['field'] = 'field_date_and_time_of_incident';
  $handler->display->display_options['fields']['field_date_and_time_of_incident_1']['label'] = '';
  $handler->display->display_options['fields']['field_date_and_time_of_incident_1']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_date_and_time_of_incident_1']['alter']['text'] = '<strong>Date of incident:</strong> [field_date_and_time_of_incident_1]';
  $handler->display->display_options['fields']['field_date_and_time_of_incident_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_date_and_time_of_incident_1']['settings'] = array(
    'format_type' => 'long',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
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
  $handler->display->display_options['fields']['field_location_of_incident_1']['alter']['text'] = '<strong>Location:</strong> [field_location_of_incident_1][field_hil_rooms][field_sci_rooms][field_eng_rooms][field_south_gym_rooms]';
  $handler->display->display_options['fields']['field_location_of_incident_1']['element_label_colon'] = FALSE;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  $handler->display->display_options['sorts']['created']['expose']['label'] = 'Post date';
  /* Sort criterion: Content: Date and Time of Incident (field_date_and_time_of_incident) */
  $handler->display->display_options['sorts']['field_date_and_time_of_incident_value']['id'] = 'field_date_and_time_of_incident_value';
  $handler->display->display_options['sorts']['field_date_and_time_of_incident_value']['table'] = 'field_data_field_date_and_time_of_incident';
  $handler->display->display_options['sorts']['field_date_and_time_of_incident_value']['field'] = 'field_date_and_time_of_incident_value';
  $handler->display->display_options['sorts']['field_date_and_time_of_incident_value']['exposed'] = TRUE;
  $handler->display->display_options['sorts']['field_date_and_time_of_incident_value']['expose']['label'] = 'Date and Time of Incident (field_date_and_time_of_incident)';
  /* Filter criterion: Content: Published status */
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

  /* Display: Incident Reports List */
  $handler = $view->new_display('block', 'Incident Reports List', 'block_1');
  $handler->display->display_options['defaults']['use_ajax'] = FALSE;
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['defaults']['empty'] = FALSE;
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = 'No incident reports found.';
  $handler->display->display_options['empty']['area']['format'] = 'plain_text';
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  $handler->display->display_options['sorts']['created']['exposed'] = TRUE;
  $handler->display->display_options['sorts']['created']['expose']['label'] = 'Post date';
  /* Sort criterion: Content: Date and Time of Incident (field_date_and_time_of_incident) */
  $handler->display->display_options['sorts']['field_date_and_time_of_incident_value']['id'] = 'field_date_and_time_of_incident_value';
  $handler->display->display_options['sorts']['field_date_and_time_of_incident_value']['table'] = 'field_data_field_date_and_time_of_incident';
  $handler->display->display_options['sorts']['field_date_and_time_of_incident_value']['field'] = 'field_date_and_time_of_incident_value';
  $handler->display->display_options['sorts']['field_date_and_time_of_incident_value']['order'] = 'DESC';
  $handler->display->display_options['sorts']['field_date_and_time_of_incident_value']['exposed'] = TRUE;
  $handler->display->display_options['sorts']['field_date_and_time_of_incident_value']['expose']['label'] = 'Date and Time of Incident';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published status */
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
  /* Filter criterion: Content: Location of Incident (field_location_of_incident) */
  $handler->display->display_options['filters']['field_location_of_incident_value']['id'] = 'field_location_of_incident_value';
  $handler->display->display_options['filters']['field_location_of_incident_value']['table'] = 'field_data_field_location_of_incident';
  $handler->display->display_options['filters']['field_location_of_incident_value']['field'] = 'field_location_of_incident_value';
  $handler->display->display_options['filters']['field_location_of_incident_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_location_of_incident_value']['expose']['operator_id'] = 'field_location_of_incident_value_op';
  $handler->display->display_options['filters']['field_location_of_incident_value']['expose']['label'] = 'Location of Incident';
  $handler->display->display_options['filters']['field_location_of_incident_value']['expose']['operator'] = 'field_location_of_incident_value_op';
  $handler->display->display_options['filters']['field_location_of_incident_value']['expose']['identifier'] = 'field_location_of_incident_value';
  $handler->display->display_options['filters']['field_location_of_incident_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
    6 => 0,
    7 => 0,
    8 => 0,
    9 => 0,
    10 => 0,
    11 => 0,
    20 => 0,
    21 => 0,
    22 => 0,
    23 => 0,
    24 => 0,
    25 => 0,
    26 => 0,
    27 => 0,
    18 => 0,
    19 => 0,
    28 => 0,
    29 => 0,
    30 => 0,
    31 => 0,
    32 => 0,
    33 => 0,
  );

  /* Display: Incident Reports Created by User */
  $handler = $view->new_display('block', 'Incident Reports Created by User', 'block_2');
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  $handler->display->display_options['sorts']['created']['expose']['label'] = 'Post date';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published status */
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
  /* Filter criterion: User: Current */
  $handler->display->display_options['filters']['uid_current']['id'] = 'uid_current';
  $handler->display->display_options['filters']['uid_current']['table'] = 'users';
  $handler->display->display_options['filters']['uid_current']['field'] = 'uid_current';
  $handler->display->display_options['filters']['uid_current']['relationship'] = 'uid';
  $handler->display->display_options['filters']['uid_current']['value'] = '1';

  /* Display: Incident reports department head */
  $handler = $view->new_display('block', 'Incident reports department head', 'block_3');
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Notify Department Supervisor (field_notify) */
  $handler->display->display_options['arguments']['field_notify_value']['id'] = 'field_notify_value';
  $handler->display->display_options['arguments']['field_notify_value']['table'] = 'field_data_field_notify';
  $handler->display->display_options['arguments']['field_notify_value']['field'] = 'field_notify_value';
  $handler->display->display_options['arguments']['field_notify_value']['default_action'] = 'not found';
  $handler->display->display_options['arguments']['field_notify_value']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['field_notify_value']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_notify_value']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_notify_value']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['field_notify_value']['limit'] = '0';
  $export['incident_reports'] = $view;

  return $export;
}
