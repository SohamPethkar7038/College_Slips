<?php
$f1=$_GET['t1'];
$f2=$_GET['t2'];
if(file_exists($f1) && file_exists($f2))
{
$fp=fopen($f1,"r") or die("1:cnt open");
$fp1=fopen("c.txt",a) or die("2:cnt open");
while(!feof($fp))
{
$mydata=fgets($fp);
echo "$mydata <br>";
fwrite($fp1,$mydata);
}
fclose($fp);
fclose($fp1);
}
else
echo "Not found";
?>