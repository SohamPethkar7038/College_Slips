<?php
function is_even($var)
{
    if ($var % 2 == 0)
        return $var;
}

function array_into_chunks($arr, $chunk_size)
{
    return array_chunk($arr, $chunk_size, true);
}


$choice = $_POST['ch'];

$arr = array('a' => 1, 'b' => 2, 'c' => 3, 'd' => 4, 'e' => 5, 'f' => 6, 'g' => 7, 'h' => 8);
switch ($choice) {
    case 1:
        $chunk_size = 3;
        $chunks = array_into_chunks($arr, $chunk_size);
        echo "Array split into chunks:<br>";
        print_r($chunks);
        break;

    case 2:
        asort($arr);
        echo "Array in ascending order:<br>";
        print_r($arr);
        arsort($arr);
        echo "<br>Array in descending order:<br>";
        print_r($arr);
        break;
    case 3:
        print_r(array_filter($arr, 'is_even'));
        break;
}
