<?php
/*
 *
 * @author Jesper Mathiassen <jm@bellcom.dk>
 * @copyright Bellcom Open Source aps.
 */

function valhalla_volunteers_admin_mail_form($form, &$form_state) {
  module_load_include('inc', 'valhalla_volunteers');
  $form['valhalla_volunteers_mail'] = array(
      '#type' => 'fieldset',
      '#title' => 'Mail til automatisk udsendelse',
      '#suffix' =>  _valhalla_helper_get_volunteer_info_params('info'),
  );

  $form['valhalla_volunteers_mail']['valhalla_rsvp_email'] = array(
      '#type' => 'fieldset',
      '#title' => 'Mail til indkaldelser',
      '#collapsible' => true,
      '#collapsed' => true,
  );
  $form['valhalla_volunteers_mail']['valhalla_rsvp_email']['valhalla_rsvp_email_subject'] = array(
      '#type' => 'textfield',
      '#title' => t('Emne linie til indkalselde'),
      '#default_value' => variable_get('valhalla_rsvp_email_subject', _valhalla_volunteers_default_rsvp_email('subject')),
  );
  $form['valhalla_volunteers_mail']['valhalla_rsvp_email']['valhalla_rsvp_email_body'] = array(
      '#type' => 'textarea',
      '#title' => t('Indkaldelse mail indhold'),
      '#rows' => 15,
      '#default_value' => variable_get('valhalla_rsvp_email_body', _valhalla_volunteers_default_rsvp_email('body')),
  );

  $form['valhalla_volunteers_mail']['valhalla_rsvp_reminder'] = array(
      '#type' => 'fieldset',
      '#title' => 'Mail til påmindelser',
      '#collapsible' => true,
      '#collapsed' => true,
  );
  $form['valhalla_volunteers_mail']['valhalla_rsvp_reminder']['valhalla_rsvp_reminder_subject'] = array(
      '#type' => 'textfield',
      '#title' => t('Emne linie til påmindelses mail'),
      '#default_value' => variable_get('valhalla_rsvp_reminder_subject', _valhalla_volunteers_default_rsvp_reminder('subject')),
  );
  $form['valhalla_volunteers_mail']['valhalla_rsvp_reminder']['valhalla_rsvp_reminder_body'] = array(
      '#type' => 'textarea',
      '#title' => t('Påmindelses mail indhold'),
      '#rows' => 15,
      '#default_value' => variable_get('valhalla_rsvp_reminder_body', _valhalla_volunteers_default_rsvp_reminder('body')),
  );
  $form['valhalla_volunteers_mail']['valhalla_rsvp_reminder']['valhalla_rsvp_reminder_days'] = array(
      '#type' => 'textfield',
      '#title' => t('Påmindelses dage'),
      '#description' => 'Liste af dage før valg der skal udsendes påmindelser, adskildt af komma ( , ). f.eks. 14, 7, 5, 3',
      '#default_value' => variable_get('valhalla_rsvp_reminder_days', '14, 7, 5, 3'),
  );
  $form['valhalla_volunteers_mail']['valhalla_rsvp_status'] = array(
      '#type' => 'fieldset',
      '#title' => 'Bekræftelses mails til tilforordnede',
      '#collapsible' => false,
      '#collapsed' => false,
  );
  // Yes mail
  $form['valhalla_volunteers_mail']['valhalla_rsvp_status']['valhalla_rsvp_yes'] = array(
      '#type' => 'fieldset',
      '#title' => 'Mail til "Ja" svar.',
      '#collapsible' => true,
      '#collapsed' => true,
  );
  $form['valhalla_volunteers_mail']['valhalla_rsvp_status']['valhalla_rsvp_yes']['valhalla_rsvp_status_subject_yes'] = array(
      '#type' => 'textfield',
      '#title' => t('Emne linie'),
      '#default_value' => variable_get('valhalla_rsvp_status_subject_yes', _valhalla_volunteers_default_rsvp_status('subject_yes')),
  );
  $form['valhalla_volunteers_mail']['valhalla_rsvp_status']['valhalla_rsvp_yes']['valhalla_rsvp_status_body_yes'] = array(
      '#type' => 'textarea',
      '#title' => t('Mail indhold'),
      '#rows' => 15,
      '#default_value' => variable_get('valhalla_rsvp_status_body_yes', _valhalla_volunteers_default_rsvp_status('body_yes')),
  );
  // No mail
  $form['valhalla_volunteers_mail']['valhalla_rsvp_status']['valhalla_rsvp_no'] = array(
      '#type' => 'fieldset',
      '#title' => 'Mail til "Nej" svar',
      '#collapsible' => true,
      '#collapsed' => true,
  );
  $form['valhalla_volunteers_mail']['valhalla_rsvp_status']['valhalla_rsvp_no']['valhalla_rsvp_status_subject_no'] = array(
      '#type' => 'textfield',
      '#title' => t('Emne linie'),
      '#default_value' => variable_get('valhalla_rsvp_status_subject_no', _valhalla_volunteers_default_rsvp_status('subject_no')),
  );
  $form['valhalla_volunteers_mail']['valhalla_rsvp_status']['valhalla_rsvp_no']['valhalla_rsvp_status_body_no'] = array(
      '#type' => 'textarea',
      '#title' => t('Mail indhold'),
      '#rows' => 15,
      '#default_value' => variable_get('valhalla_rsvp_status_body_no', _valhalla_volunteers_default_rsvp_status('body_no')),
  );
  // Never mail
  $form['valhalla_volunteers_mail']['valhalla_rsvp_status']['valhalla_rsvp_never'] = array(
      '#type' => 'fieldset',
      '#title' => 'Mail til "Aldrig" svar',
      '#collapsible' => true,
      '#collapsed' => true,
  );
  $form['valhalla_volunteers_mail']['valhalla_rsvp_status']['valhalla_rsvp_never']['valhalla_rsvp_status_subject_never'] = array(
      '#type' => 'textfield',
      '#title' => t('Emne linie'),
      '#default_value' => variable_get('valhalla_rsvp_status_subject_never', _valhalla_volunteers_default_rsvp_status('subject_never')),
  );
  $form['valhalla_volunteers_mail']['valhalla_rsvp_status']['valhalla_rsvp_never']['valhalla_rsvp_status_body_never'] = array(
      '#type' => 'textarea',
      '#title' => t('Mail indhold'),
      '#rows' => 15,
      '#default_value' => variable_get('valhalla_rsvp_status_body_never', _valhalla_volunteers_default_rsvp_status('body_never')),
  );
  return system_settings_form($form);
}

/**
 * Extra validation needed to verify reminder days can be safely exloded.
 */
function valhalla_volunteers_admin_mail_form_validate(&$elements, &$form_state, $form_id = NULL) {
  if (preg_match('/[^\d|,| ]/', $form_state['values']['valhalla_rsvp_reminder_days'])) {
    // Found illigal chars in the form
    form_set_error('valhalla_rsvp_reminder_days', 'Dette felt skal være en komma-separeret liste af hele tal.');
  }
}

/**
 * Default texting for rsvp_email type emails.
 *
 * @param string $type either 'body' or 'subject'
 * @return string
 */
function _valhalla_volunteers_default_rsvp_email($type) {
  switch ($type) {
    case 'body':
      return <<< EOM
Kære !name

Århus Byråds "Udvalg for besættelse af udvalg m.m." har den !date udpeget dig som mulig valgtilforordnet ved Folketingsvalget 2011 den 18. oktober 2011 i Aarhus kommune.

Du er tilmeldt som !position. (VAF: valgstyrerformand, VA: valgstyrer, TI: tilforordnet)

På følgende afstemningssted:

!polling_station
Adresse: !polling_station_address

Du bedes møde på afstemningsstedet på valgdagen kl. 8.00 for at bistå valgbestyrelsen med afstemningen indtil kl. 20.00, og derefter så længe optællingen varer.

Der ydes forplejning i løbet af dagen. Efter beslutning i Valgbestyrelsen serveres der ikke alkohol. Når afstemningen er afsluttet vil der dog blive serveret natmad og en øl eller vand. Diæter udbetales efter gældende lovgivning via Nemkonto.

For at sikre os, at du kan komme, bedes du gå ind på følgende link og svare på denne invitation. Vi vil meget gerne have dit svar hurtigt, så vi kan reservere din plads eller tilbyde den til en anden, så vi kan få bemandet valget på forsvarlig demokratisk vis.

!link

Da der er brug for dig på afstemningsstedet hele dagen, bør du afgive stemme pr. brev forud for valg dagen, medmindre du skal afgive stemme på det afstemningssted, hvor du medvirker som valgstyrer. Sidste dag for brevafstemning er den 2. oktober 201. Du kan læse mere om brevafstemning på Aarhus Kommunes hjemmeside.

Med venlig hilsen
Valgsekretariatet
Aarhus Kommune
EOM;
    case 'subject':
      return 'Invitation til at være valgtilforordnet ved Folketingsvalget 2011';
    default:
  }
}

/**
 * Default texting for reminder mails.
 *
 * @param string $type
 * @return string
 */
function _valhalla_volunteers_default_rsvp_reminder($type) {
  switch ($type) {
    case 'body':
      return <<< EOM
 Hej !name,

Vi gør opmærksom på at der nu kun er !days til valget og du har endnu ikke meldt tilbage om du ønsker at være hjælper på dagen. Vi vil meget gerne have dit svar hurtigt, så vi kan reservere din plads eller tilbyde den til en anden, så vi kan få bemandet valget på forsvarlig demokratisk vis. Tak for din forståelse.

Brug følgende link til at svare:
!link

Med venlig hilsen
Jesper Eltved
Aarhus Kommune
EOM;
    case 'subject':
      return 'Påmindelse om tilbagemelding';
    default:
  }
}


/**
 * Default texting for confirmation mails.
 *
 * @param string $type
 * @return string
 */
function _valhalla_volunteers_default_rsvp_status($type) {
  switch ($type) {
    case 'body_yes':
      return <<< EOM
 Hej !name,

Din status er hermed bekræftet som værende accepteret.

Du skal derfor møde på:

!polling_station
Adresse: !polling_station_address

Med venlig hilsen
Jesper Eltved
Aarhus Kommune
EOM;
    case 'body_no':
      return <<< EOM
 Hej !name,

Din status er hermed bekræftet som værende ikke-accepteret.

Med venlig hilsen
Jesper Eltved
Aarhus Kommune
EOM;
    case 'body_never':
      return <<< EOM
 Hej !name,

Din status er hermed bekræft som værende afmeldt yderliger valgdeltagelse.

Med venlig hilsen
Jesper Eltved
Aarhus Kommune
EOM;
    case 'subject':
    case 'subject_yes':
    case 'subject_no':
    case 'subject_never':
      return 'Bekræftelse på valgdeltagelse';
    default:
  }
}