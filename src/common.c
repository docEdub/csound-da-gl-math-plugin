#include "common.h"

int32_t check_Mat4(CSOUND *csound, ARRAYDAT *array, const char *position)
{
    int32_t result = OK;
    if (array->dimensions != 1) {
        result |= csound->InitError(csound, "Mat4: %s must have 1 dimension", position);
    }
    if (array->dimensions > 0 && array->sizes[0] != 16) {
        result |= csound->InitError(csound, "Mat4: %s must have 16 elements", position);
    }
    return result;
}

int32_t check_Quat(CSOUND *csound, ARRAYDAT *array, const char *position)
{
    int32_t result = OK;
    if (array->dimensions != 1) {
        result |= csound->InitError(csound, "Quat: %s must have 1 dimensions", position);
    }
    if (array->dimensions > 0 && array->sizes[0] != 4) {
        result |= csound->InitError(csound, "Quat: %s must have 4 elements", position);
    }
    return result;
}

int32_t check_Vec3(CSOUND *csound, ARRAYDAT *array, const char *position)
{
    int32_t result = OK;
    if (array->dimensions != 1) {
        result |= csound->InitError(csound, "Vec3: %s must have 1 dimension", position);
    }
    if (array->dimensions > 0 && array->sizes[0] != 3) {
        result |= csound->InitError(csound, "Vec3: %s must have 3 elements", position);
    }
    return result;
}
