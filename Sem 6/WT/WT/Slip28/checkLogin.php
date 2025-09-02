<?php
// PostgreSQL database connection details
$host = "localhost";
$dbname = "tybcs";
$user = "postgres";  // Default PostgreSQL username
$password = "redhat"; // Your PostgreSQL password

// Establish connection
$conn = pg_connect("host=$host dbname=$dbname user=$user password=$password");

if (!$conn) {
    die("Connection failed: " . pg_last_error());
}

// Retrieve and sanitize user input
$username = isset($_POST['username']) ? trim($_POST['username']) : '';
$password = isset($_POST['password']) ? trim($_POST['password']) : '';

if (empty($username) || empty($password)) {
    echo "<p style='color: red;'>Username and Password are required.</p>";
    exit;
}

// Use parameterized query to prevent SQL Injection
$query = "SELECT * FROM users WHERE username = $1 AND password = $2";
$result = pg_query_params($conn, $query, array($username, $password));

if (pg_num_rows($result) > 0) {
    echo "<p style='color: green;'>Login successful!</p>";
} else {
    echo "<p style='color: red;'>Invalid username or password.</p>";
}

// Close the connection
pg_close($conn);
?>
