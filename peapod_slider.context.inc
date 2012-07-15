<?php
/**
 * @file
 * peapod_slider.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function peapod_slider_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'front_page_slider';
  $context->description = 'Sets up the slider on the front page';
  $context->tag = 'Structure';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        '<front>' => '<front>',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-featured_slider-block' => array(
          'module' => 'views',
          'delta' => 'featured_slider-block',
          'region' => 'content',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Sets up the slider on the front page');
  t('Structure');
  $export['front_page_slider'] = $context;

  return $export;
}
