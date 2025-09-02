<!DOCTYPE html>
 <html lang="en">
 <head>
 <meta charset="UTF-8">
 <meta name="viewport" content="width=device-width, initial-scale=1.0">
 <title>Student Records</title>
 </head>
 <body>
 <h1>Student Records</h1>
 <table border="1">
 <tr>
 <th>Roll No</th>
 <th>Name</th>
 <th>Class</th>
 </tr>
 <?php foreach ($students as $student): ?>
 <tr>
 <td><?php echo $student->rollno; ?></td>
 <td><?php echo $student->name; ?></td>
 <td><?php echo $student->class; ?></td>
 </tr>
 <?php endforeach; ?>
 </table>
 </body>
 </html>