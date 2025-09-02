<?php
session_start();
if(isset($_SESSION['page_view'])){
    $_SESSION['page_view']++;
}
else{
    $_SESSION['page_view']=1;
}

echo "You Have Visited this page ".$_SESSION['page_view']." Times";

?>