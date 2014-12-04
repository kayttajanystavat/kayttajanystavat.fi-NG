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

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'Footer: Mikä Käyttäjän ystävät?';
  $fe_block_boxes->format = 'full_html';
  $fe_block_boxes->machine_name = 'kay_footer_about';
  $fe_block_boxes->body = 'Lorem ipsum dolor sit amet, consectetuer adipiscing elit. Sed posuere interdum sem. Quisque ligula eros ullamcorper quis, lacinia quis facilisis sed sapien. Mauris varius diam vitae arcu. Sed arcu lectus auctor vitae, consectetuer et venenatis eget velit. Sed augue orci, lacinia eu tincidunt et eleifend nec lacus.';

  $export['kay_footer_about'] = $fe_block_boxes;

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'KäY Footer: Yhteystiedot';
  $fe_block_boxes->format = 'full_html';
  $fe_block_boxes->machine_name = 'kay_footer_contact';
  $fe_block_boxes->body = '<p>
hallitus@kayttajanystavat.fi
</p>
<p>
PL 69, 02151 Espoo
</p>
<p>
Y-tunnus 1741700-5 (YTJ)
</p>';

  $export['kay_footer_contact'] = $fe_block_boxes;

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'KäY Yhdistys: Säännöt';
  $fe_block_boxes->format = 'full_html';
  $fe_block_boxes->machine_name = 'kay_rules';
  $fe_block_boxes->body = 'TODO Säännöt tähän';

  $export['kay_rules'] = $fe_block_boxes;

  return $export;
}
