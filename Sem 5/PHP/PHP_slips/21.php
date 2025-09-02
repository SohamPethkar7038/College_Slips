<?php
//  Create an array of 15 high temperatures for a spring month
$high_temperatures = [68, 72, 75, 78, 74, 69, 71, 76, 80, 82, 79, 73, 77, 81, 70];

// Calculate the average high temperature
$average_temp = array_sum($high_temperatures) / count($high_temperatures);

//  Find the five warmest high temperatures
rsort($high_temperatures);
$five_warmest = array_slice($high_temperatures, 0, 5);

?>

<!DOCTYPE html>

<head>

    <title>High Temperatures Analysis</title>
</head>

<body>
    <p>Average High Temperature : <?php echo ($average_temp); ?>°F</p>
    <p>Five Warmest High Temperatures : <?php echo implode(" , ", $five_warmest); ?>°F</p>
    </div>
</body>

</html>