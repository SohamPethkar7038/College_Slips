<?php
 $xml = new SimpleXMLElement('<CricketTeam></CricketTeam>');
 $team = $xml->addChild('Team');
 $team->addAttribute('country', 'Australia');
 $player1 = $team->addChild('player');
 $runs = $player1->addChild('runs');
 $wicket = $player1->addChild('wicket');
 $player2 = $team->addChild('player');
 $xml->asXML('cricket.xml');
 $indiaXml = simplexml_load_file('cricket.xml');
 $team = $indiaXml->addChild('Team');
 $team->addAttribute('country', 'India');
 $player1 = $team->addChild('player');
$player1->addChild('name', 'Virat Kohli');
 $player1->addChild('position', 'Captain');
 $player1->addChild('role', 'Batsman');
 $player2 = $team->addChild('player');
 $player2->addChild('name', 'Rohit Sharma');
 $player2->addChild('position', 'Vice Captain');
 $player2->addChild('role', 'Batsman');
 $player3 = $team->addChild('player');
 $player3->addChild('name', 'Jasprit Bumrah');
 $player3->addChild('position', 'Bowler');
 $player3->addChild('role', 'Fast Bowler');
 $indiaXml->asXML('cricket.xml');
 echo "Elements added for Team India in cricket.xml";
 ?>