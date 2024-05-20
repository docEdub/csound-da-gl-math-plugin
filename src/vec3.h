#ifndef CSOUND_DA_GL_MATH_PLUGIN__VEC3_H
#define CSOUND_DA_GL_MATH_PLUGIN__VEC3_H

#include "common_types.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef DaGLMath_Vec3__Vec3_Vec3_Vec3                               DaGLMath_Vec3_triangleNormal;
int32_t da_gl_math_vec3_triangleNormal_init     (CSOUND *csound,    DaGLMath_Vec3_triangleNormal *p);
int32_t da_gl_math_vec3_triangleNormal          (CSOUND *csound,    DaGLMath_Vec3_triangleNormal *p);

#ifdef __cplusplus
}
#endif

#endif
