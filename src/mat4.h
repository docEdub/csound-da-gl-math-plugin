#ifndef CSOUND_GLM_PLUGIN__MAT4_H
#define CSOUND_GLM_PLUGIN__MAT4_H

#include "common.h"

#ifdef __cplusplus
extern "C" {
#endif


int32_t glm_mat4_copy(CSOUND *csound, GLM_Mat4_x2 *p);
int32_t glm_mat4_identity(CSOUND *csound, GLM_Mat4 *p);
int32_t glm_mat4_zero(CSOUND *csound, GLM_Mat4 *p);
int32_t glm_mat4_mul(CSOUND *csound, GLM_Mat4_x3 *p);
int32_t glm_mat4_mulv3(CSOUND *csound, GLM_Mat4_Vec3_x2 *p);

#ifdef __cplusplus
}
#endif

#endif
