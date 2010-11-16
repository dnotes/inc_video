<?php

/**
 * Implementation of hook_strongarm().
 */
function inc_video_strongarm() {
  $export = array();
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'better_formats_allowed_video';
  $strongarm->value = array(
    0 => 1,
  );

  $export['better_formats_allowed_video'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_anonymous_video';
  $strongarm->value = 0;

  $export['comment_anonymous_video'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_controls_video';
  $strongarm->value = '3';

  $export['comment_controls_video'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_mode_video';
  $strongarm->value = '4';

  $export['comment_default_mode_video'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_order_video';
  $strongarm->value = '2';

  $export['comment_default_order_video'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_per_page_video';
  $strongarm->value = '50';

  $export['comment_default_per_page_video'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_form_location_video';
  $strongarm->value = '0';

  $export['comment_form_location_video'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_preview_video';
  $strongarm->value = '1';

  $export['comment_preview_video'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_subject_field_video';
  $strongarm->value = '1';

  $export['comment_subject_field_video'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_video';
  $strongarm->value = '2';

  $export['comment_video'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'content_extra_weights_video';
  $strongarm->value = array(
    'title' => '-5',
    'body_field' => '-1',
    'revision_information' => '4',
    'author' => '3',
    'options' => '5',
    'comment_settings' => '6',
    'menu' => '1',
    'taxonomy' => '-2',
    'path' => '7',
    'custom_breadcrumbs' => '8',
    'locations' => '2',
  );

  $export['content_extra_weights_video'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'custom_breadcrumbs_show_form_table_video';
  $strongarm->value = 1;

  $export['custom_breadcrumbs_show_form_table_video'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'location_defaultnum_video';
  $strongarm->value = '1';

  $export['location_defaultnum_video'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'location_maxnum_video';
  $strongarm->value = '1';

  $export['location_maxnum_video'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'location_settings_node_video';
  $strongarm->value = array(
    'multiple' => array(
      'min' => '0',
      'max' => '1',
      'add' => '1',
    ),
    'form' => array(
      'weight' => '2',
      'collapsible' => 0,
      'collapsed' => 0,
      'fields' => array(
        'name' => array(
          'collect' => '1',
          'default' => '',
          'weight' => '2',
        ),
        'street' => array(
          'collect' => '1',
          'default' => '',
          'weight' => '4',
        ),
        'additional' => array(
          'collect' => '1',
          'default' => '',
          'weight' => '6',
        ),
        'city' => array(
          'collect' => '1',
          'default' => '',
          'weight' => '8',
        ),
        'province' => array(
          'collect' => '1',
          'default' => '',
          'weight' => '10',
        ),
        'postal_code' => array(
          'collect' => '1',
          'default' => '',
          'weight' => '12',
        ),
        'country' => array(
          'collect' => '1',
          'default' => 'us',
          'weight' => '14',
        ),
        'locpick' => array(
          'collect' => '1',
          'weight' => '20',
        ),
      ),
    ),
    'display' => array(
      'weight' => '2',
      'hide' => array(
        'country' => 'country',
        'locpick' => 'locpick',
        'province_name' => 'province_name',
        'country_name' => 'country_name',
        'map_link' => 'map_link',
        'coords' => 'coords',
        'name' => 0,
        'street' => 0,
        'additional' => 0,
        'city' => 0,
        'province' => 0,
        'postal_code' => 0,
      ),
      'teaser' => 0,
      'full' => 1,
    ),
    'rss' => array(
      'mode' => 'simple',
    ),
  );

  $export['location_settings_node_video'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_video';
  $strongarm->value = array(
    0 => 'status',
    1 => 'promote',
  );

  $export['node_options_video'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_video_pattern';
  $strongarm->value = 'video/[title-raw]';

  $export['pathauto_node_video_pattern'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'submitted_by_comment_video';
  $strongarm->value = '';

  $export['submitted_by_comment_video'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'submitted_by_video';
  $strongarm->value = '<span class="byline">posted by [realname-link]</span>';

  $export['submitted_by_video'] = $strongarm;
  return $export;
}
