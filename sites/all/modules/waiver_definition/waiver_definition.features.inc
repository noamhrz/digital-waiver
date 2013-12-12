<?php
/**
 * @file
 * waiver_definition.features.inc
 */

/**
 * Implements hook_node_info().
 */
function waiver_definition_node_info() {
  $items = array(
    'weiver_definition' => array(
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
