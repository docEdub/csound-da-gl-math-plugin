#ifndef CSOUND_DA_GL_MATH_PLUGIN__COMMON_TYPES_H
#define CSOUND_DA_GL_MATH_PLUGIN__COMMON_TYPES_H

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

typedef struct DaGLMath_Mat4__Mat4_Num
{
    OPDS h;
    ARRAYDAT *out;
    ARRAYDAT *m;
    MYFLT *val;
} DaGLMath_Mat4__Mat4_Num;

typedef struct DaGLMath_Mat4__Vec3
{
    OPDS h;
    ARRAYDAT *out;
    ARRAYDAT *v;
} DaGLMath_Mat4__Vec3;

typedef struct DaGLMath_Nil__Mat4
{
    OPDS h;
    ARRAYDAT *m;
} DaGLMath_Nil__Mat4;

typedef struct DaGLMath_Num__Mat4
{
    OPDS h;
    MYFLT *out;
    ARRAYDAT *m;
} DaGLMath_Num__Mat4;

typedef struct DaGLMath_Quat__Mat4
{
    OPDS h;
    ARRAYDAT *out;
    ARRAYDAT *m;
} DaGLMath_Quat__Mat4;

typedef struct DaGLMath_Vec3__Mat4
{
    OPDS h;
    ARRAYDAT *out;
    ARRAYDAT *m;
} DaGLMath_Vec3__Mat4;

typedef struct DaGLMath_Vec3__Mat4_Vec3
{
    OPDS h;
    ARRAYDAT *out;
    ARRAYDAT *m;
    ARRAYDAT *v;
} DaGLMath_Vec3__Mat4_Vec3;

typedef struct DaGLMath_Vec3__Vec3_Mat4
{
    OPDS h;
    ARRAYDAT *out;
    ARRAYDAT *v;
    ARRAYDAT *m;
} DaGLMath_Vec3__Vec3_Mat4;

typedef struct DaGLMath_Vec3__Vec3_Vec3_Vec3
{
    OPDS h;
    ARRAYDAT *out;
    ARRAYDAT *v1;
    ARRAYDAT *v2;
    ARRAYDAT *v3;
} DaGLMath_Vec3__Vec3_Vec3_Vec3;

#endif
