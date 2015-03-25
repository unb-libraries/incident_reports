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
    'weight' => 29,
  );

  // Exported role: Regular Staff Member.
  $roles['Regular Staff Member'] = array(
    'name' => 'Regular Staff Member',
    'weight' => 2,
  );

  return $roles;
}
