<?php
/*
HOST: ora11g.cs.cityu.edu.hk
PORT: 1522
SERVICE_NAME: orcl.cs.cityu.edu.hk
*/


// Create connection to Oracle
	$conn = oci_connect("[your login]", "[your password]", "//ora11g.cs.cityu.edu.hk:1522/orcl.cs.cityu.edu.hk");
	if (!$conn) {
	   $m = oci_error();
	   echo $m['message'], "\n";
	   exit;
	}
	else {
	   print "Connected to Oracle!";
	}

	
// Prepare the statement
//EMP is created from the tutorial
$stid = oci_parse($conn, 'SELECT * FROM EMP');
if (!$stid) {
    $e = oci_error($conn);
    trigger_error(htmlentities($e['message'], ENT_QUOTES), E_USER_ERROR);
}

// Perform the logic of the query
$r = oci_execute($stid);
if (!$r) {
    $e = oci_error($stid);
    trigger_error(htmlentities($e['message'], ENT_QUOTES), E_USER_ERROR);
}

// Fetch the results of the query
print "<table border='1'>\n";
while ($row = oci_fetch_array($stid, OCI_ASSOC+OCI_RETURN_NULLS)) {
    print "<tr>\n";
    foreach ($row as $item) {
        print "    <td>" . ($item !== null ? htmlentities($item, ENT_QUOTES) : "&nbsp;") . "</td>\n";
    }
    print "</tr>\n";
}
print "</table>\n";

	// Close the Oracle connection
	oci_close($conn);
?>