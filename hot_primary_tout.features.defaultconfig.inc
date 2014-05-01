<?php
/**
 * @file
 * hot_primary_tout.features.defaultconfig.inc
 */

/**
 * Implements hook_defaultconfig_features().
 */
function hot_primary_tout_defaultconfig_features() {
  return array(
    'hot_primary_tout' => array(
      'field_default_fields' => 'field_default_fields',
      'user_default_permissions' => 'user_default_permissions',
    ),
  );
}

/**
 * Implements hook_defaultconfig_field_default_fields().
 */
function hot_primary_tout_defaultconfig_field_default_fields() {
  $fields = array();

  // Exported field: 'fieldable_panels_pane-hot_primary_tout_third-field_hot_primary_tout_caption'.
  $fields['fieldable_panels_pane-hot_primary_tout_third-field_hot_primary_tout_caption'] = array(
    'field_config' => array(
      'active' => 1,
      'cardinality' => 1,
      'deleted' => 0,
      'entity_types' => array(),
      'field_name' => 'field_hot_primary_tout_caption',
      'foreign keys' => array(
        'format' => array(
          'columns' => array(
            'format' => 'format',
          ),
          'table' => 'filter_format',
        ),
      ),
      'indexes' => array(
        'format' => array(
          0 => 'format',
        ),
      ),
      'locked' => 0,
      'module' => 'text',
      'settings' => array(),
      'translatable' => 0,
      'type' => 'text_long',
    ),
    'field_instance' => array(
      'bundle' => 'hot_primary_tout_third',
      'default_value' => NULL,
      'deleted' => 0,
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'hidden',
          'module' => 'text',
          'settings' => array(),
          'type' => 'text_default',
          'weight' => 1,
        ),
      ),
      'entity_type' => 'fieldable_panels_pane',
      'field_name' => 'field_hot_primary_tout_caption',
      'label' => 'Caption',
      'required' => 0,
      'settings' => array(
        'linkit' => array(
          'enable' => 0,
          'insert_plugin' => '',
        ),
        'text_processing' => 0,
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'text',
        'settings' => array(
          'rows' => 5,
        ),
        'type' => 'text_textarea',
        'weight' => -3,
      ),
    ),
  );

  // Exported field: 'fieldable_panels_pane-hot_primary_tout_third-field_hot_primary_tout_image'.
  $fields['fieldable_panels_pane-hot_primary_tout_third-field_hot_primary_tout_image'] = array(
    'field_config' => array(
      'active' => 1,
      'cardinality' => 1,
      'deleted' => 0,
      'entity_types' => array(),
      'field_name' => 'field_hot_primary_tout_image',
      'foreign keys' => array(
        'fid' => array(
          'columns' => array(
            'fid' => 'fid',
          ),
          'table' => 'file_managed',
        ),
      ),
      'indexes' => array(
        'fid' => array(
          0 => 'fid',
        ),
      ),
      'locked' => 0,
      'module' => 'image',
      'settings' => array(
        'default_image' => 0,
        'uri_scheme' => 'public',
      ),
      'translatable' => 0,
      'type' => 'image',
    ),
    'field_instance' => array(
      'bundle' => 'hot_primary_tout_third',
      'deleted' => 0,
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'hidden',
          'module' => 'picture',
          'settings' => array(
            'colorbox' => 'hot_primary_tout_3',
            'fallback_image_style' => 'hot_primary_tout_3',
            'image_link' => '',
            'picture_group' => 'hot_primary_tout_3',
          ),
          'type' => 'picture',
          'weight' => 0,
        ),
      ),
      'entity_type' => 'fieldable_panels_pane',
      'field_name' => 'field_hot_primary_tout_image',
      'label' => '1/3 Image',
      'required' => 0,
      'settings' => array(
        'alt_field' => 1,
        'default_image' => 0,
        'file_directory' => '',
        'file_extensions' => 'png gif jpg jpeg',
        'max_filesize' => '',
        'max_resolution' => '',
        'min_resolution' => '',
        'title_field' => 0,
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'image',
        'settings' => array(
          'preview_image_style' => 'thumbnail',
          'progress_indicator' => 'throbber',
        ),
        'type' => 'image_image',
        'weight' => -4,
      ),
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('1/3 Image');
  t('Caption');

  return $fields;
}

/**
 * Implements hook_defaultconfig_user_default_permissions().
 */
function hot_primary_tout_defaultconfig_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'create fieldable hot_primary_tout_third'.
  $permissions['create fieldable hot_primary_tout_third'] = array(
    'name' => 'create fieldable hot_primary_tout_third',
    'roles' => array(),
    'module' => 'fieldable_panels_panes',
  );

  // Exported permission: 'delete fieldable hot_primary_tout_third'.
  $permissions['delete fieldable hot_primary_tout_third'] = array(
    'name' => 'delete fieldable hot_primary_tout_third',
    'roles' => array(),
    'module' => 'fieldable_panels_panes',
  );

  // Exported permission: 'edit fieldable hot_primary_tout_third'.
  $permissions['edit fieldable hot_primary_tout_third'] = array(
    'name' => 'edit fieldable hot_primary_tout_third',
    'roles' => array(),
    'module' => 'fieldable_panels_panes',
  );

  return $permissions;
}
