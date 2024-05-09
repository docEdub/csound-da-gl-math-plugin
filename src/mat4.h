#ifndef CSOUND_GLM_PLUGIN__MAT4_H
#define CSOUND_GLM_PLUGIN__MAT4_H

#include "common.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef GLM_Mat4__Mat4                                  GLM_Mat4_copy;
int32_t glm_mat4_copy_init          (CSOUND *csound,    GLM_Mat4_copy *p);
int32_t glm_mat4_copy               (CSOUND *csound,    GLM_Mat4_copy *p);

typedef GLM_Mat4                                        GLM_Mat4_identity;
int32_t glm_mat4_identity_init      (CSOUND *csound,    GLM_Mat4_identity *p);
int32_t glm_mat4_identity           (CSOUND *csound,    GLM_Mat4_identity *p);

typedef GLM_Mat4                                        GLM_Mat4_zero;
int32_t glm_mat4_zero_init          (CSOUND *csound,    GLM_Mat4 *p);
int32_t glm_mat4_zero               (CSOUND *csound,    GLM_Mat4 *p);

typedef GLM_Mat4__Mat4_Mat4                             GLM_Mat4_mul;
int32_t glm_mat4_mul_init           (CSOUND *csound,    GLM_Mat4__Mat4_Mat4 *p);
int32_t glm_mat4_mul                (CSOUND *csound,    GLM_Mat4__Mat4_Mat4 *p);

typedef GLM_Vec3__Mat4_Vec3                             GLM_Mat4_mulv3;
int32_t glm_mat4_mulv3_init         (CSOUND *csound,    GLM_Vec3__Mat4_Vec3 *p);
int32_t glm_mat4_mulv3              (CSOUND *csound,    GLM_Vec3__Mat4_Vec3 *p);

typedef GLM_Quat__Mat4                                  GLM_Mat4_quat;
int32_t glm_mat4_quat_init          (CSOUND *csound,    GLM_Mat4_quat *p);
int32_t glm_mat4_quat               (CSOUND *csound,    GLM_Mat4_quat *p);

typedef GLM_void__Mat4                                  GLM_Mat4_transpose;
int32_t glm_mat4_transpose_init     (CSOUND *csound,    GLM_Mat4_transpose *p);
int32_t glm_mat4_transpose          (CSOUND *csound,    GLM_Mat4_transpose *p);

typedef GLM_Mat4__Mat4                                  GLM_Mat4_transpose_to;
int32_t glm_mat4_transpose_to_init  (CSOUND *csound,    GLM_Mat4_transpose_to *p);
int32_t glm_mat4_transpose_to       (CSOUND *csound,    GLM_Mat4_transpose_to *p);

typedef GLM_Mat4__Mat4_Val                              GLM_Mat4_scale;
int32_t glm_mat4_scale_init         (CSOUND *csound,    GLM_Mat4_scale *p);
int32_t glm_mat4_scale              (CSOUND *csound,    GLM_Mat4_scale *p);

typedef GLM_Val__Mat4                                   GLM_Mat4_det;
int32_t glm_mat4_det_init           (CSOUND *csound,    GLM_Mat4_det *p);
int32_t glm_mat4_det                (CSOUND *csound,    GLM_Mat4_det *p);

typedef GLM_Mat4__Mat4                                  GLM_Mat4_inv;
int32_t glm_mat4_inv_init           (CSOUND *csound,    GLM_Mat4_inv *p);
int32_t glm_mat4_inv                (CSOUND *csound,    GLM_Mat4_inv *p);

#ifdef __cplusplus
}
#endif

#endif
