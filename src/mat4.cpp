#include "mat4.h"

#include <glm/ext/matrix_double4x4.hpp>
#include <glm/gtc/type_ptr.hpp>

using namespace glm;

const size_t sizeof_mat4 = dmat4::length() * dmat4::col_type::length() * sizeof(dmat4::value_type);
const size_t sizeof_quat = dquat::length() * sizeof(dquat::value_type);
const size_t sizeof_vec3 = dvec3::length() * sizeof(dvec3::value_type);

const dmat4 mat4_identity(1.0);
const dmat4 mat4_zero(0.0);

static const char *output = "output";
static const char *arg1 = "argument 1";
static const char *arg2 = "argument 2";

static int32_t check(CSOUND *csound, DaGLMath_Mat4 *p)
{
    return check_Mat4(csound, p->out, output);
}

static int32_t check(CSOUND *csound, DaGLMath_Mat4__Mat4 *p)
{
    int32_t result = OK;
    result |= check_Mat4(csound, p->out, output);
    result |= check_Mat4(csound, p->m, arg1);
    return result;
}

static int32_t check(CSOUND *csound, DaGLMath_Mat4__Mat4_Mat4 *p)
{
    int32_t result = OK;
    result |= check_Mat4(csound, p->out, output);
    result |= check_Mat4(csound, p->m1, arg1);
    result |= check_Mat4(csound, p->m2, arg2);
    return result;
}

static int32_t check(CSOUND *csound, DaGLMath_Mat4__Mat4_Num *p)
{
    int32_t result = OK;
    result |= check_Mat4(csound, p->out, output);
    result |= check_Mat4(csound, p->m, arg1);
    return result;
}

static int32_t check(CSOUND *csound, DaGLMath_Quat__Mat4 *p)
{
    int32_t result = OK;
    result |= check_Quat(csound, p->out, output);
    result |= check_Mat4(csound, p->m, arg1);
    return result;
}

static int32_t check(CSOUND *csound, DaGLMath_Num__Mat4 *p)
{
    int32_t result = OK;
    result |= check_Mat4(csound, p->m, arg1);
    return result;
}

static int32_t check(CSOUND *csound, DaGLMath_Vec3__Mat4_Vec3 *p)
{
    int32_t result = OK;
    result |= check_Vec3(csound, p->out, output);
    result |= check_Mat4(csound, p->m, arg1);
    result |= check_Vec3(csound, p->v, arg2);
    return result;
}

static int32_t check(CSOUND *csound, DaGLMath_void__Mat4 *p)
{
    int32_t result = OK;
    result |= check_Mat4(csound, p->m, arg1);
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

int32_t da_gl_math_mat4_multiply_init(CSOUND *csound, DaGLMath_Mat4_multiply *p)
{
    return check(csound, p);
}

int32_t da_gl_math_mat4_multiply(CSOUND *, DaGLMath_Mat4_multiply *p)
{
    const auto m1 = make_mat4(p->m1->data);
    const auto m2 = make_mat4(p->m2->data);
    const auto out = m1 * m2;

    memcpy(p->out->data, value_ptr(out), sizeof_mat4);
    return OK;
}

int32_t da_gl_math_mat4_multiplyVec3_init(CSOUND *csound, DaGLMath_Mat4_multiplyVec3 *p)
{
    return check(csound, p);
}

int32_t da_gl_math_mat4_multiplyVec3(CSOUND *, DaGLMath_Mat4_multiplyVec3 *p)
{
    const auto m = make_mat4(p->m->data);
    const auto v = dvec4(make_vec3(p->v->data), 1.0);
    const auto out = m * v;

    memcpy(p->out->data, value_ptr(out), sizeof_vec3);
    return OK;
}

int32_t da_gl_math_mat4_quaternion_init(CSOUND *csound, DaGLMath_Mat4_quaternion *p)
{
    return check(csound, p);
}

int32_t da_gl_math_mat4_quaternion(CSOUND *, DaGLMath_Mat4_quaternion *p)
{
    const auto m = make_mat4(p->m->data);
    const auto out = quat_cast(m);

    memcpy(p->out->data, value_ptr(out), sizeof_quat);
    return OK;
}

int32_t da_gl_math_mat4_transposeInPlace_init(CSOUND *csound, DaGLMath_Mat4_transposeInPlace *p)
{
    return check(csound, p);
}

int32_t da_gl_math_mat4_transposeInPlace(CSOUND *, DaGLMath_Mat4_transposeInPlace *p)
{
    auto m = make_mat4(p->m->data);
    m = transpose(m);

    memcpy(p->m->data, value_ptr(m), sizeof_mat4);
    return OK;
}

int32_t da_gl_math_mat4_transpose_init(CSOUND *csound, DaGLMath_Mat4_transpose *p)
{
    return check(csound, p);
}

int32_t da_gl_math_mat4_transpose(CSOUND *, DaGLMath_Mat4_transpose *p)
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

int32_t da_gl_math_mat4_determinant_init(CSOUND *csound, DaGLMath_Mat4_determinant *p)
{
    return check(csound, p);
}

int32_t da_gl_math_mat4_determinant(CSOUND *, DaGLMath_Mat4_determinant *p)
{
    const auto m = make_mat4(p->m->data);
    *p->out = determinant(m);
    return OK;
}

int32_t da_gl_math_mat4_invert_init(CSOUND *csound, DaGLMath_Mat4_invert *p)
{
    return check(csound, p);
}

int32_t da_gl_math_mat4_invert(CSOUND *, DaGLMath_Mat4_invert *p)
{
    const auto m = make_mat4(p->m->data);
    const auto out = inverse(m);

    memcpy(p->out->data, value_ptr(out), sizeof_mat4);
    return OK;
}
