<?php

/**
 * Implementation of hook_user_default_roles().
 */
function inc_video_user_default_roles() {
  $roles = array();

  // Exported role: videographer
  $roles['videographer'] = array(
    'name' => 'videographer',
  );

  return $roles;
}
