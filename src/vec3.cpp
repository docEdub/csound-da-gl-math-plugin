#include "vec3.h"

#include "common.hpp"

#include <glm/gtx/normal.hpp>

using namespace glm;

static int32_t check(CSOUND *csound, DaGLMath_Nil__Vec3 *p)
{
    int32_t result = OK;
    result |= check_Vec3(csound, p->v, Constants::arg1);
    return result;
}

static int32_t check(CSOUND *csound, DaGLMath_Num__Vec3 *p)
{
    int32_t result = OK;
    result |= check_Vec3(csound, p->v, Constants::arg1);
    return result;
}

static int32_t check(CSOUND *csound, DaGLMath_Num__Vec3_Vec3 *p)
{
    int32_t result = OK;
    result |= check_Vec3(csound, p->v1, Constants::arg1);
    result |= check_Vec3(csound, p->v2, Constants::arg2);
    return result;
}

static int32_t check(CSOUND *csound, DaGLMath_Vec3__Vec3 *p)
{
    int32_t result = OK;
    result |= check_Vec3(csound, p->out, Constants::output);
    result |= check_Vec3(csound, p->v, Constants::arg1);
    return result;
}

static int32_t check(CSOUND *csound, DaGLMath_Vec3__Vec3_Vec3_Vec3 *p)
{
    int32_t result = OK;
    result |= check_Vec3(csound, p->out, Constants::output);
    result |= check_Vec3(csound, p->v1, Constants::arg1);
    result |= check_Vec3(csound, p->v2, Constants::arg2);
    result |= check_Vec3(csound, p->v3, Constants::arg3);
    return result;
}

int32_t da_gl_math_vec3_distance_init(CSOUND *csound, DaGLMath_Vec3_distance *p)
{
    return check(csound, p);
}

int32_t da_gl_math_vec3_distance(CSOUND *, DaGLMath_Vec3_distance *p)
{
    const auto v1 = make_vec3(p->v1->data);
    const auto v2 = make_vec3(p->v2->data);
    *p->out = glm::distance(v1, v2);
    return OK;
}

int32_t da_gl_math_vec3_distanceSquared_init(CSOUND *csound, DaGLMath_Vec3_distanceSquared *p)
{
    return check(csound, p);
}

int32_t da_gl_math_vec3_distanceSquared(CSOUND *, DaGLMath_Vec3_distanceSquared *p)
{
    const auto v1 = make_vec3(p->v1->data);
    const auto v2 = make_vec3(p->v2->data);
    const auto tmp = v1 - v2;
    *p->out = glm::dot(tmp, tmp);
    return OK;
}

int32_t da_gl_math_vec3_dot_init(CSOUND *csound, DaGLMath_Vec3_dot *p)
{
    return check(csound, p);
}

int32_t da_gl_math_vec3_dot(CSOUND *, DaGLMath_Vec3_dot *p)
{
    const auto v1 = make_vec3(p->v1->data);
    const auto v2 = make_vec3(p->v2->data);
    *p->out = glm::dot(v1, v2);
    return OK;
}

int32_t da_gl_math_vec3_length_init(CSOUND *csound, DaGLMath_Vec3_length *p)
{
    return check(csound, p);
}

int32_t da_gl_math_vec3_length(CSOUND *, DaGLMath_Vec3_length *p)
{
    const auto v = make_vec3(p->v->data);
    *p->out = glm::length(v);
    return OK;
}

int32_t da_gl_math_vec3_lengthSquared_init(CSOUND *csound, DaGLMath_Vec3_lengthSquared *p)
{
    return check(csound, p);
}

int32_t da_gl_math_vec3_lengthSquared(CSOUND *, DaGLMath_Vec3_lengthSquared *p)
{
    const auto v = make_vec3(p->v->data);
    *p->out = glm::dot(v, v);
    return OK;
}

int32_t da_gl_math_vec3_normalize_init(CSOUND *csound, DaGLMath_Vec3_normalize *p)
{
    allocIfNull_Vec3(csound, p->out);
    return check(csound, p);
}

int32_t da_gl_math_vec3_normalize(CSOUND *, DaGLMath_Vec3_normalize *p)
{
    const auto v = make_vec3(p->v->data);
    const auto out = glm::normalize(v);

    memcpy(p->out->data, value_ptr(out), sizeof_Vec3);
    return OK;
}

int32_t da_gl_math_vec3_normalizeInPlace_init(CSOUND *csound, DaGLMath_Vec3_normalizeInPlace *p)
{
    return check(csound, p);
}

int32_t da_gl_math_vec3_normalizeInPlace(CSOUND *, DaGLMath_Vec3_normalizeInPlace *p)
{
    auto v = make_vec3(p->v->data);
    v = glm::normalize(v);

    memcpy(p->v->data, value_ptr(v), sizeof_Vec3);
    return OK;
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
