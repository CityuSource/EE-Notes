package com.example.ee4017.ui.info;

import android.app.AlertDialog;
import android.content.DialogInterface;
import android.os.Bundle;
import android.view.LayoutInflater;
import android.view.View;
import android.view.ViewGroup;
import android.widget.AdapterView;
import android.widget.ArrayAdapter;
import android.widget.ListView;
import android.widget.TextView;

import androidx.annotation.Nullable;
import androidx.annotation.NonNull;
import androidx.fragment.app.Fragment;
import androidx.lifecycle.Observer;
import androidx.lifecycle.ViewModelProviders;
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

import org.json.JSONArray;
import org.json.JSONException;
import org.json.JSONObject;


import java.util.ArrayList;

import static com.example.ee4017.MainActivity.APIurl;

public class infoFragment extends Fragment {

    private infoViewModel notificationsViewModel;
    private ArrayList<Block> blockchain = new ArrayList<>();


    public View onCreateView(@NonNull LayoutInflater inflater,
                             ViewGroup container, Bundle savedInstanceState) {
        notificationsViewModel =
                ViewModelProviders.of(this).get(infoViewModel.class);
        View root = inflater.inflate(R.layout.fragment_info, container, false);
        final TextView textView = root.findViewById(R.id.wholeBlock);
        notificationsViewModel.getText().observe(this, new Observer<String>() {
            @Override
            public void onChanged(@Nullable String s) {
                textView.setText(s);
            }
        });


        final ListView fullchain = root.findViewById(R.id.wholeChainListView);
        if(getContext()!= null){
            getWholechain(fullchain);
        }

        final SwipeRefreshLayout pullToRefresh = root.findViewById(R.id.pullToRefresh2);
        pullToRefresh.setOnRefreshListener(new SwipeRefreshLayout.OnRefreshListener() {
            @Override
            public void onRefresh() {
                if(getContext()!= null){
                    blockchain.clear();
                    final ArrayAdapter<Block> itemlistadapter2 = new ArrayAdapter<>(getContext(),
                            android.R.layout.simple_list_item_1, blockchain);

                    fullchain.setAdapter(itemlistadapter2);
                    getWholechain(fullchain);
                }
                pullToRefresh.setRefreshing(false);
            }
        });

        fullchain.setOnItemClickListener(new AdapterView.OnItemClickListener() {
            @Override
            public void onItemClick(AdapterView<?> parent, View view, int position, long id) {
                AlertDialog alertDialog = new AlertDialog.Builder(getContext()).create();
                alertDialog.setTitle("Block");

                alertDialog.setMessage(blockchain.get(position).toDialogString());
                alertDialog.setButton(androidx.appcompat.app.AlertDialog.BUTTON_NEUTRAL, "OK",
                        new DialogInterface.OnClickListener() {
                            public void onClick(DialogInterface dialog, int which) {
                                dialog.dismiss();
                            }
                        });
                alertDialog.show();
                }
        });


        return root;
    }

    private void getWholechain(final ListView fullchain){
        RequestQueue queue = Volley.newRequestQueue(getContext());
        String url = APIurl + "/fullchain2";

        // Request a string response from the provided URL.
        StringRequest stringRequest = new StringRequest(Request.Method.GET, url,
                new Response.Listener<String>() {
                    @Override
                    public void onResponse(String response) {
                        // Display the first 500 characters of the response string.
                        String jsonstring = response;
                        try {
                            JSONObject obj = new JSONObject(jsonstring);
                            JSONArray arr = obj.getJSONArray("chain");

                            for (int i = 0;i< arr.length();i++){

                                String hash = arr.getJSONObject(i).getString("hash");
                                String index = arr.getJSONObject(i).getString("index");
                                String nonce = arr.getJSONObject(i).getString("nonce");
                                String previous_hash = arr.getJSONObject(i).getString("previous_hash");
                                String timestamp = arr.getJSONObject(i).getString("timestamp");

                                ArrayList<Transaction> transRecord = new ArrayList<>();
                                JSONArray tran = arr.getJSONObject(i).getJSONArray("transactions");

                                for(int j = 0;j< tran.length();j++){
                                    String sender = tran.getJSONObject(j)
                                            .getString("sender");

                                    String recipient = tran.getJSONObject(j)
                                            .getString("recipient");

                                    String value = tran.getJSONObject(j)
                                            .getString("value");
                                    Transaction transaction =
                                            new Transaction(sender,recipient,Double.parseDouble(value));

                                    transRecord.add(transaction);
                                }

                                Block block = new Block(Integer.parseInt(index),transRecord,
                                        timestamp,previous_hash,
                                        hash,nonce);

                                blockchain.add(block);

                            }


                            if (getContext()!= null) {
                                final ArrayAdapter<Block> itemlistadapter = new ArrayAdapter<>(getContext(),
                                        android.R.layout.simple_list_item_1, blockchain);

                                fullchain.setAdapter(itemlistadapter);
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
}