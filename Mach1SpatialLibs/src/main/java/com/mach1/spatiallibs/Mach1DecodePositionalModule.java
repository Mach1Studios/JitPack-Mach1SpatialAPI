/* ----------------------------------------------------------------------------
 * This file was automatically generated by SWIG (http://www.swig.org).
 * Version 4.0.1
 *
 * Do not make changes to this file unless you know what you are doing--modify
 * the SWIG interface file instead.
 * ----------------------------------------------------------------------------- */

package com.mach1.spatiallibs;

public class Mach1DecodePositionalModule {
  public static SWIGTYPE_p_void Mach1DecodePositionalCAPI_create() {
    long cPtr = Mach1DecodePositionalModuleJNI.Mach1DecodePositionalCAPI_create();
    return (cPtr == 0) ? null : new SWIGTYPE_p_void(cPtr, false);
  }

  public static void Mach1DecodePositionalCAPI_delete(SWIGTYPE_p_void M1obj) {
    Mach1DecodePositionalModuleJNI.Mach1DecodePositionalCAPI_delete(SWIGTYPE_p_void.getCPtr(M1obj));
  }

  public static void Mach1DecodePositionalCAPI_setPlatformType(SWIGTYPE_p_void M1obj, Mach1PlatformType platformType) {
    Mach1DecodePositionalModuleJNI.Mach1DecodePositionalCAPI_setPlatformType(SWIGTYPE_p_void.getCPtr(M1obj), platformType.swigValue());
  }

  public static void Mach1DecodePositionalCAPI_setDecodeAlgoType(SWIGTYPE_p_void M1obj, Mach1DecodeAlgoType newAlgorithmType) {
    Mach1DecodePositionalModuleJNI.Mach1DecodePositionalCAPI_setDecodeAlgoType(SWIGTYPE_p_void.getCPtr(M1obj), newAlgorithmType.swigValue());
  }

  public static void Mach1DecodePositionalCAPI_setMuteWhenOutsideObject(SWIGTYPE_p_void M1obj, boolean muteWhenOutsideObject) {
    Mach1DecodePositionalModuleJNI.Mach1DecodePositionalCAPI_setMuteWhenOutsideObject(SWIGTYPE_p_void.getCPtr(M1obj), muteWhenOutsideObject);
  }

  public static void Mach1DecodePositionalCAPI_setMuteWhenInsideObject(SWIGTYPE_p_void M1obj, boolean muteWhenInsideObject) {
    Mach1DecodePositionalModuleJNI.Mach1DecodePositionalCAPI_setMuteWhenInsideObject(SWIGTYPE_p_void.getCPtr(M1obj), muteWhenInsideObject);
  }

  public static void Mach1DecodePositionalCAPI_setUseAttenuation(SWIGTYPE_p_void M1obj, boolean useAttenuation) {
    Mach1DecodePositionalModuleJNI.Mach1DecodePositionalCAPI_setUseAttenuation(SWIGTYPE_p_void.getCPtr(M1obj), useAttenuation);
  }

  public static void Mach1DecodePositionalCAPI_setAttenuationCurve(SWIGTYPE_p_void M1obj, float attenuationCurve) {
    Mach1DecodePositionalModuleJNI.Mach1DecodePositionalCAPI_setAttenuationCurve(SWIGTYPE_p_void.getCPtr(M1obj), attenuationCurve);
  }

  public static void Mach1DecodePositionalCAPI_setUsePlaneCalculation(SWIGTYPE_p_void M1obj, boolean usePlaneCalculation) {
    Mach1DecodePositionalModuleJNI.Mach1DecodePositionalCAPI_setUsePlaneCalculation(SWIGTYPE_p_void.getCPtr(M1obj), usePlaneCalculation);
  }

  public static void Mach1DecodePositionalCAPI_setUseYawForRotation(SWIGTYPE_p_void M1obj, boolean useYawForRotation) {
    Mach1DecodePositionalModuleJNI.Mach1DecodePositionalCAPI_setUseYawForRotation(SWIGTYPE_p_void.getCPtr(M1obj), useYawForRotation);
  }

  public static void Mach1DecodePositionalCAPI_setUsePitchForRotation(SWIGTYPE_p_void M1obj, boolean usePitchForRotation) {
    Mach1DecodePositionalModuleJNI.Mach1DecodePositionalCAPI_setUsePitchForRotation(SWIGTYPE_p_void.getCPtr(M1obj), usePitchForRotation);
  }

  public static void Mach1DecodePositionalCAPI_setUseRollForRotation(SWIGTYPE_p_void M1obj, boolean useRollForRotation) {
    Mach1DecodePositionalModuleJNI.Mach1DecodePositionalCAPI_setUseRollForRotation(SWIGTYPE_p_void.getCPtr(M1obj), useRollForRotation);
  }

  public static void Mach1DecodePositionalCAPI_setListenerPosition(SWIGTYPE_p_void M1obj, Mach1Point3D point) {
    Mach1DecodePositionalModuleJNI.Mach1DecodePositionalCAPI_setListenerPosition(SWIGTYPE_p_void.getCPtr(M1obj), Mach1Point3D.getCPtr(point), point);
  }

  public static void Mach1DecodePositionalCAPI_setListenerRotation(SWIGTYPE_p_void M1obj, Mach1Point3D point) {
    Mach1DecodePositionalModuleJNI.Mach1DecodePositionalCAPI_setListenerRotation(SWIGTYPE_p_void.getCPtr(M1obj), Mach1Point3D.getCPtr(point), point);
  }

  public static void Mach1DecodePositionalCAPI_setListenerRotationQuat(SWIGTYPE_p_void M1obj, Mach1Point4D point) {
    Mach1DecodePositionalModuleJNI.Mach1DecodePositionalCAPI_setListenerRotationQuat(SWIGTYPE_p_void.getCPtr(M1obj), Mach1Point4D.getCPtr(point), point);
  }

  public static void Mach1DecodePositionalCAPI_setDecoderAlgoPosition(SWIGTYPE_p_void M1obj, Mach1Point3D point) {
    Mach1DecodePositionalModuleJNI.Mach1DecodePositionalCAPI_setDecoderAlgoPosition(SWIGTYPE_p_void.getCPtr(M1obj), Mach1Point3D.getCPtr(point), point);
  }

  public static void Mach1DecodePositionalCAPI_setDecoderAlgoRotation(SWIGTYPE_p_void M1obj, Mach1Point3D point) {
    Mach1DecodePositionalModuleJNI.Mach1DecodePositionalCAPI_setDecoderAlgoRotation(SWIGTYPE_p_void.getCPtr(M1obj), Mach1Point3D.getCPtr(point), point);
  }

  public static void Mach1DecodePositionalCAPI_setDecoderAlgoRotationQuat(SWIGTYPE_p_void M1obj, Mach1Point4D point) {
    Mach1DecodePositionalModuleJNI.Mach1DecodePositionalCAPI_setDecoderAlgoRotationQuat(SWIGTYPE_p_void.getCPtr(M1obj), Mach1Point4D.getCPtr(point), point);
  }

  public static void Mach1DecodePositionalCAPI_setDecoderAlgoScale(SWIGTYPE_p_void M1obj, Mach1Point3D point) {
    Mach1DecodePositionalModuleJNI.Mach1DecodePositionalCAPI_setDecoderAlgoScale(SWIGTYPE_p_void.getCPtr(M1obj), Mach1Point3D.getCPtr(point), point);
  }

  public static void Mach1DecodePositionalCAPI_evaluatePositionResults(SWIGTYPE_p_void M1obj) {
    Mach1DecodePositionalModuleJNI.Mach1DecodePositionalCAPI_evaluatePositionResults(SWIGTYPE_p_void.getCPtr(M1obj));
  }

  public static void Mach1DecodePositionalCAPI_getCoefficients(SWIGTYPE_p_void M1obj, SWIGTYPE_p_float result) {
    Mach1DecodePositionalModuleJNI.Mach1DecodePositionalCAPI_getCoefficients(SWIGTYPE_p_void.getCPtr(M1obj), SWIGTYPE_p_float.getCPtr(result));
  }

  public static float Mach1DecodePositionalCAPI_getDist(SWIGTYPE_p_void M1obj) {
    return Mach1DecodePositionalModuleJNI.Mach1DecodePositionalCAPI_getDist(SWIGTYPE_p_void.getCPtr(M1obj));
  }

  public static Mach1Point3D Mach1DecodePositionalCAPI_getCurrentAngle(SWIGTYPE_p_void M1obj) {
    return new Mach1Point3D(Mach1DecodePositionalModuleJNI.Mach1DecodePositionalCAPI_getCurrentAngle(SWIGTYPE_p_void.getCPtr(M1obj)), true);
  }

  public static Mach1Point3D Mach1DecodePositionalCAPI_getCoefficientsRotation(SWIGTYPE_p_void M1obj) {
    return new Mach1Point3D(Mach1DecodePositionalModuleJNI.Mach1DecodePositionalCAPI_getCoefficientsRotation(SWIGTYPE_p_void.getCPtr(M1obj)), true);
  }

  public static void Mach1DecodePositionalCAPI_setFilterSpeed(SWIGTYPE_p_void M1obj, float filterSpeed) {
    Mach1DecodePositionalModuleJNI.Mach1DecodePositionalCAPI_setFilterSpeed(SWIGTYPE_p_void.getCPtr(M1obj), filterSpeed);
  }

  public static int Mach1DecodePositionalCAPI_getLastCalculationTime(SWIGTYPE_p_void M1obj) {
    return Mach1DecodePositionalModuleJNI.Mach1DecodePositionalCAPI_getLastCalculationTime(SWIGTYPE_p_void.getCPtr(M1obj));
  }

  public static void Mach1DecodePositionalCAPI_setUseBlendMode(SWIGTYPE_p_void M1obj, boolean useBlendMode) {
    Mach1DecodePositionalModuleJNI.Mach1DecodePositionalCAPI_setUseBlendMode(SWIGTYPE_p_void.getCPtr(M1obj), useBlendMode);
  }

  public static void Mach1DecodePositionalCAPI_setIgnoreTopBottom(SWIGTYPE_p_void M1obj, boolean ignoreTopBottom) {
    Mach1DecodePositionalModuleJNI.Mach1DecodePositionalCAPI_setIgnoreTopBottom(SWIGTYPE_p_void.getCPtr(M1obj), ignoreTopBottom);
  }

  public static void Mach1DecodePositionalCAPI_setAttenuationCurveBlendMode(SWIGTYPE_p_void M1obj, float attenuationCurveBlendMode) {
    Mach1DecodePositionalModuleJNI.Mach1DecodePositionalCAPI_setAttenuationCurveBlendMode(SWIGTYPE_p_void.getCPtr(M1obj), attenuationCurveBlendMode);
  }

  public static void Mach1DecodePositionalCAPI_getCoefficientsInterior(SWIGTYPE_p_void M1obj, SWIGTYPE_p_float result) {
    Mach1DecodePositionalModuleJNI.Mach1DecodePositionalCAPI_getCoefficientsInterior(SWIGTYPE_p_void.getCPtr(M1obj), SWIGTYPE_p_float.getCPtr(result));
  }

}
