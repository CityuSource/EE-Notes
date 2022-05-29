package com.example.ee4017;

import androidx.appcompat.app.AppCompatActivity;

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

public class transaction extends AppCompatActivity {
    TextView showbalance;
    TextView usable;
    String user_id;
    Button confirm;
    Button back;
    EditText to;
    EditText amount;
    EditText transaction_fee;

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_transaction);
        Intent intent = getIntent();
        Bundle bundle12 = intent.getExtras();
        user_id = bundle12.getString("user_id");
        new transaction.AsyncGetBal().execute();
        new transaction.AsyncGetUsBal().execute();
        to =(EditText)findViewById(R.id.to) ;
        amount = (EditText)findViewById(R.id.amount) ;
        transaction_fee = (EditText)findViewById(R.id.transaction_fee) ;

        TextView user_Id =(TextView)findViewById(R.id.user_id) ;
        user_Id.setText("User ID: "+ user_id.toString() );

        confirm = (Button)findViewById(R.id.confirm);
        confirm.setOnClickListener(
                new Button.OnClickListener(){

                    public void onClick(View v) {

                        Intent intent = new Intent(transaction.this, verify.class);
                        Bundle bundle = new Bundle();
                        bundle.putString("user_id",user_id);
                        bundle.putString("from",user_id);
                        bundle.putString("to",to.getText().toString());
                        bundle.putString("amount",amount.getText().toString());
                        bundle.putString("transaction_fee",transaction_fee.getText().toString());
                        intent.putExtras(bundle);
                        startActivity(intent);
                        transaction.this.finish();
                    }
                }
        );

        back = (Button)findViewById(R.id.back);
        back.setOnClickListener(
                new Button.OnClickListener(){

                    public void onClick(View v) {

                        Intent intent = new Intent(transaction.this, HomePage.class);
                        Bundle bundle = new Bundle();
                        bundle.putString("user_id",user_id);
                        intent.putExtras(bundle);
                        startActivity(intent);
                        transaction.this.finish();
                    }
                }
        );


    }
    private class AsyncGetBal extends AsyncTask<String, String, String>
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
                url = new URL("https://192.168.0.104/EE4017/getBal.php");

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
                        .appendQueryParameter("user_id", user_id);



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
            showbalance =(TextView)findViewById(R.id.showbalance) ;
            showbalance.setText("Balance: "+ result.toString() + " EEC");
        }
    }

    private class AsyncGetUsBal extends AsyncTask<String, String, String>
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
                url = new URL("https://192.168.1.237/EE4017/getusBal.php");

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
                        .appendQueryParameter("user_id", user_id);



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
            usable =(TextView)findViewById(R.id.usable) ;
            usable.setText("Usable Balance: "+ result.toString() + " EEC");
        }
    }
}