/* ----------------------------------------------------------------------------
 * This file was automatically generated by SWIG (http://www.swig.org).
 * Version 4.0.0
 *
 * Do not make changes to this file unless you know what you are doing--modify
 * the SWIG interface file instead.
 * ----------------------------------------------------------------------------- */

package com.Mach1.spatial_libs;

public class Mach1Point3D {
  private transient long swigCPtr;
  protected transient boolean swigCMemOwn;

  protected Mach1Point3D(long cPtr, boolean cMemoryOwn) {
    swigCMemOwn = cMemoryOwn;
    swigCPtr = cPtr;
  }

  protected static long getCPtr(Mach1Point3D obj) {
    return (obj == null) ? 0 : obj.swigCPtr;
  }

  @SuppressWarnings("deprecation")
  protected void finalize() {
    delete();
  }

  public synchronized void delete() {
    if (swigCPtr != 0) {
      if (swigCMemOwn) {
        swigCMemOwn = false;
        Mach1Point3DModuleJNI.delete_Mach1Point3D(swigCPtr);
      }
      swigCPtr = 0;
    }
  }

  public void setX(float value) {
    Mach1Point3DModuleJNI.Mach1Point3D_x_set(swigCPtr, this, value);
  }

  public float getX() {
    return Mach1Point3DModuleJNI.Mach1Point3D_x_get(swigCPtr, this);
  }

  public void setY(float value) {
    Mach1Point3DModuleJNI.Mach1Point3D_y_set(swigCPtr, this, value);
  }

  public float getY() {
    return Mach1Point3DModuleJNI.Mach1Point3D_y_get(swigCPtr, this);
  }

  public void setZ(float value) {
    Mach1Point3DModuleJNI.Mach1Point3D_z_set(swigCPtr, this, value);
  }

  public float getZ() {
    return Mach1Point3DModuleJNI.Mach1Point3D_z_get(swigCPtr, this);
  }

  public Mach1Point3D() {
    this(Mach1Point3DModuleJNI.new_Mach1Point3D(), true);
  }

}
