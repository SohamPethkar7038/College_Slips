<?php 
$xml=new DOMDocument();
$xml->load("movie.xml");

$movies=$xml->getElementsByTagName("MovieInfo");

echo "<h2>Movie List</h2>";

foreach($movies as $movie){
    echo "<strong>Movie No:</strong>".$movie->getElementsByTagName("MovieNo")->item(0)->nodeValue. "<br>";
    echo "<strong>Movie Title:</strong>".$movie->getElementsByTagName("MovieTitle")->item(0)->nodeValue. "<br>";
    echo "<strong>Actor Name:</strong>".$movie->getElementsByTagName("ActorName")->item(0)->nodeValue. "<br>";
    echo "<strong>Release Year:</strong>" .$movie->getElementsByTagName("ReleaseYear")->item(0)->nodeValue. "<br> <br>";
}

?>