
//bro dont create xml by you copying the content from this SLip 24....because the program will autmatically generate the xml file

<?php
 function generateXML($students) {
    $xml = new DOMDocument('1.0', 'utf-8');
    $xml->formatOutput = true;
    $root = $xml->createElement('students');
    $xml->appendChild($root);
    foreach ($students as $student) {
        $studentNode = $xml->createElement('student');
        $rollNoNode = $xml->createElement('roll_no', $student['roll_no']);
        $studentNode->appendChild($rollNoNode);
        $nameNode = $xml->createElement('name', $student['name']);
        $studentNode->appendChild($nameNode);
        $addressNode = $xml->createElement('address', $student['address']);
        $studentNode->appendChild($addressNode);
        $collegeNode = $xml->createElement('college', $student['college']);
        $studentNode->appendChild($collegeNode);
        $courseNode = $xml->createElement('course', $student['course']);
        $studentNode->appendChild($courseNode);
        $root->appendChild($studentNode);
    }
    $xml->save('student.xml');
 }
 $students = array(
    array('roll_no' => '001', 'name' => 'John Doe', 'address' => '123 Main St', 'college' => 'ABC 
College', 'course' => 'bcs'),
    array('roll_no' => '002', 'name' => 'Jane Smith', 'address' => '456 Elm St', 'college' => 'XYZ 
College', 'course' => 'bca'),
    array('roll_no' => '003', 'name' => 'Alice Johnson', 'address' => '789 Oak St', 'college' => 'DEF 
College', 'course' => 'bcs'),
 );
 generateXML($students);
 if (isset($_GET['course'])) {
    $course = $_GET['course'];
    $xml = simplexml_load_file('student.xml');
    echo "<h2>Students enrolled in $course:</h2>";
    echo "<table border='1'><tr><th>Roll 
No</th><th>Name</th><th>Address</th><th>College</th><th>Course</th></tr>";
    foreach ($xml->xpath("//student[course='$course']") as $student) {
        echo "<tr><td>{$student->roll_no}</td><td>{$student->name}</td><td>{$student->address}</td><td>{$student->college}</td><td>{$student->course}</td></tr>";
    }
    echo "</table>";
 }
 ?>
 <!DOCTYPE html>
 <html>
 <head>
    <title>Student Details</title>
 </head>
 <body>
    <h1>Student Details</h1>
    <form method="GET" action="">
        <label for="course">Enter course:</label>
        <input type="text" id="course" name="course">
        <button type="submit">Submit</button>
    </form>
 </body>
 </html>