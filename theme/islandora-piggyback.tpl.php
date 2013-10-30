<?php
/**
 * @file
 * This is the template file for the porcus object page.
 *
 * Here we build an html page using the variables passed in by
 * the islandora_porcus_preprocess_islandora_porcus
 * function.  Elements such as labels and buttons can be added here
 */

?>

<div class="islandora-piggyback-content-wrapper clearfix">
  <?php if (isset($piggyback_content)): ?>
    <div class="islandora-piggyback-content">
      <?php print $piggyback_content; ?>
    </div>
  <?php endif; ?>
  </div>


