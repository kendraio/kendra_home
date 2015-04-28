<?php
/**
 * @file
 * Template for a 3 column panel layout.
 *
 * This template provides a very simple "one column" panel display layout.
 *
 * Variables:
 * - $id: An optional CSS id to use for the layout.
 * - $content: An array of content, each item in the array is keyed to one
 *   panel of the layout. This layout supports the following sections:
 */
?>
<div class="<?php print $classes ?>" <?php if (!empty($css_id)) { print "id=\"$css_id\""; } ?>>
  <div class="row-fluid container-fluid region1">
   <?php print $content['region-1']; ?>
  </div>
  <div class="row-fluid container-fluid region2">
    <?php print $content['region-2']; ?>
  </div>
  <div class="row-fluid container-fluid region3" role="footer">
    <?php print $content['region-3']; ?>
  </div>
</div>

