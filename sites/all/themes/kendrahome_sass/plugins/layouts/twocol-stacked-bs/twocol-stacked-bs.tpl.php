<?php
/**
 * @file
 * Template for a 2 column panel layout.
 *
 * This template provides a very simple "two column" panel display layout.
 *
 * Variables:
 * - $id: An optional CSS id to use for the layout.
 * - $content: An array of content, each item in the array is keyed to one
 *   panel of the layout. This layout supports the following sections:
 */
?>

<div class="<?php print $classes ?>" <?php if (!empty($css_id)) { print "id=\"$css_id\""; } ?>>
  <div class="row-fluid container region1">
    <?php print $content['top']; ?>
  </div>
  <div class="row-fluid container region2">
    <div class="col-md-8">
      <?php print $content['left']; ?>
    </div>
    <div class="col-md-4">
      <?php print $content['right']; ?>
    </div>
  </div>
   <div class="row-fluid container region3" role="footer">
    <?php print $content['bottom']; ?>
  </div>
</div>
