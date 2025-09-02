<?php
if($_SERVER['REQUEST_METHOD']=='POST'){
   $font_style=$_POST['font_style'];
   $font_size=$_POST['font_size'];
   $font_color=$_POST['font_color'];
   $bg_color=$_POST['background_color'];
   
   setcookie('font_style',$font_style,time()+(24*60*60*30),"/");

   setcookie('font_size',$font_size,time()+(24*60*60*30),"/");
   setcookie('font_color',$font_color,time()+(24*60*60*30),"/");
   setcookie('bg_color',$bg_color,time()+(24*60*60*30),"/");

   header('Location:displayPage.php');
   exit();

}
else{
    header('Location:firstpage.php');
    exit();
}

?>