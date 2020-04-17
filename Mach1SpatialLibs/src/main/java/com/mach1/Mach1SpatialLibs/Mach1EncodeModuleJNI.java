/* ----------------------------------------------------------------------------
 * This file was automatically generated by SWIG (http://www.swig.org).
 * Version 3.0.12
 *
 * Do not make changes to this file unless you know what you are doing--modify
 * the SWIG interface file instead.
 * ----------------------------------------------------------------------------- */

package com.mach1.Mach1SpatialLibs;

class Mach1EncodeModuleJNI {
 
  static {
    System.loadLibrary("Mach1EncodeModule_lib");
  }

  public final static native int Mach1EncodeInputModeMono_get();
  public final static native int Mach1EncodeOutputModeM1Horizon_get();
  public final static native long Mach1EncodeCAPI_create();
  public final static native void Mach1EncodeCAPI_delete(long jarg1);
  public final static native long Mach1EncodeCAPI_getPoints(long jarg1);
  public final static native long Mach1EncodeCAPI_getGains(long jarg1);
  public final static native long Mach1EncodeCAPI_getPointsNames(long jarg1);
  public final static native long Mach1EncodeCAPI_getGainsForInputChannelNamed(long jarg1, String jarg2);
  public final static native void Mach1EncodeCAPI_generatePointResults(long jarg1);
  public final static native int Mach1EncodeCAPI_getPointsCount(long jarg1);
  public final static native long Mach1EncodeCAPI_getResultingCoeffsDecoded(long jarg1, int jarg2, long jarg3);
  public final static native long Mach1EncodeCAPI_getResultingVolumesDecoded(long jarg1, int jarg2, long jarg3);
  public final static native int Mach1EncodeCAPI_getInputMode(long jarg1);
  public final static native int Mach1EncodeCAPI_getOutputMode(long jarg1);
  public final static native int Mach1EncodeCAPI_getInputChannelsCount(long jarg1);
  public final static native int Mach1EncodeCAPI_getOutputChannelsCount(long jarg1);
  public final static native void Mach1EncodeCAPI_setInputMode(long jarg1, int jarg2);
  public final static native void Mach1EncodeCAPI_setOutputMode(long jarg1, int jarg2);
  public final static native void Mach1EncodeCAPI_setRotation(long jarg1, float jarg2);
  public final static native void Mach1EncodeCAPI_setAzimuth(long jarg1, float jarg2);
  public final static native void Mach1EncodeCAPI_setAzimuthDegrees(long jarg1, float jarg2);
  public final static native void Mach1EncodeCAPI_setAzimuthRadians(long jarg1, float jarg2);
  public final static native void Mach1EncodeCAPI_setDiverge(long jarg1, float jarg2);
  public final static native void Mach1EncodeCAPI_setPitch(long jarg1, float jarg2);
  public final static native void Mach1EncodeCAPI_setElevation(long jarg1, float jarg2);
  public final static native void Mach1EncodeCAPI_setElevationDegrees(long jarg1, float jarg2);
  public final static native void Mach1EncodeCAPI_setElevationRadians(long jarg1, float jarg2);
  public final static native void Mach1EncodeCAPI_setIsotropicEncode(long jarg1, boolean jarg2);
  public final static native void Mach1EncodeCAPI_setStereoRotate(long jarg1, float jarg2);
  public final static native void Mach1EncodeCAPI_setOrbitRotation(long jarg1, float jarg2);
  public final static native void Mach1EncodeCAPI_setOrbitRotationDegrees(long jarg1, float jarg2);
  public final static native void Mach1EncodeCAPI_setOrbitRotationRadians(long jarg1, float jarg2);
  public final static native void Mach1EncodeCAPI_setStereoSpread(long jarg1, float jarg2);
  public final static native void Mach1EncodeCAPI_setAutoOrbit(long jarg1, boolean jarg2);
  public final static native int Mach1EncodeCAPI_getLastCalculationTime(long jarg1);
}
