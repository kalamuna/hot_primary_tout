<?php
/**
 * @file
 * hot_primary_tout.default_breakpoint_group.inc
 */

/**
 * Implements hook_default_breakpoint_group().
 */
function hot_primary_tout_default_breakpoint_group() {
  $export = array();

  // Breakpoints.
  $breakpoints = array();
  $breakpoints[] = 'breakpoints.hot_primary_tout_3.screen-xxs';
  $breakpoints[] = 'breakpoints.hot_primary_tout_3.screen-xs';
  $breakpoints[] = 'breakpoints.hot_primary_tout_3.screen-sm';
  $breakpoints[] = 'breakpoints.hot_primary_tout_3.screen-md';
  $breakpoints[] = 'breakpoints.hot_primary_tout_3.screen-lg';

  // Breakpoint group.
  $breakpoint_group = new stdClass();
  $breakpoint_group->disabled = FALSE; /* Edit this to true to make a default breakpoint_group disabled initially */
  $breakpoint_group->api_version = 1;
  $breakpoint_group->machine_name = 'hot_primary_tout_3';
  $breakpoint_group->name = 'Picture Third (4/12)';
  $breakpoint_group->breakpoints = $breakpoints;
  $breakpoint_group->type = 'custom';
  $breakpoint_group->overridden = 0;
  $export['hot_primary_tout_3'] = $breakpoint_group;

  return $export;
}
