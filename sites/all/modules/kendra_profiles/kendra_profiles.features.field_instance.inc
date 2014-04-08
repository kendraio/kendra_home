<?php
/**
 * @file
 * kendra_profiles.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function kendra_profiles_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance: 'node-profile-field_profile_aim'
  $field_instances['node-profile-field_profile_aim'] = array(
    'bundle' => 'profile',
    'default_value' => array(
      0 => array(
        'value' => '',
        '_error_element' => 'default_value_widget][field_profile_aim][0][value',
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 46,
      ),
      'full' => array(
        'label' => 'inline',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 46,
      ),
      'print' => array(
        'label' => 'inline',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 46,
      ),
      'rss' => array(
        'label' => 'inline',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 46,
      ),
      'teaser' => array(
        'label' => 'inline',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 46,
      ),
      'token' => array(
        'label' => 'inline',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 46,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_profile_aim',
    'label' => 'AIM',
    'required' => FALSE,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'weight' => 46,
    'widget' => array(
      'active' => 0,
      'module' => 'text',
      'settings' => array(
        'default_value_php' => NULL,
        'rows' => 5,
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 46,
    ),
    'widget_type' => 'text_textfield',
  );

  // Exported field_instance: 'node-profile-field_profile_company'
  $field_instances['node-profile-field_profile_company'] = array(
    'bundle' => 'profile',
    'default_value' => array(
      0 => array(
        'value' => '',
        '_error_element' => 'default_value_widget][field_profile_company][0][value',
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 47,
      ),
      'full' => array(
        'label' => 'inline',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 47,
      ),
      'print' => array(
        'label' => 'inline',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 47,
      ),
      'rss' => array(
        'label' => 'inline',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 47,
      ),
      'teaser' => array(
        'label' => 'inline',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 47,
      ),
      'token' => array(
        'label' => 'inline',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 47,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_profile_company',
    'label' => 'Company',
    'required' => FALSE,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'weight' => 47,
    'widget' => array(
      'active' => 0,
      'module' => 'text',
      'settings' => array(
        'default_value_php' => NULL,
        'rows' => 5,
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 47,
    ),
    'widget_type' => 'text_textfield',
  );

  // Exported field_instance: 'node-profile-field_profile_country'
  $field_instances['node-profile-field_profile_country'] = array(
    'bundle' => 'profile',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 54,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_profile_country',
    'label' => 'Country',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 54,
    ),
  );

  // Exported field_instance: 'node-profile-field_profile_full_name'
  $field_instances['node-profile-field_profile_full_name'] = array(
    'bundle' => 'profile',
    'default_value' => array(
      0 => array(
        'value' => '',
        '_error_element' => 'default_value_widget][field_profile_full_name][0][value',
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 41,
      ),
      'full' => array(
        'label' => 'inline',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 41,
      ),
      'print' => array(
        'label' => 'inline',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 41,
      ),
      'rss' => array(
        'label' => 'inline',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 41,
      ),
      'teaser' => array(
        'label' => 'inline',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 41,
      ),
      'token' => array(
        'label' => 'inline',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 41,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_profile_full_name',
    'label' => 'Full name',
    'required' => FALSE,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'weight' => 41,
    'widget' => array(
      'active' => 0,
      'module' => 'text',
      'settings' => array(
        'default_value_php' => NULL,
        'rows' => 5,
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 41,
    ),
    'widget_type' => 'text_textfield',
  );

  // Exported field_instance: 'node-profile-field_profile_get_email'
  $field_instances['node-profile-field_profile_get_email'] = array(
    'bundle' => 'profile',
    'default_value' => array(
      0 => array(
        'value' => NULL,
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'optionwidgets',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 51,
      ),
      'full' => array(
        'label' => 'inline',
        'module' => 'optionwidgets',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 51,
      ),
      'print' => array(
        'label' => 'inline',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 0,
          'thousand_separator' => '',
        ),
        'type' => 'number_integer',
        'weight' => 51,
      ),
      'rss' => array(
        'label' => 'inline',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 0,
          'thousand_separator' => '',
        ),
        'type' => 'number_integer',
        'weight' => 51,
      ),
      'teaser' => array(
        'label' => 'inline',
        'module' => 'optionwidgets',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 51,
      ),
      'token' => array(
        'label' => 'inline',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 0,
          'thousand_separator' => '',
        ),
        'type' => 'number_integer',
        'weight' => 51,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_profile_get_email',
    'label' => 'Get email',
    'required' => FALSE,
    'settings' => array(
      'max' => '',
      'min' => '',
      'prefix' => '',
      'suffix' => '',
      'user_register_form' => FALSE,
    ),
    'weight' => 51,
    'widget' => array(
      'active' => 0,
      'module' => 'options',
      'settings' => array(
        'default_value_php' => NULL,
        'display_label' => 0,
      ),
      'type' => 'options_onoff',
      'weight' => 51,
    ),
    'widget_type' => 'optionwidgets_onoff',
  );

  // Exported field_instance: 'node-profile-field_profile_ipaddress'
  $field_instances['node-profile-field_profile_ipaddress'] = array(
    'bundle' => 'profile',
    'default_value' => '',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'computed_field',
        'settings' => array(),
        'type' => 'computed_field_plain',
        'weight' => 50,
      ),
      'full' => array(
        'label' => 'inline',
        'module' => 'computed_field',
        'settings' => array(),
        'type' => 'computed_field_plain',
        'weight' => 50,
      ),
      'print' => array(
        'label' => 'inline',
        'module' => 'computed_field',
        'settings' => array(),
        'type' => 'computed_field_plain',
        'weight' => 50,
      ),
      'rss' => array(
        'label' => 'inline',
        'module' => 'computed_field',
        'settings' => array(),
        'type' => 'computed_field_plain',
        'weight' => 50,
      ),
      'teaser' => array(
        'label' => 'inline',
        'module' => 'computed_field',
        'settings' => array(),
        'type' => 'computed_field_plain',
        'weight' => 50,
      ),
      'token' => array(
        'label' => 'inline',
        'module' => 'computed_field',
        'settings' => array(),
        'type' => 'computed_field_plain',
        'weight' => 50,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_profile_ipaddress',
    'label' => 'IP address',
    'required' => FALSE,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'weight' => 50,
    'widget' => array(
      'active' => 0,
      'module' => 'computed_field',
      'settings' => array(
        'default_value' => NULL,
        'default_value_php' => NULL,
      ),
      'type' => 'computed',
      'weight' => 50,
    ),
    'widget_type' => 'computed',
  );

  // Exported field_instance: 'node-profile-field_profile_legacyid'
  $field_instances['node-profile-field_profile_legacyid'] = array(
    'bundle' => 'profile',
    'default_value' => array(
      0 => array(
        'value' => '',
        '_error_element' => 'default_value_widget][field_profile_legacyid][0][value',
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 53,
      ),
      'full' => array(
        'label' => 'inline',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 53,
      ),
      'print' => array(
        'label' => 'inline',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 53,
      ),
      'rss' => array(
        'label' => 'inline',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 53,
      ),
      'teaser' => array(
        'label' => 'inline',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 53,
      ),
      'token' => array(
        'label' => 'inline',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 53,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_profile_legacyid',
    'label' => 'Legacy contact ID',
    'required' => FALSE,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'weight' => 53,
    'widget' => array(
      'active' => 0,
      'module' => 'text',
      'settings' => array(
        'default_value_php' => NULL,
        'rows' => 5,
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 53,
    ),
    'widget_type' => 'text_textfield',
  );

  // Exported field_instance: 'node-profile-field_profile_listed'
  $field_instances['node-profile-field_profile_listed'] = array(
    'bundle' => 'profile',
    'default_value' => array(
      0 => array(
        'value' => NULL,
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'optionwidgets',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 52,
      ),
      'full' => array(
        'label' => 'inline',
        'module' => 'optionwidgets',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 52,
      ),
      'print' => array(
        'label' => 'inline',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 0,
          'thousand_separator' => '',
        ),
        'type' => 'number_integer',
        'weight' => 52,
      ),
      'rss' => array(
        'label' => 'inline',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 0,
          'thousand_separator' => '',
        ),
        'type' => 'number_integer',
        'weight' => 52,
      ),
      'teaser' => array(
        'label' => 'inline',
        'module' => 'optionwidgets',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 52,
      ),
      'token' => array(
        'label' => 'inline',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 0,
          'thousand_separator' => '',
        ),
        'type' => 'number_integer',
        'weight' => 52,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_profile_listed',
    'label' => 'Listed',
    'required' => FALSE,
    'settings' => array(
      'max' => '',
      'min' => '',
      'prefix' => '',
      'suffix' => '',
      'user_register_form' => FALSE,
    ),
    'weight' => 52,
    'widget' => array(
      'active' => 0,
      'module' => 'options',
      'settings' => array(
        'default_value_php' => NULL,
        'display_label' => 0,
      ),
      'type' => 'options_onoff',
      'weight' => 52,
    ),
    'widget_type' => 'optionwidgets_onoff',
  );

  // Exported field_instance: 'node-profile-field_profile_mobile'
  $field_instances['node-profile-field_profile_mobile'] = array(
    'bundle' => 'profile',
    'default_value' => array(
      0 => array(
        'value' => '',
        '_error_element' => 'default_value_widget][field_profile_mobile][0][value',
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 44,
      ),
      'full' => array(
        'label' => 'inline',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 44,
      ),
      'print' => array(
        'label' => 'inline',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 44,
      ),
      'rss' => array(
        'label' => 'inline',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 44,
      ),
      'teaser' => array(
        'label' => 'inline',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 44,
      ),
      'token' => array(
        'label' => 'inline',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 44,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_profile_mobile',
    'label' => 'Mobile',
    'required' => FALSE,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'weight' => 44,
    'widget' => array(
      'active' => 0,
      'module' => 'text',
      'settings' => array(
        'default_value_php' => NULL,
        'rows' => 5,
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 44,
    ),
    'widget_type' => 'text_textfield',
  );

  // Exported field_instance: 'node-profile-field_profile_phone'
  $field_instances['node-profile-field_profile_phone'] = array(
    'bundle' => 'profile',
    'default_value' => array(
      0 => array(
        'value' => '',
        '_error_element' => 'default_value_widget][field_profile_phone][0][value',
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 43,
      ),
      'full' => array(
        'label' => 'inline',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 43,
      ),
      'print' => array(
        'label' => 'inline',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 43,
      ),
      'rss' => array(
        'label' => 'inline',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 43,
      ),
      'teaser' => array(
        'label' => 'inline',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 43,
      ),
      'token' => array(
        'label' => 'inline',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 43,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_profile_phone',
    'label' => 'Phone',
    'required' => FALSE,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'weight' => 43,
    'widget' => array(
      'active' => 0,
      'module' => 'text',
      'settings' => array(
        'default_value_php' => NULL,
        'rows' => 5,
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 43,
    ),
    'widget_type' => 'text_textfield',
  );

  // Exported field_instance: 'node-profile-field_profile_skype'
  $field_instances['node-profile-field_profile_skype'] = array(
    'bundle' => 'profile',
    'default_value' => array(
      0 => array(
        'value' => '',
        '_error_element' => 'default_value_widget][field_profile_skype][0][value',
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 45,
      ),
      'full' => array(
        'label' => 'inline',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 45,
      ),
      'print' => array(
        'label' => 'inline',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 45,
      ),
      'rss' => array(
        'label' => 'inline',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 45,
      ),
      'teaser' => array(
        'label' => 'inline',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 45,
      ),
      'token' => array(
        'label' => 'inline',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 45,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_profile_skype',
    'label' => 'Skype',
    'required' => FALSE,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'weight' => 45,
    'widget' => array(
      'active' => 0,
      'module' => 'text',
      'settings' => array(
        'default_value_php' => NULL,
        'rows' => 5,
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 45,
    ),
    'widget_type' => 'text_textfield',
  );

  // Exported field_instance: 'node-profile-field_profile_title'
  $field_instances['node-profile-field_profile_title'] = array(
    'bundle' => 'profile',
    'default_value' => array(
      0 => array(
        'value' => '',
        '_error_element' => 'default_value_widget][field_profile_title][0][value',
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 42,
      ),
      'full' => array(
        'label' => 'inline',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 42,
      ),
      'print' => array(
        'label' => 'inline',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 42,
      ),
      'rss' => array(
        'label' => 'inline',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 42,
      ),
      'teaser' => array(
        'label' => 'inline',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 42,
      ),
      'token' => array(
        'label' => 'inline',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 42,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_profile_title',
    'label' => 'Job title',
    'required' => FALSE,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'weight' => 42,
    'widget' => array(
      'active' => 0,
      'module' => 'text',
      'settings' => array(
        'default_value_php' => NULL,
        'rows' => 5,
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 42,
    ),
    'widget_type' => 'text_textfield',
  );

  // Exported field_instance: 'node-profile-field_profile_website'
  $field_instances['node-profile-field_profile_website'] = array(
    'bundle' => 'profile',
    'default_value' => array(
      0 => array(
        'title' => '',
        'url' => '',
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'link',
        'settings' => array(),
        'type' => 'link_default',
        'weight' => 49,
      ),
      'full' => array(
        'label' => 'inline',
        'module' => 'link',
        'settings' => array(),
        'type' => 'link_default',
        'weight' => 49,
      ),
      'print' => array(
        'label' => 'inline',
        'module' => 'link',
        'settings' => array(),
        'type' => 'link_default',
        'weight' => 49,
      ),
      'rss' => array(
        'label' => 'inline',
        'module' => 'link',
        'settings' => array(),
        'type' => 'link_default',
        'weight' => 49,
      ),
      'teaser' => array(
        'label' => 'inline',
        'module' => 'link',
        'settings' => array(),
        'type' => 'link_default',
        'weight' => 49,
      ),
      'token' => array(
        'label' => 'inline',
        'module' => 'link',
        'settings' => array(),
        'type' => 'link_default',
        'weight' => 49,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_profile_website',
    'label' => 'Website',
    'required' => FALSE,
    'settings' => array(
      'attributes' => array(
        'class' => '',
        'rel' => '',
        'target' => 'default',
      ),
      'display' => array(
        'url_cutoff' => 80,
      ),
      'enable_tokens' => 1,
      'title' => 'optional',
      'title_maxlength' => 128,
      'title_value' => '',
      'url' => 0,
      'user_register_form' => FALSE,
      'validate_url' => 1,
    ),
    'weight' => 49,
    'widget' => array(
      'active' => 0,
      'module' => 'link',
      'settings' => array(
        'default_value_php' => NULL,
      ),
      'type' => 'link_field',
      'weight' => 49,
    ),
    'widget_type' => 'link',
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('AIM');
  t('Company');
  t('Country');
  t('Full name');
  t('Get email');
  t('IP address');
  t('Job title');
  t('Legacy contact ID');
  t('Listed');
  t('Mobile');
  t('Phone');
  t('Skype');
  t('Website');

  return $field_instances;
}
