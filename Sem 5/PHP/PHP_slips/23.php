

    <?php
    // Initial array (stack/queue)
    $a = array(1, 2, 3, 4, 5, 6, 7);
    echo "<h3>Initial Array:</h3>";
    print_r($a);

    if ($_SERVER["REQUEST_METHOD"] == "POST") {
        $operation = $_POST['operation'] ?? '';

        switch ($operation) {
            case 'push':
                // Push element to stack (end of array)
                array_push($a, 11);
                echo "<h3>After Push (Stack):</h3>";
                break;

            case 'pop':
                // Pop element from stack (end of array)
                array_pop($a);
                echo "<h3>After Pop (Stack):</h3>";
                break;
        }
        print_r($a);
    }
    ?>
</body>

</html>