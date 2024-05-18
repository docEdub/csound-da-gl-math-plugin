#ifndef CSOUND_DA_GL_MATH_PLUGIN__COMMON_H
#define CSOUND_DA_GL_MATH_PLUGIN__COMMON_H

#include <csdl.h>

typedef struct DaGLMath_Mat4
{
    OPDS h;
    ARRAYDAT *out;
} DaGLMath_Mat4;

typedef struct DaGLMath_Mat4__Mat4
{
    OPDS h;
    ARRAYDAT *out;
    ARRAYDAT *m;
} DaGLMath_Mat4__Mat4;

typedef struct DaGLMath_Mat4__Mat4_Mat4
{
    OPDS h;
    ARRAYDAT *out;
    ARRAYDAT *m1;
    ARRAYDAT *m2;
} DaGLMath_Mat4__Mat4_Mat4;

typedef struct DaGLMath_Mat4__Mat4_Val
{
    OPDS h;
    ARRAYDAT *out;
    ARRAYDAT *m;
    MYFLT *val;
} DaGLMath_Mat4__Mat4_Val;

typedef struct DaGLMath_Quat__Mat4
{
    OPDS h;
    ARRAYDAT *out;
    ARRAYDAT *m;
} DaGLMath_Quat__Mat4;

typedef struct DaGLMath_Val__Mat4
{
    OPDS h;
    MYFLT *out;
    ARRAYDAT *m;
} DaGLMath_Val__Mat4;

typedef struct DaGLMath_Vec3__Mat4_Vec3
{
    OPDS h;
    ARRAYDAT *out;
    ARRAYDAT *m;
    ARRAYDAT *v;
} DaGLMath_Vec3__Mat4_Vec3;

typedef struct DaGLMath_void__Mat4
{
    OPDS h;
    ARRAYDAT *m;
} DaGLMath_void__Mat4;

#ifdef __cplusplus
extern "C" {
#endif

int32_t check_Mat4(CSOUND *csound, ARRAYDAT *array, const char *position);
int32_t check_Quat(CSOUND *csound, ARRAYDAT *array, const char *position);
int32_t check_Vec3(CSOUND *csound, ARRAYDAT *array, const char *position);

#ifdef __cplusplus
}
#endif

#endif
