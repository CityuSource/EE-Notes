package com.example.ee4017.ui.wallet;

import android.os.Bundle;
import android.view.LayoutInflater;
import android.view.View;
import android.view.ViewGroup;
import android.widget.Button;
import android.widget.TextView;
import android.widget.Toast;

import androidx.annotation.Nullable;
import androidx.annotation.NonNull;
import androidx.fragment.app.Fragment;
import androidx.lifecycle.Observer;
import androidx.lifecycle.ViewModelProviders;
import androidx.swiperefreshlayout.widget.SwipeRefreshLayout;

import com.android.volley.AuthFailureError;
import com.android.volley.Request;
import com.android.volley.RequestQueue;
import com.android.volley.Response;
import com.android.volley.VolleyError;
import com.android.volley.toolbox.StringRequest;
import com.android.volley.toolbox.Volley;
import com.example.ee4017.MainActivity;
import com.example.ee4017.Model.Wallet;
import com.example.ee4017.R;
import com.google.android.gms.tasks.OnCompleteListener;
import com.google.android.gms.tasks.OnSuccessListener;
import com.google.android.gms.tasks.Task;
import com.google.firebase.firestore.DocumentReference;
import com.google.firebase.firestore.DocumentSnapshot;

import java.text.DateFormat;
import java.util.HashMap;
import java.util.Map;

import static android.accounts.AccountManager.KEY_PASSWORD;
import static com.example.ee4017.MainActivity.currentUser;

public class walletFragment extends Fragment {

    private walletViewModel homeViewModel;
    public static Wallet wallet;
    private static  TextView bal;
    private static  TextView key;
    private static  TextView diff;
    private static  TextView interest;


    public View onCreateView(@NonNull LayoutInflater inflater,
                             ViewGroup container, Bundle savedInstanceState) {
        homeViewModel =
                ViewModelProviders.of(this).get(walletViewModel.class);
        final View root = inflater.inflate(R.layout.fragment_wallet, container, false);

        //use the button to mine new block
        //generate wallet when sign in

        bal = root.findViewById(R.id.balance);
        key = root.findViewById(R.id.public_key);
        diff = root.findViewById(R.id.curr_diff);
        interest = root.findViewById(R.id.curr_interest);

        if(getContext() != null){
            getPublicKey(key);
            getDiff(diff);
            getInt(interest);
        }


        final SwipeRefreshLayout pullToRefresh = root.findViewById(R.id.pullToRefresh3);
        pullToRefresh.setOnRefreshListener(new SwipeRefreshLayout.OnRefreshListener() {
            @Override
            public void onRefresh() {
                if(getContext() != null){
                    getPublicKey(key);
                    getDiff(diff);
                    getInt(interest);
                }
                pullToRefresh.setRefreshing(false);
            }
        });

        Button mineButton = root.findViewById(R.id.mineButton);
        mineButton.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                mineblock();
            }
        });

        return root;
    }

    private void getBalance(final TextView bal, final String key){

        RequestQueue queue = Volley.newRequestQueue(getContext());
        String url = MainActivity.APIurl + "show_balance";

        // Request a string response from the provided URL.
        StringRequest stringRequest = new StringRequest(Request.Method.POST, url,
                new Response.Listener<String>() {
                    @Override
                    public void onResponse(String response) {
                        // Display the first 500 characters of the response string.
                        if(response.length() > 5){
                            bal.setText(response.substring(0,5));
                        }
                        else {
                            bal.setText(response);
                        }
                    }
                }, new Response.ErrorListener() {
            @Override
            public void onErrorResponse(VolleyError error) {
                bal.setText("N/A");
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
                params.put("address",key);

                return params;
            }
        };
        // Add the request to the RequestQueue.
        queue.add(stringRequest);

    }
    private void getPublicKey (final TextView key){

        RequestQueue queue = Volley.newRequestQueue(getContext());
        String url = MainActivity.APIurl + "public_key12341234";

        // Request a string response from the provided URL.
        StringRequest stringRequest = new StringRequest(Request.Method.GET, url,
                new Response.Listener<String>() {
                    @Override
                    public void onResponse(String response) {
                        // Display the first 500 characters of the response string.
                        key.setText(response);
                        getBalance(bal, response);
                    }
                }, new Response.ErrorListener() {
            @Override
            public void onErrorResponse(VolleyError error) {
                key.setText("N/A");
            }
        });

        // Add the request to the RequestQueue.
        queue.add(stringRequest);

    }
    private void getDiff(final TextView diff){

        RequestQueue queue = Volley.newRequestQueue(getContext());
        String url = MainActivity.APIurl + "get_diff";

        // Request a string response from the provided URL.
        StringRequest stringRequest = new StringRequest(Request.Method.GET, url,
                new Response.Listener<String>() {
                    @Override
                    public void onResponse(String response) {
                        // Display the first 500 characters of the response string.
                        diff.setText(response);
                    }
                }, new Response.ErrorListener() {
            @Override
            public void onErrorResponse(VolleyError error) {
                diff.setText("N/A");
            }
        });

        // Add the request to the RequestQueue.
        queue.add(stringRequest);
    }

    private void getInt(final TextView interest){

        if(getContext()!= null){
            RequestQueue queue = Volley.newRequestQueue(getContext());
            String url = MainActivity.APIurl + "get_interest";

            // Request a string response from the provided URL.
            StringRequest stringRequest = new StringRequest(Request.Method.GET, url,
                    new Response.Listener<String>() {
                        @Override
                        public void onResponse(String response) {
                            // Display the first 500 characters of the response string.
                            interest.setText(response);
                        }
                    }, new Response.ErrorListener() {
                @Override
                public void onErrorResponse(VolleyError error) {
                    interest.setText("N/A");
                }
            });

            // Add the request to the RequestQueue.
            queue.add(stringRequest);

        }

    }

    public void mineblock(){
        RequestQueue queue = Volley.newRequestQueue(getContext());
        String url = MainActivity.APIurl + "mine";

        // Request a string response from the provided URL.
        StringRequest stringRequest = new StringRequest(Request.Method.GET, url,
                new Response.Listener<String>() {
                    @Override
                    public void onResponse(String response) {
                        Toast.makeText(getContext(),"Successfully mine a block",Toast.LENGTH_SHORT).show();
                    }
                }, new Response.ErrorListener() {
            @Override
            public void onErrorResponse(VolleyError error) {
            }
        });

        // Add the request to the RequestQueue.
        queue.add(stringRequest);
    }

}
