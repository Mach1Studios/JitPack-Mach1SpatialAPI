/* ----------------------------------------------------------------------------
 * This file was automatically generated by SWIG (http://www.swig.org).
 * Version 4.0.1
 *
 * Do not make changes to this file unless you know what you are doing--modify
 * the SWIG interface file instead.
 * ----------------------------------------------------------------------------- */

package com.mach1.spatiallibs;

public class Mach1UtilsModule {
  public static String convertToString(SWIGTYPE_p_void in) {
    return Mach1UtilsModuleJNI.convertToString(SWIGTYPE_p_void.getCPtr(in));
  }

  public static SWIGTYPE_p_void getitemVoid(SWIGTYPE_p_void in, int index) {
    long cPtr = Mach1UtilsModuleJNI.getitemVoid(SWIGTYPE_p_void.getCPtr(in), index);
    return (cPtr == 0) ? null : new SWIGTYPE_p_void(cPtr, false);
  }

}
