package com.example.ee4017;

import androidx.appcompat.app.AlertDialog;
import androidx.appcompat.app.AppCompatActivity;

import android.content.DialogInterface;
import android.content.Intent;
import android.net.Uri;
import android.os.AsyncTask;
import android.os.Bundle;
import android.util.Log;
import android.view.View;
import android.widget.Button;
import android.widget.EditText;
import android.widget.TextView;

import java.io.BufferedReader;
import java.io.BufferedWriter;
import java.io.IOException;
import java.io.InputStream;
import java.io.InputStreamReader;
import java.io.OutputStream;
import java.io.OutputStreamWriter;
import java.net.HttpURLConnection;
import java.net.MalformedURLException;
import java.net.URL;


public class Auth extends AppCompatActivity {
    EditText email;
    EditText password;
    Button Act1button;
    apiurl api = new apiurl();


    private int RC_SIGN_IN = 1;
    public static String userID;


    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_auth);

        Act1button = (Button)findViewById(R.id.login);
        email =(EditText)findViewById(R.id.email) ;
        password =(EditText)findViewById(R.id.password) ;

        final TextView fgp = (TextView)findViewById(R.id.new_wallet);
        fgp.setOnClickListener(
                new Button.OnClickListener(){
                    public void onClick(View v){
                        new Asyncnewwallk().execute(email.getText().toString(), password.getText().toString());
                    }
                }
        );
        Act1button.setOnClickListener(
                new Button.OnClickListener(){

                    public void onClick(View v) {

                        final String emailUser = email.getText().toString();
                        final String pass = password.getText().toString();
                        new Asynclog().execute(email.getText().toString(),password.getText().toString() );
                    }
                }
        );
    }

    private class Asynclog extends AsyncTask<String, String, String>
    {

        HttpURLConnection conn;
        URL url = null;

        @Override
        protected void onPreExecute() {
            super.onPreExecute();

            //this method will be running on UI thread


        }
        @Override
        protected String doInBackground(String... params) {
            try {
                // InCorrect.setText("Email or Password  Correct");
                // Enter URL address where your php file resides
//                url = new URL (c.getForgetPwd());
                url = new URL("https://192.168.1.237/EE4017/log.php");

            } catch (MalformedURLException e) {
                // TODO Auto-generated catch block
                e.printStackTrace();

                return "exceptionNotConnect";
            }
            try {
                // Setup HttpURLConnection class to send and receive data from php and mysql
                conn = (HttpURLConnection)url.openConnection();
                conn.setReadTimeout(35000);
                conn.setConnectTimeout(30000);
                conn.setRequestMethod("POST");

                // setDoInput and setDoOutput method depict handling of both send and receive
                conn.setDoInput(true);
                conn.setDoOutput(true);

                // Append parameters to URL
                Uri.Builder builder = new Uri.Builder()
                        .appendQueryParameter("user_id", params[0])
                        .appendQueryParameter("password", params[1]);



                String query = builder.build().getEncodedQuery();

                // Open connection for sending data
                OutputStream os = conn.getOutputStream();
                BufferedWriter writer = new BufferedWriter(
                        new OutputStreamWriter(os, "UTF-8"));
                writer.write(query);
                writer.flush();
                writer.close();
                os.close();
                conn.connect();

            } catch (IOException e1) {
                // TODO Auto-generated catch block
                e1.printStackTrace();
                return "exceptionNotSend";
            }

            try {

                int response_code = conn.getResponseCode();

                // Check if successful connection made
                System.out.println("response_code"+ response_code);
                System.out.println("HttpURLConnection"+ HttpURLConnection.HTTP_OK);
                if (response_code == HttpURLConnection.HTTP_OK) {

                    // Read data sent from server
                    InputStream input = conn.getInputStream();
                    BufferedReader reader = new BufferedReader(new InputStreamReader(input));
                    StringBuilder result = new StringBuilder();
                    String line;

                    while ((line = reader.readLine()) != null) {
                        result.append(line);
                    }

                    // Pass data to onPostExecute method
                    return(result.toString());

                }else{

                    return("unsuccessful?");
                }

            } catch (IOException e) {
                e.printStackTrace();
                return "exception";
            } finally {
                conn.disconnect();
            }

        }

        @Override
        protected void onPostExecute(String result) {

            //this method will be running on UI thread
            Log.d("test", "result :" + result);
            Intent myCo = new Intent(Auth.this, HomePage.class);
            startActivity(myCo);
            Auth.this.finish();

            Intent intent = new Intent(Auth.this, HomePage.class);
            Bundle bundle = new Bundle();
            bundle.putString("user_id",email.getText().toString());
            intent.putExtras(bundle);
            startActivity(intent);
            Auth.this.finish();

//            Intent myCo = new Intent(forgetpwd.this, Send_Email_Sucessful_Forget.class);
//            startActivity(myCo);
//            forgetpwd.this.finish();

        }
    }



    private class Asyncnewwallk extends AsyncTask<String, String, String>
    {

        HttpURLConnection conn;
        URL url = null;

        @Override
        protected void onPreExecute() {
            super.onPreExecute();

            //this method will be running on UI thread


        }
        @Override
        protected String doInBackground(String... params) {
            try {
                // InCorrect.setText("Email or Password  Correct");
                // Enter URL address where your php file resides
//                url = new URL (c.getForgetPwd());
                url = new URL("https://192.168.1.237/EE4017/createWallet.php");

            } catch (MalformedURLException e) {
                // TODO Auto-generated catch block
                e.printStackTrace();

                return "exceptionNotConnect";
            }
            try {
                // Setup HttpURLConnection class to send and receive data from php and mysql
                conn = (HttpURLConnection)url.openConnection();
                conn.setReadTimeout(35000);
                conn.setConnectTimeout(30000);
                conn.setRequestMethod("POST");

                // setDoInput and setDoOutput method depict handling of both send and receive
                conn.setDoInput(true);
                conn.setDoOutput(true);

                // Append parameters to URL
                Uri.Builder builder = new Uri.Builder()
                        .appendQueryParameter("user_id", params[0])
                        .appendQueryParameter("password", params[1]);



                String query = builder.build().getEncodedQuery();

                // Open connection for sending data
                OutputStream os = conn.getOutputStream();
                BufferedWriter writer = new BufferedWriter(
                        new OutputStreamWriter(os, "UTF-8"));
                writer.write(query);
                writer.flush();
                writer.close();
                os.close();
                conn.connect();

            } catch (IOException e1) {
                // TODO Auto-generated catch block
                e1.printStackTrace();
                return "exceptionNotSend";
            }

            try {

                int response_code = conn.getResponseCode();

                // Check if successful connection made
                System.out.println("response_code"+ response_code);
                System.out.println("HttpURLConnection"+ HttpURLConnection.HTTP_OK);
                if (response_code == HttpURLConnection.HTTP_OK) {

                    // Read data sent from server
                    InputStream input = conn.getInputStream();
                    BufferedReader reader = new BufferedReader(new InputStreamReader(input));
                    StringBuilder result = new StringBuilder();
                    String line;

                    while ((line = reader.readLine()) != null) {
                        result.append(line);
                    }

                    // Pass data to onPostExecute method
                    return(result.toString());

                }else{

                    return("unsuccessful?");
                }

            } catch (IOException e) {
                e.printStackTrace();
                return "exception";
            } finally {
                conn.disconnect();
            }

        }

        @Override
        protected void onPostExecute(String result) {

            //this method will be running on UI thread
            Log.d("test", "result :" + result);
            AlertDialog alertDialog = new AlertDialog.Builder(Auth.this).create();
            alertDialog.setTitle("Alert");
            alertDialog.setMessage("Created Wallet");
            alertDialog.setButton(AlertDialog.BUTTON_NEUTRAL, "OK",
                    new DialogInterface.OnClickListener() {
                        public void onClick(DialogInterface dialog, int which) {
                            dialog.dismiss();
                        }
                    });
            alertDialog.show();

//            Intent myCo = new Intent(forgetpwd.this, Send_Email_Sucessful_Forget.class);
//            startActivity(myCo);
//            forgetpwd.this.finish();

        }
    }
}
