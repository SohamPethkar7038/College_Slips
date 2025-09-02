$(document).ready(function () {
    // Convert name input to uppercase
    $("#name").on("input", function() {
        $(this).val($(this).val().toUpperCase());
    });

    // Prevent age input from going below 18
    $("#age").on("input", function() {
        if ($(this).val() < 18) {
            $(this).val(18);
        }
    });

    // Handle form submission
    $('#registrationForm').submit(function (event) {
        event.preventDefault();
        var formData = $(this).serialize();

        $.ajax({
            url: 'registerVoter.php',
            type: 'POST',
            data: formData,
            success: function (response) {
                $('#registrationMessage').html(response);
                $('#registrationForm')[0].reset(); // Clears the form on success
            },
            error: function (xhr, status, error) {
                $('#registrationMessage').html('<p style="color: red;">An error occurred. Please try again.</p>');
                console.error("AJAX Error:", status, error);
            }
        });
    });
});
