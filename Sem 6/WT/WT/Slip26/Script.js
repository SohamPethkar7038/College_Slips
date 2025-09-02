$(document).ready(function(){
    $.ajax({
        url: 'getEmployees.php', // PHP script to fetch employee names
        type: 'GET',
        success: function(response) {
            var employees = JSON.parse(response);
            employees.forEach(function(employee) {
                $('#employee').append('<option value="' + employee.eno + '">' + employee.ename + 
'</option>');
            });
        }
    });
    $('#employee').change(function() {
        var eno = $(this).val();
        if (eno !== '') {
            // Fetch and display employee details
            $.ajax({
                url: 'getEmployeeDetails.php', // PHP script to fetch employee details
                type: 'POST',
                data: { eno: eno },
                success: function(response) {
                    $('#employeeDetails').html(response);
                }
            });
        } else {
            $('#employeeDetails').html('');
        }
    });     
  });