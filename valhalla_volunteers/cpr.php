<?php

echo "Update all volunteers cpr numbers, to not include '-'\n\n";
$query = new EntityFieldQuery();
$query->entityCondition('entity_type', 'node')
  ->entityCondition('bundle', 'volunteers');
$results = $query->execute();
$nodes = node_load_multiple(array_keys($results['node']));

foreach($nodes as $node){
  error_log(__FILE__.':'.__LINE__. print_r($node->field_cpr_number['da'][0]['value'], 1)); // tth@bellcom.dk debugging
  $node->field_cpr_number['da'][0]['value'] = str_replace('-', '', $node->field_cpr_number['da'][0]['value']);

  node_save($node);
}
