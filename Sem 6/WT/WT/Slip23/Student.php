<?php
 class Student extends CI_Controller {
public function __construct() {
parent::__construct();
 $this->load->model('student_model');
 }
 public function display_records() {
 $data['students'] = $this->student_model->get_all_students();
 $this->load->view('student_records', $data);
 }
 }
 