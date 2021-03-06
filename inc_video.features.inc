<?php

/**
 * Implementation of hook_ctools_plugin_api().
 */
function inc_video_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => 1);
  }
}

/**
 * Implementation of hook_node_info().
 */
function inc_video_node_info() {
  $items = array(
    'video' => array(
      'name' => t('Video'),
      'module' => 'features',
      'description' => t('A video suitable for the news section of the site.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'has_body' => '1',
      'body_label' => t('Text'),
      'min_word_count' => '0',
      'help' => '',
    ),
  );
  return $items;
}

/**
 * Implementation of hook_views_api().
 */
function inc_video_views_api() {
  return array(
    'api' => '2',
  );
}
