#include "vec3.h"

#include "common.hpp"

#include <glm/gtx/normal.hpp>

using namespace glm;

static int32_t check(CSOUND *csound, DaGLMath_Vec3__Vec3_Vec3_Vec3 *p)
{
    int32_t result = OK;
    result |= check_Vec3(csound, p->out, Constants::output);
    result |= check_Vec3(csound, p->v1, Constants::arg1);
    result |= check_Vec3(csound, p->v2, Constants::arg2);
    result |= check_Vec3(csound, p->v3, Constants::arg3);
    return result;
}

int32_t da_gl_math_vec3_triangleNormal_init(CSOUND *csound, DaGLMath_Vec3_triangleNormal *p)
{
    allocIfNull_Vec3(csound, p->out);
    return check(csound, p);
}

int32_t da_gl_math_vec3_triangleNormal(CSOUND *, DaGLMath_Vec3_triangleNormal *p)
{
    const auto v1 = make_vec3(p->v1->data);
    const auto v2 = make_vec3(p->v2->data);
    const auto v3 = make_vec3(p->v3->data);
    const auto normal = triangleNormal(v1, v2, v3);

    memcpy(p->out->data, value_ptr(normal), sizeof_Vec3);
    return OK;
}
