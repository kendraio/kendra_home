<?php

class KendraProfileMigration extends DrupalNode7Migration {

  public function __construct($args) {
    parent::__construct($args);
    $this->addFieldMapping('field_profile_full_name', 'field_profile_full_name');
    $this->addFieldMapping('field_profile_title', 'field_profile_title');
    $this->addFieldMapping('field_profile_phone', 'field_profile_phone');
    $this->addFieldMapping('field_profile_mobile', 'field_profile_mobile');
    $this->addFieldMapping('field_profile_skype', 'field_profile_skype');
    $this->addFieldMapping('field_profile_aim', 'field_profile_aim');
    $this->addFieldMapping('field_profile_company', 'field_profile_company');
    $this->addFieldMapping('field_profile_website', 'field_profile_website');
    $this->addFieldMapping('field_profile_website:title', 'field_profile_website:title');
    $this->addFieldMapping('field_profile_ipaddress', 'field_profile_ipaddress');
    $this->addFieldMapping('field_profile_get_email', 'field_profile_get_email');
    $this->addFieldMapping('field_profile_listed', 'field_profile_listed');
    $this->addFieldMapping('field_profile_legacyid', 'field_profile_legacyid');
    $this->addFieldMapping('field_profile_country', 'field_profile_country');
  }

}
