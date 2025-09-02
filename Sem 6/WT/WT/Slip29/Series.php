<!DOCTYPE html>
 <html lang="en">
 <head>
 <meta charset="UTF-8">
 <meta name="viewport" content="width=device-width, initial-scale=1.0">
 <title>Number Operations</title>
 </head>
 <body>
    <h2>Number Operations</h2>
    <form method="post" action="<?php echo htmlspecialchars($_SERVER["PHP_SELF"]); 
    ?>">
        Enter a number:
        <input type="text" name="number">
        <input type="submit" name="submit" value="Submit">
    </form>
    <?php
       function fibonacci($n) {
        $fib = array();
        $fib[0] = 0;
        $fib[1] = 1;
        for ($i = 2; $i < $n; $i++) {
            $fib[$i] = $fib[$i - 1] + $fib[$i - 2];
        }
        return $fib;
    }
    function sumOfDigits($number) {
        $sum = 0;
        while ($number != 0) {
            $sum += $number % 10;
            $number = (int)($number / 10);
        }
        return $sum;
    }
    if ($_SERVER["REQUEST_METHOD"] == "POST") {
        $number = $_POST["number"];
        if (!is_numeric($number)) {
            echo "Please enter a valid number.";
        } else {
                       echo "<h3>Fibonacci Series:</h3>";
            $fibonacciSeries = fibonacci($number);
            echo implode(", ", $fibonacciSeries);
            echo "<h3>Sum of Digits:</h3>";
            $sum = sumOfDigits($number);
            echo "Sum of digits of $number is $sum.";
        }
    }
    ?>
 </body>
 </html>