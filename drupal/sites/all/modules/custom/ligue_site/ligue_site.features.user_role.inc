<?php
/**
 * @file
 * ligue_site.features.user_role.inc
 */

/**
 * Implements hook_user_default_roles().
 */
function ligue_site_user_default_roles() {
  $roles = array();

  // Exported role: Manager.
  $roles['Manager'] = array(
    'name' => 'Manager',
    'weight' => 3,
  );

  // Exported role: Writer.
  $roles['Writer'] = array(
    'name' => 'Writer',
    'weight' => 4,
  );

  // Exported role: administrator.
  $roles['administrator'] = array(
    'name' => 'administrator',
    'weight' => 2,
  );

  return $roles;
}
