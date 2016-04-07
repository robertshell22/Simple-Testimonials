<?php

/**
 * @file
 * FAQ module variables file.
 */

/**
 * Implements hook_variable_info().
 */
function simple_testimonials_variable_info($options) {

  $variable['testimonials_title'] = array(
    'title' => t('Testimonials page title', array(), $options),
    'description' => t('Testimonials page title', array(), $options),
    'type' => 'string',
    'access' => 'administer testimonials',
  );

  $variable['testimonials_description'] = array(
    'title' => t('Testimonials page description', array(), $options),
    'description' => t('Testimonials page description', array(), $options),
    'type' => 'string',
    'access' => 'administer testimonials',
  );

  return $variable;
}
