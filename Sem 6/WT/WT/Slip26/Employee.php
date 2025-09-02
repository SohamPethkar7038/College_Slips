<?php
 $servername = "localhost";
 $username = "root";
 $password = "redhat";
 $dbname = "tybcs";
 $conn = new mysqli($servername, $username, $password, $dbname);
 if ($conn->connect_error) {
    die("Connection failed: " . $conn->connect_error);
 }
 $sql = "SELECT eno, ename FROM EMP";
 $result = $conn->query($sql);
 $employees = array();
 if ($result->num_rows > 0) {
    while($row = $result->fetch_assoc()) {
        $employees[] = $row;
    }
 }
 echo json_encode($employees);
 $conn->close();
 ?>