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
};

LINKAGE
