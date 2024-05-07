#include "mat4.h"

#include <csdl.h>

static OENTRY localops[] = {
    {
        .opname = "glm_mat4_copy",
        .dsblksiz = sizeof(GLM_Mat4_x2),
        .thread = 3,
        .outypes = "",
        .intypes = "k[]k[]",
        .iopadr = (SUBR) glm_mat4_copy,
        .kopadr = (SUBR) glm_mat4_copy,
        .aopadr = NULL
    },
    {
        .opname = "glm_mat4_identity",
        .dsblksiz = sizeof(GLM_Mat4),
        .thread = 3,
        .outypes = "",
        .intypes = "k[]",
        .iopadr = (SUBR) glm_mat4_identity,
        .kopadr = (SUBR) glm_mat4_identity,
        .aopadr = NULL
    },
    {
        .opname = "glm_mat4_zero",
        .dsblksiz = sizeof(GLM_Mat4),
        .thread = 3,
        .outypes = "",
        .intypes = "k[]",
        .iopadr = (SUBR) glm_mat4_zero,
        .kopadr = (SUBR) glm_mat4_zero,
        .aopadr = NULL
    },
    {
        .opname = "glm_mat4_mul",
        .dsblksiz = sizeof(GLM_Mat4_x3),
        .thread = 3,
        .outypes = "",
        .intypes = "k[]k[]k[]",
        .iopadr = (SUBR) glm_mat4_mul,
        .kopadr = (SUBR) glm_mat4_mul,
        .aopadr = NULL
    },
    {
        .opname = "glm_mat4_mulv3",
        .dsblksiz = sizeof(GLM_Mat4_Vec3_x2),
        .thread = 3,
        .outypes = "",
        .intypes = "k[]k[]k[]",
        .iopadr = (SUBR) glm_mat4_mulv3,
        .kopadr = (SUBR) glm_mat4_mulv3,
        .aopadr = NULL
    },
    {
        .opname = "glm_mat4_quat",
        .dsblksiz = sizeof(GLM_Mat4_Vec3_x2),
        .thread = 3,
        .outypes = "",
        .intypes = "k[]k[]",
        .iopadr = (SUBR) glm_mat4_quat,
        .kopadr = (SUBR) glm_mat4_quat,
        .aopadr = NULL
    },
    {
        .opname = "glm_mat4_transpose",
        .dsblksiz = sizeof(GLM_Mat4),
        .thread = 3,
        .outypes = "",
        .intypes = "k[]",
        .iopadr = (SUBR) glm_mat4_transpose,
        .kopadr = (SUBR) glm_mat4_transpose,
        .aopadr = NULL
    },
    {
        .opname = "glm_mat4_transpose_to",
        .dsblksiz = sizeof(GLM_Mat4_x2),
        .thread = 3,
        .outypes = "",
        .intypes = "k[]k[]",
        .iopadr = (SUBR) glm_mat4_transpose_to,
        .kopadr = (SUBR) glm_mat4_transpose_to,
        .aopadr = NULL
    },
    {
        .opname = "glm_mat4_scale",
        .dsblksiz = sizeof(GLM_Mat4_Val_Mat4),
        .thread = 3,
        .outypes = "",
        .intypes = "k[]kk[]",
        .iopadr = (SUBR) glm_mat4_scale,
        .kopadr = (SUBR) glm_mat4_scale,
        .aopadr = NULL
    },
    {
        .opname = "glm_mat4_det",
        .dsblksiz = sizeof(GLM_Mat4_Val),
        .thread = 3,
        .outypes = "",
        .intypes = "k[]k",
        .iopadr = (SUBR) glm_mat4_det,
        .kopadr = (SUBR) glm_mat4_det,
        .aopadr = NULL
    },
    {
        .opname = "glm_mat4_inv",
        .dsblksiz = sizeof(GLM_Mat4_x2),
        .thread = 3,
        .outypes = "",
        .intypes = "k[]k[]",
        .iopadr = (SUBR) glm_mat4_inv,
        .kopadr = (SUBR) glm_mat4_inv,
        .aopadr = NULL
    },
};

LINKAGE
