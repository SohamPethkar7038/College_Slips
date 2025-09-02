<?php
session_start();
$correct_username="admin";
$correct_password="password";
if(!isset($_SESSION['attempts'])){
    $_SESSION['attempts']=0;
}

if($_SERVER["REQUEST_METHOD"]=="POST"){
    $entered_username=$_POST['username'];
    $entered_password=$_POST['password'];

    if($entered_username==$correct_username && $entered_password==$correct_password){
        $_SESSION['loggedin']=true;
        header('Location:welcome.php');
    }
    else{
        $_SESSION['attempts']++;

        if($_SESSION['attempts']<3){
            $error="Invalid logoin. Attempts left:".(3-$_SESSION['attempts']);
        }
        else{
            $error="Too Many Failed attempts.";
        }

    }
}

?>


<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Login</title>
</head>
<body>
    <h2>Login</h2>
<?php
    if(isset($error)){
        echo "<p>$error</p>";
    }
    ?>

    <?php 
    if($_SESSION['attempts']<3){
    ?>
      <form method="post">
        <label for="username">Username:</label>
        <input type="text" name="username" id="username">
        <label for="password">password:</label>
        <input type="password" name="password" id="password">

        <input type="submit" value="Login">
      </form>

<?php
    }
    else{
        session_destroy();
        }
?>

</body>
</html>