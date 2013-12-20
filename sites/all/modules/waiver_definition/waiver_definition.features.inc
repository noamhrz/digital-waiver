<?php
/**
 * @file
 * waiver_definition.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function waiver_definition_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "page_manager" && $api == "pages_default") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function waiver_definition_node_info() {
  $items = array(
    'waiver' => array(
      'name' => t('Waiver'),
      'base' => 'node_content',
      'description' => t('The details of an athlete for a specific waiver definition'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'waiver_definition' => array(
      'name' => t('Waiver definition'),
      'base' => 'node_content',
      'description' => t('The definitions of the waiver'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
