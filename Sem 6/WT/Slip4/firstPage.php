<?php
session_start();
if($_SERVER['REQUEST_METHOD']=="POST"){
    $eno=$_POST['eno'];
    $ename=$_POST['ename'];
    $address=$_POST['address'];

    $_SESSION['eno']=$eno;
    $_SESSION['ename']=$ename;
    $_SESSION['address']=$address;
    header("Location:secondPage.php");
    exit;
}
?>


<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Employee Details</title>
</head>
<body>
    <h2>Enter Employee Details</h2>

    <form method="post" action="<?php echo $_SERVER['PHP_SELF']; ?>">
   <label for="eno">Employee Number:</label>
   <input type="text" name="eno" id="eno" required><br>
   <label for="ename">Employee Name:</label>
   <input type="text" name="ename" id="ename" required><br>
   <label for="address">Address:</label>
   <input type="text" name="address" id="address"><br>
   <input type="submit" value="Next">



    </form>
</body>
</html>