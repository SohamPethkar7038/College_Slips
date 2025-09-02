<?php
include "15.html";
function operation($s1, $s2, $op)
{
    switch ($op) {
        case 1:
            $statement = 'The slips given this year are very disappointing';
            echo implode(' ', array_slice(explode(' ', $statement), 0, 5)) . "\n";
            break;

        case 2:
            echo ucwords("hello world");
            break;

        case 3:
            $str = "Hello World";
            echo str_pad($str, 20, "*", STR_PAD_BOTH);
            break;

        case 4:
            $str = " Hello World! ";
            echo "With trim: " . trim($str);
            break;

        case 5:
            $str = "Hello World";
            $reversed_str = strrev($str);
            echo $reversed_str;
    }
}
$num1 = $_GET['s1'];
$num2 = $_GET['s2'];
$op = $_GET['radio'];
operation($s1, $s2, $op);
