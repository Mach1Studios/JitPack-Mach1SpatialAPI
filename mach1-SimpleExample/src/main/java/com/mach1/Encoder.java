package com.mach1;

import android.content.Context;
import android.graphics.Canvas;
import android.graphics.Paint;
import android.support.v4.content.ContextCompat;
import android.media.MediaPlayer;
import android.net.Uri;

import com.mach1.spatiallibs.Mach1Encode;
import com.mach1.spatiallibs.Mach1EncodeInputModeType;
import com.mach1.spatiallibs.Mach1DecodeAlgoType;
import com.mach1.spatiallibs.Mach1Point3DArray;

public class Encoder {

    public float elevationFromMinus1to1;
    public float masterGain;
    public float stereoRotate;
    public float stereoSpread;
    public boolean isMono;
    public float x;
    public float y;

    MediaPlayer[] players;
    Context context;

    private final static float PI = (float) Math.PI;

    private Mach1Encode m1Encode;
    private Mach1EncodeInputModeType type;

    public Encoder(Context context) {
        this.context = context;

        this.x = 0; // -1 to 1
        this.y = 0; // -1 to 1

        // default values
        this.masterGain = 1.0f;
        this.elevationFromMinus1to1 = 0.0f;
        this.stereoSpread = 1.0f; // for stereo inputs only
        this.stereoRotate = 0.0f; // for stereo inputs only

        this.isMono = true;
        this.type = Mach1EncodeInputModeType.Mach1EncodeInputModeMono;

        m1Encode = new Mach1Encode();
    }

    public void play(int indexSound, String[] filenames) {
        this.isMono = filenames.length == 1;

        type = isMono ? Mach1EncodeInputModeType.Mach1EncodeInputModeMono : Mach1EncodeInputModeType.Mach1EncodeInputModeStereo;

        stop();

        players = new MediaPlayer[isMono ? 1 : 2];
        for (int i = 0; i < players.length; i++) {
            players[i] = MediaPlayer.create(context, Uri.parse("android.resource://" + context.getPackageName() + "/raw/" + filenames[i]));
            players[i].setVolume(0,0);
            players[i].setLooping(true);
            players[i].start();
        }
    }

    public void stop() {
        if(players != null) {
            for (int i = 0; i < players.length; i++) {
                players[i].stop();
            }
        }
    }

    public void update(float[] decodeArray, Mach1DecodeAlgoType decodeType) {
        float xInternal = this.x;
        float yInternal = this.y;

        float azimuthFromMinus1to1 = (float)(Math.atan2(-xInternal,yInternal) / (2 * PI) + 0.5) % 1.0f; // 0 - 1
        float diverge = (float)(Math.sqrt(Math.pow(xInternal, 2) + Math.pow(yInternal, 2)) / Math.sqrt(2)); // diagonal

        m1Encode.setAzimuth(azimuthFromMinus1to1);
        m1Encode.setDiverge(diverge);
        m1Encode.setElevation(elevationFromMinus1to1);
        m1Encode.setIsotropicEncode(true);
        m1Encode.setInputMode(type);
        m1Encode.setAutoOrbit(true); // When true `stereoRotate` will be automatically calculated to rotate stereo points around origin
        m1Encode.setStereoRotate(stereoRotate);
        m1Encode.setStereoSpread(stereoSpread);
        //Log.v("Mach1",  "Azimuth/Rotation: " + azimuthFromMinus1to1 + " , " + "Diverge: " + diverge );
        m1Encode.generatePointResults();

        // Inline Mach1Encode->Mach1Decode decoder
        // https://dev.mach1.tech/#inline-mach1encode-object-decoder
        // Use each coeff to decode multichannel Mach1 Spatial mix
        float[] gains = m1Encode.getResultingCoeffsDecoded(decodeType, decodeArray);

        // Alternatively you can setup a mixer for more customization and sum together all same index coeff outputs
        // from each Mach1Encode object together before passing along to the Mach1Decode object for stereo
        // orientation tracked playback

        if(players != null) {
            for (int i = 0; i < players.length; i++) {
                players[i].setVolume(gains[2 * i + 0] * masterGain, gains[2 * i + 1] * masterGain);
            }
        }
    }

}
