#ifndef CSOUND_DA_GL_MATH_PLUGIN__VEC3_H
#define CSOUND_DA_GL_MATH_PLUGIN__VEC3_H

#include "common_types.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef DaGLMath_Num__Vec3_Vec3                                     DaGLMath_Vec3_distance;
int32_t da_gl_math_vec3_distance_init           (CSOUND *csound,    DaGLMath_Vec3_distance *p);
int32_t da_gl_math_vec3_distance                (CSOUND *csound,    DaGLMath_Vec3_distance *p);

typedef DaGLMath_Num__Vec3_Vec3                                     DaGLMath_Vec3_distanceSquared;
int32_t da_gl_math_vec3_distanceSquared_init    (CSOUND *csound,    DaGLMath_Vec3_distanceSquared *p);
int32_t da_gl_math_vec3_distanceSquared         (CSOUND *csound,    DaGLMath_Vec3_distanceSquared *p);

typedef DaGLMath_Num__Vec3_Vec3                                     DaGLMath_Vec3_dot;
int32_t da_gl_math_vec3_dot_init                (CSOUND *csound,    DaGLMath_Vec3_dot *p);
int32_t da_gl_math_vec3_dot                     (CSOUND *csound,    DaGLMath_Vec3_dot *p);

typedef DaGLMath_Num__Vec3                                          DaGLMath_Vec3_lengthSquared;
int32_t da_gl_math_vec3_lengthSquared_init      (CSOUND *csound,    DaGLMath_Vec3_lengthSquared *p);
int32_t da_gl_math_vec3_lengthSquared           (CSOUND *csound,    DaGLMath_Vec3_lengthSquared *p);

typedef DaGLMath_Num__Vec3                                          DaGLMath_Vec3_length;
int32_t da_gl_math_vec3_length_init             (CSOUND *csound,    DaGLMath_Vec3_length *p);
int32_t da_gl_math_vec3_length                  (CSOUND *csound,    DaGLMath_Vec3_length *p);

typedef DaGLMath_Num__Vec3                                          DaGLMath_Vec3_lengthSquared;
int32_t da_gl_math_vec3_lengthSquared_init      (CSOUND *csound,    DaGLMath_Vec3_lengthSquared *p);
int32_t da_gl_math_vec3_lengthSquared           (CSOUND *csound,    DaGLMath_Vec3_lengthSquared *p);

typedef DaGLMath_Vec3__Vec3_Vec3_Vec3                               DaGLMath_Vec3_triangleNormal;
int32_t da_gl_math_vec3_triangleNormal_init     (CSOUND *csound,    DaGLMath_Vec3_triangleNormal *p);
int32_t da_gl_math_vec3_triangleNormal          (CSOUND *csound,    DaGLMath_Vec3_triangleNormal *p);

#ifdef __cplusplus
}
#endif

#endif
