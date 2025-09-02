<?php
$xml=simplexml_load_file("book.xml");

if($xml==false){
    die("Error:Unable to load XML file.");
}

echo "<h2>Book Details</h2>";

foreach($xml->book as $book){
    echo "<strong>Book Name:</strong>".$book->book_name."<br>";
    echo "<strong>Auther:</strong>".$book->author."<br>";
    echo "<strong>Publisher:</strong>".$book->pub."<br>";
    echo "<strong>Price:</strong>".$book->price."<br>";
   echo"<br>";
}

?>