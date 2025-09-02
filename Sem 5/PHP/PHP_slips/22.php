<!DOCTYPE html>

<head>
    <title>Stack and Queue Operations</title>
</head>

<body>
    <h2>Select an Operation</h2>
    <form method="POST" action="">
        <label><input type="radio" value="shift" name="operation">Dequeue (Queue)</label><br>
        <label><input type="radio" value="unshift" name="operation">Enqueue (Queue)</label><br>
        <input type="submit" value="Perform Operation">
    </form>

    <?php
    $a = array(1, 2, 3, 4, 5, 6, 7);
    echo "<h3>Initial Array:</h3>";
    print_r($a);

    if ($_SERVER["REQUEST_METHOD"] == "POST") {
        $operation = $_POST['operation'] ?? '';

        switch ($operation) {

            case 'shift':
                // Dequeue element from queue (start of array)
                array_shift($a);
                echo "<h3>After Dequeue (Queue):</h3>";
                break;

            case 'unshift':
                // Enqueue element to queue (start of array)
                array_unshift($a, 11);
                echo "<h3>After Enqueue (Queue):</h3>";
                break;
        }
        print_r($a);
    }
    ?>
</body>

</html>