#include "mat4.h"

#include "common.hpp"

#include <glm/gtx/euler_angles.hpp>

const dmat4 mat4_identity(1.0);
const dmat4 mat4_zero(0.0);

static int32_t check(CSOUND *csound, DaGLMath_Mat4 *p)
{
    return check_Mat4(csound, p->out, Constants::output);
}

static int32_t check(CSOUND *csound, DaGLMath_Mat4__Mat4 *p)
{
    int32_t result = OK;
    result |= check_Mat4(csound, p->out, Constants::output);
    result |= check_Mat4(csound, p->m, Constants::arg1);
    return result;
}

static int32_t check(CSOUND *csound, DaGLMath_Mat4__Mat4_Mat4 *p)
{
    int32_t result = OK;
    result |= check_Mat4(csound, p->out, Constants::output);
    result |= check_Mat4(csound, p->m1, Constants::arg1);
    result |= check_Mat4(csound, p->m2, Constants::arg2);
    return result;
}

static int32_t check(CSOUND *csound, DaGLMath_Mat4__Mat4_Num *p)
{
    int32_t result = OK;
    result |= check_Mat4(csound, p->out, Constants::output);
    result |= check_Mat4(csound, p->m, Constants::arg1);
    return result;
}

static int32_t check(CSOUND *csound, DaGLMath_Mat4__Vec3 *p)
{
    int32_t result = OK;
    result |= check_Mat4(csound, p->out, Constants::output);
    result |= check_Vec3(csound, p->v, Constants::arg1);
    return result;
}

static int32_t check(CSOUND *csound, DaGLMath_Nil__Mat4 *p)
{
    int32_t result = OK;
    result |= check_Mat4(csound, p->m, Constants::arg1);
    return result;
}

static int32_t check(CSOUND *csound, DaGLMath_Num__Mat4 *p)
{
    int32_t result = OK;
    result |= check_Mat4(csound, p->m, Constants::arg1);
    return result;
}

static int32_t check(CSOUND *csound, DaGLMath_Quat__Mat4 *p)
{
    int32_t result = OK;
    result |= check_Quat(csound, p->out, Constants::output);
    result |= check_Mat4(csound, p->m, Constants::arg1);
    return result;
}

static int32_t check(CSOUND *csound, DaGLMath_Vec3__Mat4 *p)
{
    int32_t result = OK;
    result |= check_Vec3(csound, p->out, Constants::output);
    result |= check_Mat4(csound, p->m, Constants::arg1);
    return result;
}

static int32_t check(CSOUND *csound, DaGLMath_Vec3__Vec3_Mat4 *p)
{
    int32_t result = OK;
    result |= check_Vec3(csound, p->out, Constants::output);
    result |= check_Vec3(csound, p->v, Constants::arg1);
    result |= check_Mat4(csound, p->m, Constants::arg2);
    return result;
}

int32_t da_gl_math_mat4_copy_init(CSOUND *csound, DaGLMath_Mat4_copy *p)
{
    allocIfNull_Mat4(csound, p->out);
    return check(csound, p);
}

int32_t da_gl_math_mat4_copy(CSOUND *, DaGLMath_Mat4_copy *p)
{
    memcpy(p->out->data, p->m->data, sizeof_Mat4);
    return OK;
}

int32_t da_gl_math_mat4_identity_init(CSOUND *csound, DaGLMath_Mat4_identity *p)
{
    allocIfNull_Mat4(csound, p->out);
    return check(csound, p);
}

int32_t da_gl_math_mat4_identity(CSOUND *, DaGLMath_Mat4_identity *p)
{
    memcpy(p->out->data, value_ptr(mat4_identity), sizeof_Mat4);
    return OK;
}

int32_t da_gl_math_mat4_zero_init(CSOUND *csound, DaGLMath_Mat4_zero *p)
{
    allocIfNull_Mat4(csound, p->out);
    return check(csound, p);
}

int32_t da_gl_math_mat4_zero(CSOUND *, DaGLMath_Mat4_zero *p)
{
    memcpy(p->out->data, value_ptr(mat4_zero), sizeof_Mat4);
    return OK;
}

int32_t da_gl_math_mat4_multiply_init(CSOUND *csound, DaGLMath_Mat4_multiply *p)
{
    allocIfNull_Mat4(csound, p->out);
    return check(csound, p);
}

int32_t da_gl_math_mat4_multiply(CSOUND *, DaGLMath_Mat4_multiply *p)
{
    const auto m1 = make_mat4(p->m1->data);
    const auto m2 = make_mat4(p->m2->data);
    const auto out = m1 * m2;

    memcpy(p->out->data, value_ptr(out), sizeof_Mat4);
    return OK;
}

int32_t da_gl_math_mat4_multiplyVec3_init(CSOUND *csound, DaGLMath_Mat4_multiplyVec3 *p)
{
    allocIfNull_Vec3(csound, p->out);
    return check(csound, p);
}

int32_t da_gl_math_mat4_multiplyVec3(CSOUND *, DaGLMath_Mat4_multiplyVec3 *p)
{
    const auto v = dvec4(make_vec3(p->v->data), 1.0);
    const auto m = make_mat4(p->m->data);
    const auto out = m * v;

    memcpy(p->out->data, value_ptr(out), sizeof_Vec3);
    return OK;
}

int32_t da_gl_math_mat4_quaternion_init(CSOUND *csound, DaGLMath_Mat4_quaternion *p)
{
    allocIfNull_Quat(csound, p->out);
    return check(csound, p);
}

int32_t da_gl_math_mat4_quaternion(CSOUND *, DaGLMath_Mat4_quaternion *p)
{
    const auto m = make_mat4(p->m->data);
    const auto out = quat_cast(m);

    memcpy(p->out->data, value_ptr(out), sizeof_Quat);
    return OK;
}

int32_t da_gl_math_mat4_transpose_init(CSOUND *csound, DaGLMath_Mat4_transpose *p)
{
    allocIfNull_Mat4(csound, p->out);
    return check(csound, p);
}

int32_t da_gl_math_mat4_transpose(CSOUND *, DaGLMath_Mat4_transpose *p)
{
    const auto m = make_mat4(p->m->data);
    const auto out = transpose(m);

    memcpy(p->out->data, value_ptr(out), sizeof_Mat4);
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

    memcpy(p->m->data, value_ptr(m), sizeof_Mat4);
    return OK;
}

int32_t da_gl_math_mat4_scale_init(CSOUND *csound, DaGLMath_Mat4_scale *p)
{
    allocIfNull_Mat4(csound, p->out);
    return check(csound, p);
}

int32_t da_gl_math_mat4_scale(CSOUND *, DaGLMath_Mat4_scale *p)
{
    const auto m = make_mat4(p->m->data);
    const auto out = m * *p->val;

    memcpy(p->out->data, value_ptr(out), sizeof_Mat4);
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
    allocIfNull_Mat4(csound, p->out);
    return check(csound, p);
}

int32_t da_gl_math_mat4_invert(CSOUND *, DaGLMath_Mat4_invert *p)
{
    const auto m = make_mat4(p->m->data);
    const auto out = inverse(m);

    memcpy(p->out->data, value_ptr(out), sizeof_Mat4);
    return OK;
}

int32_t da_gl_math_mat4_fromEulerAnglesXYZ_init(CSOUND *csound, DaGLMath_Mat4_fromEulerAnglesXYZ *p)
{
    allocIfNull_Mat4(csound, p->out);
    return check(csound, p);
}

int32_t da_gl_math_mat4_fromEulerAnglesXYZ(CSOUND *, DaGLMath_Mat4_fromEulerAnglesXYZ *p)
{
    const auto v = make_vec3(p->v->data);
    const auto out = eulerAngleXYZ(v.x, v.y, v.z);

    memcpy(p->out->data, value_ptr(out), sizeof_Mat4);
    return OK;
}

int32_t da_gl_math_mat4_toEulerAnglesXYZ_init(CSOUND *csound, DaGLMath_Mat4_toEulerAnglesXYZ *p)
{
    allocIfNull_Vec3(csound, p->out);
    return check(csound, p);
}

int32_t da_gl_math_mat4_toEulerAnglesXYZ(CSOUND *, DaGLMath_Mat4_toEulerAnglesXYZ *p)
{
    const auto m = make_mat4(p->m->data);
    auto out = dvec3();
    extractEulerAngleXYZ(m, out.x, out.y, out.z);

    memcpy(p->out->data, value_ptr(out), sizeof_Vec3);
    return OK;
}
