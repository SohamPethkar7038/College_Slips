<?php
session_start();
$eno=$_SESSION['eno'];
$ename=$_SESSION['ename'];
$address=$_SESSION['address'];
$basic=$_SESSION['basic'];
$da=$_SESSION['da'];
$hra=$_SESSION['hra'];

$total=$basic+$da+$hra;

session_unset();
session_destroy();
?>
<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Emp information</title>
</head>
<body>
    <h2>Employee Information</h2>
    <p>Employee Number:<?php echo $eno;?></p>
    <p>Employee Name:<?php echo $ename;?></p>
    <p>Employee Address:<?php echo $address;?></p>
    <p>Basic:<?php echo $basic; ?></p>
    <p>DA:<?php echo $da; ?></p>
    <p>HRA:<?php echo $hra; ?></p>
    <p>Total:<?php echo $total;?> </p>

</body>
</html>