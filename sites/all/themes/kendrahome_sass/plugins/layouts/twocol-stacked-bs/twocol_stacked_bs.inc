<?php

/**
 * Implements hook_panels_layouts().
 */
// Plugin definition
$plugin = array(
  'title' => t('Two Columns Stacked'),
  'category' => t('Kendra'),
  'icon' => 'twocol_stacked_bs.png',
  'theme' => 'twocol_stacked_bs',
  'admin css' => '../panels-kendra-layouts-admin.css',
  'regions' => array(
    'top' => t('Top'),
    'left' => t('Left'),
    'right' => t('Right'),
    'bottom' => t('Bottom'),
  ),
);
