package com.example.ee4017.Model;

import androidx.annotation.NonNull;

import java.lang.reflect.Array;
import java.util.ArrayList;

public class Block {

    public int index;
    public ArrayList<Transaction> transactions;
    public String timestamp;
    public String previous_hash;
    public String hash;
    public String nonce;


    public Block (int index, ArrayList<Transaction> transactions, String timestamp,
                  String previous_hash, String hash, String nonce){

        this.hash = hash;
        this.index = index;
        this.nonce = nonce;
        this.previous_hash = previous_hash;
        this.timestamp = timestamp;
        this.transactions = transactions;
    }

    public String getTimestamp() {
        return timestamp;
    }

    public ArrayList<Transaction> getTransactions() {
        return transactions;
    }


    public int getIndex() {
        return index;
    }

    public String getHash() {
        return hash;
    }

    public String getNonce() {
        return nonce;
    }

    public String getPrevious_hash() {
        return previous_hash;
    }

    public String toDialogString() {

        String result = "";
        result += "index:" + index;
        for (int i = 0; i < transactions.size();i++){
            result += transactions.get(i).toAllString();
        }

        result += "\ntimestamp:" + timestamp;

        if(previous_hash.length() <= 3){
            result += "\nprevious_hash:" + previous_hash;
        }
        else{
            result += "\nprevious_hash:" + previous_hash;
        }

        result += "\nhash:" + hash + "\nnonce:" + nonce;

        return result;

    }

    @NonNull
    @Override
    public String toString() {

        if(previous_hash.length() <= 3){
            return "index:" + index + " previous hash:" + previous_hash
                    + " hash:" + hash.substring(0,5) + "...";
        }
        return "index:" + index + " previous hash:" + previous_hash.substring(0,3) + "..."
                + " hash:" + hash.substring(0,3) + "...";
    }
}
