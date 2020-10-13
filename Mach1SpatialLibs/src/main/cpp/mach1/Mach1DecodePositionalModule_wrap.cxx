/* ----------------------------------------------------------------------------
 * This file was automatically generated by SWIG (http://www.swig.org).
 * Version 4.0.2
 *
 * This file is not intended to be easily readable and contains a number of
 * coding conventions designed to improve portability and efficiency. Do not make
 * changes to this file unless you know what you are doing--modify the SWIG
 * interface file instead.
 * ----------------------------------------------------------------------------- */


#ifndef SWIGJAVA
#define SWIGJAVA
#endif



#ifdef __cplusplus
/* SwigValueWrapper is described in swig.swg */
template<typename T> class SwigValueWrapper {
  struct SwigMovePointer {
    T *ptr;
    SwigMovePointer(T *p) : ptr(p) { }
    ~SwigMovePointer() { delete ptr; }
    SwigMovePointer& operator=(SwigMovePointer& rhs) { T* oldptr = ptr; ptr = 0; delete oldptr; ptr = rhs.ptr; rhs.ptr = 0; return *this; }
  } pointer;
  SwigValueWrapper& operator=(const SwigValueWrapper<T>& rhs);
  SwigValueWrapper(const SwigValueWrapper<T>& rhs);
public:
  SwigValueWrapper() : pointer(0) { }
  SwigValueWrapper& operator=(const T& t) { SwigMovePointer tmp(new T(t)); pointer = tmp; return *this; }
  operator T&() const { return *pointer.ptr; }
  T *operator&() { return pointer.ptr; }
};

template <typename T> T SwigValueInit() {
  return T();
}
#endif

/* -----------------------------------------------------------------------------
 *  This section contains generic SWIG labels for method/variable
 *  declarations/attributes, and other compiler dependent labels.
 * ----------------------------------------------------------------------------- */

/* template workaround for compilers that cannot correctly implement the C++ standard */
#ifndef SWIGTEMPLATEDISAMBIGUATOR
# if defined(__SUNPRO_CC) && (__SUNPRO_CC <= 0x560)
#  define SWIGTEMPLATEDISAMBIGUATOR template
# elif defined(__HP_aCC)
/* Needed even with `aCC -AA' when `aCC -V' reports HP ANSI C++ B3910B A.03.55 */
/* If we find a maximum version that requires this, the test would be __HP_aCC <= 35500 for A.03.55 */
#  define SWIGTEMPLATEDISAMBIGUATOR template
# else
#  define SWIGTEMPLATEDISAMBIGUATOR
# endif
#endif

/* inline attribute */
#ifndef SWIGINLINE
# if defined(__cplusplus) || (defined(__GNUC__) && !defined(__STRICT_ANSI__))
#   define SWIGINLINE inline
# else
#   define SWIGINLINE
# endif
#endif

/* attribute recognised by some compilers to avoid 'unused' warnings */
#ifndef SWIGUNUSED
# if defined(__GNUC__)
#   if !(defined(__cplusplus)) || (__GNUC__ > 3 || (__GNUC__ == 3 && __GNUC_MINOR__ >= 4))
#     define SWIGUNUSED __attribute__ ((__unused__))
#   else
#     define SWIGUNUSED
#   endif
# elif defined(__ICC)
#   define SWIGUNUSED __attribute__ ((__unused__))
# else
#   define SWIGUNUSED
# endif
#endif

#ifndef SWIG_MSC_UNSUPPRESS_4505
# if defined(_MSC_VER)
#   pragma warning(disable : 4505) /* unreferenced local function has been removed */
# endif
#endif

#ifndef SWIGUNUSEDPARM
# ifdef __cplusplus
#   define SWIGUNUSEDPARM(p)
# else
#   define SWIGUNUSEDPARM(p) p SWIGUNUSED
# endif
#endif

/* internal SWIG method */
#ifndef SWIGINTERN
# define SWIGINTERN static SWIGUNUSED
#endif

/* internal inline SWIG method */
#ifndef SWIGINTERNINLINE
# define SWIGINTERNINLINE SWIGINTERN SWIGINLINE
#endif

/* exporting methods */
#if defined(__GNUC__)
#  if (__GNUC__ >= 4) || (__GNUC__ == 3 && __GNUC_MINOR__ >= 4)
#    ifndef GCC_HASCLASSVISIBILITY
#      define GCC_HASCLASSVISIBILITY
#    endif
#  endif
#endif

#ifndef SWIGEXPORT
# if defined(_WIN32) || defined(__WIN32__) || defined(__CYGWIN__)
#   if defined(STATIC_LINKED)
#     define SWIGEXPORT
#   else
#     define SWIGEXPORT __declspec(dllexport)
#   endif
# else
#   if defined(__GNUC__) && defined(GCC_HASCLASSVISIBILITY)
#     define SWIGEXPORT __attribute__ ((visibility("default")))
#   else
#     define SWIGEXPORT
#   endif
# endif
#endif

/* calling conventions for Windows */
#ifndef SWIGSTDCALL
# if defined(_WIN32) || defined(__WIN32__) || defined(__CYGWIN__)
#   define SWIGSTDCALL __stdcall
# else
#   define SWIGSTDCALL
# endif
#endif

/* Deal with Microsoft's attempt at deprecating C standard runtime functions */
#if !defined(SWIG_NO_CRT_SECURE_NO_DEPRECATE) && defined(_MSC_VER) && !defined(_CRT_SECURE_NO_DEPRECATE)
# define _CRT_SECURE_NO_DEPRECATE
#endif

/* Deal with Microsoft's attempt at deprecating methods in the standard C++ library */
#if !defined(SWIG_NO_SCL_SECURE_NO_DEPRECATE) && defined(_MSC_VER) && !defined(_SCL_SECURE_NO_DEPRECATE)
# define _SCL_SECURE_NO_DEPRECATE
#endif

/* Deal with Apple's deprecated 'AssertMacros.h' from Carbon-framework */
#if defined(__APPLE__) && !defined(__ASSERT_MACROS_DEFINE_VERSIONS_WITHOUT_UNDERSCORES)
# define __ASSERT_MACROS_DEFINE_VERSIONS_WITHOUT_UNDERSCORES 0
#endif

/* Intel's compiler complains if a variable which was never initialised is
 * cast to void, which is a common idiom which we use to indicate that we
 * are aware a variable isn't used.  So we just silence that warning.
 * See: https://github.com/swig/swig/issues/192 for more discussion.
 */
#ifdef __INTEL_COMPILER
# pragma warning disable 592
#endif


/* Fix for jlong on some versions of gcc on Windows */
#if defined(__GNUC__) && !defined(__INTEL_COMPILER)
  typedef long long __int64;
#endif

/* Fix for jlong on 64-bit x86 Solaris */
#if defined(__x86_64)
# ifdef _LP64
#   undef _LP64
# endif
#endif

#include <jni.h>
#include <stdlib.h>
#include <string.h>


/* Support for throwing Java exceptions */
typedef enum {
  SWIG_JavaOutOfMemoryError = 1,
  SWIG_JavaIOException,
  SWIG_JavaRuntimeException,
  SWIG_JavaIndexOutOfBoundsException,
  SWIG_JavaArithmeticException,
  SWIG_JavaIllegalArgumentException,
  SWIG_JavaNullPointerException,
  SWIG_JavaDirectorPureVirtual,
  SWIG_JavaUnknownError,
  SWIG_JavaIllegalStateException,
} SWIG_JavaExceptionCodes;

typedef struct {
  SWIG_JavaExceptionCodes code;
  const char *java_exception;
} SWIG_JavaExceptions_t;


static void SWIGUNUSED SWIG_JavaThrowException(JNIEnv *jenv, SWIG_JavaExceptionCodes code, const char *msg) {
  jclass excep;
  static const SWIG_JavaExceptions_t java_exceptions[] = {
    { SWIG_JavaOutOfMemoryError, "java/lang/OutOfMemoryError" },
    { SWIG_JavaIOException, "java/io/IOException" },
    { SWIG_JavaRuntimeException, "java/lang/RuntimeException" },
    { SWIG_JavaIndexOutOfBoundsException, "java/lang/IndexOutOfBoundsException" },
    { SWIG_JavaArithmeticException, "java/lang/ArithmeticException" },
    { SWIG_JavaIllegalArgumentException, "java/lang/IllegalArgumentException" },
    { SWIG_JavaNullPointerException, "java/lang/NullPointerException" },
    { SWIG_JavaDirectorPureVirtual, "java/lang/RuntimeException" },
    { SWIG_JavaUnknownError,  "java/lang/UnknownError" },
    { SWIG_JavaIllegalStateException, "java/lang/IllegalStateException" },
    { (SWIG_JavaExceptionCodes)0,  "java/lang/UnknownError" }
  };
  const SWIG_JavaExceptions_t *except_ptr = java_exceptions;

  while (except_ptr->code != code && except_ptr->code)
    except_ptr++;

  jenv->ExceptionClear();
  excep = jenv->FindClass(except_ptr->java_exception);
  if (excep)
    jenv->ThrowNew(excep, msg);
}


/* Contract support */

#define SWIG_contract_assert(nullreturn, expr, msg) if (!(expr)) {SWIG_JavaThrowException(jenv, SWIG_JavaIllegalArgumentException, msg); return nullreturn; } else


#include "Mach1DecodePositionalCAPI.h"


#ifdef __cplusplus
extern "C" {
#endif

SWIGEXPORT jlong JNICALL Java_com_mach1_spatiallibs_Mach1DecodePositionalModuleJNI_Mach1DecodePositionalCAPI_1create(JNIEnv *jenv, jclass jcls) {
  jlong jresult = 0 ;
  void *result = 0 ;
  
  (void)jenv;
  (void)jcls;
  result = (void *)Mach1DecodePositionalCAPI_create();
  *(void **)&jresult = result; 
  return jresult;
}


SWIGEXPORT void JNICALL Java_com_mach1_spatiallibs_Mach1DecodePositionalModuleJNI_Mach1DecodePositionalCAPI_1delete(JNIEnv *jenv, jclass jcls, jlong jarg1) {
  void *arg1 = (void *) 0 ;
  
  (void)jenv;
  (void)jcls;
  arg1 = *(void **)&jarg1; 
  Mach1DecodePositionalCAPI_delete(arg1);
}


SWIGEXPORT void JNICALL Java_com_mach1_spatiallibs_Mach1DecodePositionalModuleJNI_Mach1DecodePositionalCAPI_1setPlatformType(JNIEnv *jenv, jclass jcls, jlong jarg1, jint jarg2) {
  void *arg1 = (void *) 0 ;
  enum Mach1PlatformType arg2 ;
  
  (void)jenv;
  (void)jcls;
  arg1 = *(void **)&jarg1; 
  arg2 = (enum Mach1PlatformType)jarg2; 
  Mach1DecodePositionalCAPI_setPlatformType(arg1,arg2);
}


SWIGEXPORT void JNICALL Java_com_mach1_spatiallibs_Mach1DecodePositionalModuleJNI_Mach1DecodePositionalCAPI_1setDecodeAlgoType(JNIEnv *jenv, jclass jcls, jlong jarg1, jint jarg2) {
  void *arg1 = (void *) 0 ;
  enum Mach1DecodeAlgoType arg2 ;
  
  (void)jenv;
  (void)jcls;
  arg1 = *(void **)&jarg1; 
  arg2 = (enum Mach1DecodeAlgoType)jarg2; 
  Mach1DecodePositionalCAPI_setDecodeAlgoType(arg1,arg2);
}


SWIGEXPORT void JNICALL Java_com_mach1_spatiallibs_Mach1DecodePositionalModuleJNI_Mach1DecodePositionalCAPI_1setMuteWhenOutsideObject(JNIEnv *jenv, jclass jcls, jlong jarg1, jboolean jarg2) {
  void *arg1 = (void *) 0 ;
  bool arg2 ;
  
  (void)jenv;
  (void)jcls;
  arg1 = *(void **)&jarg1; 
  arg2 = jarg2 ? true : false; 
  Mach1DecodePositionalCAPI_setMuteWhenOutsideObject(arg1,arg2);
}


SWIGEXPORT void JNICALL Java_com_mach1_spatiallibs_Mach1DecodePositionalModuleJNI_Mach1DecodePositionalCAPI_1setMuteWhenInsideObject(JNIEnv *jenv, jclass jcls, jlong jarg1, jboolean jarg2) {
  void *arg1 = (void *) 0 ;
  bool arg2 ;
  
  (void)jenv;
  (void)jcls;
  arg1 = *(void **)&jarg1; 
  arg2 = jarg2 ? true : false; 
  Mach1DecodePositionalCAPI_setMuteWhenInsideObject(arg1,arg2);
}


SWIGEXPORT void JNICALL Java_com_mach1_spatiallibs_Mach1DecodePositionalModuleJNI_Mach1DecodePositionalCAPI_1setUseAttenuation(JNIEnv *jenv, jclass jcls, jlong jarg1, jboolean jarg2) {
  void *arg1 = (void *) 0 ;
  bool arg2 ;
  
  (void)jenv;
  (void)jcls;
  arg1 = *(void **)&jarg1; 
  arg2 = jarg2 ? true : false; 
  Mach1DecodePositionalCAPI_setUseAttenuation(arg1,arg2);
}


SWIGEXPORT void JNICALL Java_com_mach1_spatiallibs_Mach1DecodePositionalModuleJNI_Mach1DecodePositionalCAPI_1setAttenuationCurve(JNIEnv *jenv, jclass jcls, jlong jarg1, jfloat jarg2) {
  void *arg1 = (void *) 0 ;
  float arg2 ;
  
  (void)jenv;
  (void)jcls;
  arg1 = *(void **)&jarg1; 
  arg2 = (float)jarg2; 
  Mach1DecodePositionalCAPI_setAttenuationCurve(arg1,arg2);
}


SWIGEXPORT void JNICALL Java_com_mach1_spatiallibs_Mach1DecodePositionalModuleJNI_Mach1DecodePositionalCAPI_1setUsePlaneCalculation(JNIEnv *jenv, jclass jcls, jlong jarg1, jboolean jarg2) {
  void *arg1 = (void *) 0 ;
  bool arg2 ;
  
  (void)jenv;
  (void)jcls;
  arg1 = *(void **)&jarg1; 
  arg2 = jarg2 ? true : false; 
  Mach1DecodePositionalCAPI_setUsePlaneCalculation(arg1,arg2);
}


SWIGEXPORT void JNICALL Java_com_mach1_spatiallibs_Mach1DecodePositionalModuleJNI_Mach1DecodePositionalCAPI_1setUseYawForRotation(JNIEnv *jenv, jclass jcls, jlong jarg1, jboolean jarg2) {
  void *arg1 = (void *) 0 ;
  bool arg2 ;
  
  (void)jenv;
  (void)jcls;
  arg1 = *(void **)&jarg1; 
  arg2 = jarg2 ? true : false; 
  Mach1DecodePositionalCAPI_setUseYawForRotation(arg1,arg2);
}


SWIGEXPORT void JNICALL Java_com_mach1_spatiallibs_Mach1DecodePositionalModuleJNI_Mach1DecodePositionalCAPI_1setUsePitchForRotation(JNIEnv *jenv, jclass jcls, jlong jarg1, jboolean jarg2) {
  void *arg1 = (void *) 0 ;
  bool arg2 ;
  
  (void)jenv;
  (void)jcls;
  arg1 = *(void **)&jarg1; 
  arg2 = jarg2 ? true : false; 
  Mach1DecodePositionalCAPI_setUsePitchForRotation(arg1,arg2);
}


SWIGEXPORT void JNICALL Java_com_mach1_spatiallibs_Mach1DecodePositionalModuleJNI_Mach1DecodePositionalCAPI_1setUseRollForRotation(JNIEnv *jenv, jclass jcls, jlong jarg1, jboolean jarg2) {
  void *arg1 = (void *) 0 ;
  bool arg2 ;
  
  (void)jenv;
  (void)jcls;
  arg1 = *(void **)&jarg1; 
  arg2 = jarg2 ? true : false; 
  Mach1DecodePositionalCAPI_setUseRollForRotation(arg1,arg2);
}


SWIGEXPORT void JNICALL Java_com_mach1_spatiallibs_Mach1DecodePositionalModuleJNI_Mach1DecodePositionalCAPI_1setListenerPosition(JNIEnv *jenv, jclass jcls, jlong jarg1, jlong jarg2, jobject jarg2_) {
  void *arg1 = (void *) 0 ;
  Mach1Point3D arg2 ;
  Mach1Point3D *argp2 ;
  
  (void)jenv;
  (void)jcls;
  (void)jarg2_;
  arg1 = *(void **)&jarg1; 
  argp2 = *(Mach1Point3D **)&jarg2; 
  if (!argp2) {
    SWIG_JavaThrowException(jenv, SWIG_JavaNullPointerException, "Attempt to dereference null Mach1Point3D");
    return ;
  }
  arg2 = *argp2; 
  Mach1DecodePositionalCAPI_setListenerPosition(arg1,arg2);
}


SWIGEXPORT void JNICALL Java_com_mach1_spatiallibs_Mach1DecodePositionalModuleJNI_Mach1DecodePositionalCAPI_1setListenerRotation(JNIEnv *jenv, jclass jcls, jlong jarg1, jlong jarg2, jobject jarg2_) {
  void *arg1 = (void *) 0 ;
  Mach1Point3D arg2 ;
  Mach1Point3D *argp2 ;
  
  (void)jenv;
  (void)jcls;
  (void)jarg2_;
  arg1 = *(void **)&jarg1; 
  argp2 = *(Mach1Point3D **)&jarg2; 
  if (!argp2) {
    SWIG_JavaThrowException(jenv, SWIG_JavaNullPointerException, "Attempt to dereference null Mach1Point3D");
    return ;
  }
  arg2 = *argp2; 
  Mach1DecodePositionalCAPI_setListenerRotation(arg1,arg2);
}


SWIGEXPORT void JNICALL Java_com_mach1_spatiallibs_Mach1DecodePositionalModuleJNI_Mach1DecodePositionalCAPI_1setListenerRotationQuat(JNIEnv *jenv, jclass jcls, jlong jarg1, jlong jarg2, jobject jarg2_) {
  void *arg1 = (void *) 0 ;
  Mach1Point4D arg2 ;
  Mach1Point4D *argp2 ;
  
  (void)jenv;
  (void)jcls;
  (void)jarg2_;
  arg1 = *(void **)&jarg1; 
  argp2 = *(Mach1Point4D **)&jarg2; 
  if (!argp2) {
    SWIG_JavaThrowException(jenv, SWIG_JavaNullPointerException, "Attempt to dereference null Mach1Point4D");
    return ;
  }
  arg2 = *argp2; 
  Mach1DecodePositionalCAPI_setListenerRotationQuat(arg1,arg2);
}


SWIGEXPORT void JNICALL Java_com_mach1_spatiallibs_Mach1DecodePositionalModuleJNI_Mach1DecodePositionalCAPI_1setDecoderAlgoPosition(JNIEnv *jenv, jclass jcls, jlong jarg1, jlong jarg2, jobject jarg2_) {
  void *arg1 = (void *) 0 ;
  Mach1Point3D arg2 ;
  Mach1Point3D *argp2 ;
  
  (void)jenv;
  (void)jcls;
  (void)jarg2_;
  arg1 = *(void **)&jarg1; 
  argp2 = *(Mach1Point3D **)&jarg2; 
  if (!argp2) {
    SWIG_JavaThrowException(jenv, SWIG_JavaNullPointerException, "Attempt to dereference null Mach1Point3D");
    return ;
  }
  arg2 = *argp2; 
  Mach1DecodePositionalCAPI_setDecoderAlgoPosition(arg1,arg2);
}


SWIGEXPORT void JNICALL Java_com_mach1_spatiallibs_Mach1DecodePositionalModuleJNI_Mach1DecodePositionalCAPI_1setDecoderAlgoRotation(JNIEnv *jenv, jclass jcls, jlong jarg1, jlong jarg2, jobject jarg2_) {
  void *arg1 = (void *) 0 ;
  Mach1Point3D arg2 ;
  Mach1Point3D *argp2 ;
  
  (void)jenv;
  (void)jcls;
  (void)jarg2_;
  arg1 = *(void **)&jarg1; 
  argp2 = *(Mach1Point3D **)&jarg2; 
  if (!argp2) {
    SWIG_JavaThrowException(jenv, SWIG_JavaNullPointerException, "Attempt to dereference null Mach1Point3D");
    return ;
  }
  arg2 = *argp2; 
  Mach1DecodePositionalCAPI_setDecoderAlgoRotation(arg1,arg2);
}


SWIGEXPORT void JNICALL Java_com_mach1_spatiallibs_Mach1DecodePositionalModuleJNI_Mach1DecodePositionalCAPI_1setDecoderAlgoRotationQuat(JNIEnv *jenv, jclass jcls, jlong jarg1, jlong jarg2, jobject jarg2_) {
  void *arg1 = (void *) 0 ;
  Mach1Point4D arg2 ;
  Mach1Point4D *argp2 ;
  
  (void)jenv;
  (void)jcls;
  (void)jarg2_;
  arg1 = *(void **)&jarg1; 
  argp2 = *(Mach1Point4D **)&jarg2; 
  if (!argp2) {
    SWIG_JavaThrowException(jenv, SWIG_JavaNullPointerException, "Attempt to dereference null Mach1Point4D");
    return ;
  }
  arg2 = *argp2; 
  Mach1DecodePositionalCAPI_setDecoderAlgoRotationQuat(arg1,arg2);
}


SWIGEXPORT void JNICALL Java_com_mach1_spatiallibs_Mach1DecodePositionalModuleJNI_Mach1DecodePositionalCAPI_1setDecoderAlgoScale(JNIEnv *jenv, jclass jcls, jlong jarg1, jlong jarg2, jobject jarg2_) {
  void *arg1 = (void *) 0 ;
  Mach1Point3D arg2 ;
  Mach1Point3D *argp2 ;
  
  (void)jenv;
  (void)jcls;
  (void)jarg2_;
  arg1 = *(void **)&jarg1; 
  argp2 = *(Mach1Point3D **)&jarg2; 
  if (!argp2) {
    SWIG_JavaThrowException(jenv, SWIG_JavaNullPointerException, "Attempt to dereference null Mach1Point3D");
    return ;
  }
  arg2 = *argp2; 
  Mach1DecodePositionalCAPI_setDecoderAlgoScale(arg1,arg2);
}


SWIGEXPORT void JNICALL Java_com_mach1_spatiallibs_Mach1DecodePositionalModuleJNI_Mach1DecodePositionalCAPI_1evaluatePositionResults(JNIEnv *jenv, jclass jcls, jlong jarg1) {
  void *arg1 = (void *) 0 ;
  
  (void)jenv;
  (void)jcls;
  arg1 = *(void **)&jarg1; 
  Mach1DecodePositionalCAPI_evaluatePositionResults(arg1);
}


SWIGEXPORT void JNICALL Java_com_mach1_spatiallibs_Mach1DecodePositionalModuleJNI_Mach1DecodePositionalCAPI_1getCoefficients(JNIEnv *jenv, jclass jcls, jlong jarg1, jlong jarg2) {
  void *arg1 = (void *) 0 ;
  float *arg2 = (float *) 0 ;
  
  (void)jenv;
  (void)jcls;
  arg1 = *(void **)&jarg1; 
  arg2 = *(float **)&jarg2; 
  Mach1DecodePositionalCAPI_getCoefficients(arg1,arg2);
}


SWIGEXPORT jfloat JNICALL Java_com_mach1_spatiallibs_Mach1DecodePositionalModuleJNI_Mach1DecodePositionalCAPI_1getDist(JNIEnv *jenv, jclass jcls, jlong jarg1) {
  jfloat jresult = 0 ;
  void *arg1 = (void *) 0 ;
  float result;
  
  (void)jenv;
  (void)jcls;
  arg1 = *(void **)&jarg1; 
  result = (float)Mach1DecodePositionalCAPI_getDist(arg1);
  jresult = (jfloat)result; 
  return jresult;
}


SWIGEXPORT jlong JNICALL Java_com_mach1_spatiallibs_Mach1DecodePositionalModuleJNI_Mach1DecodePositionalCAPI_1getCurrentAngle(JNIEnv *jenv, jclass jcls, jlong jarg1) {
  jlong jresult = 0 ;
  void *arg1 = (void *) 0 ;
  Mach1Point3D result;
  
  (void)jenv;
  (void)jcls;
  arg1 = *(void **)&jarg1; 
  result = Mach1DecodePositionalCAPI_getCurrentAngle(arg1);
  *(Mach1Point3D **)&jresult = new Mach1Point3D((const Mach1Point3D &)result); 
  return jresult;
}


SWIGEXPORT jlong JNICALL Java_com_mach1_spatiallibs_Mach1DecodePositionalModuleJNI_Mach1DecodePositionalCAPI_1getCoefficientsRotation(JNIEnv *jenv, jclass jcls, jlong jarg1) {
  jlong jresult = 0 ;
  void *arg1 = (void *) 0 ;
  Mach1Point3D result;
  
  (void)jenv;
  (void)jcls;
  arg1 = *(void **)&jarg1; 
  result = Mach1DecodePositionalCAPI_getCoefficientsRotation(arg1);
  *(Mach1Point3D **)&jresult = new Mach1Point3D((const Mach1Point3D &)result); 
  return jresult;
}


SWIGEXPORT void JNICALL Java_com_mach1_spatiallibs_Mach1DecodePositionalModuleJNI_Mach1DecodePositionalCAPI_1setFilterSpeed(JNIEnv *jenv, jclass jcls, jlong jarg1, jfloat jarg2) {
  void *arg1 = (void *) 0 ;
  float arg2 ;
  
  (void)jenv;
  (void)jcls;
  arg1 = *(void **)&jarg1; 
  arg2 = (float)jarg2; 
  Mach1DecodePositionalCAPI_setFilterSpeed(arg1,arg2);
}


SWIGEXPORT jlong JNICALL Java_com_mach1_spatiallibs_Mach1DecodePositionalModuleJNI_Mach1DecodePositionalCAPI_1getClosestPointOnPlane(JNIEnv *jenv, jclass jcls, jlong jarg1) {
  jlong jresult = 0 ;
  void *arg1 = (void *) 0 ;
  Mach1Point3D result;
  
  (void)jenv;
  (void)jcls;
  arg1 = *(void **)&jarg1; 
  result = Mach1DecodePositionalCAPI_getClosestPointOnPlane(arg1);
  *(Mach1Point3D **)&jresult = new Mach1Point3D((const Mach1Point3D &)result); 
  return jresult;
}


SWIGEXPORT jint JNICALL Java_com_mach1_spatiallibs_Mach1DecodePositionalModuleJNI_Mach1DecodePositionalCAPI_1getLastCalculationTime(JNIEnv *jenv, jclass jcls, jlong jarg1) {
  jint jresult = 0 ;
  void *arg1 = (void *) 0 ;
  long result;
  
  (void)jenv;
  (void)jcls;
  arg1 = *(void **)&jarg1; 
  result = (long)Mach1DecodePositionalCAPI_getLastCalculationTime(arg1);
  jresult = (jint)result; 
  return jresult;
}


SWIGEXPORT void JNICALL Java_com_mach1_spatiallibs_Mach1DecodePositionalModuleJNI_Mach1DecodePositionalCAPI_1setUseFalloff(JNIEnv *jenv, jclass jcls, jlong jarg1, jboolean jarg2) {
  void *arg1 = (void *) 0 ;
  bool arg2 ;
  
  (void)jenv;
  (void)jcls;
  arg1 = *(void **)&jarg1; 
  arg2 = jarg2 ? true : false; 
  Mach1DecodePositionalCAPI_setUseFalloff(arg1,arg2);
}


SWIGEXPORT void JNICALL Java_com_mach1_spatiallibs_Mach1DecodePositionalModuleJNI_Mach1DecodePositionalCAPI_1setFalloffCurve(JNIEnv *jenv, jclass jcls, jlong jarg1, jfloat jarg2) {
  void *arg1 = (void *) 0 ;
  float arg2 ;
  
  (void)jenv;
  (void)jcls;
  arg1 = *(void **)&jarg1; 
  arg2 = (float)jarg2; 
  Mach1DecodePositionalCAPI_setFalloffCurve(arg1,arg2);
}


SWIGEXPORT void JNICALL Java_com_mach1_spatiallibs_Mach1DecodePositionalModuleJNI_Mach1DecodePositionalCAPI_1setUseClosestPointRotationMuteInside(JNIEnv *jenv, jclass jcls, jlong jarg1, jboolean jarg2) {
  void *arg1 = (void *) 0 ;
  bool arg2 ;
  
  (void)jenv;
  (void)jcls;
  arg1 = *(void **)&jarg1; 
  arg2 = jarg2 ? true : false; 
  Mach1DecodePositionalCAPI_setUseClosestPointRotationMuteInside(arg1,arg2);
}


SWIGEXPORT void JNICALL Java_com_mach1_spatiallibs_Mach1DecodePositionalModuleJNI_Mach1DecodePositionalCAPI_1setCameraPosition(JNIEnv *jenv, jclass jcls, jlong jarg1, jlong jarg2, jobject jarg2_) {
  void *arg1 = (void *) 0 ;
  Mach1Point3D arg2 ;
  Mach1Point3D *argp2 ;
  
  (void)jenv;
  (void)jcls;
  (void)jarg2_;
  arg1 = *(void **)&jarg1; 
  argp2 = *(Mach1Point3D **)&jarg2; 
  if (!argp2) {
    SWIG_JavaThrowException(jenv, SWIG_JavaNullPointerException, "Attempt to dereference null Mach1Point3D");
    return ;
  }
  arg2 = *argp2; 
  Mach1DecodePositionalCAPI_setCameraPosition(arg1,arg2);
}


SWIGEXPORT void JNICALL Java_com_mach1_spatiallibs_Mach1DecodePositionalModuleJNI_Mach1DecodePositionalCAPI_1setCameraRotation(JNIEnv *jenv, jclass jcls, jlong jarg1, jlong jarg2, jobject jarg2_) {
  void *arg1 = (void *) 0 ;
  Mach1Point3D arg2 ;
  Mach1Point3D *argp2 ;
  
  (void)jenv;
  (void)jcls;
  (void)jarg2_;
  arg1 = *(void **)&jarg1; 
  argp2 = *(Mach1Point3D **)&jarg2; 
  if (!argp2) {
    SWIG_JavaThrowException(jenv, SWIG_JavaNullPointerException, "Attempt to dereference null Mach1Point3D");
    return ;
  }
  arg2 = *argp2; 
  Mach1DecodePositionalCAPI_setCameraRotation(arg1,arg2);
}


SWIGEXPORT void JNICALL Java_com_mach1_spatiallibs_Mach1DecodePositionalModuleJNI_Mach1DecodePositionalCAPI_1setCameraRotationQuat(JNIEnv *jenv, jclass jcls, jlong jarg1, jlong jarg2, jobject jarg2_) {
  void *arg1 = (void *) 0 ;
  Mach1Point4D arg2 ;
  Mach1Point4D *argp2 ;
  
  (void)jenv;
  (void)jcls;
  (void)jarg2_;
  arg1 = *(void **)&jarg1; 
  argp2 = *(Mach1Point4D **)&jarg2; 
  if (!argp2) {
    SWIG_JavaThrowException(jenv, SWIG_JavaNullPointerException, "Attempt to dereference null Mach1Point4D");
    return ;
  }
  arg2 = *argp2; 
  Mach1DecodePositionalCAPI_setCameraRotationQuat(arg1,arg2);
}


SWIGEXPORT void JNICALL Java_com_mach1_spatiallibs_Mach1DecodePositionalModuleJNI_Mach1DecodePositionalCAPI_1getVolumesWalls(JNIEnv *jenv, jclass jcls, jlong jarg1, jlong jarg2) {
  void *arg1 = (void *) 0 ;
  float *arg2 = (float *) 0 ;
  
  (void)jenv;
  (void)jcls;
  arg1 = *(void **)&jarg1; 
  arg2 = *(float **)&jarg2; 
  Mach1DecodePositionalCAPI_getVolumesWalls(arg1,arg2);
}


SWIGEXPORT jlong JNICALL Java_com_mach1_spatiallibs_Mach1DecodePositionalModuleJNI_Mach1DecodePositionalCAPI_1getVolumeRotation(JNIEnv *jenv, jclass jcls, jlong jarg1) {
  jlong jresult = 0 ;
  void *arg1 = (void *) 0 ;
  Mach1Point3D result;
  
  (void)jenv;
  (void)jcls;
  arg1 = *(void **)&jarg1; 
  result = Mach1DecodePositionalCAPI_getVolumeRotation(arg1);
  *(Mach1Point3D **)&jresult = new Mach1Point3D((const Mach1Point3D &)result); 
  return jresult;
}


SWIGEXPORT void JNICALL Java_com_mach1_spatiallibs_Mach1DecodePositionalModuleJNI_Mach1DecodePositionalCAPI_1setUseBlendMode(JNIEnv *jenv, jclass jcls, jlong jarg1, jboolean jarg2) {
  void *arg1 = (void *) 0 ;
  bool arg2 ;
  
  (void)jenv;
  (void)jcls;
  arg1 = *(void **)&jarg1; 
  arg2 = jarg2 ? true : false; 
  Mach1DecodePositionalCAPI_setUseBlendMode(arg1,arg2);
}


SWIGEXPORT void JNICALL Java_com_mach1_spatiallibs_Mach1DecodePositionalModuleJNI_Mach1DecodePositionalCAPI_1setIgnoreTopBottom(JNIEnv *jenv, jclass jcls, jlong jarg1, jboolean jarg2) {
  void *arg1 = (void *) 0 ;
  bool arg2 ;
  
  (void)jenv;
  (void)jcls;
  arg1 = *(void **)&jarg1; 
  arg2 = jarg2 ? true : false; 
  Mach1DecodePositionalCAPI_setIgnoreTopBottom(arg1,arg2);
}


SWIGEXPORT void JNICALL Java_com_mach1_spatiallibs_Mach1DecodePositionalModuleJNI_Mach1DecodePositionalCAPI_1setFalloffCurveBlendMode(JNIEnv *jenv, jclass jcls, jlong jarg1, jfloat jarg2) {
  void *arg1 = (void *) 0 ;
  float arg2 ;
  
  (void)jenv;
  (void)jcls;
  arg1 = *(void **)&jarg1; 
  arg2 = (float)jarg2; 
  Mach1DecodePositionalCAPI_setFalloffCurveBlendMode(arg1,arg2);
}


SWIGEXPORT void JNICALL Java_com_mach1_spatiallibs_Mach1DecodePositionalModuleJNI_Mach1DecodePositionalCAPI_1setAttenuationCurveBlendMode(JNIEnv *jenv, jclass jcls, jlong jarg1, jfloat jarg2) {
  void *arg1 = (void *) 0 ;
  float arg2 ;
  
  (void)jenv;
  (void)jcls;
  arg1 = *(void **)&jarg1; 
  arg2 = (float)jarg2; 
  Mach1DecodePositionalCAPI_setAttenuationCurveBlendMode(arg1,arg2);
}


SWIGEXPORT void JNICALL Java_com_mach1_spatiallibs_Mach1DecodePositionalModuleJNI_Mach1DecodePositionalCAPI_1getVolumesRoom(JNIEnv *jenv, jclass jcls, jlong jarg1, jlong jarg2) {
  void *arg1 = (void *) 0 ;
  float *arg2 = (float *) 0 ;
  
  (void)jenv;
  (void)jcls;
  arg1 = *(void **)&jarg1; 
  arg2 = *(float **)&jarg2; 
  Mach1DecodePositionalCAPI_getVolumesRoom(arg1,arg2);
}


SWIGEXPORT void JNICALL Java_com_mach1_spatiallibs_Mach1DecodePositionalModuleJNI_Mach1DecodePositionalCAPI_1getCoefficientsInterior(JNIEnv *jenv, jclass jcls, jlong jarg1, jlong jarg2) {
  void *arg1 = (void *) 0 ;
  float *arg2 = (float *) 0 ;
  
  (void)jenv;
  (void)jcls;
  arg1 = *(void **)&jarg1; 
  arg2 = *(float **)&jarg2; 
  Mach1DecodePositionalCAPI_getCoefficientsInterior(arg1,arg2);
}


#ifdef __cplusplus
}
#endif

