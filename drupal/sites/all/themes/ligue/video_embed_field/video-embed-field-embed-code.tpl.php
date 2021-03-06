<?php
/**
 * @file
 * Default theme implementation to display a video embed field.
 *
 * Variables available:
 * - $url: The URL of the video to display embed code for
 * - $style: The style name of the embed code to use
 * - $style_settings: The style settings for the embed code
 * - $handler: The name of the video handler
 * - $embed_code: The embed code
 * - $data: Additional video data
 *
 * @see template_preprocess_video_embed()
 */
?>

<div class="embed-responsive embed-responsive-16by9">
  <?php print $embed_code; ?>
</div>
