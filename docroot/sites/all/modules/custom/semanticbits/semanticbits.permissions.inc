<?php

/**
 * Implements hook_permission().
 * - To create list of permission for pages
 */
function semanticbits_permission() {
  $permissions = [];
	
	$permissions['view today modified pages'] = [
		'title' => t('view today modified pages'),
		'description' => t('view today modified pages'),
	];
	
	return $permissions;
}