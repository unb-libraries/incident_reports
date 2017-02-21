<?php
/**
 * @file
 * incident_reports.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function incident_reports_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'create incident_report content'.
  $permissions['create incident_report content'] = array(
    'name' => 'create incident_report content',
    'roles' => array(
      'Incident Report Admin' => 'Incident Report Admin',
      'UNBF Staff' => 'UNBF Staff',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any incident_report content'.
  $permissions['delete any incident_report content'] = array(
    'name' => 'delete any incident_report content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own incident_report content'.
  $permissions['delete own incident_report content'] = array(
    'name' => 'delete own incident_report content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any incident_report content'.
  $permissions['edit any incident_report content'] = array(
    'name' => 'edit any incident_report content',
    'roles' => array(
      'Incident Report Admin' => 'Incident Report Admin',
      'UNBF Staff' => 'UNBF Staff',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own incident_report content'.
  $permissions['edit own incident_report content'] = array(
    'name' => 'edit own incident_report content',
    'roles' => array(
      'Incident Report Admin' => 'Incident Report Admin',
      'UNBF Staff' => 'UNBF Staff',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'follow up on incident reports'.
  $permissions['follow up on incident reports'] = array(
    'name' => 'follow up on incident reports',
    'roles' => array(
      'Incident Report Admin' => 'Incident Report Admin',
      'administrator' => 'administrator',
    ),
    'module' => 'incident_reports',
  );

  // Exported permission: 'view incident reports'.
  $permissions['view incident reports'] = array(
    'name' => 'view incident reports',
    'roles' => array(
      'Incident Report Admin' => 'Incident Report Admin',
      'administrator' => 'administrator',
    ),
    'module' => 'incident_reports',
  );

  return $permissions;
}
