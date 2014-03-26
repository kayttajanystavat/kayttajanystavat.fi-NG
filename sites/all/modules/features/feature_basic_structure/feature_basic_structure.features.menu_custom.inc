<?php
/**
 * @file
 * feature_basic_structure.features.menu_custom.inc
 */

/**
 * Implements hook_menu_default_menu_custom().
 */
function feature_basic_structure_menu_default_menu_custom() {
  $menus = array();

  // Exported menu: main-menu.
  $menus['main-menu'] = array(
    'menu_name' => 'main-menu',
    'title' => 'Päävalikko',
    'description' => '<em>Päävalikkoa</em> käytetään usein esittämään sivuston pääalueet, valikko esitetään usein esimerkiksi navigointipalkin yläpuolella.',
  );
  // Exported menu: management.
  $menus['management'] = array(
    'menu_name' => 'management',
    'title' => 'Management',
    'description' => '<em>Ylläpitovalikko</em> sisältää valikkolinkit ylläpitotehtäville.',
  );
  // Exported menu: navigation.
  $menus['navigation'] = array(
    'menu_name' => 'navigation',
    'title' => 'Navigaatio',
    'description' => '<em>Navigointi</em> valikko sisältää sivuston käyttäjille tarkoitettuja linkkejä. Jotkut moduulit lisäävät automaattisesti linkkejä <em>Navigointi</em> valikkoon.',
  );
  // Exported menu: user-menu.
  $menus['user-menu'] = array(
    'menu_name' => 'user-menu',
    'title' => 'User menu',
    'description' => '<em>Käyttäjävalikko</em> sisältää käyttäjätileihin liittyvät valikkolinkit samoin kuin "kirjaudu ulos" linkin.',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('<em>Käyttäjävalikko</em> sisältää käyttäjätileihin liittyvät valikkolinkit samoin kuin "kirjaudu ulos" linkin.');
  t('<em>Navigointi</em> valikko sisältää sivuston käyttäjille tarkoitettuja linkkejä. Jotkut moduulit lisäävät automaattisesti linkkejä <em>Navigointi</em> valikkoon.');
  t('<em>Päävalikkoa</em> käytetään usein esittämään sivuston pääalueet, valikko esitetään usein esimerkiksi navigointipalkin yläpuolella.');
  t('<em>Ylläpitovalikko</em> sisältää valikkolinkit ylläpitotehtäville.');
  t('Management');
  t('Navigaatio');
  t('Päävalikko');
  t('User menu');


  return $menus;
}
