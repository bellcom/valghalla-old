<?php


$nodes = node_load_multiple(array(),array('type'=>'volunteers'));
$role_nodes = node_load_multiple(array(),array('type'=>'roles'));

foreach($role_nodes as $node){
  $roles[$node->nid] = $node->title;
}


foreach($nodes as $node){
  if(is_numeric($node->field_label['da'][0]['value'])){
    $node->field_label['da'][0]['value'] = strtolower($roles[$node->field_label['da'][0]['value']]);

    error_log(__FILE__.':'.__LINE__. print_r($node->field_label, 1)); // tth@bellcom.dk debugging
    node_save($node);
  }
}
