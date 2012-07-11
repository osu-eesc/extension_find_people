<?php

/**
 * Implementation of hook_strongarm().
 */
function extension_find_people_strongarm() {
  $export = array();

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ant_employee';
  $strongarm->value = '1';
  $export['ant_employee'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ant_group';
  $strongarm->value = '0';
  $export['ant_group'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ant_location';
  $strongarm->value = '0';
  $export['ant_location'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ant_pattern_employee';
  $strongarm->value = '[field_employee_first_name-raw] [field_employee_last_name-raw]';
  $export['ant_pattern_employee'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ant_pattern_group';
  $strongarm->value = '';
  $export['ant_pattern_group'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ant_pattern_location';
  $strongarm->value = '';
  $export['ant_pattern_location'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ant_php_employee';
  $strongarm->value = 0;
  $export['ant_php_employee'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ant_php_group';
  $strongarm->value = 0;
  $export['ant_php_group'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ant_php_location';
  $strongarm->value = 0;
  $export['ant_php_location'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_anonymous_employee';
  $strongarm->value = '0';
  $export['comment_anonymous_employee'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_anonymous_group';
  $strongarm->value = 0;
  $export['comment_anonymous_group'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_controls_employee';
  $strongarm->value = '3';
  $export['comment_controls_employee'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_controls_group';
  $strongarm->value = '3';
  $export['comment_controls_group'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_mode_employee';
  $strongarm->value = '4';
  $export['comment_default_mode_employee'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_mode_group';
  $strongarm->value = '4';
  $export['comment_default_mode_group'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_order_employee';
  $strongarm->value = '1';
  $export['comment_default_order_employee'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_order_group';
  $strongarm->value = '1';
  $export['comment_default_order_group'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_per_page_employee';
  $strongarm->value = '50';
  $export['comment_default_per_page_employee'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_per_page_group';
  $strongarm->value = '50';
  $export['comment_default_per_page_group'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_employee';
  $strongarm->value = '0';
  $export['comment_employee'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_form_location_employee';
  $strongarm->value = '0';
  $export['comment_form_location_employee'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_form_location_group';
  $strongarm->value = '0';
  $export['comment_form_location_group'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_group';
  $strongarm->value = '0';
  $export['comment_group'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_preview_employee';
  $strongarm->value = '1';
  $export['comment_preview_employee'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_preview_group';
  $strongarm->value = '1';
  $export['comment_preview_group'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_subject_field_employee';
  $strongarm->value = '1';
  $export['comment_subject_field_employee'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_subject_field_group';
  $strongarm->value = '1';
  $export['comment_subject_field_group'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'content_extra_weights_employee';
  $strongarm->value = array(
    'title' => '-5',
    'revision_information' => '8',
    'author' => '15',
    'options' => '7',
    'comment_settings' => '19',
    'menu' => '16',
    'book' => '17',
    'path' => '14',
    'path_redirect' => '9',
    'find_people_employee_locations_node_content_2' => '10',
    'find_people_employee_locations_node_content_1' => '12',
    'find_people_employee_locations_node_content_3' => '11',
    'find_people_employee_locations_node_content_4' => '13',
    'xmlsitemap' => '18',
  );
  $export['content_extra_weights_employee'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'content_extra_weights_group';
  $strongarm->value = array(
    'title' => '-5',
    'revision_information' => '12',
    'author' => '16',
    'options' => '17',
    'menu' => '14',
    'book' => '15',
    'path' => '13',
    'path_redirect' => '18',
  );
  $export['content_extra_weights_group'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'content_extra_weights_location';
  $strongarm->value = array(
    'title' => '-5',
    'revision_information' => '11',
    'author' => '16',
    'options' => '15',
    'menu' => '14',
    'book' => '13',
    'path' => '12',
    'path_redirect' => '17',
  );
  $export['content_extra_weights_location'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'enable_revisions_page_employee';
  $strongarm->value = 1;
  $export['enable_revisions_page_employee'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'enable_revisions_page_group';
  $strongarm->value = 1;
  $export['enable_revisions_page_group'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'enable_revisions_page_location';
  $strongarm->value = 1;
  $export['enable_revisions_page_location'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'form_build_id_employee';
  $strongarm->value = 'form-a6ab1f1d88358334c14f673842e4c772';
  $export['form_build_id_employee'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'form_build_id_group';
  $strongarm->value = 'form-8b8916ba606747ce2247e21ccd433a82';
  $export['form_build_id_group'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'form_build_id_location';
  $strongarm->value = 'form-898cab38903eb030e7539e626917515e';
  $export['form_build_id_location'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'language_content_type_employee';
  $strongarm->value = '0';
  $export['language_content_type_employee'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'language_content_type_group';
  $strongarm->value = '0';
  $export['language_content_type_group'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'language_content_type_location';
  $strongarm->value = '0';
  $export['language_content_type_location'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_employee';
  $strongarm->value = array(
    0 => 'status',
    1 => 'revision',
  );
  $export['node_options_employee'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_group';
  $strongarm->value = array(
    0 => 'status',
  );
  $export['node_options_group'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_location';
  $strongarm->value = array(
    0 => 'status',
    1 => 'promote',
  );
  $export['node_options_location'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_employee_pattern';
  $strongarm->value = 'employee/[title-raw]';
  $export['pathauto_node_employee_pattern'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_group_pattern';
  $strongarm->value = 'group/[field_group_abbreviation-raw]';
  $export['pathauto_node_group_pattern'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'show_preview_changes_employee';
  $strongarm->value = 1;
  $export['show_preview_changes_employee'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'show_preview_changes_group';
  $strongarm->value = 1;
  $export['show_preview_changes_group'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'skinr_settings_employee';
  $strongarm->value = array(
    0 => 'comment_group',
    1 => 'node_group',
  );
  $export['skinr_settings_employee'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'skinr_settings_group';
  $strongarm->value = array(
    0 => 'comment_group',
    1 => 'node_group',
  );
  $export['skinr_settings_group'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'vertical_tabs_fieldsets_employee';
  $strongarm->value = array(
    0 => 'menu',
    1 => 'book',
    2 => 'revision_information',
    3 => 'author',
    4 => 'options',
    5 => 'path',
  );
  $export['vertical_tabs_fieldsets_employee'] = $strongarm;

  return $export;
}
