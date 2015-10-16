<?php
/**
 * @file
 * cwrc_featured_projects.features.inc
 */

/**
 * Implements hook_views_api().
 */
function cwrc_featured_projects_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_fe_nodequeue_export_fields().
 */
function cwrc_featured_projects_fe_nodequeue_export_fields() {
  $nodequeues = array();

  // Exported nodequeues: featured_projects
  $nodequeues['featured_projects'] = array(
    'name' => 'featured_projects',
    'title' => 'Featured projects',
    'subqueue_title' => '',
    'size' => 10,
    'link' => '',
    'link_remove' => '',
    'owner' => 'nodequeue',
    'show_in_ui' => 1,
    'show_in_tab' => 1,
    'show_in_links' => 0,
    'reference' => 0,
    'reverse' => 0,
    'insert_at_front' => 1,
    'i18n' => 0,
    'subqueues' => 1,
    'types' => array(
      0 => 'project',
    ),
    'roles' => array(),
    'count' => 0,
  );

  return $nodequeues;
}