#ifndef CSOUND_DA_GL_MATH_PLUGIN__MAT4_H
#define CSOUND_DA_GL_MATH_PLUGIN__MAT4_H

#include "common.h"

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

typedef DaGLMath_Mat4__Mat4_Mat4                                    DaGLMath_Mat4_mul;
int32_t da_gl_math_mat4_mul_init                (CSOUND *csound,    DaGLMath_Mat4_mul *p);
int32_t da_gl_math_mat4_mul                     (CSOUND *csound,    DaGLMath_Mat4_mul *p);

typedef DaGLMath_Vec3__Mat4_Vec3                                    DaGLMath_Mat4_mulv3;
int32_t da_gl_math_mat4_mulv3_init              (CSOUND *csound,    DaGLMath_Mat4_mulv3 *p);
int32_t da_gl_math_mat4_mulv3                   (CSOUND *csound,    DaGLMath_Mat4_mulv3 *p);

typedef DaGLMath_Quat__Mat4                                         DaGLMath_Mat4_quat;
int32_t da_gl_math_mat4_quat_init               (CSOUND *csound,    DaGLMath_Mat4_quat *p);
int32_t da_gl_math_mat4_quat                    (CSOUND *csound,    DaGLMath_Mat4_quat *p);

typedef DaGLMath_void__Mat4                                         DaGLMath_Mat4_transposeInPlace;
int32_t da_gl_math_mat4_transposeInPlace_init   (CSOUND *csound,    DaGLMath_Mat4_transposeInPlace *p);
int32_t da_gl_math_mat4_transposeInPlace        (CSOUND *csound,    DaGLMath_Mat4_transposeInPlace *p);

typedef DaGLMath_Mat4__Mat4                                         DaGLMath_Mat4_transpose;
int32_t da_gl_math_mat4_transpose_init          (CSOUND *csound,    DaGLMath_Mat4_transpose *p);
int32_t da_gl_math_mat4_transpose               (CSOUND *csound,    DaGLMath_Mat4_transpose *p);

typedef DaGLMath_Mat4__Mat4_Val                                     DaGLMath_Mat4_scale;
int32_t da_gl_math_mat4_scale_init              (CSOUND *csound,    DaGLMath_Mat4_scale *p);
int32_t da_gl_math_mat4_scale                   (CSOUND *csound,    DaGLMath_Mat4_scale *p);

typedef DaGLMath_Val__Mat4                                          DaGLMath_Mat4_det;
int32_t da_gl_math_mat4_det_init                (CSOUND *csound,    DaGLMath_Mat4_det *p);
int32_t da_gl_math_mat4_det                     (CSOUND *csound,    DaGLMath_Mat4_det *p);

typedef DaGLMath_Mat4__Mat4                                         DaGLMath_Mat4_inv;
int32_t da_gl_math_mat4_inv_init                (CSOUND *csound,    DaGLMath_Mat4_inv *p);
int32_t da_gl_math_mat4_inv                     (CSOUND *csound,    DaGLMath_Mat4_inv *p);

#ifdef __cplusplus
}
#endif

#endif
