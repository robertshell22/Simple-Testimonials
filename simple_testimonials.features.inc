<?php
/**
 * @file
 * testimonial_image_styles.features.inc
 */

/**
 * Implements hook_image_default_styles().
 */
function simple_testimonials_image_default_styles() {
  $styles = array();

  // Exported image style: testimonial_h.
  $styles['testimonial_h'] = array(
    'label' => 'testimonial_h',
    'effects' => array(
      1 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => '',
          'height' => 400,
          'upscale' => 1,
        ),
        'weight' => 1,
      ),
      9 => array(
        'name' => 'image_crop',
        'data' => array(
          'width' => 400,
          'height' => 400,
          'anchor' => 'center-center',
        ),
        'weight' => 3,
      ),
    ),
  );

  // Exported image style: testimonial_large.
  $styles['testimonial_large'] = array(
    'label' => 'testimonial_large',
    'effects' => array(
      5 => array(
        'name' => 'canvasactions_aspect',
        'data' => array(
          'portrait' => 'testimonial_v',
          'landscape' => 'testimonial_h',
          'ratio_adjustment' => 1,
        ),
        'weight' => 1,
      ),
      6 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => 300,
          'height' => '',
          'upscale' => 0,
        ),
        'weight' => 2,
      ),
    ),
  );

  // Exported image style: testimonial_medium.
  $styles['testimonial_medium'] = array(
    'label' => 'testimonial_medium',
    'effects' => array(
      7 => array(
        'name' => 'canvasactions_aspect',
        'data' => array(
          'portrait' => 'testimonial_v',
          'landscape' => 'testimonial_h',
          'ratio_adjustment' => 1,
        ),
        'weight' => 1,
      ),
      8 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => 200,
          'height' => '',
          'upscale' => 0,
        ),
        'weight' => 2,
      ),
    ),
  );

  // Exported image style: testimonial_small.
  $styles['testimonial_small'] = array(
    'label' => 'testimonial_small',
    'effects' => array(
      10 => array(
        'name' => 'canvasactions_aspect',
        'data' => array(
          'portrait' => 'testimonial_v',
          'landscape' => 'testimonial_h',
          'ratio_adjustment' => 1,
        ),
        'weight' => 1,
      ),
      11 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => 100,
          'height' => '',
          'upscale' => 0,
        ),
        'weight' => 2,
      ),
    ),
  );

  // Exported image style: testimonial_v.
  $styles['testimonial_v'] = array(
    'label' => 'testimonial_v',
    'effects' => array(
      3 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => 400,
          'height' => '',
          'upscale' => 1,
        ),
        'weight' => 1,
      ),
      4 => array(
        'name' => 'image_crop',
        'data' => array(
          'width' => 400,
          'height' => 400,
          'anchor' => 'center-top',
        ),
        'weight' => 2,
      ),
    ),
  );

  return $styles;
}
