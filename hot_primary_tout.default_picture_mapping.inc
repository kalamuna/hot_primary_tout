<?php
/**
 * @file
 * kalapicture.default_picture_mapping.inc
 */

/**
 * Implements hook_default_picture_mapping().
 */
function hot_primary_tout_default_picture_mapping() {
  $export = array();

  $picture_mapping = new stdClass();
  $picture_mapping->disabled = FALSE; /* Edit this to true to make a default picture_mapping disabled initially */
  $picture_mapping->api_version = 1;
  $picture_mapping->machine_name = 'hot_primary_tout_4';
  $picture_mapping->breakpoint_group = 'hot_primary_tout_4';
  $picture_mapping->mapping = array(
    'breakpoints.kalapicture.screen-xxs' => array(
      '1x' => 'hot_primary_tout_4_breakpoints_screen-xxs_1x',
      '2x' => 'hot_primary_tout_4_breakpoints_screen-xxs_2x',
    ),
    'breakpoints.kalapicture.screen-xs' => array(
      '1x' => 'hot_primary_tout_4_breakpoints_screen-xs_1x',
      '2x' => 'hot_primary_tout_4_breakpoints_screen-xs_2x',
    ),
    'breakpoints.kalapicture.screen-sm' => array(
      '1x' => 'hot_primary_tout_4_breakpoints_screen-sm_1x',
      '2x' => 'hot_primary_tout_4_breakpoints_screen-sm_2x',
    ),
    'breakpoints.kalapicture.screen-md' => array(
      '1x' => 'hot_primary_tout_4_breakpoints_screen-md_1x',
      '2x' => 'hot_primary_tout_4_breakpoints_screen-md_2x',
    ),
    'breakpoints.kalapicture.screen-lg' => array(
      '1x' => 'hot_primary_tout_4_breakpoints_screen-lg_1x',
      '2x' => 'hot_primary_tout_4_breakpoints_screen-lg_2x',
    ),
  );
  $export['hot_primary_tout_4'] = $picture_mapping;

  return $export;
}
