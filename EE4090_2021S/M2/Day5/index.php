
<?php 
	$servername = "localhost";
	$database = "mydb";
	$username = "root";
	$password = "raspberry";
			
	//Create connection
	$conn = new mysqli($servername, $username, $password, $database);
			
	//Check Connection
	if($conn->connect_error){
		die("Connection failed".$conn->connect_error);
	}
			
	$sql = "SELECT * FROM (SELECT * FROM trainingdb1 ORDER BY rec_time DESC LIMIT 50) sub ORDER BY rec_time;";
	// $sql = "SELECT * FROM trainingdb1";
	$result = $conn->query($sql);
			
			
	if($result-> num_rows > 0){
		while($row=$result->fetch_assoc()){
			$output[] = $row;
		}
	}
	
	print("{\"data\":");
	print(json_encode($output, JSON_UNESCAPED_UNICODE));
	print("}"); 
	$conn->close();
?>
