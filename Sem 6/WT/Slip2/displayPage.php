<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Display Page</title>
    <style>
        body{
            background-color: <?php echo $_COOKIE['bg_color']??"green"?>;
            font-family: <?php echo $_COOKIE['font_style'] ??'Arial'; ?>;
            font-size:<?php echo $_COOKIE['font_size']??'medium'; ?>;
            color:<?php echo $_COOKIE['font_color']??'red'; ?>;
            
            
        
        }
    </style>
</head>
<body>
<h2>Your Selected Settings</h2>
    <p>Font Style: <?php echo $_COOKIE['font_style'] ?? 'Default'; ?></p>
    <p>Font Size: <?php echo $_COOKIE['font_size'] ?? 'Default'; ?></p>
    <p>Font Color: <?php echo $_COOKIE['font_color'] ?? 'Default'; ?></p>
    <p>Background Color: <?php echo $_COOKIE['bg_color'] ?? 'Default'; ?></p>

    <a href="firstpage.php">Change Preferences</a>
</body>
</html>