#include "common.hpp"

static void allocArrayIfNull(CSOUND *csound, ARRAYDAT *array, size_t size)
{
    if (array->data ) {
        return;
    }

    CS_VARIABLE* var = array->arrayType->createVariable(csound, NULL);

    array->allocated = var->memBlockSize * size;
    array->arrayMemberSize = var->memBlockSize;
    array->data = (MYFLT *)csound->Calloc(csound, array->allocated);
    array->dimensions = 1;
    array->sizes = (int *)csound->Malloc(csound, sizeof(int32_t));
    array->sizes[0] = size;

    char *mem = (char *)array->data;
    for (size_t i = 0; i < size; i++) {
        var->initializeVariableMemory(csound, var, (MYFLT *)(mem + i * var->memBlockSize));
    }
}

void allocIfNull_Mat4(CSOUND *csound, ARRAYDAT *array)
{
    allocArrayIfNull(csound, array, 16);
}

void allocIfNull_Quat(CSOUND *csound, ARRAYDAT *array)
{
    allocArrayIfNull(csound, array, 4);
}

void allocIfNull_Vec3(CSOUND *csound, ARRAYDAT *array)
{
    allocArrayIfNull(csound, array, 3);
}

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
