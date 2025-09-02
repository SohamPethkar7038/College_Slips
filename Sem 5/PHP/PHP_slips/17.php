<?php
$age = array("sagarr" => 31, "vicky" => 41, "leena" => 39, "ramesh" => 40);
echo "Sort an associative array in ascending order by value";
asort($age);
Print_r($age);
echo " <br>Sort an associative array in ascending order by  key";
ksort($age);
Print_r($age);
echo "<br>Sort an associative array in descending order by value";
arsort($age);
Print_r($age);
echo "<br>Sort an associative array in descending order by key";
krsort($age);
Print_r($age);
