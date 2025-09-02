<?php
$operating = $_POST['os'];
$data_science = $_POST['ds'];
$web_tech = $_POST['wt'];
$java = $_POST['java'];
$computer = $_POST['cn'];

$total = $operating + $data_science + $web_tech + $java + $computer;
$per = $total / 5.0;
?>

<html>
<table border="2">
    <tr>
        <th colspan="2">MARKSHEET</th>
    </tr>
    <tr>
        <td colspan="2">OS
        <td><?php echo "$operating" ?></td>
    </tr>
    <tr>
        <td colspan="2">DS
        <td><?php echo "$data_science" ?></td>
    </tr>
    <tr>
        <td colspan="2">WT
        <td><?php echo "$web_tech" ?></td>
    </tr>
    <tr>
        <td colspan="2">Java
        <td><?php echo "$java" ?></td>
    </tr>
    <tr>
        <td colspan="2">CN
        <td><?php echo "$computer" ?></td>
    </tr>
    <tr>
    <tr>
        <td colspan="2">TOTAL
        <td><?php echo "$total" ?></td>
    </tr>
    <tr>
        <td colspan="2">PERCENTAGE
        <td><?php echo "$per" ?></td>
    </tr>
</table>

</html>