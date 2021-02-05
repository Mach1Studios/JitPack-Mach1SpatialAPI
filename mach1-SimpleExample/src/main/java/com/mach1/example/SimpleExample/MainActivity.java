package com.mach1.example.SimpleExample;

import android.app.Activity;
import android.os.Bundle;

import android.util.Log;

import com.mach1.Encoder;
import com.mach1.SoundMap;

public class MainActivity extends Activity {
    private SoundMap soundMap;

    public static String[][] audioFiles = {
            { "nature_mono01" },
            { "nature_mono02" },
            { "nature_mono03" },
            { "scifi_mono01" },
            { "scifi_mono02" },
            { "scifi_mono03" },
            { "scifi_mono01" },
            { "m1_sdkdemo_electronic_stereo_l", "m1_sdkdemo_electronic_stereo_r" },
            { "m1_sdkdemo_orchestral_stereo_l", "m1_sdkdemo_orchestral_stereo_r" },
    };

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_main);

        soundMap = new SoundMap();

        Encoder encoder = new Encoder(getApplicationContext());
        encoder.x = 0;
        encoder.y = 0;
        encoder.play(0, audioFiles[0]);
        soundMap.addEncoder(encoder);

        Log.v("Mach1","Test3");
    }

    @Override
    protected void onDestroy() {
        //shutdownAudio();
        super.onDestroy();
    }


}