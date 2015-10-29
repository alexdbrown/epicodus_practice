<?php
/**
 * @file
 * awards_feature.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function awards_feature_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function awards_feature_node_info() {
  $items = array(
    'awards' => array(
      'name' => t('Awards'),
      'base' => 'node_content',
      'description' => t('Custom content type that displays awards '),
      'has_title' => '1',
      'title_label' => t('Awards'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
