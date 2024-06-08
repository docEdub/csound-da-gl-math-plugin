#ifndef CSOUND_DA_GL_MATH_PLUGIN__MAT4_H
#define CSOUND_DA_GL_MATH_PLUGIN__MAT4_H

#include "common_types.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef DaGLMath_Mat4__Mat4                                         DaGLMath_Mat4_copy;
int32_t da_gl_math_mat4_copy_init               (CSOUND *csound,    DaGLMath_Mat4_copy *p);
int32_t da_gl_math_mat4_copy                    (CSOUND *csound,    DaGLMath_Mat4_copy *p);

typedef DaGLMath_Mat4                                               DaGLMath_Mat4_identity;
int32_t da_gl_math_mat4_identity_init           (CSOUND *csound,    DaGLMath_Mat4_identity *p);
int32_t da_gl_math_mat4_identity                (CSOUND *csound,    DaGLMath_Mat4_identity *p);

typedef DaGLMath_Mat4                                               DaGLMath_Mat4_zero;
int32_t da_gl_math_mat4_zero_init               (CSOUND *csound,    DaGLMath_Mat4 *p);
int32_t da_gl_math_mat4_zero                    (CSOUND *csound,    DaGLMath_Mat4 *p);

typedef DaGLMath_Mat4__Mat4_Mat4                                    DaGLMath_Mat4_multiply;
int32_t da_gl_math_mat4_multiply_init           (CSOUND *csound,    DaGLMath_Mat4_multiply *p);
int32_t da_gl_math_mat4_multiply                (CSOUND *csound,    DaGLMath_Mat4_multiply *p);

typedef DaGLMath_Vec3__Vec3_Mat4                                    DaGLMath_Mat4_multiplyVec3;
int32_t da_gl_math_mat4_multiplyVec3_init       (CSOUND *csound,    DaGLMath_Mat4_multiplyVec3 *p);
int32_t da_gl_math_mat4_multiplyVec3            (CSOUND *csound,    DaGLMath_Mat4_multiplyVec3 *p);

typedef DaGLMath_Quat__Mat4                                         DaGLMath_Mat4_quaternion;
int32_t da_gl_math_mat4_quaternion_init         (CSOUND *csound,    DaGLMath_Mat4_quaternion *p);
int32_t da_gl_math_mat4_quaternion              (CSOUND *csound,    DaGLMath_Mat4_quaternion *p);

typedef DaGLMath_Mat4__Mat4                                         DaGLMath_Mat4_transpose;
int32_t da_gl_math_mat4_transpose_init          (CSOUND *csound,    DaGLMath_Mat4_transpose *p);
int32_t da_gl_math_mat4_transpose               (CSOUND *csound,    DaGLMath_Mat4_transpose *p);

typedef DaGLMath_Nil__Mat4                                          DaGLMath_Mat4_transposeInPlace;
int32_t da_gl_math_mat4_transposeInPlace_init   (CSOUND *csound,    DaGLMath_Mat4_transposeInPlace *p);
int32_t da_gl_math_mat4_transposeInPlace        (CSOUND *csound,    DaGLMath_Mat4_transposeInPlace *p);

typedef DaGLMath_Mat4__Mat4_Num                                     DaGLMath_Mat4_scale;
int32_t da_gl_math_mat4_scale_init              (CSOUND *csound,    DaGLMath_Mat4_scale *p);
int32_t da_gl_math_mat4_scale                   (CSOUND *csound,    DaGLMath_Mat4_scale *p);

typedef DaGLMath_Num__Mat4                                          DaGLMath_Mat4_determinant;
int32_t da_gl_math_mat4_determinant_init        (CSOUND *csound,    DaGLMath_Mat4_determinant *p);
int32_t da_gl_math_mat4_determinant             (CSOUND *csound,    DaGLMath_Mat4_determinant *p);

typedef DaGLMath_Mat4__Mat4                                         DaGLMath_Mat4_invert;
int32_t da_gl_math_mat4_invert_init             (CSOUND *csound,    DaGLMath_Mat4_invert *p);
int32_t da_gl_math_mat4_invert                  (CSOUND *csound,    DaGLMath_Mat4_invert *p);

typedef DaGLMath_Mat4__Vec3                                         DaGLMath_Mat4_fromEulerAnglesXYZ;
int32_t da_gl_math_mat4_fromEulerAnglesXYZ_init (CSOUND *csound,    DaGLMath_Mat4_fromEulerAnglesXYZ *p);
int32_t da_gl_math_mat4_fromEulerAnglesXYZ      (CSOUND *csound,    DaGLMath_Mat4_fromEulerAnglesXYZ *p);

typedef DaGLMath_Vec3__Mat4                                         DaGLMath_Mat4_toEulerAnglesXYZ;
int32_t da_gl_math_mat4_toEulerAnglesXYZ_init   (CSOUND *csound,    DaGLMath_Mat4_toEulerAnglesXYZ *p);
int32_t da_gl_math_mat4_toEulerAnglesXYZ        (CSOUND *csound,    DaGLMath_Mat4_toEulerAnglesXYZ *p);

#ifdef __cplusplus
}
#endif

#endif
