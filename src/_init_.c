#include "mat4.h"
#include "vec3.h"

static OENTRY localops[] = {
    #pragma region      Matrix
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
    {
        .opname = "DaGLMath_Mat4_fromEulerAnglesXYZ",
        .dsblksiz = sizeof(DaGLMath_Mat4_fromEulerAnglesXYZ),
        .thread = 3,
        .outypes = "k[]",
        .intypes = "k[]",
        .iopadr = (SUBR) da_gl_math_mat4_fromEulerAnglesXYZ_init,
        .kopadr = (SUBR) da_gl_math_mat4_fromEulerAnglesXYZ,
        .aopadr = NULL
    },
    {
        .opname = "DaGLMath_Mat4_toEulerAnglesXYZ",
        .dsblksiz = sizeof(DaGLMath_Mat4_fromEulerAnglesXYZ),
        .thread = 3,
        .outypes = "k[]",
        .intypes = "k[]",
        .iopadr = (SUBR) da_gl_math_mat4_toEulerAnglesXYZ_init,
        .kopadr = (SUBR) da_gl_math_mat4_toEulerAnglesXYZ,
        .aopadr = NULL
    },

    #pragma endregion
    #pragma region      Vector

    {
        .opname = "DaGLMath_Vec3_distance",
        .dsblksiz = sizeof(DaGLMath_Vec3_distance),
        .thread = 3,
        .outypes = "k",
        .intypes = "k[]k[]",
        .iopadr = (SUBR) da_gl_math_vec3_distance_init,
        .kopadr = (SUBR) da_gl_math_vec3_distance,
        .aopadr = NULL
    },
    {
        .opname = "DaGLMath_Vec3_distanceSquared",
        .dsblksiz = sizeof(DaGLMath_Vec3_distanceSquared),
        .thread = 3,
        .outypes = "k",
        .intypes = "k[]k[]",
        .iopadr = (SUBR) da_gl_math_vec3_distanceSquared_init,
        .kopadr = (SUBR) da_gl_math_vec3_distanceSquared,
        .aopadr = NULL
    },
    {
        .opname = "DaGLMath_Vec3_dot",
        .dsblksiz = sizeof(DaGLMath_Vec3_dot),
        .thread = 3,
        .outypes = "k",
        .intypes = "k[]k[]",
        .iopadr = (SUBR) da_gl_math_vec3_dot_init,
        .kopadr = (SUBR) da_gl_math_vec3_dot,
        .aopadr = NULL
    },
    {
        .opname = "DaGLMath_Vec3_length",
        .dsblksiz = sizeof(DaGLMath_Vec3_length),
        .thread = 3,
        .outypes = "k",
        .intypes = "k[]",
        .iopadr = (SUBR) da_gl_math_vec3_length_init,
        .kopadr = (SUBR) da_gl_math_vec3_length,
        .aopadr = NULL
    },
    {
        .opname = "DaGLMath_Vec3_lengthSquared",
        .dsblksiz = sizeof(DaGLMath_Vec3_lengthSquared),
        .thread = 3,
        .outypes = "k",
        .intypes = "k[]",
        .iopadr = (SUBR) da_gl_math_vec3_lengthSquared_init,
        .kopadr = (SUBR) da_gl_math_vec3_lengthSquared,
        .aopadr = NULL
    },
    {
        .opname = "DaGLMath_Vec3_normalize",
        .dsblksiz = sizeof(DaGLMath_Vec3_normalize),
        .thread = 3,
        .outypes = "k[]",
        .intypes = "k[]",
        .iopadr = (SUBR) da_gl_math_vec3_normalize_init,
        .kopadr = (SUBR) da_gl_math_vec3_normalize,
        .aopadr = NULL
    },
    {
        .opname = "DaGLMath_Vec3_normalizeInPlace",
        .dsblksiz = sizeof(DaGLMath_Vec3_normalizeInPlace),
        .thread = 3,
        .outypes = "",
        .intypes = "k[]",
        .iopadr = (SUBR) da_gl_math_vec3_normalizeInPlace_init,
        .kopadr = (SUBR) da_gl_math_vec3_normalizeInPlace,
        .aopadr = NULL
    },
    {
        .opname = "DaGLMath_Vec3_triangleNormal",
        .dsblksiz = sizeof(DaGLMath_Vec3_triangleNormal),
        .thread = 3,
        .outypes = "k[]",
        .intypes = "k[]k[]k[]",
        .iopadr = (SUBR) da_gl_math_vec3_triangleNormal_init,
        .kopadr = (SUBR) da_gl_math_vec3_triangleNormal,
        .aopadr = NULL
    },

    #pragma endregion
};

LINKAGE
