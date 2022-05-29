package com.example.ee4017.ui.info;

import androidx.lifecycle.LiveData;
import androidx.lifecycle.MutableLiveData;
import androidx.lifecycle.ViewModel;

public class infoViewModel extends ViewModel {

    private MutableLiveData<String> mText;

    public infoViewModel() {
        mText = new MutableLiveData<>();
        mText.setValue("Whole Chain");
    }

    public LiveData<String> getText() {
        return mText;
    }
}