<?php
/**
 * @file
 * ref_txn.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function ref_txn_taxonomy_default_vocabularies() {
  return array(
    'branch_or_unit' => array(
      'name' => 'Branch or Unit',
      'machine_name' => 'branch_or_unit',
      'description' => 'A library branch (e.g., Music) or unit (e.g., Green Library - IC)',
      'hierarchy' => '1',
      'module' => 'taxonomy',
      'weight' => '0',
      'rdf_mapping' => array(
        'rdftype' => array(
          0 => 'skos:ConceptScheme',
        ),
        'name' => array(
          'predicates' => array(
            0 => 'dc:title',
          ),
        ),
        'description' => array(
          'predicates' => array(
            0 => 'rdfs:comment',
          ),
        ),
      ),
    ),
    'patron_status' => array(
      'name' => 'Patron Status',
      'machine_name' => 'patron_status',
      'description' => 'e.g., Faculty, Staff, Undergraduate, Graduate, Visitor, Visiting Scholar',
      'hierarchy' => '1',
      'module' => 'taxonomy',
      'weight' => '0',
      'rdf_mapping' => array(
        'rdftype' => array(
          0 => 'skos:ConceptScheme',
        ),
        'name' => array(
          'predicates' => array(
            0 => 'dc:title',
          ),
        ),
        'description' => array(
          'predicates' => array(
            0 => 'rdfs:comment',
          ),
        ),
      ),
    ),
    'service_point' => array(
      'name' => 'Service Point',
      'machine_name' => 'service_point',
      'description' => 'Service point within a library where the reference question was asked (e.g., circulation desk, reference desk, office)',
      'hierarchy' => '1',
      'module' => 'taxonomy',
      'weight' => '0',
      'rdf_mapping' => array(
        'rdftype' => array(
          0 => 'skos:ConceptScheme',
        ),
        'name' => array(
          'predicates' => array(
            0 => 'dc:title',
          ),
        ),
        'description' => array(
          'predicates' => array(
            0 => 'rdfs:comment',
          ),
        ),
      ),
    ),
  );
}
