package com.mach1;

import android.util.Log;

import java.util.ArrayList;
import java.util.List;

import com.mach1.spatiallibs.Mach1Decode;
import com.mach1.spatiallibs.Mach1DecodeAlgoType;

public class SpatialMixer {

    public Mach1Decode m1Decode;
    List<Encoder> listEncoders = new ArrayList<>();

    public SpatialMixer() {
        m1Decode = new Mach1Decode();
        //Mach1 Decode Setup
        //Setup the correct angle convention for orientation Euler input angles
        //m1Decode.setPlatformType(Mach1PlatformType.Mach1PlatformAndroid);
        //Setup the expected spatial audio mix format for decoding
        m1Decode.setDecodeAlgoType(Mach1DecodeAlgoType.Mach1DecodeAlgoAltSpatial);
        //Setup for the safety filter speed:
        //1.0 = no filter | 0.1 = slow filter
        m1Decode.setFilterSpeed(0.95f);
    }

    public void update(float yaw, float pitch, float roll) {
        // Mach1Decode API requires use of `beginBuffer()` and `endBuffer()`
        // This design allows customization of the frequency of calls to update the orientation
        m1Decode.beginBuffer();
        float decoded[] = new float[18];
        m1Decode.decode(yaw, pitch, roll, decoded, 0, 0);
        m1Decode.endBuffer();

        for (Encoder encoder : listEncoders) {
            encoder.update(decoded, Mach1DecodeAlgoType.Mach1DecodeAlgoSpatial);
        }
    }

    public void addEncoder(Encoder encoder) {
        listEncoders.add(encoder);
    }

    public void removeEncoder(Encoder encoder) {
        if (encoder != null) {
            encoder.stop();
            listEncoders.remove(encoder);
        }
    }
}
