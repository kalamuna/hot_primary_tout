<?php
/**
 * @file
 * hot_primary_tout.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function hot_primary_tout_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "breakpoints" && $api == "default_breakpoint_group") {
    return array("version" => "1");
  }
  if ($module == "breakpoints" && $api == "default_breakpoints") {
    return array("version" => "1");
  }
  if ($module == "picture" && $api == "default_picture_mapping") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_image_default_styles().
 */
function hot_primary_tout_image_default_styles() {
  $styles = array();

  // Exported image style: hot_primary_tout_3.
  $styles['hot_primary_tout_3'] = array(
    'name' => 'hot_primary_tout_3',
    'label' => 'Picture Third',
    'effects' => array(
      22 => array(
        'label' => 'Scale',
        'help' => 'Scaling will maintain the aspect-ratio of the original image. If only a single dimension is specified, the other dimension will be calculated.',
        'effect callback' => 'image_scale_effect',
        'dimensions callback' => 'image_scale_dimensions',
        'form callback' => 'image_scale_form',
        'summary theme' => 'image_scale_summary',
        'module' => 'image',
        'name' => 'image_scale',
        'data' => array(
          'width' => 293,
          'height' => '',
          'upscale' => 0,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: hot_primary_tout_3_breakpoints_screen-lg_1x.
  $styles['hot_primary_tout_3_breakpoints_screen-lg_1x'] = array(
    'name' => 'hot_primary_tout_3_breakpoints_screen-lg_1x',
    'label' => 'hot_primary_tout_3_breakpoints_screen-lg_1x',
    'effects' => array(
      23 => array(
        'label' => 'Scale',
        'help' => 'Scaling will maintain the aspect-ratio of the original image. If only a single dimension is specified, the other dimension will be calculated.',
        'effect callback' => 'image_scale_effect',
        'dimensions callback' => 'image_scale_dimensions',
        'form callback' => 'image_scale_form',
        'summary theme' => 'image_scale_summary',
        'module' => 'image',
        'name' => 'image_scale',
        'data' => array(
          'width' => 293,
          'height' => '',
          'upscale' => 0,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: hot_primary_tout_3_breakpoints_screen-lg_2x.
  $styles['hot_primary_tout_3_breakpoints_screen-lg_2x'] = array(
    'name' => 'hot_primary_tout_3_breakpoints_screen-lg_2x',
    'label' => 'hot_primary_tout_3_breakpoints_screen-lg_2x',
    'effects' => array(
      24 => array(
        'label' => 'Scale',
        'help' => 'Scaling will maintain the aspect-ratio of the original image. If only a single dimension is specified, the other dimension will be calculated.',
        'effect callback' => 'image_scale_effect',
        'dimensions callback' => 'image_scale_dimensions',
        'form callback' => 'image_scale_form',
        'summary theme' => 'image_scale_summary',
        'module' => 'image',
        'name' => 'image_scale',
        'data' => array(
          'width' => 586,
          'height' => '',
          'upscale' => 0,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: hot_primary_tout_3_breakpoints_screen-md_1x.
  $styles['hot_primary_tout_3_breakpoints_screen-md_1x'] = array(
    'name' => 'hot_primary_tout_3_breakpoints_screen-md_1x',
    'label' => 'hot_primary_tout_3_breakpoints_screen-md_1x',
    'effects' => array(
      25 => array(
        'label' => 'Scale',
        'help' => 'Scaling will maintain the aspect-ratio of the original image. If only a single dimension is specified, the other dimension will be calculated.',
        'effect callback' => 'image_scale_effect',
        'dimensions callback' => 'image_scale_dimensions',
        'form callback' => 'image_scale_form',
        'summary theme' => 'image_scale_summary',
        'module' => 'image',
        'name' => 'image_scale',
        'data' => array(
          'width' => 235,
          'height' => '',
          'upscale' => 0,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: hot_primary_tout_3_breakpoints_screen-md_2x.
  $styles['hot_primary_tout_3_breakpoints_screen-md_2x'] = array(
    'name' => 'hot_primary_tout_3_breakpoints_screen-md_2x',
    'label' => 'hot_primary_tout_3_breakpoints_screen-md_2x',
    'effects' => array(
      26 => array(
        'label' => 'Scale',
        'help' => 'Scaling will maintain the aspect-ratio of the original image. If only a single dimension is specified, the other dimension will be calculated.',
        'effect callback' => 'image_scale_effect',
        'dimensions callback' => 'image_scale_dimensions',
        'form callback' => 'image_scale_form',
        'summary theme' => 'image_scale_summary',
        'module' => 'image',
        'name' => 'image_scale',
        'data' => array(
          'width' => 470,
          'height' => '',
          'upscale' => 0,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: hot_primary_tout_3_breakpoints_screen-sm_1x.
  $styles['hot_primary_tout_3_breakpoints_screen-sm_1x'] = array(
    'name' => 'hot_primary_tout_3_breakpoints_screen-sm_1x',
    'label' => 'hot_primary_tout_3_breakpoints_screen-sm_1x',
    'effects' => array(
      28 => array(
        'label' => 'Scale',
        'help' => 'Scaling will maintain the aspect-ratio of the original image. If only a single dimension is specified, the other dimension will be calculated.',
        'effect callback' => 'image_scale_effect',
        'dimensions callback' => 'image_scale_dimensions',
        'form callback' => 'image_scale_form',
        'summary theme' => 'image_scale_summary',
        'module' => 'image',
        'name' => 'image_scale',
        'data' => array(
          'width' => 180,
          'height' => '',
          'upscale' => 0,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: hot_primary_tout_3_breakpoints_screen-sm_2x.
  $styles['hot_primary_tout_3_breakpoints_screen-sm_2x'] = array(
    'name' => 'hot_primary_tout_3_breakpoints_screen-sm_2x',
    'label' => 'hot_primary_tout_3_breakpoints_screen-sm_2x',
    'effects' => array(
      29 => array(
        'label' => 'Scale',
        'help' => 'Scaling will maintain the aspect-ratio of the original image. If only a single dimension is specified, the other dimension will be calculated.',
        'effect callback' => 'image_scale_effect',
        'dimensions callback' => 'image_scale_dimensions',
        'form callback' => 'image_scale_form',
        'summary theme' => 'image_scale_summary',
        'module' => 'image',
        'name' => 'image_scale',
        'data' => array(
          'width' => 350,
          'height' => '',
          'upscale' => 0,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: hot_primary_tout_3_breakpoints_screen-xs_1x.
  $styles['hot_primary_tout_3_breakpoints_screen-xs_1x'] = array(
    'name' => 'hot_primary_tout_3_breakpoints_screen-xs_1x',
    'label' => 'hot_primary_tout_3_breakpoints_screen-xs_1x',
    'effects' => array(
      33 => array(
        'label' => 'Scale',
        'help' => 'Scaling will maintain the aspect-ratio of the original image. If only a single dimension is specified, the other dimension will be calculated.',
        'effect callback' => 'image_scale_effect',
        'dimensions callback' => 'image_scale_dimensions',
        'form callback' => 'image_scale_form',
        'summary theme' => 'image_scale_summary',
        'module' => 'image',
        'name' => 'image_scale',
        'data' => array(
          'width' => 184,
          'height' => '',
          'upscale' => 0,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: hot_primary_tout_3_breakpoints_screen-xs_2x.
  $styles['hot_primary_tout_3_breakpoints_screen-xs_2x'] = array(
    'name' => 'hot_primary_tout_3_breakpoints_screen-xs_2x',
    'label' => 'hot_primary_tout_3_breakpoints_screen-xs_2x',
    'effects' => array(
      34 => array(
        'label' => 'Scale',
        'help' => 'Scaling will maintain the aspect-ratio of the original image. If only a single dimension is specified, the other dimension will be calculated.',
        'effect callback' => 'image_scale_effect',
        'dimensions callback' => 'image_scale_dimensions',
        'form callback' => 'image_scale_form',
        'summary theme' => 'image_scale_summary',
        'module' => 'image',
        'name' => 'image_scale',
        'data' => array(
          'width' => 369,
          'height' => '',
          'upscale' => 0,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: hot_primary_tout_3_breakpoints_screen-xxs_1x.
  $styles['hot_primary_tout_3_breakpoints_screen-xxs_1x'] = array(
    'name' => 'hot_primary_tout_3_breakpoints_screen-xxs_1x',
    'label' => 'hot_primary_tout_3_breakpoints_screen-xxs_1x',
    'effects' => array(
      30 => array(
        'label' => 'Scale',
        'help' => 'Scaling will maintain the aspect-ratio of the original image. If only a single dimension is specified, the other dimension will be calculated.',
        'effect callback' => 'image_scale_effect',
        'dimensions callback' => 'image_scale_dimensions',
        'form callback' => 'image_scale_form',
        'summary theme' => 'image_scale_summary',
        'module' => 'image',
        'name' => 'image_scale',
        'data' => array(
          'width' => 112,
          'height' => '',
          'upscale' => 0,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: hot_primary_tout_3_breakpoints_screen-xxs_2x.
  $styles['hot_primary_tout_3_breakpoints_screen-xxs_2x'] = array(
    'name' => 'hot_primary_tout_3_breakpoints_screen-xxs_2x',
    'label' => 'hot_primary_tout_3_breakpoints_screen-xxs_2x',
    'effects' => array(
      31 => array(
        'label' => 'Scale',
        'help' => 'Scaling will maintain the aspect-ratio of the original image. If only a single dimension is specified, the other dimension will be calculated.',
        'effect callback' => 'image_scale_effect',
        'dimensions callback' => 'image_scale_dimensions',
        'form callback' => 'image_scale_form',
        'summary theme' => 'image_scale_summary',
        'module' => 'image',
        'name' => 'image_scale',
        'data' => array(
          'width' => 200,
          'height' => '',
          'upscale' => 0,
        ),
        'weight' => 1,
      ),
    ),
  );

  return $styles;
}
