<?php
// Function to validate name (only uppercase letters and spaces allowed)
function validateName($name) {
    return preg_match('/^[A-Z\s]+$/', $name);
}

// Function to validate age (must be 18 or above)
function validateAge($age) {
    return filter_var($age, FILTER_VALIDATE_INT) && $age >= 18;
}

// Function to validate nationality (must be 'Indian')
function validateNationality($nationality) {
    return $nationality === 'Indian';
}

// Check if the request is a POST request
if ($_SERVER["REQUEST_METHOD"] === "POST") {
    // Sanitize and retrieve user input
    $name = isset($_POST['name']) ? trim($_POST['name']) : '';
    $age = isset($_POST['age']) ? trim($_POST['age']) : '';
    $nationality = isset($_POST['nationality']) ? trim($_POST['nationality']) : '';

    // Initialize an array to store errors
    $errors = [];

    // Validate name
    if (!validateName($name)) {
        $errors[] = "Name should contain only uppercase letters and spaces.";
    }

    // Validate age
    if (!validateAge($age)) {
        $errors[] = "Age should be 18 years or above.";
    }

    // Validate nationality
    if (!validateNationality($nationality)) {
        $errors[] = "Nationality should be 'Indian'.";
    }

    // If there are errors, return them
    if (!empty($errors)) {
        foreach ($errors as $error) {
            echo "<p style='color: red;'>Error: $error</p>";
        }
    } else {
        // If validation is successful
        echo "<p style='color: green;'>Registration successful!</p>";
    }
} else {
    // If accessed without POST request, show an error
    echo "<p style='color: red;'>Invalid request method.</p>";
}
?>
