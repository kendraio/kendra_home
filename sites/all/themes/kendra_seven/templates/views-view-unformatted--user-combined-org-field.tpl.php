
<?php if (!empty($title)): ?>
  <h3><?php print $title; ?></h3>
<?php endif; ?>
<?php foreach ($rows as $id => $row): ?>
  <?php // if (!empty($classes_array[$id])) { print '<div class="' . $classes_array[$id] .'">';  } ?>
    <?php print $row; ?>
  <?php // if (!empty($classes_array[$id])) { print '</div>'; } ?>
<?php endforeach; ?>

