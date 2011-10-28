<?php

/**
 * Implementation of hook_openlayers_presets().
 */
function extension_find_people_openlayers_presets() {
  $export = array();

  $openlayers_presets = new stdClass;
  $openlayers_presets->disabled = FALSE; /* Edit this to true to make a default openlayers_presets disabled initially */
  $openlayers_presets->api_version = 1;
  $openlayers_presets->name = 'find_people_employee_page_map';
  $openlayers_presets->title = 'Find People Employee Page Map';
  $openlayers_presets->description = 'The map displayed on employee pages';
  $openlayers_presets->data = array(
    'width' => '217px',
    'height' => '217px',
    'image_path' => '',
    'css_path' => '',
    'proxy_host' => '',
    'hide_empty_map' => 1,
    'center' => array(
      'initial' => array(
        'centerpoint' => '-120.86883544454, 43.885026702056',
        'zoom' => '6',
      ),
      'restrict' => array(
        'restrictextent' => 1,
        'restrictedExtent' => '-13922240.329384,5132134.952203,-12936508.412795,5856146.483991',
      ),
    ),
    'behaviors' => array(
      'openlayers_behavior_popup' => array(
        'layers' => array(
          'find_people_employee_locations_openlayers_1' => 'find_people_employee_locations_openlayers_1',
          'find_people_employee_locations_openlayers_2' => 'find_people_employee_locations_openlayers_2',
          'find_people_employee_locations_openlayers_3' => 0,
        ),
      ),
      'openlayers_behavior_keyboarddefaults' => array(),
      'openlayers_behavior_navigation' => array(
        'zoomWheelEnabled' => 0,
      ),
      'openlayers_behavior_panzoom' => array(),
      'openlayers_behavior_zoomtolayer' => array(
        'zoomtolayer' => 'find_people_employee_locations_openlayers_3',
        'point_zoom_level' => '9',
      ),
    ),
    'default_layer' => 'google_physical',
    'layers' => array(
      'google_physical' => 'google_physical',
      'find_people_employee_locations_openlayers_1' => 'find_people_employee_locations_openlayers_1',
      'find_people_employee_locations_openlayers_2' => 'find_people_employee_locations_openlayers_2',
      'find_people_employee_locations_openlayers_3' => 'find_people_employee_locations_openlayers_3',
    ),
    'layer_styles' => array(
      'find_people_employee_locations_openlayers_1' => 'primary_location',
      'find_people_employee_locations_openlayers_2' => 'secondary_locations',
    ),
    'layer_activated' => array(
      'find_people_employee_locations_openlayers_1' => 'find_people_employee_locations_openlayers_1',
      'find_people_employee_locations_openlayers_2' => 'find_people_employee_locations_openlayers_2',
    ),
    'layer_switcher' => array(),
    'projection' => '900913',
    'displayProjection' => '4326',
    'styles' => array(
      'default' => 'default',
      'select' => 'default',
      'temporary' => 'default',
    ),
  );
  $export['find_people_employee_page_map'] = $openlayers_presets;

  $openlayers_presets = new stdClass;
  $openlayers_presets->disabled = FALSE; /* Edit this to true to make a default openlayers_presets disabled initially */
  $openlayers_presets->api_version = 1;
  $openlayers_presets->name = 'find_people_group_page_map';
  $openlayers_presets->title = 'Find People Group Page Map';
  $openlayers_presets->description = 'The map displayed on group pages';
  $openlayers_presets->data = array(
    'width' => '217px',
    'height' => '217px',
    'image_path' => '',
    'css_path' => '',
    'proxy_host' => '',
    'hide_empty_map' => 1,
    'center' => array(
      'initial' => array(
        'centerpoint' => '-120.86883544454, 43.885026702056',
        'zoom' => '6',
      ),
      'restrict' => array(
        'restrictextent' => 1,
        'restrictedExtent' => '-13922240.329384,5132134.952203,-12936508.412795,5856146.483991',
      ),
    ),
    'behaviors' => array(
      'openlayers_behavior_popup' => array(
        'layers' => array(
          'find_people_group_locations_openlayers_1' => 'find_people_group_locations_openlayers_1',
        ),
      ),
      'openlayers_behavior_keyboarddefaults' => array(),
      'openlayers_behavior_navigation' => array(
        'zoomWheelEnabled' => 0,
      ),
      'openlayers_behavior_panzoom' => array(),
      'openlayers_behavior_zoomtolayer' => array(
        'zoomtolayer' => 'find_people_group_locations_openlayers_1',
        'point_zoom_level' => '13',
      ),
    ),
    'default_layer' => 'google_physical',
    'layers' => array(
      'google_physical' => 'google_physical',
      'find_people_group_locations_openlayers_1' => 'find_people_group_locations_openlayers_1',
    ),
    'layer_styles' => array(
      'find_people_employee_locations_openlayers_1' => 'primary_location',
      'find_people_employee_locations_openlayers_2' => 'secondary_locations',
    ),
    'layer_activated' => array(
      'find_people_group_locations_openlayers_1' => 'find_people_group_locations_openlayers_1',
    ),
    'layer_switcher' => array(),
    'projection' => '900913',
    'displayProjection' => '4326',
    'styles' => array(
      'default' => 'default',
      'select' => 'default',
      'temporary' => 'default',
    ),
  );
  $export['find_people_group_page_map'] = $openlayers_presets;

  $openlayers_presets = new stdClass;
  $openlayers_presets->disabled = FALSE; /* Edit this to true to make a default openlayers_presets disabled initially */
  $openlayers_presets->api_version = 1;
  $openlayers_presets->name = 'find_us_map';
  $openlayers_presets->title = 'Find Us Map';
  $openlayers_presets->description = 'The map on the Find Us page';
  $openlayers_presets->data = array(
    'width' => '370px',
    'height' => '330px',
    'image_path' => '',
    'css_path' => '',
    'proxy_host' => '',
    'hide_empty_map' => 0,
    'center' => array(
      'initial' => array(
        'centerpoint' => '-120.86883544454, 43.885026702056',
        'zoom' => '6',
      ),
      'restrict' => array(
        'restrictextent' => 1,
        'restrictedExtent' => '-13922240.329384,5132134.952203,-12936508.412795,5856146.483991',
      ),
    ),
    'behaviors' => array(
      'openlayers_behavior_popup' => array(
        'layers' => array(
          'find_us_page_openlayers_1' => 'find_us_page_openlayers_1',
          'find_us_page_openlayers_2' => 'find_us_page_openlayers_2',
          'find_us_page_openlayers_3' => 'find_us_page_openlayers_3',
        ),
      ),
      'openlayers_behavior_keyboarddefaults' => array(),
      'openlayers_behavior_navigation' => array(
        'zoomWheelEnabled' => 0,
      ),
      'openlayers_behavior_panzoom' => array(),
    ),
    'default_layer' => 'google_physical',
    'layers' => array(
      'google_physical' => 'google_physical',
      'find_us_page_openlayers_1' => 'find_us_page_openlayers_1',
      'find_us_page_openlayers_2' => 'find_us_page_openlayers_2',
      'find_us_page_openlayers_3' => 'find_us_page_openlayers_3',
    ),
    'layer_styles' => array(
      'find_us_page_openlayers_1' => 'extension_in_community',
      'find_us_page_openlayers_2' => 'combined_centers',
      'find_us_page_openlayers_3' => 'branch_stations',
    ),
    'layer_activated' => array(
      'find_us_page_openlayers_1' => 'find_us_page_openlayers_1',
      'find_us_page_openlayers_2' => 'find_us_page_openlayers_2',
      'find_us_page_openlayers_3' => 'find_us_page_openlayers_3',
    ),
    'layer_switcher' => array(),
    'projection' => '900913',
    'displayProjection' => '4326',
    'styles' => array(
      'default' => 'primary_location',
      'select' => 'primary_location',
      'temporary' => 'primary_location',
    ),
  );
  $export['find_us_map'] = $openlayers_presets;

  return $export;
}
