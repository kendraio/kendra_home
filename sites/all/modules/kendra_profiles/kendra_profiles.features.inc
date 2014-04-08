<?php
/**
 * @file
 * kendra_profiles.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function kendra_profiles_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function kendra_profiles_node_info() {
  $items = array(
    'profile' => array(
      'name' => t('Profile'),
      'base' => 'node_content',
      'description' => t('A user profile built as content.'),
      'has_title' => '1',
      'title_label' => t('Full name'),
      'help' => '',
    ),
  );
  return $items;
}
