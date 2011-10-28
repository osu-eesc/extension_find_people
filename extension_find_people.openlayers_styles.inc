<?php

/**
 * Implementation of hook_openlayers_styles().
 */
function extension_find_people_openlayers_styles() {
  $export = array();

  $openlayers_styles = new stdClass;
  $openlayers_styles->disabled = FALSE; /* Edit this to true to make a default openlayers_styles disabled initially */
  $openlayers_styles->api_version = 1;
  $openlayers_styles->name = 'branch_stations';
  $openlayers_styles->title = 'Branch Stations';
  $openlayers_styles->description = 'Branch Stations Icons';
  $openlayers_styles->data = array(
    'externalGraphic' => 'sites/default/files/openlayers/branch.png',
    'pointRadius' => 5,
    'fillColor' => '#FFCC66',
    'strokeColor' => '#FF9933',
    'strokeWidth' => 4,
    'fillOpacity' => 0.5,
    'strokeOpacity' => 1,
    'strokeLinecap' => 'round',
    'strokeDashstyle' => 'solid',
    'graphicOpacity' => 1,
    'labelAlign' => 'cm',
  );
  $export['branch_stations'] = $openlayers_styles;

  $openlayers_styles = new stdClass;
  $openlayers_styles->disabled = FALSE; /* Edit this to true to make a default openlayers_styles disabled initially */
  $openlayers_styles->api_version = 1;
  $openlayers_styles->name = 'combined_centers';
  $openlayers_styles->title = 'Combined centers';
  $openlayers_styles->description = 'Branch Stations Icons';
  $openlayers_styles->data = array(
    'externalGraphic' => 'sites/default/files/openlayers/combined.png',
    'pointRadius' => 5,
    'fillColor' => '#FFCC66',
    'strokeColor' => '#FF9933',
    'strokeWidth' => 4,
    'fillOpacity' => 0.5,
    'strokeOpacity' => 1,
    'strokeLinecap' => 'round',
    'strokeDashstyle' => 'solid',
    'graphicOpacity' => 1,
    'labelAlign' => 'cm',
  );
  $export['combined_centers'] = $openlayers_styles;

  $openlayers_styles = new stdClass;
  $openlayers_styles->disabled = FALSE; /* Edit this to true to make a default openlayers_styles disabled initially */
  $openlayers_styles->api_version = 1;
  $openlayers_styles->name = 'extension_in_community';
  $openlayers_styles->title = 'Extension in Community';
  $openlayers_styles->description = 'Extension in your Communtiy Icons';
  $openlayers_styles->data = array(
    'externalGraphic' => 'sites/default/files/openlayers/ext_in_comm.png',
    'pointRadius' => 5,
    'fillColor' => '#FFCC66',
    'strokeColor' => '#FF9933',
    'strokeWidth' => 4,
    'fillOpacity' => 0.5,
    'strokeOpacity' => 1,
    'strokeLinecap' => 'round',
    'strokeDashstyle' => 'solid',
    'graphicOpacity' => 1,
    'labelAlign' => 'cm',
  );
  $export['extension_in_community'] = $openlayers_styles;

  $openlayers_styles = new stdClass;
  $openlayers_styles->disabled = FALSE; /* Edit this to true to make a default openlayers_styles disabled initially */
  $openlayers_styles->api_version = 1;
  $openlayers_styles->name = 'primary_location';
  $openlayers_styles->title = 'Primary Location';
  $openlayers_styles->description = 'The employee\'s primary location';
  $openlayers_styles->data = array(
    'pointRadius' => 5,
    'fillColor' => '#FFCC66',
    'strokeColor' => '#FF9933',
    'strokeWidth' => 4,
    'fillOpacity' => 0.5,
    'strokeOpacity' => 1,
    'strokeLinecap' => 'round',
    'strokeDashstyle' => 'solid',
    'graphicOpacity' => 1,
    'labelAlign' => 'cm',
  );
  $export['primary_location'] = $openlayers_styles;

  $openlayers_styles = new stdClass;
  $openlayers_styles->disabled = FALSE; /* Edit this to true to make a default openlayers_styles disabled initially */
  $openlayers_styles->api_version = 1;
  $openlayers_styles->name = 'secondary_locations';
  $openlayers_styles->title = 'Secondary Locations';
  $openlayers_styles->description = 'The employee\'s secondary locations';
  $openlayers_styles->data = array(
    'pointRadius' => 5,
    'fillColor' => '#e5b85d',
    'strokeColor' => '#c37527',
    'strokeWidth' => 4,
    'fillOpacity' => 0.5,
    'strokeOpacity' => 1,
    'strokeLinecap' => 'round',
    'strokeDashstyle' => 'solid',
    'graphicOpacity' => 1,
    'labelAlign' => 'cm',
  );
  $export['secondary_locations'] = $openlayers_styles;

  return $export;
}
