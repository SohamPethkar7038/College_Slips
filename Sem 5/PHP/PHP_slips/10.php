<?php
include "10.html";
function operation($num1, $num2, $op)
{
    switch ($op) {
        case 1:
            printf("The mod of %d and %d is %d", $num1, $num2, ($num1 % $num2));
            break;

        case 2:
            printf("The power of %d and %d is %d", $num1, $num2, pow($num1, $num2));
            break;

        case 3: {
                $num = readline("Enter the n number: ");
                $n = $num;
                $sum = 0;
                while ($n >= 0) {
                    $sum = $sum + $n;
                    $n--;
                }

                echo "Sum of $num number is: $sum";
            }

            break;

        case 4: {
                $num = 4;
                $factorial = 1;
                for ($x = $num; $x >= 1; $x--) {
                    $factorial = $factorial * $x;
                }
                echo "Factorial of $num is $factorial";
            }
            break;
    }
}

$num1 = $_GET['num1'];
$num2 = $_GET['num2'];
$op = $_GET['radio'];
operation($num1, $num2, $op);