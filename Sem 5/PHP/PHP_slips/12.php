<?php
include "12.html";
function operation($num1, $num2, $op)
{
    switch ($op) {
        case 1:
            printf("The addtion of %d and %d is %d", $num1, $num2, ($num1 + $num2));
            break;

        case 2:
            printf("The subtraction of %d and %d is %d", $num1, $num2, ($num1 - $num2));
            break;

        case 3:
            printf("The multiplication of %d and %d is %d", $num1, $num2, ($num1 * $num2));
            break;

        case 4:
            if ($num2 == 0) {
                echo "Divide error nt possible";
            } else {
                printf("The division of %d and %d is %d", $num1, $num2, ($num1 / $num2));
            }
            break;
    }
}

$num1 = $_GET['num1'];
$num2 = $_GET['num2'];
$op = $_GET['radio'];
operation($num1, $num2, $op);
