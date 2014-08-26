#!/bin/bash
echo Deploying...
git pull
drush updatedb -y
drush features-revert-all -y
drush cc all
echo Done.