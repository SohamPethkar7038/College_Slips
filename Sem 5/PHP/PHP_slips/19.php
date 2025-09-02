<?php
if ($_SERVER['REQUEST_METHOD'] == 'POST') {

    $big_string = $_POST['big_string'];   
    $small_string = $_POST['small_string'];
    $operation = $_POST['operation'];    
    $position = $_POST['position'];       
    $num_chars = $_POST['num_chars'];     


    switch ($operation) {
        case 1:

            echo "<h3>Deleting a part of the sentence:</h3>";
            $modified_string = substr_replace($big_string, '', $position, $num_chars);
            echo "Original String: $big_string <br>";
            echo "Modified String: $modified_string <br>";
            break;

        case 2:

            echo "<h3>Inserting the word into the sentence:</h3>";
            $modified_string = substr_replace($big_string, $small_string, $position, 0); // 0 means no characters are removed
            echo "Original String: $big_string <br>";
            echo "Modified String: $modified_string <br>";
            break;

        case 3:

            echo "<h3>Replacing part of the sentence with the word:</h3>";
            $modified_string = substr_replace($big_string, $small_string, $position, $num_chars);
            echo "Original String: $big_string <br>";
            echo "Modified String: $modified_string <br>";
            break;
        }
    }
