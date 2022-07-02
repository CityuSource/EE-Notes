package com.example.ee4017.ui.tran;

import android.app.Dialog;
import android.graphics.Color;
import android.graphics.drawable.ColorDrawable;
import android.os.Bundle;
import android.view.LayoutInflater;
import android.view.View;
import android.view.ViewGroup;
import android.widget.ArrayAdapter;
import android.widget.Button;
import android.widget.ImageView;
import android.widget.ListView;
import android.widget.TextView;
import android.widget.Toast;

import androidx.annotation.Nullable;
import androidx.annotation.NonNull;
import androidx.fragment.app.Fragment;
import androidx.lifecycle.Observer;
import androidx.lifecycle.ViewModelProviders;
import androidx.recyclerview.widget.RecyclerView;
import androidx.swiperefreshlayout.widget.SwipeRefreshLayout;

import com.android.volley.Request;
import com.android.volley.RequestQueue;
import com.android.volley.Response;
import com.android.volley.VolleyError;
import com.android.volley.toolbox.StringRequest;
import com.android.volley.toolbox.Volley;
import com.example.ee4017.MainActivity;
import com.example.ee4017.Model.Block;
import com.example.ee4017.Model.Transaction;
import com.example.ee4017.R;
import com.google.android.material.floatingactionbutton.FloatingActionButton;

import org.json.JSONArray;
import org.json.JSONException;
import org.json.JSONObject;

import java.util.ArrayList;
import java.util.HashMap;
import java.util.Map;

import static com.example.ee4017.MainActivity.APIurl;

public class tranFragment extends Fragment {

    private tranViewModel tranViewModel;
    private ArrayList<Transaction> transactionList = new ArrayList<>();
    Dialog dialog;

    public View onCreateView(@NonNull LayoutInflater inflater,
                             ViewGroup container, Bundle savedInstanceState) {
        tranViewModel =
                ViewModelProviders.of(this).get(tranViewModel.class);

        View root = inflater.inflate(R.layout.fragment_tran, container, false);


        final TextView textView = root.findViewById(R.id.text_dashboard);
        tranViewModel.getText().observe(this, new Observer<String>() {
            @Override
            public void onChanged(@Nullable String s) {
                textView.setText(s);
            }
        });


        final ListView transView = root.findViewById(R.id.transList);

        getTransactions(transView);


        final SwipeRefreshLayout pullToRefresh = root.findViewById(R.id.pullToRefresh);
        pullToRefresh.setOnRefreshListener(new SwipeRefreshLayout.OnRefreshListener() {
            @Override
            public void onRefresh() {
                if (getContext() != null) {
                    transactionList.clear();
                    final ArrayAdapter<Transaction> itemlistadapter = new ArrayAdapter<>(getContext(),
                            android.R.layout.simple_list_item_1,transactionList);

                    transView.setAdapter(itemlistadapter);

                }
                pullToRefresh.setRefreshing(false);
            }
        });


        dialog = new Dialog(getContext());
        dialog.setContentView(R.layout.transaction_dialog);
        dialog.getWindow().setBackgroundDrawable(new ColorDrawable(Color.TRANSPARENT));
        ImageView closeView = dialog.findViewById(R.id.ImageViewClose);
        final TextView recipient = dialog.findViewById(R.id.recipientInput);
        final TextView amount = dialog.findViewById(R.id.amountInput);
        Button confirmButton = dialog.findViewById(R.id.confirmButton);


        confirmButton.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                try {
                    String reci = recipient.getText().toString();
                    double value = Double.parseDouble(amount.getText().toString());

                    // post method make transaction
                    // add the response to the transactionList

                    setTransaction(reci, value);

                    dialog.cancel();
                    Toast toast = Toast.makeText(getContext(), "Your transaction is pending", Toast.LENGTH_SHORT);
                    toast.show();
                }
                catch (Exception e)
                {
                    System.out.println(e);
                }
            }
        });


        closeView.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                dialog.cancel();
            }
        });



        final FloatingActionButton floatButton = root.findViewById(R.id.fab);
        floatButton.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                dialog.show();
            }
        });



        return root;
    }

    private void getTransactions(final ListView transView){

        RequestQueue queue = Volley.newRequestQueue(getContext());
        String url = APIurl + "/get_transactions2";

        // Request a string response from the provided URL.
        StringRequest stringRequest = new StringRequest(Request.Method.GET, url,
                new Response.Listener<String>() {
                    @Override
                    public void onResponse(String response) {
                        // Display the first 500 characters of the response string.
                        String jsonstring = response;
                        System.out.println(response);
                        try {
                            JSONObject obj = new JSONObject(jsonstring);
                            JSONArray arr = obj.getJSONArray("transactions");

                            for (int i = 0;i< arr.length();i++){

                                String sender = arr.getJSONObject(i).getString("sender");
                                String recipient = arr.getJSONObject(i).getString("recipient");
                                String value = arr.getJSONObject(i).getString("value");

                                Transaction transaction = new Transaction(sender, recipient, Double.parseDouble(value));
                                transactionList.add(transaction);
                            }

                            if (getContext()!= null) {
                                final ArrayAdapter<Transaction> itemlistadapter = new ArrayAdapter<>(getContext(),
                                        android.R.layout.simple_list_item_1,transactionList);

                                transView.setAdapter(itemlistadapter);
                            }

                        } catch (JSONException e) {
                            e.printStackTrace();
                        }

                    }
                }, new Response.ErrorListener() {
            @Override
            public void onErrorResponse(VolleyError error) {
                System.out.println(error);
            }
        });

// Add the request to the RequestQueue.
        queue.add(stringRequest);

    }


    private void setTransaction(final String reci, final double value){

        RequestQueue queue = Volley.newRequestQueue(getContext());
        String url = MainActivity.APIurl + "new_transaction";

        // Request a string response from the provided URL.
        StringRequest stringRequest = new StringRequest(Request.Method.POST, url,
                new Response.Listener<String>() {
                    @Override
                    public void onResponse(String response) {
                        Toast.makeText(getContext(),"Successful transaction",Toast.LENGTH_SHORT).show();
                        System.out.println(response);
                    }
                }, new Response.ErrorListener() {
            @Override
            public void onErrorResponse(VolleyError error) {

            }
        }
        )
        {
            @Override
            public String getBodyContentType() {
                return "application/x-www-form-urlencoded; charset=UTF-8";
            }


            @Override
            public Map<String, String> getParams() {
                Map<String, String> params = new HashMap<>();
                params.put("recipient_address",reci);
                params.put("amount", String.valueOf(value));

                return params;
            }
        };
        // Add the request to the RequestQueue.
        queue.add(stringRequest);


    }


}
