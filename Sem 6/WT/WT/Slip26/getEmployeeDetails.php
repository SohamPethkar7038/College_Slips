<?php
 // Database connection
 $servername = "localhost";
 $username = "username";
 $password = "password";
 $dbname = "your_database";
 $conn = new mysqli($servername, $username, $password, $dbname);
 // Check connection
 if ($conn->connect_error) {
    die("Connection failed: " . $conn->connect_error);
 }
 $eno = $_POST['eno'];
 // Fetch employee details
 $sql = "SELECT * FROM EMP WHERE eno = $eno";
 $result = $conn->query($sql);
 if ($result->num_rows > 0) {
    $row = $result->fetch_assoc();
    echo "Employee Number: " . $row['eno'] . "<br>";
    echo "Employee Name: " . $row['ename'] . "<br>";
    echo "Designation: " . $row['designation'] . "<br>";
    echo "Salary: " . $row['salary'] . "<br>";
 } else {
    echo "No employee found";
 }
 $conn->close();
 ?>