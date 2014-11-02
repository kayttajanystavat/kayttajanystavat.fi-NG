<?php
/**
 * @file
 * feature_basic_structure.features.fe_block_boxes.inc
 */

/**
 * Implements hook_default_fe_block_boxes().
 */
function feature_basic_structure_default_fe_block_boxes() {
  $export = array();

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'Introteksti_keskustelu';
  $fe_block_boxes->format = 'full_html';
  $fe_block_boxes->machine_name = 'introtext_conversations';
  $fe_block_boxes->body = '<p>
Haluamme jakaa tietoa alan opetuksesta, uramahdollisuuksista ja tapahtumista. KÄYn tapahtumat ja Facebook-ryhmä ovat ensisijaiset kanavamme päästä vaihtamaan ajatuksia opiskelijoiden ja alan huippuosaajien välillä.
</p>
<p>
<a href="www.facebook.com">Osallistu keskusteluun Facebookissa</a>
</p>';

  $export['introtext_conversations'] = $fe_block_boxes;

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'Introteksti_eksku';
  $fe_block_boxes->format = 'full_html';
  $fe_block_boxes->machine_name = 'introtext_excursions';
  $fe_block_boxes->body = '<p>
Teemme vierailuja alan yrityksiin, joissa tehdään esimerkiksi palvelumuotoilua, käyttöliittymäsuunnittelua tai käyttäjätutkimusta. Järjestämme afterworkkeja, piknikkejä ja muita vapaamuotoisia tapahtumia keskustelulle, joihin kaikki kiinnostuneet ovat tervetulleita.
</p>';

  $export['introtext_excursions'] = $fe_block_boxes;

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'Introteksti_tavoitteet';
  $fe_block_boxes->format = 'full_html';
  $fe_block_boxes->machine_name = 'introtext_goals';
  $fe_block_boxes->body = '<p>
Tavoitteemme on tuoda yhteen monipuolisesti alasta kiinnostuneita ihmisiä.
</p>';

  $export['introtext_goals'] = $fe_block_boxes;

  return $export;
}
