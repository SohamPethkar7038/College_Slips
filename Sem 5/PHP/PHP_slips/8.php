<?php
$str1 = $_POST['str1'];
$str2 = $_POST['str2'];
$n = $_POST['n'];
$ch = $_POST['ch'];

switch ($ch) {
    case 1:
        // a. Check if the small string appears at the start of the big string
        if (strpos($str1, $str2) === 0) {
            echo "The small string '$str2' appears at the start of the big string '$str1'.<br>";
        } else {
            echo "The small string '$str2' does not appear at the start of the big string '$str1'.<br>";
        }
        break;
    case 2:
        // b. Find the position of the small string in the big string
        $position = strpos($str1, $str2);
        if ($position !== false) {
            echo "The small string '$str2' is found at position $position in the big string.<br>";
        } else {
            echo "The small string '$str2' is not found in the big string.<br>";
        }
        break;
    case 3:
        // c. Compare both strings for the first n characters (case-insensitive)
        if ($n > 0) {
            $str1Substring = substr($str1, 0, $n);
            $str2Substring = substr($str2, 0, $n);
            if (strcasecmp($str1Substring, $str2Substring) == 0) {
                echo "The first $n characters of both strings are the same (case-insensitive).<br>";
            } else {
                echo "The first $n characters of both strings are different.<br>";
            }
        } else {
            echo "Please enter a valid number of characters for comparison.<br>";
        }
        break;
}
