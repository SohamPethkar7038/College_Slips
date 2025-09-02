<?php
session_start();
if(!isset($_SESSION['loggedin'])){
    header('Location:firstFormPage.php');
    exit();
}
?>
<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>welcome Page</title>
</head>
<body>
    <h2>welcome, Login Successful</h2>
</body>
</html>