#ifndef CSOUND_GLM_PLUGIN__COMMON_H
#define CSOUND_GLM_PLUGIN__COMMON_H

#include <csdl.h>

typedef struct GLM_Mat4
{
    OPDS h;
    ARRAYDAT *out;
} GLM_Mat4;

typedef struct GLM_Mat4__Mat4
{
    OPDS h;
    ARRAYDAT *out;
    ARRAYDAT *m;
} GLM_Mat4__Mat4;

typedef struct GLM_Mat4__Mat4_Mat4
{
    OPDS h;
    ARRAYDAT *out;
    ARRAYDAT *m1;
    ARRAYDAT *m2;
} GLM_Mat4__Mat4_Mat4;

typedef struct GLM_Mat4__Mat4_Val
{
    OPDS h;
    ARRAYDAT *out;
    ARRAYDAT *m;
    MYFLT *val;
} GLM_Mat4__Mat4_Val;

typedef struct GLM_Quat__Mat4
{
    OPDS h;
    ARRAYDAT *out;
    ARRAYDAT *m;
} GLM_Quat__Mat4;

typedef struct GLM_Val__Mat4
{
    OPDS h;
    MYFLT *out;
    ARRAYDAT *m;
} GLM_Val__Mat4;

typedef struct GLM_Vec3__Mat4_Vec3
{
    OPDS h;
    ARRAYDAT *out;
    ARRAYDAT *m;
    ARRAYDAT *v;
} GLM_Vec3__Mat4_Vec3;

typedef struct GLM_void__Mat4
{
    OPDS h;
    ARRAYDAT *m;
} GLM_void__Mat4;

#ifdef __cplusplus
extern "C" {
#endif

int32_t check_Mat4(CSOUND *csound, ARRAYDAT *array);
int32_t check_Quat(CSOUND *csound, ARRAYDAT *array);
int32_t check_Vec3(CSOUND *csound, ARRAYDAT *array);

#ifdef __cplusplus
}
#endif

#endif
