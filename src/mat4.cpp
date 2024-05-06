#include "mat4.h"

#include <glm/ext/matrix_double4x4.hpp>
#include <glm/gtc/type_ptr.hpp>

using namespace glm;

const size_t sizeof_mat4 = dmat4::length() * dmat4::col_type::length() * sizeof(dmat4::value_type);
const size_t sizeof_vec3 = dvec3::length() * sizeof(dvec3::value_type);

const dmat4 mat4_identity(1.0);
const dmat4 mat4_zero(0.0);

int32_t glm_mat4_copy(CSOUND *, GLM_Mat4_x2 *p)
{
    memcpy(p->dest->data, p->m->data, sizeof_mat4);
    return OK;
}

int32_t glm_mat4_identity(CSOUND *, GLM_Mat4 *p)
{
    memcpy(p->dest->data, value_ptr(mat4_identity), sizeof_mat4);
    return OK;
}

int32_t glm_mat4_zero(CSOUND *, GLM_Mat4 *p)
{
    memcpy(p->dest->data, value_ptr(mat4_zero), sizeof_mat4);
    return OK;
}

int32_t glm_mat4_mul(CSOUND *, GLM_Mat4_x3 *p)
{
    const auto m1 = make_mat4(p->m1->data);
    const auto m2 = make_mat4(p->m2->data);
    const auto dest = m1 * m2;

    memcpy(p->dest->data, value_ptr(dest), sizeof_mat4);
    return OK;
}

int32_t glm_mat4_mulv3(CSOUND *, GLM_Mat4_Vec3_x2 *p)
{
    const auto m = make_mat4(p->m->data);
    const auto v = dvec4(make_vec3(p->v->data), 1.0);
    const auto dest = m * v;

    memcpy(p->dest->data, value_ptr(dest), sizeof_vec3);
    return OK;
}
