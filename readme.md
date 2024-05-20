
## Reference docs
CGLM docs: https://cglm.readthedocs.io/en/latest/
Good GLM docs: http://www.c-jump.com/bcc/common/Talk3/Math/GLM/GLM.html.

## Opcode categorization
Opcodes are in the category matching the first rule that applies, in this order:
1. Any opcode with a matrix in its signature belongs in the `mat4` category.
1. Any opcode with a quaternion in its signature belongs in the `quat` category.
1. Any opcode with a vector in its signature belongs in the `vec3` category.

### Examples:
- `vec3 DaGLMath_mat4_multiplyVec3(mat4 m, vec3 v)` is in the `mat4` category because it matches the first rule.
    - The `vec3` return value and argument, and the `Vec3` in the opcode name don't matter because the first rule is matched and we never get to the rule applying to a vector.
- `quat DaGLMath_mat4_quaternion(mat4 m)` is also in the `mat4` category because it matches the first rule.
    - The `quat` return value and the `quaternion` in the opcode name don't matter because the first rule is matched and we never get to the rule applying to a quaternion.
