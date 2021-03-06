<?php

/**
 * Implementation of hook_strongarm().
 */
function aegir_custom_settings_strongarm() {
  $export = array();

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_book';
  $strongarm->value = array(
    0 => 'status',
  );
  $export['node_options_book'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'revision_delete';
  $strongarm->value = array(
    'task' => 'task',
  );
  $export['revision_delete'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'revision_delete_age';
  $strongarm->value = '604800';
  $export['revision_delete_age'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'revision_delete_cron';
  $strongarm->value = 1364349626;
  $export['revision_delete_cron'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'revision_delete_freq';
  $strongarm->value = '86400';
  $export['revision_delete_freq'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'revision_delete_limit';
  $strongarm->value = '8';
  $export['revision_delete_limit'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'revision_delete_list_keep_current';
  $strongarm->value = '0';
  $export['revision_delete_list_keep_current'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'revision_delete_list_keep_date_last';
  $strongarm->value = '0';
  $export['revision_delete_list_keep_date_last'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'revision_delete_list_keep_original';
  $strongarm->value = '0';
  $export['revision_delete_list_keep_original'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'revision_delete_list_show_conditional';
  $strongarm->value = '1';
  $export['revision_delete_list_show_conditional'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'revision_delete_list_takeover';
  $strongarm->value = '1';
  $export['revision_delete_list_takeover'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'theme_settings';
  $strongarm->value = array(
    'toggle_logo' => 1,
    'toggle_name' => 1,
    'toggle_slogan' => 0,
    'toggle_mission' => 1,
    'toggle_node_user_picture' => 0,
    'toggle_comment_user_picture' => 0,
    'toggle_search' => 0,
    'toggle_favicon' => 1,
    'toggle_primary_links' => 1,
    'toggle_secondary_links' => 1,
    'toggle_node_info_book' => 0,
    'toggle_node_info_client' => 1,
    'toggle_node_info_package' => 1,
    'toggle_node_info_platform' => 1,
    'toggle_node_info_server' => 1,
    'toggle_node_info_site' => 1,
    'toggle_node_info_task' => 1,
    'default_logo' => 1,
    'logo_path' => '',
    'logo_upload' => '',
    'default_favicon' => 1,
    'favicon_path' => '',
    'favicon_upload' => '',
  );
  $export['theme_settings'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'userprotect_administrator_bypass_defaults';
  $strongarm->value = array(
    'up_name' => 0,
    'up_mail' => 0,
    'up_pass' => 0,
    'up_status' => 0,
    'up_roles' => 0,
    'up_openid' => 0,
    'up_delete' => 0,
    'up_edit' => 0,
  );
  $export['userprotect_administrator_bypass_defaults'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'userprotect_autoprotect';
  $strongarm->value = 1;
  $export['userprotect_autoprotect'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'userprotect_protection_defaults';
  $strongarm->value = array(
    'up_roles' => 'up_roles',
    'up_name' => 0,
    'up_mail' => 0,
    'up_pass' => 0,
    'up_status' => 0,
    'up_openid' => 0,
    'up_delete' => 0,
    'up_edit' => 0,
  );
  $export['userprotect_protection_defaults'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'userprotect_role_protections';
  $strongarm->value = array(
    5 => array(
      'up_name' => 0,
      'up_mail' => 0,
      'up_pass' => 0,
      'up_status' => 1,
      'up_roles' => 1,
      'up_openid' => 0,
      'up_delete' => 1,
      'up_edit' => 0,
    ),
    4 => array(
      'up_name' => 0,
      'up_mail' => 0,
      'up_pass' => 0,
      'up_status' => 0,
      'up_roles' => 1,
      'up_openid' => 0,
      'up_delete' => 0,
      'up_edit' => 0,
    ),
    3 => array(
      'up_name' => 0,
      'up_mail' => 0,
      'up_pass' => 0,
      'up_status' => 0,
      'up_roles' => 1,
      'up_openid' => 0,
      'up_delete' => 0,
      'up_edit' => 0,
    ),
    2 => array(
      'up_name' => 0,
      'up_mail' => 0,
      'up_pass' => 0,
      'up_status' => 0,
      'up_roles' => 1,
      'up_openid' => 0,
      'up_delete' => 0,
      'up_edit' => 0,
    ),
    6 => array(
      'up_name' => 0,
      'up_mail' => 0,
      'up_pass' => 0,
      'up_status' => 1,
      'up_roles' => 1,
      'up_openid' => 0,
      'up_delete' => 1,
      'up_edit' => 0,
    ),
  );
  $export['userprotect_role_protections'] = $strongarm;

  return $export;
}
