<?php
  // Render or hide parts of $form: var_export($form);
  // Example given:
  dpm('template');
  dpm($form);
  
  hide($form['title']);
  print render($form['first']);
  // Render remaining form elements as usual.
  print drupal_render_children($form);
?>

