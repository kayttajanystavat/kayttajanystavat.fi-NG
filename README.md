# Introduction

This is the future website of Käyttäjän Ystävät.

# Installation

## Simple setup (PHP + SQLite)

### Prerequisites

(this is how it's supposed to go, haven't tested yet)

- Git
- PHP 5.4 or later
- SQLite 3
- SQLite driver for PHP
- Drush

Run:

	git clone git@github.com:kayttajanystavat/kayttajanystavat.fi-NG.git
	cd kayttajanystavat.fi-NG
	drush site-install minimal --db-url=sqlite://sites/default/DEVELOPMENT.sqlite
	drush runserver

Log in to the site at the address reported by `drush runserver`, and enable all modules in the group KAY. Installation is complete and you can start developing :)

## More complex setup (WAMP/MAMP/LAMP/XAMPP etc.)

- Install Apache, MySQL and PHP
- Clone the repository under Apache's document root
- Create a database for the site in MySQL
- Navigate to the repository's top-level directory in Apache using your browser
- Install the site with the "minimal" install profile. User name, site title etc. do not matter. Use your MySQL database for the database settings.
- Log in with the credentials you gave during installation
- Go to Modules and enable all modules in the group KAY
- Installation is complete and you can start developing :)