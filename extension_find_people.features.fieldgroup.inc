<?php

/**
 * Implementation of hook_fieldgroup_default_groups().
 */
function extension_find_people_fieldgroup_default_groups() {
  $groups = array();

  // Exported group: group_admin_information
  $groups['employee-group_admin_information'] = array(
    'group_type' => 'standard',
    'type_name' => 'employee',
    'group_name' => 'group_admin_information',
    'label' => 'Admin Information',
    'settings' => array(
      'form' => array(
        'style' => 'fieldset',
        'description' => '',
      ),
      'display' => array(
        'weight' => '6',
        '2' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
        '3' => array(
          'format' => 'fieldset',
          'exclude' => 1,
        ),
        '4' => array(
          'format' => 'fieldset',
          'exclude' => 1,
        ),
        '5' => array(
          'format' => 'fieldset',
          'exclude' => 1,
        ),
        'label' => 'above',
        'teaser' => array(
          'format' => 'fieldset',
          'exclude' => 1,
        ),
        'full' => array(
          'format' => 'fieldset',
          'exclude' => 1,
        ),
        'description' => '',
        'token' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
      ),
    ),
    'weight' => '6',
    'fields' => array(
      '0' => 'field_employee_employer',
      '1' => 'field_employee_status',
      '2' => 'field_employee_leader',
      '3' => 'field_employee_is_supervisor',
      '4' => 'field_employee_oe_admin',
      '5' => 'field_onid_username',
      '6' => 'field_employee_notes',
    ),
  );

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
  t('Admin Information');
  t('Location');

  return $groups;
}
