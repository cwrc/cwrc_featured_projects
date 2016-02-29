<?php
/**
 * @file
 * cwrc_featured_projects.features.fe_block_settings.inc
 */

/**
 * Implements hook_default_fe_block_settings().
 */
function cwrc_featured_projects_default_fe_block_settings() {
  $export = array();

  $export['version'] = '2.0';

  $export['views-66553d96d3282749a55e20a1851a2cac'] = array(
    'cache' => 1,
    'css_class' => '',
    'custom' => 0,
    'delta' => '66553d96d3282749a55e20a1851a2cac',
    'module' => 'views',
    'node_types' => array(),
    'pages' => '<front>',
    'roles' => array(),
    'themes' => array(
      'de_theme' => array(
        'region' => 'content',
        'status' => 1,
        'theme' => 'de_theme',
        'weight' => -2,
      ),
    ),
    'title' => '',
    'visibility' => 1,
  );

  return $export;
}
