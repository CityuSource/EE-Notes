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

public class Mine extends AppCompatActivity {
    TextView showDiff;
    String user_id;
    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_mine);
        Intent intent = getIntent();
        Bundle bundle12 = intent.getExtras();
        user_id = bundle12.getString("user_id");
        new Mine.AsyncMi().execute();

        TextView user_Id =(TextView)findViewById(R.id.user_id) ;
        user_Id.setText("User ID: "+ user_id.toString() );

        Button back = (Button)findViewById(R.id.back);
        back.setOnClickListener(
                new Button.OnClickListener(){

                    public void onClick(View v) {

                        Intent intent = new Intent(Mine.this, HomePage.class);
                        Bundle bundle = new Bundle();
                        bundle.putString("user_id",user_id);
                        intent.putExtras(bundle);
                        startActivity(intent);
                        Mine.this.finish();
                    }
                }
        );

        Button mine = (Button)findViewById(R.id.mine);
        mine.setOnClickListener(
                new Button.OnClickListener(){

                    public void onClick(View v) {
                        new Mine.AsyncGoMi().execute();
                    }
                }
        );
    }
    private class AsyncGoMi extends AsyncTask<String, String, String>
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
                url = new URL("https://192.168.1.237/EE4017/mine.php");

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
            AlertDialog alertDialog = new AlertDialog.Builder(Mine.this).create();
            alertDialog.setTitle("Congratulations! ");
            alertDialog.setMessage("A new block is added to the chain");
            alertDialog.setButton(AlertDialog.BUTTON_NEUTRAL, "OK",
                    new DialogInterface.OnClickListener() {
                        public void onClick(DialogInterface dialog, int which) {
                            dialog.dismiss();
                        }
                    });
            alertDialog.show();
            new Mine.AsyncMi().execute();
        }
    }
    private class AsyncMi extends AsyncTask<String, String, String>
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

                url = new URL("https://192.168.0.104/EE4017/getdiff.php");

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
            TextView diff =(TextView)findViewById(R.id.showdiff) ;
            diff.setText("Difficulty: "+ result.toString());
        }
    }
}