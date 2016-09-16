<?php
/**
 * @file
 * opl_landing.features.field_base.inc
 */

/**
 * Implements hook_field_default_field_bases().
 */
function opl_landing_field_default_field_bases() {
  $field_bases = array();

  // Exported field_base: 'field_destination_page'.
  $field_bases['field_destination_page'] = array(
    'active' => 1,
    'cardinality' => 3,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_destination_page',
    'indexes' => array(
      'value' => array(
        0 => 'value',
      ),
    ),
    'locked' => 0,
    'module' => 'list',
    'settings' => array(
      'allowed_values' => array(
        0 => 'About OPL',
        1 => 'Services at the library',
        2 => 'Services we offer',
        3 => 'Homepage',
        4 => 'Locations',
        5 => 'Services we offer - no image',
        6 => 'Browse',
        7 => 'Contact',
        8 => 'eBooks',
        9 => 'Guides-English',
        10 => 'Guides-Archambault',
        11 => 'Donate',
        12 => '2013 Annual Report',
        14 => '2014 Annual Report',
        15 => 'Human library',
        16 => 'Booking',
        17 => 'Teens',
        18 => 'Imagine space',
        19 => 'Library month',
      ),
      'allowed_values_function' => '',
      'entity_translation_sync' => FALSE,
      'profile2_private' => FALSE,
    ),
    'translatable' => 1,
    'type' => 'list_integer',
  );

  // Exported field_base: 'field_link'.
  $field_bases['field_link'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_link',
    'indexes' => array(),
    'locked' => 0,
    'module' => 'link',
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
      'entity_translation_sync' => FALSE,
      'profile2_private' => FALSE,
      'title' => 'optional',
      'title_maxlength' => 128,
      'title_value' => '',
      'url' => 0,
    ),
    'translatable' => 1,
    'type' => 'link_field',
  );

  return $field_bases;
}
