<?php

/**
 * Implementation of hook_fieldgroup_default_groups().
 */
function extension_find_people_fieldgroup_default_groups() {
  $groups = array();

  // Exported group: group_unit_location
  $groups['group-group_unit_location'] = array(
    'group_type' => 'standard',
    'type_name' => 'group',
    'group_name' => 'group_unit_location',
    'label' => 'Location',
    'settings' => array(
      'form' => array(
        'style' => 'fieldset_collapsible',
        'description' => '',
      ),
      'display' => array(
        'weight' => '8',
        'label' => 'hidden',
        'teaser' => array(
          'format' => 'hidden',
          'exclude' => 0,
        ),
        'full' => array(
          'format' => 'hidden',
          'exclude' => 0,
        ),
        'description' => '',
        '5' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
        '4' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
        '2' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
        '3' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
        'token' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
      ),
    ),
    'weight' => '6',
    'fields' => array(),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Location');

  return $groups;
}
