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

public class verify extends AppCompatActivity {
    String user_id;
    String from;
    String to;
    String amount;
    String transaction_fee;

    TextView froms;
    TextView tos;
    TextView amounts;
    TextView transaction_fees;

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_verify);
        Intent intent = getIntent();
        Bundle bundle12 = intent.getExtras();
        user_id = bundle12.getString("user_id");
        from = bundle12.getString("from");
        to = bundle12.getString("to");
        amount = bundle12.getString("amount");
        transaction_fee = bundle12.getString("transaction_fee");

        TextView user_Id =(TextView)findViewById(R.id.user_id) ;
        user_Id.setText("User ID: "+ user_id.toString() );

        froms =(TextView)findViewById(R.id.from) ;
        froms.setText("From Account: "+ user_id.toString() );

        tos =(TextView)findViewById(R.id.to) ;
        tos.setText("To Account: "+ to.toString() );

        amounts =(TextView)findViewById(R.id.amount) ;
        amounts.setText("Amount: "+ amount.toString() + " EEC");

        transaction_fees =(TextView)findViewById(R.id.transaction_fee) ;
        transaction_fees.setText("Transaction Fee: "+ transaction_fee.toString() + " EEC");

        Button back = (Button)findViewById(R.id.back);
        back.setOnClickListener(
                new Button.OnClickListener(){

                    public void onClick(View v) {

                        Intent intent = new Intent(verify.this, transaction.class);
                        Bundle bundle = new Bundle();
                        bundle.putString("user_id",user_id);
                        intent.putExtras(bundle);
                        startActivity(intent);
                        verify.this.finish();
                    }
                }
        );

        Button contin = (Button)findViewById(R.id.contin);
        contin.setOnClickListener(
                new Button.OnClickListener(){

                    public void onClick(View v) {
                        new verify.AsyncPostTra().execute();
                    }
                }
        );

    }
    private class AsyncPostTra extends AsyncTask<String, String, String>
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
                url = new URL("https://192.168.1.237/EE4017/transaction.php");

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
                        .appendQueryParameter("from_user_id", from)
                        .appendQueryParameter("to_user_id", to)
                        .appendQueryParameter("amount", amount)
                        .appendQueryParameter("transaction_fee", transaction_fee);



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
            AlertDialog alertDialog = new AlertDialog.Builder(verify.this).create();

            alertDialog.setTitle("Alert");
            alertDialog.setMessage("Error, you dont have enough EEC saving. If you want to do the transaction, please top up");
            alertDialog.setButton(AlertDialog.BUTTON_NEUTRAL, "OK",
                    new DialogInterface.OnClickListener() {
                        public void onClick(DialogInterface dialog, int which) {
                            dialog.dismiss();

                            Intent intent = new Intent(verify.this, transaction.class);
                            Bundle bundle = new Bundle();
                            bundle.putString("user_id",user_id);
                            intent.putExtras(bundle);
                            startActivity(intent);
                            verify.this.finish();
                        }
                    });
            alertDialog.show();
        }
    }
}