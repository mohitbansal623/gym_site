<?php
/**
 * @file
 * blogs_homepage_ct_and_views.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function blogs_homepage_ct_and_views_taxonomy_default_vocabularies() {
  return array(
    'iron_barbell' => array(
      'name' => 'Iron Barbell',
      'machine_name' => 'iron_barbell',
      'description' => '',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
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
