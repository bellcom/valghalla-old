<?php
/**
 * @file
 * valhalla_page_manager_handlers.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function valhalla_page_manager_handlers_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "page_manager" && $api == "pages_default") {
    return array("version" => "1");
  }
}
