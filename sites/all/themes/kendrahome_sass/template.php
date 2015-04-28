<?php

/**
 * @file
 * template.php
 */


function kendrahome_sass_preprocess_block(&$variables) {

  // In the header region visually hide block titles.
  if ($variables['block']->region == 'footer') {
    $variables ['classes_array'][] = 'col-sml-12 col-md-6 col-lg-6';
  }

}