package com.mach1.example.SimpleExample;

import android.app.Activity;
import android.os.Bundle;
import java.util.Timer;
import java.util.TimerTask;

import android.util.Log;

import com.mach1.Encoder;
import com.mach1.SpatialMixer;

public class MainActivity extends Activity {
    private SpatialMixer spatialMixer;

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

        // Create a new spatialmixer (this contains 'n' number of Mach1Encodes -> a single Mach1Decode)
        spatialMixer = new SpatialMixer();

        Encoder encoder = new Encoder(getApplicationContext());
        encoder.x = 0;
        encoder.y = 0;
        encoder.play(0, audioFiles[0]);

        // Use this function to add more Mach1Encode objects that mix and output to the Mach1Decode object
        spatialMixer.addEncoder(encoder);


        Timer timer = new Timer();
        timer.scheduleAtFixedRate(new TimerTask() {
            @Override
            public void run() {
                spatialMixer.update(0,0,0);
            }
        }, 0, 30);
    }

    @Override
    protected void onDestroy() {
        //shutdownAudio();
        super.onDestroy();
    }


}