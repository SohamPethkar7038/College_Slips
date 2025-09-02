//( save file in the application/controllers directory.)
 <?php
 class Student extends CI_Controller {  
    public function __construct() {
        parent::__construct();
        $this->load->model('student_model');
    }
        public function insert_records() {
        $data = array(
            array('rollno' => 1, 'name' => 'John Doe', 'class' => '10th'),
            array('rollno' => 2, 'name' => 'Jane Smith', 'class' => '11th'),
            array('rollno' => 3, 'name' => 'Alice Johnson', 'class' => '12th'),
            array('rollno' => 4, 'name' => 'Bob Williams', 'class' => '9th'),
            array('rollno' => 5, 'name' => 'Eve Brown', 'class' => '10th')
        );
        foreach ($data as $student) {
            $this->student_model->insert_student($student);
        }   
        echo "Records inserted successfully.";
    }
 }