<?php

/**
 * Implementation of hook_ctools_plugin_api().
 */
function extension_find_people_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "openlayers" && $api == "openlayers_presets") {
    return array("version" => 1);
  }
  elseif ($module == "openlayers" && $api == "openlayers_styles") {
    return array("version" => 1);
  }
  elseif ($module == "strongarm" && $api == "strongarm") {
    return array("version" => 1);
  }
}

/**
 * Implementation of hook_imagecache_default_presets().
 */
function extension_find_people_imagecache_default_presets() {
  $items = array(
    'employee_photo' => array(
      'presetname' => 'employee_photo',
      'actions' => array(
        '0' => array(
          'weight' => '0',
          'module' => 'imagecache',
          'action' => 'imagecache_scale',
          'data' => array(
            'width' => '217',
            'height' => '217',
            'upscale' => 0,
          ),
        ),
      ),
    ),
  );
  return $items;
}

/**
 * Implementation of hook_node_info().
 */
function extension_find_people_node_info() {
  $items = array(
    'employee' => array(
      'name' => t('Employee'),
      'module' => 'features',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Full Name'),
      'has_body' => '0',
      'body_label' => '',
      'min_word_count' => '0',
      'help' => '',
    ),
    'group' => array(
      'name' => t('Group'),
      'module' => 'features',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'has_body' => '0',
      'body_label' => '',
      'min_word_count' => '0',
      'help' => '',
    ),
  );
  return $items;
}

/**
 * Implementation of hook_views_api().
 */
function extension_find_people_views_api() {
  return array(
    'api' => '2',
  );
}
