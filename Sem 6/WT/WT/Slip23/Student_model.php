<?php
 class Student_model extends CI_Model {
 public function __construct() {
 parent::__construct();
 $this->load->database();
 }
 public function get_all_students() {
 $query = $this->db->get('student');
 return $query->result();
 }
 }
?>