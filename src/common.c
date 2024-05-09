#include "common.h"

int32_t check_Mat4(CSOUND *csound, ARRAYDAT *array)
{
    int32_t result = OK;
    if (array->dimensions != 1) {
        result |= csound->InitError(csound, "%s", Str("Mat4: output must be 1-dimensional"));
    }
    if (array->dimensions > 0 && array->sizes[0] != 16) {
        result |= csound->InitError(csound, "%s", Str("Mat4: output must have 16 elements"));
    }
    return result;
}

int32_t check_Quat(CSOUND *csound, ARRAYDAT *array)
{
    int32_t result = OK;
    if (array->dimensions != 1) {
        result |= csound->InitError(csound, "%s", Str("Quat: output must be 1-dimensional"));
    }
    if (array->dimensions > 0 && array->sizes[0] != 4) {
        result |= csound->InitError(csound, "%s", Str("Quat: output must have 4 elements"));
    }
    return result;
}

int32_t check_Vec3(CSOUND *csound, ARRAYDAT *array)
{
    int32_t result = OK;
    if (array->dimensions != 1) {
        result |= csound->InitError(csound, "%s", Str("Vec3: output must be 1-dimensional"));
    }
    if (array->dimensions > 0 && array->sizes[0] != 3) {
        result |= csound->InitError(csound, "%s", Str("Vec3: output must have 3 elements"));
    }
    return result;
}
