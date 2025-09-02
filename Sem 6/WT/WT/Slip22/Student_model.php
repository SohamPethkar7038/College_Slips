(save file in the application/ models directory.)
 <?php
 class Student_model extends CI_Model {
      public function __construct() {
        parent::__construct();
        $this->load->database();
    }
    public function insert_student($data) {
        return $this->db->insert('student', $data);
    }
 }