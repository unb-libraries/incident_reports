<?php

/**
 * @file
 * incident_reports.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function incident_reports_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function incident_reports_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function incident_reports_node_info() {
  $items = array(
    'incident_report' => array(
      'name' => t('Incident Report'),
      'base' => 'node_content',
      'description' => t('Incident report for documenting occurrences'),
      'has_title' => '1',
      'title_label' => t('Short Title (e.g. Small Fire at Science Library)'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
