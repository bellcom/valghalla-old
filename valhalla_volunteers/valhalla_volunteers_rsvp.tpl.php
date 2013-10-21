<?php
/**
 * available variables is
 *  $rsvp: the state of the rsvp, if empty this is undesided.
 *  $name: name of the volunteer
 *  $phone: the volunteers phone number
 *  $email: the volunteers email adderss
 *  $form: the rsvp form
 */
?>

<h2><?php print t('Hej %name', array('%name' => $name)) ?></h2>

<div>
  <p><?php print t('Her kan du tilkendegive om du ønsker at udfylde den post vi har tiltænkt dig i det kommende valg.') ?></p>
</div>

<?php print drupal_render($form) ?>

