$(document).ready(function(){
    $('#loginForm').submit(function(event) {
        event.preventDefault(); // Prevent default form submission

        var formData = $(this).serialize(); // Serialize form data

        $.ajax({
            url: 'checkLogin.php', 
            type: 'POST',
            data: formData,
            success: function(response) {
                $('#loginMessage').html(response);
            },
            error: function() {
                $('#loginMessage').html("<p style='color: red;'>Error connecting to the server.</p>");
            }
        });
    });
});
