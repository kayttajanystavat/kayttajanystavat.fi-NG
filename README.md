# Introduction

This is the future website of Käyttäjän Ystävät.

# After pull

Go to http://<host>/admin/structure/features/ to check that all the features are in the default state. If they are in an overridden state, revert the feature. Without this, other developer's changes to the features will not come through.

# Installation

## Simple setup (PHP + SQLite)

### Prerequisites

- Git
- PHP 5.4 or later
- SQLite 3
- SQLite driver for PHP
- Drush

Run:

	git clone git@github.com:kayttajanystavat/kayttajanystavat.fi-NG.git
	cd kayttajanystavat.fi-NG
	chmod u+w sites/default/
	mkdir sites/default/db/
	chmod ug+w sites/default/db
	touch sites/default/db/DEVELOPMENT.sqlite
	chmod ug+w sites/default/db/DEVELOPMENT.sqlite
	drush site-install minimal --db-url=sqlite://sites/default/db/DEVELOPMENT.sqlite # answer yes
	drush runserver

Log in to the site at the address reported by `drush runserver` using the credentials reported by the install. Enable all modules in the group KaY. Then go to Administration > Structure > Features and revert the `feature_basic_structure` feature (click "overridden", check all checkboxes on the page and click "revert components"). Installation is complete and you can start developing :)

Make sure to revert any features after you git pull, so other developer's changes come through.

## More complex setup (WAMP/MAMP/LAMP/XAMPP etc.)

This is suitable if you already have a *AMP-stack installed and or have an older PHP version and don't want to update it.

- Install and setup Git, Apache, MySQL and PHP if you haven't already
- Clone the repository under Apache's document root
- Create a database for the site in MySQL
- Navigate to the repository's top-level directory in Apache using your browser
- Install the site with the "minimal" install profile. User name, site title etc. do not matter. Use your MySQL database for the database settings.
- Log in with the credentials you gave during installation
- Go to Modules and enable all modules in the group KAY
- Installation is complete and you can start developing :)