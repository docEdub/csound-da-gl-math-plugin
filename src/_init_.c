#include "mat4.h"

#include <csdl.h>

static OENTRY localops[] = {
    {
        .opname = "GLM_Mat4_copy",
        .dsblksiz = sizeof(GLM_Mat4_copy),
        .thread = 3,
        .outypes = "k[]",
        .intypes = "k[]",
        .iopadr = (SUBR) glm_mat4_copy_init,
        .kopadr = (SUBR) glm_mat4_copy,
        .aopadr = NULL
    },
    {
        .opname = "GLM_Mat4_identity",
        .dsblksiz = sizeof(GLM_Mat4_identity),
        .thread = 3,
        .outypes = "k[]",
        .intypes = "",
        .iopadr = (SUBR) glm_mat4_identity_init,
        .kopadr = (SUBR) glm_mat4_identity,
        .aopadr = NULL
    },
    {
        .opname = "GLM_Mat4_zero",
        .dsblksiz = sizeof(GLM_Mat4_zero),
        .thread = 3,
        .outypes = "k[]",
        .intypes = "",
        .iopadr = (SUBR) glm_mat4_zero_init,
        .kopadr = (SUBR) glm_mat4_zero,
        .aopadr = NULL
    },
    {
        .opname = "GLM_Mat4_mul",
        .dsblksiz = sizeof(GLM_Mat4_mul),
        .thread = 3,
        .outypes = "k[]",
        .intypes = "k[]k[]",
        .iopadr = (SUBR) glm_mat4_mul_init,
        .kopadr = (SUBR) glm_mat4_mul,
        .aopadr = NULL
    },
    {
        .opname = "GLM_Mat4_mulv3",
        .dsblksiz = sizeof(GLM_Mat4_mulv3),
        .thread = 3,
        .outypes = "k[]",
        .intypes = "k[]k[]",
        .iopadr = (SUBR) glm_mat4_mulv3_init,
        .kopadr = (SUBR) glm_mat4_mulv3,
        .aopadr = NULL
    },
    {
        .opname = "GLM_Mat4_quat",
        .dsblksiz = sizeof(GLM_Mat4_quat),
        .thread = 3,
        .outypes = "k[]",
        .intypes = "k[]",
        .iopadr = (SUBR) glm_mat4_quat_init,
        .kopadr = (SUBR) glm_mat4_quat,
        .aopadr = NULL
    },
    {
        .opname = "GLM_Mat4_transpose",
        .dsblksiz = sizeof(GLM_Mat4_transpose),
        .thread = 3,
        .outypes = "",
        .intypes = "k[]",
        .iopadr = (SUBR) glm_mat4_transpose_init,
        .kopadr = (SUBR) glm_mat4_transpose,
        .aopadr = NULL
    },
    {
        .opname = "GLM_Mat4_transpose_to",
        .dsblksiz = sizeof(GLM_Mat4_transpose_to),
        .thread = 3,
        .outypes = "k[]",
        .intypes = "k[]",
        .iopadr = (SUBR) glm_mat4_transpose_to_init,
        .kopadr = (SUBR) glm_mat4_transpose_to,
        .aopadr = NULL
    },
    {
        .opname = "GLM_Mat4_scale",
        .dsblksiz = sizeof(GLM_Mat4_scale),
        .thread = 3,
        .outypes = "k[]",
        .intypes = "k[]k",
        .iopadr = (SUBR) glm_mat4_scale_init,
        .kopadr = (SUBR) glm_mat4_scale,
        .aopadr = NULL
    },
    {
        .opname = "GLM_Mat4_det",
        .dsblksiz = sizeof(GLM_Mat4_det),
        .thread = 3,
        .outypes = "k",
        .intypes = "k[]",
        .iopadr = (SUBR) glm_mat4_det_init,
        .kopadr = (SUBR) glm_mat4_det,
        .aopadr = NULL
    },
    {
        .opname = "GLM_Mat4_inv",
        .dsblksiz = sizeof(GLM_Mat4_inv),
        .thread = 3,
        .outypes = "k[]",
        .intypes = "k[]",
        .iopadr = (SUBR) glm_mat4_inv_init,
        .kopadr = (SUBR) glm_mat4_inv,
        .aopadr = NULL
    },
};

LINKAGE
