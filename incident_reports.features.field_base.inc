<?php
/**
 * @file
 * incident_reports.features.field_base.inc
 */

/**
 * Implements hook_field_default_field_bases().
 */
function incident_reports_field_default_field_bases() {
  $field_bases = array();

  // Exported field_base: 'field_action_taken'
  $field_bases['field_action_taken'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_action_taken',
    'foreign keys' => array(
      'format' => array(
        'columns' => array(
          'format' => 'format',
        ),
        'table' => 'filter_format',
      ),
    ),
    'indexes' => array(
      'format' => array(
        0 => 'format',
      ),
    ),
    'locked' => 0,
    'module' => 'text',
    'settings' => array(),
    'translatable' => 0,
    'type' => 'text_long',
  );

  // Exported field_base: 'field_date_and_time_of_incident'
  $field_bases['field_date_and_time_of_incident'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_date_and_time_of_incident',
    'foreign keys' => array(),
    'indexes' => array(),
    'locked' => 0,
    'module' => 'date',
    'settings' => array(
      'cache_count' => 4,
      'cache_enabled' => 0,
      'granularity' => array(
        'day' => 'day',
        'hour' => 'hour',
        'minute' => 'minute',
        'month' => 'month',
        'second' => 0,
        'year' => 'year',
      ),
      'timezone_db' => 'UTC',
      'todate' => '',
      'tz_handling' => 'site',
    ),
    'translatable' => 0,
    'type' => 'date',
  );

  // Exported field_base: 'field_eng_rooms'
  $field_bases['field_eng_rooms'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_eng_rooms',
    'foreign keys' => array(),
    'indexes' => array(
      'value' => array(
        0 => 'value',
      ),
    ),
    'locked' => 0,
    'module' => 'list',
    'settings' => array(
      'allowed_values' => array(
        'Room C8' => 'Room C8',
        'Room C14' => 'Room C14',
        'Room C15A' => 'Room C15A',
        'Room C18A' => 'Room C18A',
        'Room C34A' => 'Room C34A',
        'Room C34' => 'Room C34',
        'Room 609N' => 'Room 609N',
      ),
      'allowed_values_function' => '',
    ),
    'translatable' => 0,
    'type' => 'list_text',
  );

  // Exported field_base: 'field_follow_up'
  $field_bases['field_follow_up'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_follow_up',
    'foreign keys' => array(
      'format' => array(
        'columns' => array(
          'format' => 'format',
        ),
        'table' => 'filter_format',
      ),
    ),
    'indexes' => array(
      'format' => array(
        0 => 'format',
      ),
    ),
    'locked' => 0,
    'module' => 'text',
    'settings' => array(),
    'translatable' => 0,
    'type' => 'text_long',
  );

  // Exported field_base: 'field_hil_rooms'
  $field_bases['field_hil_rooms'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_hil_rooms',
    'foreign keys' => array(),
    'indexes' => array(
      'value' => array(
        0 => 'value',
      ),
    ),
    'locked' => 0,
    'module' => 'list',
    'settings' => array(
      'allowed_values' => array(
        'Room 011B' => 'Room 011B',
        'Room 012A' => 'Room 012A',
        'Room 013A' => 'Room 013A',
        'Room 013B' => 'Room 013B',
        'Room 014A' => 'Room 014A',
        'Room 01A' => 'Room 01A',
        'Room 01B' => 'Room 01B',
        'Room 01C' => 'Room 01C',
        'Room 01D' => 'Room 01D',
        'Room 05A' => 'Room 05A',
        'Room 5A-1' => 'Room 5A-1',
        'Room 06A' => 'Room 06A',
        'Room 06B' => 'Room 06B',
        'Room 06C' => 'Room 06C',
        'Room 08A' => 'Room 08A',
        'Room 10' => 'Room 10',
        'Room 102' => 'Room 102',
        'Room 102A' => 'Room 102A',
        'Room 103A' => 'Room 103A',
        'Room 103B' => 'Room 103B',
        'Room 103C' => 'Room 103C',
        'Room 104B' => 'Room 104B',
        'Room 104C' => 'Room 104C',
        'Room 104E' => 'Room 104E',
        'Room 104F' => 'Room 104F',
        'Room 105' => 'Room 105',
        'Room 105A' => 'Room 105A',
        'Room 105B' => 'Room 105B',
        'Room 105C' => 'Room 105C',
        'Room 105D' => 'Room 105D',
        'Room 106' => 'Room 106',
        'Room 107' => 'Room 107',
        'Room 108' => 'Room 108',
        'Room 109' => 'Room 109',
        'Room 110' => 'Room 110',
        'Room 111' => 'Room 111',
        'Room 111A' => 'Room 111A',
        'Room 112' => 'Room 112',
        'Room 112A' => 'Room 112A',
        'Room 112B' => 'Room 112B',
        'Room 113' => 'Room 113',
        'Room 114' => 'Room 114',
        'Room 115' => 'Room 115',
        'Room 115A' => 'Room 115A',
        'Room 115B' => 'Room 115B',
        'Room 115C' => 'Room 115C',
        'Room 116' => 'Room 116',
        'Room 116C' => 'Room 116C',
        'Room 117' => 'Room 117',
        'Room 118' => 'Room 118',
        'Room 11A' => 'Room 11A',
        'Room 11B' => 'Room 11B',
        'Room 11C' => 'Room 11C',
        'Room 12' => 'Room 12',
        'Room 13' => 'Room 13',
        'Room 14' => 'Room 14',
        'Room 15' => 'Room 15',
        'Room 18' => 'Room 18',
        'Room 19' => 'Room 19',
        'Room 20' => 'Room 20',
        'Room 201A' => 'Room 201A',
        'Room 201B' => 'Room 201B',
        'Room 201C' => 'Room 201C',
        'Room 201D' => 'Room 201D',
        'Room 204' => 'Room 204',
        'Room 204A' => 'Room 204A',
        'Room 205' => 'Room 205',
        'Room 206' => 'Room 206',
        'Room 207' => 'Room 207',
        'Room 208' => 'Room 208',
        'Room 209' => 'Room 209',
        'Room 21' => 'Room 21',
        'Room 210' => 'Room 210',
        'Room 211' => 'Room 211',
        'Room 2' => 'Room 2',
        'Room 3' => 'Room 3',
        'Room 301B' => 'Room 301B',
        'Room 301C' => 'Room 301C',
        'Room 302A' => 'Room 302A',
        'Room 302B' => 'Room 302B',
        'Room 303' => 'Room 303',
        'Room 303A' => 'Room 303A',
        'Room 306' => 'Room 306',
        'Room 307' => 'Room 307',
        'Room 308' => 'Room 308',
        'Room 308A' => 'Room 308A',
        'Room 309' => 'Room 309',
        'Room 309A' => 'Room 309A',
        'Room 310' => 'Room 310',
        'Room 311' => 'Room 311',
        'Room 311A' => 'Room 311A',
        'Room 311B' => 'Room 311B',
        'Room 311C' => 'Room 311C',
        'Room 311D' => 'Room 311D',
        'Room 311E' => 'Room 311E',
        'Room 311F' => 'Room 311F',
        'Room 311G' => 'Room 311G',
        'Room 311H' => 'Room 311H',
        'Room 314' => 'Room 314',
        'Room 315' => 'Room 315',
        'Room 316' => 'Room 316',
        'Room 317' => 'Room 317',
        'Room 318' => 'Room 318',
        'Room 319' => 'Room 319',
        'Room 320' => 'Room 320',
        'Room 321' => 'Room 321',
        'Room 322' => 'Room 322',
        'Room 4' => 'Room 4',
        'Room 401A' => 'Room 401A',
        'Room 401B' => 'Room 401B',
        'Room 401E' => 'Room 401E',
        'Room 401F' => 'Room 401F',
        'Room 408' => 'Room 408',
        'Room 408A' => 'Room 408A',
        'Room 409' => 'Room 409',
        'Room 409A' => 'Room 409A',
        'Room 409B' => 'Room 409B',
        'Room 410' => 'Room 410',
        'Room 412' => 'Room 412',
        'Room 412B' => 'Room 412B',
        'Room 413' => 'Room 413',
        'Room 414' => 'Room 414',
        'Room 415' => 'Room 415',
        'Room 415A' => 'Room 415A',
        'Room 416' => 'Room 416',
        'Room 417' => 'Room 417',
        'Room 418' => 'Room 418',
        'Room 419' => 'Room 419',
        'Room 420' => 'Room 420',
        'Room 421' => 'Room 421',
        'Room 5' => 'Room 5',
        'Room 502' => 'Room 502',
        'Room 503' => 'Room 503',
        'Room 504' => 'Room 504',
        'Room 504A' => 'Room 504A',
        'Room 505' => 'Room 505',
        'Room 505A' => 'Room 505A',
        'Room 506' => 'Room 506',
        'Room 506A' => 'Room 506A',
        'Room 507' => 'Room 507',
        'Room 507A' => 'Room 507A',
        'Room 507B' => 'Room 507B',
        'Room 507C' => 'Room 507C',
        'Room 508' => 'Room 508',
        'Room 508A' => 'Room 508A',
        'Room 508B' => 'Room 508B',
        'Room 508C' => 'Room 508C',
        'Room 508D' => 'Room 508D',
        'Room 508E' => 'Room 508E',
        'Room 508F' => 'Room 508F',
        'Room 508G' => 'Room 508G',
        'Room 508H' => 'Room 508H',
        'Room 509' => 'Room 509',
        'Room 509A' => 'Room 509A',
        'Room 509B' => 'Room 509B',
        'Room 509C' => 'Room 509C',
        'Room 510' => 'Room 510',
        'Room 511' => 'Room 511',
        'Room 511A' => 'Room 511A',
        'Room 511B' => 'Room 511B',
        'Room 511C' => 'Room 511C',
        'Room 511D' => 'Room 511D',
        'Room 511E' => 'Room 511E',
        'Room 511F' => 'Room 511F',
        'Room 511G' => 'Room 511G',
        'Room 511H' => 'Room 511H',
        'Room 511I' => 'Room 511I',
        'Room 511J' => 'Room 511J',
        'Room 511K' => 'Room 511K',
        'Room 511L' => 'Room 511L',
        'Room 511M' => 'Room 511M',
        'Room 511N' => 'Room 511N',
        'Room 511O' => 'Room 511O',
        'Room 511P' => 'Room 511P',
        'Room 513' => 'Room 513',
        'Room 514' => 'Room 514',
        'Room 514A' => 'Room 514A',
        'Room 514B' => 'Room 514B',
        'Room 514C' => 'Room 514C',
        'Room 514D' => 'Room 514D',
        'Room 514E' => 'Room 514E',
        'Room 514F' => 'Room 514F',
        'Room 514G' => 'Room 514G',
        'Room 514H' => 'Room 514H',
        'Room 514I' => 'Room 514I',
        'Room 514J' => 'Room 514J',
        'Room 514K' => 'Room 514K',
        'Room 514L' => 'Room 514L',
        'Room 514M' => 'Room 514M',
        'Room 514N' => 'Room 514N',
        'Room 514O' => 'Room 514O',
        'Room 514P' => 'Room 514P',
        'Room 515' => 'Room 515',
        'Room 516' => 'Room 516',
        'Room 516A' => 'Room 516A',
        'Room 516B' => 'Room 516B',
        'Room 516C' => 'Room 516C',
        'Room 517' => 'Room 517',
        'Room 517A' => 'Room 517A',
        'Room 517B' => 'Room 517B',
        'Room 517C' => 'Room 517C',
        'Room 517D' => 'Room 517D',
        'Room 517E' => 'Room 517E',
        'Room 517F' => 'Room 517F',
        'Room 517G' => 'Room 517G',
        'Room 517H' => 'Room 517H',
        'Room 518' => 'Room 518',
        'Room 518A' => 'Room 518A',
        'Room 518B' => 'Room 518B',
        'Room 518C' => 'Room 518C',
        'Room 518D' => 'Room 518D',
        'Room 519' => 'Room 519',
        'Room 519A' => 'Room 519A',
        'Room 520' => 'Room 520',
        'Room 520A' => 'Room 520A',
        'Room 520B' => 'Room 520B',
        'Room 521' => 'Room 521',
        'Room 522' => 'Room 522',
        'Room 6' => 'Room 6',
        'Room 600' => 'Room 600',
        'Room 601' => 'Room 601',
        'Room 7' => 'Room 7',
        'Room 8' => 'Room 8',
        'Room 9' => 'Room 9',
        'Room A' => 'Room A',
        'Room A399' => 'Room A399',
        'Room A699' => 'Room A699',
        'Room B' => 'Room B',
        'Room B199' => 'Room B199',
        'Room B199A' => 'Room B199A',
        'Room B199B' => 'Room B199B',
        'Room B399' => 'Room B399',
        'Room C' => 'Room C',
        'Room C399' => 'Room C399',
        'Room C499' => 'Room C499',
        'Room C698' => 'Room C698',
        'Room D' => 'Room D',
        'Room D499' => 'Room D499',
        'Room D698' => 'Room D698',
        'Media Storage Areas' => 'Media Storage Areas',
        'Room E' => 'Room E',
        'Room E399A' => 'Room E399A',
        'Room E399C' => 'Room E399C',
        'Room E399D' => 'Room E399D',
        'Room E499' => 'Room E499',
        'Room F' => 'Room F',
        'Room F399' => 'Room F399',
        'Room F499A' => 'Room F499A',
        'Room F499B' => 'Room F499B',
        'Room F499C' => 'Room F499C',
        'Room F499D' => 'Room F499D',
        'Room G' => 'Room G',
        'Room H' => 'Room H',
        'Room H499' => 'Room H499',
        'Room I' => 'Room I',
        'Room I399' => 'Room I399',
        'Room J199' => 'Room J199',
        'Room J' => 'Room J',
        'Room K' => 'Room K',
        'Room L' => 'Room L',
        'Room M99' => 'Room M99',
      ),
      'allowed_values_function' => '',
    ),
    'translatable' => 0,
    'type' => 'list_text',
  );

  // Exported field_base: 'field_location_of_incident'
  $field_bases['field_location_of_incident'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_location_of_incident',
    'foreign keys' => array(),
    'indexes' => array(
      'value' => array(
        0 => 'value',
      ),
    ),
    'locked' => 0,
    'module' => 'list',
    'settings' => array(
      'allowed_values' => array(
        'HIL' => 'Harriet Irving Library',
        'SCI' => 'Science and Forestry Library',
        'ENG' => 'Engineering and Computer Science Library',
        'GYM' => 'South Gym',
      ),
      'allowed_values_function' => '',
    ),
    'translatable' => 0,
    'type' => 'list_text',
  );

  // Exported field_base: 'field_nature_of_incident'
  $field_bases['field_nature_of_incident'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_nature_of_incident',
    'foreign keys' => array(
      'format' => array(
        'columns' => array(
          'format' => 'format',
        ),
        'table' => 'filter_format',
      ),
    ),
    'indexes' => array(
      'format' => array(
        0 => 'format',
      ),
    ),
    'locked' => 0,
    'module' => 'text',
    'settings' => array(
      'max_length' => 255,
    ),
    'translatable' => 0,
    'type' => 'text',
  );

  // Exported field_base: 'field_personnel_notified'
  $field_bases['field_personnel_notified'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_personnel_notified',
    'foreign keys' => array(
      'format' => array(
        'columns' => array(
          'format' => 'format',
        ),
        'table' => 'filter_format',
      ),
    ),
    'indexes' => array(
      'format' => array(
        0 => 'format',
      ),
    ),
    'locked' => 0,
    'module' => 'text',
    'settings' => array(
      'max_length' => 255,
    ),
    'translatable' => 0,
    'type' => 'text',
  );

  // Exported field_base: 'field_respondents'
  $field_bases['field_respondents'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_respondents',
    'foreign keys' => array(
      'format' => array(
        'columns' => array(
          'format' => 'format',
        ),
        'table' => 'filter_format',
      ),
    ),
    'indexes' => array(
      'format' => array(
        0 => 'format',
      ),
    ),
    'locked' => 0,
    'module' => 'text',
    'settings' => array(
      'max_length' => 255,
    ),
    'translatable' => 0,
    'type' => 'text',
  );

  // Exported field_base: 'field_sci_rooms'
  $field_bases['field_sci_rooms'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_sci_rooms',
    'foreign keys' => array(),
    'indexes' => array(
      'value' => array(
        0 => 'value',
      ),
    ),
    'locked' => 0,
    'module' => 'list',
    'settings' => array(
      'allowed_values' => array(
        'Room 101' => 'Room 101',
        'Room 101A - Central Core' => 'Room 101A - Central Core',
        'Room 101B - Central Core' => 'Room 101B - Central Core',
        'Room 101C - Reader Study' => 'Room 101C - Reader Study',
        'Room 101D - Central Core' => 'Room 101D - Central Core',
        'Room 101E - Reader Study' => 'Room 101E - Reader Study',
        'Room 105' => 'Room 105',
        'Room 105A' => 'Room 105A',
        'Room 105B' => 'Room 105B',
        'Room 114 - Central Core' => 'Room 114 - Central Core',
        'Room D199' => 'Room D199',
        'Room 629C – I.U.C. Central Core' => 'Room 629C – I.U.C. Central Core',
      ),
      'allowed_values_function' => '',
    ),
    'translatable' => 0,
    'type' => 'list_text',
  );

  // Exported field_base: 'field_south_gym_rooms'
  $field_bases['field_south_gym_rooms'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_south_gym_rooms',
    'foreign keys' => array(),
    'indexes' => array(
      'value' => array(
        0 => 'value',
      ),
    ),
    'locked' => 0,
    'module' => 'list',
    'settings' => array(
      'allowed_values' => array(
        'Room 198C' => 'Room 198C',
        'Room 201' => 'Room 201',
        'Room 202' => 'Room 202',
        'Room 203' => 'Room 203',
        'Room 204' => 'Room 204',
        'Room 205' => 'Room 205',
        'Room 206' => 'Room 206',
        'Room 207' => 'Room 207',
        'Room 208' => 'Room 208',
        'Room 209' => 'Room 209',
        'Room 298A' => 'Room 298A',
        'Room 298B' => 'Room 298B',
        'Room 299A' => 'Room 299A',
        'Room 299B' => 'Room 299B',
        'Room 299C' => 'Room 299C',
        'Room 630S' => 'Room 630S',
      ),
      'allowed_values_function' => '',
    ),
    'translatable' => 0,
    'type' => 'list_text',
  );

  // Exported field_base: 'field_staff_members_involved'
  $field_bases['field_staff_members_involved'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_staff_members_involved',
    'foreign keys' => array(
      'format' => array(
        'columns' => array(
          'format' => 'format',
        ),
        'table' => 'filter_format',
      ),
    ),
    'indexes' => array(
      'format' => array(
        0 => 'format',
      ),
    ),
    'locked' => 0,
    'module' => 'text',
    'settings' => array(
      'max_length' => 255,
    ),
    'translatable' => 0,
    'type' => 'text',
  );

  return $field_bases;
}