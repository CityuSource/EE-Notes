<html>
    <head>
        <title>Raspberry Pi Temperature Recorder</title>
        <style type="text/css">
        table {
            border-collapse: collapse;
            width: 100%;
            color: #000000;
            font-family: Serif;
            font-size: 22px;
            text-align: center;
            }
        th {
            background-color: #000000;
            color: white;
        }
        tr:nth-child(even) {background-color: #f2f2f2}
        </style>
    </head>

    <body>
        <h1>Raspberry Pi Environment Recorder</h1>
        <table>
            <tr>
                <th>ID</th>
                <th>Date and Time</th>
                <th>Temperature</th>
                <th>Humidity</th>
                <th>Pressure</th>
            </tr>

            <?php

            $servername = "localhost";
            $username = "root";
            $password = "raspberry";
            $dbname = "mydb";

            $conn = mysqli_connect($servername, $username, $password, $dbname);

            if ($conn->connect_error) { die("Connection failed: " . $conn->connect_error); }

            $sql = "SELECT * FROM trainingdb1";
            $result = $conn->query($sql);

            if ($result->num_rows > 0) {
                while($row = $result->fetch_assoc()) {
                    echo "<tr>
                        <td>".$row["ID"]."</td>
                        <td>".$row["rec_time"]."</td>
                        <td> ".$row["rec_temp"]."</td>
                        <td>".$row["rec_humi"]."</td>
                        <td> ".$row["rec_press"]."</td>
                    </tr> ";
            }
                echo "</table>";
            } 
            else { echo "0 results"; }
            $conn->close();
            ?>
        </table>
    </body>
</html>