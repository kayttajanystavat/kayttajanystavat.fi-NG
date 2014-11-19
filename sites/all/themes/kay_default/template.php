<?php

function kay_default_menu_local_tasks() {
  // Hide tabs in user registration
  if(current_path() === 'user/register') {
  	return '';
  }
}
