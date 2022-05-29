package com.example.ee4017.ui.tran;

import androidx.lifecycle.LiveData;
import androidx.lifecycle.MutableLiveData;
import androidx.lifecycle.ViewModel;

import com.example.ee4017.Model.Transaction;

import java.util.ArrayList;

public class tranViewModel extends ViewModel {

    private MutableLiveData<String> mText;

    public tranViewModel() {
        mText = new MutableLiveData<>();
        mText.setValue("All Unconfirmed Transactions");
    }

    public LiveData<String> getText() {
        return mText;
    }

}