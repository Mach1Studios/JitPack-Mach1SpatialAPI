/* ----------------------------------------------------------------------------
 * This file was automatically generated by SWIG (http://www.swig.org).
 * Version 4.0.0
 *
 * Do not make changes to this file unless you know what you are doing--modify
 * the SWIG interface file instead.
 * ----------------------------------------------------------------------------- */

package com.Mach1.spatial_libs;

public class Mach1Encode {

  private long M1obj = 0;

  public Mach1Encode()
  {
    M1obj = Mach1EncodeModuleJNI.Mach1EncodeCAPI_create();
  }

  protected void finalize ( ) {
    if(M1obj != 0)  Mach1EncodeModuleJNI.Mach1EncodeCAPI_delete(M1obj);
  }

  public Mach1Point3DArray getPoints() {
    long cPtr = Mach1EncodeModuleJNI.Mach1EncodeCAPI_getPoints(M1obj);
    return (cPtr == 0) ? null : Mach1Point3DArray.frompointer(cPtr);
  }

  public float[][] getGains() {
    long cPtr = Mach1EncodeModuleJNI.Mach1EncodeCAPI_getGains(M1obj);

    float[][] arr = new float[Mach1EncodeModuleJNI.Mach1EncodeCAPI_getPointsCount(M1obj)][8];
    for( int i = 0; i < arr.length; i++)
    {
      Mach1FloatArray flt = Mach1FloatArray.frompointer(Mach1UtilsModuleJNI.getitemVoid(cPtr,i));
      for( int j = 0; j < 8; j++)
      {
        arr[i][j] = flt.getitem(j);
      }
    }
    return arr;
  }

  public String[] getPointsNames() {
    long cPtr = Mach1EncodeModuleJNI.Mach1EncodeCAPI_getPointsNames(M1obj);

    String[] arr = new String[Mach1EncodeModuleJNI.Mach1EncodeCAPI_getPointsCount(M1obj)];
    for( int i = 0; i < arr.length; i++)
    {
      arr[i] = Mach1UtilsModuleJNI.convertToString(Mach1UtilsModuleJNI.getitemVoid(cPtr, i));
    }
    return arr;
  }

  public float[] getGainsForInputChannelNamed(String pointName) {
    long cPtr = Mach1EncodeModuleJNI.Mach1EncodeCAPI_getGainsForInputChannelNamed(M1obj, pointName);
    Mach1FloatArray flt = Mach1FloatArray.frompointer(cPtr);

    float[] arr = new float[8];
    for( int i = 0; i < 8; i++)
    {
      arr[i] = flt.getitem(i);
    }
    return arr;
  }

  public void generatePointResults() {
    Mach1EncodeModuleJNI.Mach1EncodeCAPI_generatePointResults(M1obj);
  }

  public int getPointsCount() {
    return Mach1EncodeModuleJNI.Mach1EncodeCAPI_getPointsCount(M1obj);
  }

  public float[] getResultingVolumesDecoded(Mach1DecodeAlgoType decodeType, float[] decodeResult) {
    Mach1FloatArray floatArrayIn = new Mach1FloatArray(18);
    for( int i = 0; i < decodeResult.length; i++)
    {
      floatArrayIn.setitem(i, decodeResult[i]);
    }
    long cPtr = Mach1EncodeModuleJNI.Mach1EncodeCAPI_getResultingVolumesDecoded(M1obj, decodeType.swigValue(), floatArrayIn.asVoidPtr());
    floatArrayIn.delete();

    Mach1FloatArray floatArrayResulted = Mach1FloatArray.frompointer(cPtr);

    float[] arr = new float[14];
    for( int i = 0; i < 14; i++)
    {
      arr[i] = floatArrayResulted.getitem(i);
    }
    return arr;
  }

  public void setInputMode(Mach1EncodeInputModeType inputMode) {
    Mach1EncodeModuleJNI.Mach1EncodeCAPI_setInputMode(M1obj, inputMode.swigValue());
  }

  public void setOutputMode(Mach1EncodeOutputModeType outputMode) {
    Mach1EncodeModuleJNI.Mach1EncodeCAPI_setOutputMode(M1obj, outputMode.swigValue());
  }

  public void setRotation(float rotation) {
    Mach1EncodeModuleJNI.Mach1EncodeCAPI_setRotation(M1obj, rotation);
  }

  public void setDiverge(float diverge) {
    Mach1EncodeModuleJNI.Mach1EncodeCAPI_setDiverge(M1obj, diverge);
  }

  public void setPitch(float pitch) {
    Mach1EncodeModuleJNI.Mach1EncodeCAPI_setPitch(M1obj, pitch);
  }

  public void setStereoRotate(float sRotate) {
    Mach1EncodeModuleJNI.Mach1EncodeCAPI_setStereoRotate(M1obj, sRotate);
  }

  public void setStereoSpread(float sSpread) {
    Mach1EncodeModuleJNI.Mach1EncodeCAPI_setStereoSpread(M1obj, sSpread);
  }

  public void setAutoOrbit(boolean autoOrbit) {
    Mach1EncodeModuleJNI.Mach1EncodeCAPI_setAutoOrbit(M1obj, autoOrbit);
  }

  public void setIsotropicEncode(boolean isotropicEncode) {
    Mach1EncodeModuleJNI.Mach1EncodeCAPI_setIsotropicEncode(M1obj, isotropicEncode);
  }
}
