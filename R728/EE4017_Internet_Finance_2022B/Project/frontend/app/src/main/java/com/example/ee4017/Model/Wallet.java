package com.example.ee4017.Model;

import androidx.annotation.NonNull;

public class Wallet {

    private String private_key;
    private String public_key;
    private double balance;

    public Wallet(String private_key, String public_key){
        this.private_key = private_key;
        this.public_key = public_key;
    }


    public double getBalance() {
        return balance;
    }

    public String getPrivate_key() {
        return private_key;
    }

    public void setBalance(double balance) {
        this.balance = balance;
    }

    public void setPrivate_key(String private_key) {
        this.private_key = private_key;
    }

    public void setPublic_key(String public_key) {
        this.public_key = public_key;
    }

    public String getPublic_key() {
        return public_key;
    }

//    @NonNull
//    @Override
//    public String toString() {
//        return super.toString();
//    }
}
