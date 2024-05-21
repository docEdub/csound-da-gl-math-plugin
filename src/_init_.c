#include "mat4.h"
#include "vec3.h"

static OENTRY localops[] = {
    #pragma region      Matrix
    {
        .opname = "DaGLMath_Mat4_copy",
        .dsblksiz = sizeof(DaGLMath_Mat4_copy),
        .outypes = "k[]",
        .intypes = "k[]",
        .iopadr = (SUBR) da_gl_math_mat4_copy_init,
        .kopadr = (SUBR) da_gl_math_mat4_copy,
        .aopadr = NULL
    },
    {
        .opname = "DaGLMath_Mat4_identity",
        .dsblksiz = sizeof(DaGLMath_Mat4_identity),
        .outypes = "k[]",
        .intypes = "",
        .iopadr = (SUBR) da_gl_math_mat4_identity_init,
        .kopadr = (SUBR) da_gl_math_mat4_identity,
        .aopadr = NULL
    },
    {
        .opname = "DaGLMath_Mat4_zero",
        .dsblksiz = sizeof(DaGLMath_Mat4_zero),
        .outypes = "k[]",
        .intypes = "",
        .iopadr = (SUBR) da_gl_math_mat4_zero_init,
        .kopadr = (SUBR) da_gl_math_mat4_zero,
        .aopadr = NULL
    },
    {
        .opname = "DaGLMath_Mat4_multiply",
        .dsblksiz = sizeof(DaGLMath_Mat4_multiply),
        .outypes = "k[]",
        .intypes = "k[]k[]",
        .iopadr = (SUBR) da_gl_math_mat4_multiply_init,
        .kopadr = (SUBR) da_gl_math_mat4_multiply,
        .aopadr = NULL
    },
    {
        .opname = "DaGLMath_Mat4_multiplyVec3",
        .dsblksiz = sizeof(DaGLMath_Mat4_multiplyVec3),
        .outypes = "k[]",
        .intypes = "k[]k[]",
        .iopadr = (SUBR) da_gl_math_mat4_multiplyVec3_init,
        .kopadr = (SUBR) da_gl_math_mat4_multiplyVec3,
        .aopadr = NULL
    },
    {
        .opname = "DaGLMath_Mat4_quaternion",
        .dsblksiz = sizeof(DaGLMath_Mat4_quaternion),
        .outypes = "k[]",
        .intypes = "k[]",
        .iopadr = (SUBR) da_gl_math_mat4_quaternion_init,
        .kopadr = (SUBR) da_gl_math_mat4_quaternion,
        .aopadr = NULL
    },
    {
        .opname = "DaGLMath_Mat4_transposeInPlace",
        .dsblksiz = sizeof(DaGLMath_Mat4_transposeInPlace),
        .outypes = "",
        .intypes = "k[]",
        .iopadr = (SUBR) da_gl_math_mat4_transposeInPlace_init,
        .kopadr = (SUBR) da_gl_math_mat4_transposeInPlace,
        .aopadr = NULL
    },
    {
        .opname = "DaGLMath_Mat4_transpose",
        .dsblksiz = sizeof(DaGLMath_Mat4_transpose),
        .outypes = "k[]",
        .intypes = "k[]",
        .iopadr = (SUBR) da_gl_math_mat4_transpose_init,
        .kopadr = (SUBR) da_gl_math_mat4_transpose,
        .aopadr = NULL
    },
    {
        .opname = "DaGLMath_Mat4_scale",
        .dsblksiz = sizeof(DaGLMath_Mat4_scale),
        .outypes = "k[]",
        .intypes = "k[]k",
        .iopadr = (SUBR) da_gl_math_mat4_scale_init,
        .kopadr = (SUBR) da_gl_math_mat4_scale,
        .aopadr = NULL
    },
    {
        .opname = "DaGLMath_Mat4_determinant",
        .dsblksiz = sizeof(DaGLMath_Mat4_determinant),
        .outypes = "k",
        .intypes = "k[]",
        .iopadr = (SUBR) da_gl_math_mat4_determinant_init,
        .kopadr = (SUBR) da_gl_math_mat4_determinant,
        .aopadr = NULL
    },
    {
        .opname = "DaGLMath_Mat4_invert",
        .dsblksiz = sizeof(DaGLMath_Mat4_invert),
        .outypes = "k[]",
        .intypes = "k[]",
        .iopadr = (SUBR) da_gl_math_mat4_invert_init,
        .kopadr = (SUBR) da_gl_math_mat4_invert,
        .aopadr = NULL
    },
    {
        .opname = "DaGLMath_Mat4_fromEulerAnglesXYZ",
        .dsblksiz = sizeof(DaGLMath_Mat4_fromEulerAnglesXYZ),
        .outypes = "k[]",
        .intypes = "k[]",
        .iopadr = (SUBR) da_gl_math_mat4_fromEulerAnglesXYZ_init,
        .kopadr = (SUBR) da_gl_math_mat4_fromEulerAnglesXYZ,
        .aopadr = NULL
    },
    {
        .opname = "DaGLMath_Mat4_toEulerAnglesXYZ",
        .dsblksiz = sizeof(DaGLMath_Mat4_fromEulerAnglesXYZ),
        .outypes = "k[]",
        .intypes = "k[]",
        .iopadr = (SUBR) da_gl_math_mat4_toEulerAnglesXYZ_init,
        .kopadr = (SUBR) da_gl_math_mat4_toEulerAnglesXYZ,
        .aopadr = NULL
    },

    #pragma endregion
    #pragma region      Vector

    {
        .opname = "DaGLMath_Vec3_triangleNormal",
        .dsblksiz = sizeof(DaGLMath_Vec3_triangleNormal),
        .outypes = "k[]",
        .intypes = "k[]k[]k[]",
        .iopadr = (SUBR) da_gl_math_vec3_triangleNormal_init,
        .kopadr = (SUBR) da_gl_math_vec3_triangleNormal,
        .aopadr = NULL
    },

    #pragma endregion
};

LINKAGE
