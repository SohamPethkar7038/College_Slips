<?php
session_start();
if($_SERVER['REQUEST_METHOD']=="POST"){
    $basic=$_POST['basic'];
    $da=$_POST['da'];
    $hra=$_POST['hra'];


    $_SESSION['basic']=$basic;
    $_SESSION['da']=$da;
    $_SESSION['hra']=$hra;
    header('Location:display.php');
    exit();
}
?>

<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Earning Details</title>
</head>
<body>
    <h2>Enter Earning Details</h2>
    <form method="post" action="<?php echo $_SERVER['PHP_SELF']; ?>">

    <label for="basic">Basic:</label>
    <input type="text" name="basic" id="basic"><br>
    <label for="da">DA:</label>
    <input type="text" name="da" id="da"><br>
    <label for="hra">HRA</label>
    <input type="text" name="hra" id="hra"><br>
    <input type="submit" value="Next">
    </form>
</body>
</html>