<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Input Form for Preferences</title>
</head>
<body>
    <h2>Set Your Preferences</h2>
    <form action="secondPageCookies.php" method="post">
     Font Style:
     <select name="font_style">
        <option value="Arial">Arial</option>
        <option value="Verdana">Verdana</option>
        <option value="Times New Roman">Times New Roman</option>
     </select>
      <br><br>
      Font Size:
      <select name="font_size">
        <option value="small">Small</option>
        <option value="medium">Medium</option>
        <option value="large">Large</option>
      </select>
      <br><br>
      Font Color:
      <input type="color" name="font_color">
      <br><br>
      Background Color:
      <input type="color" name="background_color">
      <br><br>
      <input type="submit" value="Save Preferences">

    </form>
</body>
</html>