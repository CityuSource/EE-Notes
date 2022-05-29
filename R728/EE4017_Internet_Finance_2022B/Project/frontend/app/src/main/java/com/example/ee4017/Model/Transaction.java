package com.example.ee4017.Model;

import androidx.annotation.NonNull;

public class Transaction {
    private String sender;
    private String recipient;
    private double value;

    public Transaction (String sender, String recipient, double value){
        this.sender = sender;
        this.recipient = recipient;
        this.value = value;
    }

    public double getValue() {
        return value;
    }

    public String getRecipient() {
        return recipient;
    }

    public String getSender() {
        return sender;
    }

    public String toAllString(){
        return "\nSender:" + sender
                + "\nRecipient:" + recipient
                + "\nValue:" + value;
    }

    @NonNull
    @Override
    public String toString() {

        if(sender.length() <= 5 || recipient.length()<= 5 ){
            return "Sender:" + sender
                    + "\nRecipient:" + recipient
                    + "\nValue:" + value;
        }

        return "Sender:" + sender.substring(0,4) + "... "
                + "Value:" + value;
    }
}
