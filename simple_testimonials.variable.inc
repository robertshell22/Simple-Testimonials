<?php

/**
 * @file
 * Testimonials module variables file.
 */

/**
 * Implements hook_variable_info().
 */
function simple_testimonials_variable_info($options) {

  $variable['simple_testimonials_title'] = array(
    'title' => t('Testimonials page title', array(), $options),
    'description' => t('Testimonials page title', array(), $options),
    'type' => 'string',
    'access' => 'administer testimonials',
  );

  $variable['simple_testimonials_description'] = array(
    'title' => t('Testimonials page description', array(), $options),
    'description' => t('Testimonials page description', array(), $options),
    'type' => 'string',
    'access' => 'administer testimonials',
  );

  $variable['simple_testimonials_path'] = array(
    'title' => t('Testimonials path', array(), $options),
    'description' => t('Testimonials path', array(), $options),
    'type' => 'string',
    'access' => 'administer testimonials',
  );

  $variable['simple_testimonials_path_old'] = array(
    'title' => t('Testimonials path old', array(), $options),
    'description' => t('Testimonials path old', array(), $options),
    'type' => 'string',
    'access' => 'administer testimonials',
  );

  return $variable;
}
