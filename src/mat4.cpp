#include "mat4.h"

#include <glm/ext/matrix_double4x4.hpp>
#include <glm/gtc/type_ptr.hpp>

using namespace glm;

const size_t sizeof_mat4 = dmat4::length() * dmat4::col_type::length() * sizeof(dmat4::value_type);
const size_t sizeof_quat = dquat::length() * sizeof(dquat::value_type);
const size_t sizeof_vec3 = dvec3::length() * sizeof(dvec3::value_type);

const dmat4 mat4_identity(1.0);
const dmat4 mat4_zero(0.0);

static int32_t check(CSOUND *csound, DaGLMath_Mat4 *p)
{
    return check_Mat4(csound, p->out);
}

static int32_t check(CSOUND *csound, DaGLMath_Mat4__Mat4 *p)
{
    int32_t result = OK;
    result |= check_Mat4(csound, p->out);
    result |= check_Mat4(csound, p->m);
    return result;
}

static int32_t check(CSOUND *csound, DaGLMath_Mat4__Mat4_Mat4 *p)
{
    int32_t result = OK;
    result |= check_Mat4(csound, p->out);
    result |= check_Mat4(csound, p->m1);
    result |= check_Mat4(csound, p->m2);
    return result;
}

static int32_t check(CSOUND *csound, DaGLMath_Mat4__Mat4_Val *p)
{
    int32_t result = OK;
    result |= check_Mat4(csound, p->out);
    result |= check_Mat4(csound, p->m);
    return result;
}

static int32_t check(CSOUND *csound, DaGLMath_Quat__Mat4 *p)
{
    int32_t result = OK;
    result |= check_Quat(csound, p->out);
    result |= check_Mat4(csound, p->m);
    return result;
}

static int32_t check(CSOUND *csound, DaGLMath_Val__Mat4 *p)
{
    int32_t result = OK;
    result |= check_Mat4(csound, p->m);
    return result;
}

static int32_t check(CSOUND *csound, DaGLMath_Vec3__Mat4_Vec3 *p)
{
    int32_t result = OK;
    result |= check_Vec3(csound, p->out);
    result |= check_Mat4(csound, p->m);
    result |= check_Vec3(csound, p->v);
    return result;
}

static int32_t check(CSOUND *csound, DaGLMath_void__Mat4 *p)
{
    int32_t result = OK;
    result |= check_Mat4(csound, p->m);
    return result;
}

int32_t da_gl_math_mat4_copy_init(CSOUND *csound, DaGLMath_Mat4_copy *p)
{
    return check(csound, p);
}

int32_t da_gl_math_mat4_copy(CSOUND *, DaGLMath_Mat4_copy *p)
{
    memcpy(p->out->data, p->m->data, sizeof_mat4);
    return OK;
}

int32_t da_gl_math_mat4_identity_init(CSOUND *csound, DaGLMath_Mat4_identity *p)
{
    return check(csound, p);
}

int32_t da_gl_math_mat4_identity(CSOUND *, DaGLMath_Mat4_identity *p)
{
    memcpy(p->out->data, value_ptr(mat4_identity), sizeof_mat4);
    return OK;
}

int32_t da_gl_math_mat4_zero_init(CSOUND *csound, DaGLMath_Mat4_zero *p)
{
    return check(csound, p);
}

int32_t da_gl_math_mat4_zero(CSOUND *, DaGLMath_Mat4_zero *p)
{
    memcpy(p->out->data, value_ptr(mat4_zero), sizeof_mat4);
    return OK;
}

int32_t da_gl_math_mat4_mul_init(CSOUND *csound, DaGLMath_Mat4_mul *p)
{
    return check(csound, p);
}

int32_t da_gl_math_mat4_mul(CSOUND *, DaGLMath_Mat4_mul *p)
{
    const auto m1 = make_mat4(p->m1->data);
    const auto m2 = make_mat4(p->m2->data);
    const auto out = m1 * m2;

    memcpy(p->out->data, value_ptr(out), sizeof_mat4);
    return OK;
}

int32_t da_gl_math_mat4_mulv3_init(CSOUND *csound, DaGLMath_Mat4_mulv3 *p)
{
    return check(csound, p);
}

int32_t da_gl_math_mat4_mulv3(CSOUND *, DaGLMath_Mat4_mulv3 *p)
{
    const auto m = make_mat4(p->m->data);
    const auto v = dvec4(make_vec3(p->v->data), 1.0);
    const auto out = m * v;

    memcpy(p->out->data, value_ptr(out), sizeof_vec3);
    return OK;
}

int32_t da_gl_math_mat4_quat_init(CSOUND *csound, DaGLMath_Mat4_quat *p)
{
    return check(csound, p);
}

int32_t da_gl_math_mat4_quat(CSOUND *, DaGLMath_Mat4_quat *p)
{
    const auto m = make_mat4(p->m->data);
    const auto out = quat_cast(m);

    memcpy(p->out->data, value_ptr(out), sizeof_quat);
    return OK;
}

int32_t da_gl_math_mat4_transpose_init(CSOUND *csound, DaGLMath_Mat4_transpose *p)
{
    return check(csound, p);
}

int32_t da_gl_math_mat4_transpose(CSOUND *, DaGLMath_Mat4_transpose *p)
{
    auto m = make_mat4(p->m->data);
    m = transpose(m);

    memcpy(p->m->data, value_ptr(m), sizeof_mat4);
    return OK;
}

int32_t da_gl_math_mat4_transpose_to_init(CSOUND *csound, DaGLMath_Mat4_transpose_to *p)
{
    return check(csound, p);
}

int32_t da_gl_math_mat4_transpose_to(CSOUND *, DaGLMath_Mat4_transpose_to *p)
{
    const auto m = make_mat4(p->m->data);
    const auto out = transpose(m);

    memcpy(p->out->data, value_ptr(out), sizeof_mat4);
    return OK;
}

int32_t da_gl_math_mat4_scale_init(CSOUND *csound, DaGLMath_Mat4_scale *p)
{
    return check(csound, p);
}

int32_t da_gl_math_mat4_scale(CSOUND *, DaGLMath_Mat4_scale *p)
{
    const auto m = make_mat4(p->m->data);
    const auto out = m * *p->val;

    memcpy(p->out->data, value_ptr(out), sizeof_mat4);
    return OK;
}

int32_t da_gl_math_mat4_det_init(CSOUND *csound, DaGLMath_Mat4_det *p)
{
    return check(csound, p);
}

int32_t da_gl_math_mat4_det(CSOUND *, DaGLMath_Mat4_det *p)
{
    const auto m = make_mat4(p->m->data);
    *p->out = determinant(m);
    return OK;
}

int32_t da_gl_math_mat4_inv_init(CSOUND *csound, DaGLMath_Mat4_inv *p)
{
    return check(csound, p);
}

int32_t da_gl_math_mat4_inv(CSOUND *, DaGLMath_Mat4_inv *p)
{
    const auto m = make_mat4(p->m->data);
    const auto out = inverse(m);

    memcpy(p->out->data, value_ptr(out), sizeof_mat4);
    return OK;
}
