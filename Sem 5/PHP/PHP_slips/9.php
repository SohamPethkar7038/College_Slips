<?php
if ($_SERVER['REQUEST_METHOD'] == 'POST') {

    $input_string = $_POST['input_string'];  
    $separator = $_POST['separator'];        
    $new_separator = $_POST['new_separator']; 
    $operation = $_POST['operation'];       

        switch ($operation) {
            case 1:
                echo "<h3>Splitting the string into words:</h3>";
                $words = explode($separator, $input_string);
                echo "Original String: $input_string <br>";
                echo "Words after splitting: ";
                print_r($words);  
                break;

            case 2:
                    $modified_string = str_replace($separator, $new_separator, $input_string); 
                    echo "Original String: $input_string <br>";
                    echo "Modified String: $modified_string <br>";
                break;

            case 3:
                
                echo "<h3>Finding the last word in the string:</h3>";
                $words = explode($separator, $input_string);
                $last_word = end($words); 
                echo "Original String: $input_string <br>";
                echo "Last Word: $last_word <br>";
                break;
    }
   }
?>
