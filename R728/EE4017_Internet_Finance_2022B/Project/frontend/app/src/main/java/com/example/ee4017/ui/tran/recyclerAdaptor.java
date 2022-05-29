//package com.example.ee4017.ui.tran;
//
//import android.view.View;
//import android.view.ViewGroup;
//import android.widget.TextView;
//
//import androidx.annotation.NonNull;
//import androidx.recyclerview.widget.RecyclerView;
//
//import com.example.ee4017.Model.Transaction;
//import com.example.ee4017.R;
//
//import java.util.ArrayList;
//
//public class recyclerAdaptor extends RecyclerView.Adapter<recyclerAdaptor.MyViewHolder> {
//
//    private ArrayList<Transaction>  tranList;
//
//    public recyclerAdaptor(ArrayList<Transaction> tranList){
//        this.tranList = tranList;
//    }
//
//    public class MyViewHolder extends RecyclerView.ViewHolder{
//        private TextView from;
//
//        public MyViewHolder(final View view){
//            super(view);
//            from = view.findViewById(R.id.From);
//        }
//
//    }
//
//
//    @NonNull
//    @Override
//    public recyclerAdaptor.MyViewHolder onCreateViewHolder(@NonNull ViewGroup parent, int viewType) {
//        return null;
//    }
//
//    @Override
//    public void onBindViewHolder(@NonNull recyclerAdaptor.MyViewHolder holder, int position) {
//
//    }
//
//    @Override
//    public int getItemCount() {
//        return 0;
//    }
//}
