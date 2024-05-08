#ifndef CSOUND_GLM_PLUGIN__MAT4_H
#define CSOUND_GLM_PLUGIN__MAT4_H

#include "common.h"

typedef GLM_Mat4__Mat4          GLM_Mat4_copy;
typedef GLM_Mat4                GLM_Mat4_identity;
typedef GLM_Mat4                GLM_Mat4_zero;
typedef GLM_Mat4__Mat4_Mat4     GLM_Mat4_mul;
typedef GLM_Vec3__Mat4_Vec3     GLM_Mat4_mulv3;
typedef GLM_Quat__Mat4          GLM_Mat4_quat;
typedef GLM_void__Mat4          GLM_Mat4_transpose;
typedef GLM_Mat4__Mat4          GLM_Mat4_transpose_to;
typedef GLM_Mat4__Mat4_Val      GLM_Mat4_scale;
typedef GLM_Val__Mat4           GLM_Mat4_det;
typedef GLM_Mat4__Mat4          GLM_Mat4_inv;

#ifdef __cplusplus
extern "C" {
#endif

int32_t glm_mat4_copy           (CSOUND *, GLM_Mat4_copy *p);
int32_t glm_mat4_identity       (CSOUND *, GLM_Mat4_identity *p);
int32_t glm_mat4_zero           (CSOUND *, GLM_Mat4 *p);
int32_t glm_mat4_mul            (CSOUND *, GLM_Mat4__Mat4_Mat4 *p);
int32_t glm_mat4_mulv3          (CSOUND *, GLM_Vec3__Mat4_Vec3 *p);
int32_t glm_mat4_quat           (CSOUND *, GLM_Mat4_quat *p);
int32_t glm_mat4_transpose      (CSOUND *, GLM_Mat4_transpose *p);
int32_t glm_mat4_transpose_to   (CSOUND *, GLM_Mat4_transpose_to *p);
int32_t glm_mat4_scale          (CSOUND *, GLM_Mat4_scale *p);
int32_t glm_mat4_det            (CSOUND *, GLM_Mat4_det *p);
int32_t glm_mat4_inv            (CSOUND *, GLM_Mat4_inv *p);

#ifdef __cplusplus
}
#endif

#endif
