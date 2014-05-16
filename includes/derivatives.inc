<?php

/**
 * @file
 * Functions for creating piggyback derivatives.
 */


/**
 * Creates the PIGGYBACK ds for porcus objects.
 *
 * @param AbstractObject $object
 *   An AbstractObject representing a Fedora object.
 * @param bool $force
 *   Whether derivative generation is being forced or not.
 *
 * @return array
 *   An array describing the outcome of the datastream creation.
 *
 * @see hook_islandora_derivative()
 */
function islandora_piggyback_create_piggyback(AbstractObject $object, $force = FALSE) {
  // Add a managed datastream to the ingested object.
  $ds = $object->constructDatastream('PIGGYBACK', "M");
  $ds->label = 'PIGGYBACK';
  $ds->mimetype = 'text/plain';
  $ds->setContentFromString("PIGGY BACK TEXT");
  $success = $object->ingestDatastream($ds);
  if ($success) {
    $return = array(
      'success' => TRUE,
      'messages' => array(
        array(
          'message' => t('The PIGGYBACK datastream was added successfully for @pid!'),
          'message_sub' => array('@pid' => $object->id),
          'type' => 'dsm',
        ),
      ),
    );
  }
  else {
    $return = array(
      'success' => FALSE,
      'messages' => array(
        array(
          'message' => t('Unable to create PIGGYBACK ds, the datastream was not added'),
          'type' => 'dsm',
          'severity' => 'warning',
        ),
      ),
    );
  }
  return $return;

}