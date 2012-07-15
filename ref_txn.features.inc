<?php
/**
 * @file
 * ref_txn.features.inc
 */

/**
 * Implements hook_node_info().
 */
function ref_txn_node_info() {
  $items = array(
    'ref_txn' => array(
      'name' => t('Reference Transaction'),
      'base' => 'node_content',
      'description' => t('A reference transaction is a recording of one or multiple questions. Record question type (Directional, Reference, Technical Assistance) and medium of communication (In-person, Phone, E-mail, Chat, Written Correspondence)'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
