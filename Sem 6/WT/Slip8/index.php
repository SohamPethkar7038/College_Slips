<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Sum of Number</title>
</head>
<body>
   



    <script>
        alert("Exams are near,have you started preparing?");

let num1 = parseFloat(prompt("Enter First Number:"));
let num2 = parseFloat(prompt("Enter the second number:"));

if(!isNaN(num1) && !isNaN(num2)){
    let sum=num1+num2;


    let confirmResult=confirm("Do you want to see the addition result?");

    if(confirmResult){
        alert("The sum ="+ sum);
    }
    else{
        alert("You canceled the operation.");
    }
}
else{
    alert("Invalid Input! Please enter valid numbers. ")
}
    </script>
</body>
</html>