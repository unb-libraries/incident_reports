<?php
/**
 * @file
 * incident_reports.features.user_role.inc
 */

/**
 * Implements hook_user_default_roles().
 */
function incident_reports_user_default_roles() {
  $roles = array();

  // Exported role: Incident Report Admin.
  $roles['Incident Report Admin'] = array(
    'name' => 'Incident Report Admin',
    'weight' => 25,
  );

  return $roles;
}
