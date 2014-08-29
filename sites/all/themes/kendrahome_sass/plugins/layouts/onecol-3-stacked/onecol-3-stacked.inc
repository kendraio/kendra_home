<?php

/**
 * implementation of hook_panels_layouts()
 */
// Plugin definition
$plugin = array(
  'title' => t('Single column - 3 regions stacked'),
  'category' => t('Columns: 1'),
  'icon' => 'onecol-3-stacked.png',
  'theme' => 'onecol-3-stacked',
  'css' => 'onecol-3-stacked.css',
  'regions' => array(
    'region-1' => t('Region 1'),
    'region-2' => t('Region 2'),
    'region-3' => t('Region 3')
  ),
);
