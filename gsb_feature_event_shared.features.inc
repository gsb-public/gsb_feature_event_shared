<?php
/**
 * @file
 * gsb_feature_event_shared.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function gsb_feature_event_shared_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "ds" && $api == "ds") {
    return array("version" => "1");
  }
}
