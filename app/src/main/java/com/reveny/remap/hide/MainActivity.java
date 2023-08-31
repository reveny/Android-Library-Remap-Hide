package com.reveny.remap.hide;

import androidx.appcompat.app.AppCompatActivity;

import android.os.Bundle;

public class MainActivity extends AppCompatActivity {
    public native void Load(String nativeLibDir);

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_main);

        System.loadLibrary("RevenyInjector");
        Load(this.getApplicationInfo().nativeLibraryDir);
    }
}