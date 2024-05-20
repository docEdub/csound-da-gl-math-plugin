#pragma once

#include "common_types.h"

#include <glm/mat4x4.hpp>
#include <glm/vec3.hpp>

#include <glm/gtc/quaternion.hpp>
#include <glm/gtc/type_ptr.hpp>

#define GLM_ENABLE_EXPERIMENTAL

using namespace glm;

namespace Constants
{
    const char *const output = "output";
    const char *const arg1 = "argument 1";
    const char *const arg2 = "argument 2";
    const char *const arg3 = "argument 3";
}

const size_t sizeof_Mat4 = dmat4::length() * dmat4::col_type::length() * sizeof(dmat4::value_type);
const size_t sizeof_Quat = dquat::length() * sizeof(dquat::value_type);
const size_t sizeof_Vec3 = dvec3::length() * sizeof(dvec3::value_type);

void allocIfNull_Mat4(CSOUND *csound, ARRAYDAT *array);
void allocIfNull_Quat(CSOUND *csound, ARRAYDAT *array);
void allocIfNull_Vec3(CSOUND *csound, ARRAYDAT *array);

int32_t check_Mat4(CSOUND *csound, ARRAYDAT *array, const char *position);
int32_t check_Quat(CSOUND *csound, ARRAYDAT *array, const char *position);
int32_t check_Vec3(CSOUND *csound, ARRAYDAT *array, const char *position);
