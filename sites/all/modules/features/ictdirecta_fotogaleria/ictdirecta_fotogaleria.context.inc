<?php
/**
 * @file
 * ictdirecta_fotogaleria.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function ictdirecta_fotogaleria_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'fotogaleria';
  $context->description = '';
  $context->tag = '';
  $context->conditions = array(
    'node' => array(
      'values' => array(
        'fotogaleria' => 'fotogaleria',
      ),
      'options' => array(
        'node_form' => '1',
      ),
    ),
    'path' => array(
      'values' => array(
        'fotogaleria' => 'fotogaleria',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-fotogaleria-block' => array(
          'module' => 'views',
          'delta' => 'fotogaleria-block',
          'region' => 'content',
          'weight' => '20',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;
  $export['fotogaleria'] = $context;

  return $export;
}
