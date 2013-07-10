<?php
/**
 * @file
 * email_content_type.features.inc
 */

/**
 * Implements hook_node_info().
 */
function email_content_type_node_info() {
  $items = array(
    'email' => array(
      'name' => t('E-mail'),
      'base' => 'node_content',
      'description' => t('Collection of emails'),
      'has_title' => '1',
      'title_label' => t('Emne'),
      'help' => t('<p>Some substitution options are available in the subject and body area:</p>
<ul>
<li><em>!name</em> will be replaced by the recipients name.</li>
<li><em>!email</em> will be replaced by the recipients email address.</li>
<li><em>!phone</em> will be replaced by the recipients phone number.</li>
<li><em>!date</em> will be replaced by date and time the mail is send.</li>
<li><em>!election_date</em> will be replaced by election date.</li>
<li><em>!link</em> will be replaced by one or more links to various actions.</li>
<li><em>!polling_station</em> will be replaced by the name of the polling station.</li>
<li><em>!polling_station_address</em> will be replaced by the address of the polling station</li>
<li><em>!position</em> will be replaced by the VAF/VA/TI label</li>
<li><em>!responsible</em> will be replaced by the name of responsible for a given polling station.</li>
</ul>
<p>Please note that in some cases the options above is not available.</p>'),
    ),
  );
  return $items;
}
