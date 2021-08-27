
<?php 
	$servername = "192.168.1.106";
	$database = "mydb";
	$username = "dsp";
	$password = "raspberry";
			
	//Create connection
	$conn = new mysqli($servername, $username, $password, $database);
			
	//Check Connection
	if($conn->connect_error){
		die("Connection failed".$conn->connect_error);
	}
			
	$sql = "SELECT * FROM trainingdb2";
	$result = $conn->query($sql);
			
			
	if($result-> num_rows>0){
		while($row=$result->fetch_assoc()){
			$output[] = $row;
		}
	}
	
	print("{\"data\":");
	print(json_encode($output, JSON_UNESCAPED_UNICODE));
	print("}"); 
	$conn->close();
?>
