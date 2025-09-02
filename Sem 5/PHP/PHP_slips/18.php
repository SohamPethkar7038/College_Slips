<?php

$array = array('zero' => 0, 'one' => 1, 'two' => 2, 'three' => 3, 'four' => 4, 'five' => 5);

$ch = $_POST['a'];

switch ($ch) {
    case 1:
        echo "Reverse the order of each element's key-value pair<br>";
        $reversedArray = array_flip($array);
        foreach ($reversedArray as $key => $value) {
            echo "Key: $key , Value: $value<br>";
        }
        break;
    case 2:
        echo "Elements in Random Order:<br>";
        $keys = array_keys($array);  // Get the keys
        shuffle($keys);              // Shuffle the keys         
        foreach ($keys as $key) {
            echo "Key: $key, Value: $array[$key]<br>";
        }
        break;
    case 3:
        echo "Individual Variables:<br>";
        extract($array);
        foreach ($array as $key => $value) {
            echo "$key: $$key<br>";
        }
        break;
    case 4:
        echo "display the key value :<br>";
        echo "Array Elements:<br>";
        print_r($array);
        break;
}
