#ifndef CSOUND_GLM_PLUGIN__COMMON_H
#define CSOUND_GLM_PLUGIN__COMMON_H

#include <csdl.h>

typedef struct GLM_Mat4
{
    OPDS h;
    ARRAYDAT *dest;
} GLM_Mat4;

typedef struct GLM_Mat4_Quat
{
    OPDS h;
    ARRAYDAT *m;
    ARRAYDAT *dest;
} GLM_Mat4_Quat;

typedef struct GLM_Mat4_Val_Mat4
{
    OPDS h;
    ARRAYDAT *m;
    MYFLT *val;
    ARRAYDAT *dest;
} GLM_Mat4_Val_Mat4;

typedef struct GLM_Mat4_Val
{
    OPDS h;
    ARRAYDAT *m;
    MYFLT *dest;
} GLM_Mat4_Val;

typedef struct GLM_Mat4_Vec3_x2
{
    OPDS h;
    ARRAYDAT *m;
    ARRAYDAT *v;
    ARRAYDAT *dest;
} GLM_Mat4_Vec3_x2;

typedef struct GLM_Mat4_x2
{
    OPDS h;
    ARRAYDAT *m;
    ARRAYDAT *dest;
} GLM_Mat4_x2;

typedef struct GLM_Mat4_x3
{
    OPDS h;
    ARRAYDAT *m1;
    ARRAYDAT *m2;
    ARRAYDAT *dest;
} GLM_Mat4_x3;

#endif
