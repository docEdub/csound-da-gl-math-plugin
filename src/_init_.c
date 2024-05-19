#include "mat4.h"

#include <csdl.h>

static OENTRY localops[] = {
    {
        .opname = "DaGLMath_Mat4_copy",
        .dsblksiz = sizeof(DaGLMath_Mat4_copy),
        .thread = 3,
        .outypes = "k[]",
        .intypes = "k[]",
        .iopadr = (SUBR) da_gl_math_mat4_copy_init,
        .kopadr = (SUBR) da_gl_math_mat4_copy,
        .aopadr = NULL
    },
    {
        .opname = "DaGLMath_Mat4_identity",
        .dsblksiz = sizeof(DaGLMath_Mat4_identity),
        .thread = 3,
        .outypes = "k[]",
        .intypes = "",
        .iopadr = (SUBR) da_gl_math_mat4_identity_init,
        .kopadr = (SUBR) da_gl_math_mat4_identity,
        .aopadr = NULL
    },
    {
        .opname = "DaGLMath_Mat4_zero",
        .dsblksiz = sizeof(DaGLMath_Mat4_zero),
        .thread = 3,
        .outypes = "k[]",
        .intypes = "",
        .iopadr = (SUBR) da_gl_math_mat4_zero_init,
        .kopadr = (SUBR) da_gl_math_mat4_zero,
        .aopadr = NULL
    },
    {
        .opname = "DaGLMath_Mat4_multiply",
        .dsblksiz = sizeof(DaGLMath_Mat4_multiply),
        .thread = 3,
        .outypes = "k[]",
        .intypes = "k[]k[]",
        .iopadr = (SUBR) da_gl_math_mat4_multiply_init,
        .kopadr = (SUBR) da_gl_math_mat4_multiply,
        .aopadr = NULL
    },
    {
        .opname = "DaGLMath_Mat4_multiplyVec3",
        .dsblksiz = sizeof(DaGLMath_Mat4_multiplyVec3),
        .thread = 3,
        .outypes = "k[]",
        .intypes = "k[]k[]",
        .iopadr = (SUBR) da_gl_math_mat4_multiplyVec3_init,
        .kopadr = (SUBR) da_gl_math_mat4_multiplyVec3,
        .aopadr = NULL
    },
    {
        .opname = "DaGLMath_Mat4_quaternion",
        .dsblksiz = sizeof(DaGLMath_Mat4_quaternion),
        .thread = 3,
        .outypes = "k[]",
        .intypes = "k[]",
        .iopadr = (SUBR) da_gl_math_mat4_quaternion_init,
        .kopadr = (SUBR) da_gl_math_mat4_quaternion,
        .aopadr = NULL
    },
    {
        .opname = "DaGLMath_Mat4_transposeInPlace",
        .dsblksiz = sizeof(DaGLMath_Mat4_transposeInPlace),
        .thread = 3,
        .outypes = "",
        .intypes = "k[]",
        .iopadr = (SUBR) da_gl_math_mat4_transposeInPlace_init,
        .kopadr = (SUBR) da_gl_math_mat4_transposeInPlace,
        .aopadr = NULL
    },
    {
        .opname = "DaGLMath_Mat4_transpose",
        .dsblksiz = sizeof(DaGLMath_Mat4_transpose),
        .thread = 3,
        .outypes = "k[]",
        .intypes = "k[]",
        .iopadr = (SUBR) da_gl_math_mat4_transpose_init,
        .kopadr = (SUBR) da_gl_math_mat4_transpose,
        .aopadr = NULL
    },
    {
        .opname = "DaGLMath_Mat4_scale",
        .dsblksiz = sizeof(DaGLMath_Mat4_scale),
        .thread = 3,
        .outypes = "k[]",
        .intypes = "k[]k",
        .iopadr = (SUBR) da_gl_math_mat4_scale_init,
        .kopadr = (SUBR) da_gl_math_mat4_scale,
        .aopadr = NULL
    },
    {
        .opname = "DaGLMath_Mat4_determinant",
        .dsblksiz = sizeof(DaGLMath_Mat4_determinant),
        .thread = 3,
        .outypes = "k",
        .intypes = "k[]",
        .iopadr = (SUBR) da_gl_math_mat4_determinant_init,
        .kopadr = (SUBR) da_gl_math_mat4_determinant,
        .aopadr = NULL
    },
    {
        .opname = "DaGLMath_Mat4_invert",
        .dsblksiz = sizeof(DaGLMath_Mat4_invert),
        .thread = 3,
        .outypes = "k[]",
        .intypes = "k[]",
        .iopadr = (SUBR) da_gl_math_mat4_invert_init,
        .kopadr = (SUBR) da_gl_math_mat4_invert,
        .aopadr = NULL
    },
};

LINKAGE
