
#include "test-begin.orc"

#include "shared.orc"


$TEST_FILE(test_mat4)


$TEST(DaGLMath_Mat4_copy)
    k_actual[] init 16

    k_actual = DaGLMath_Mat4_copy(gk_mat4_a)
    $ASSERT_EQUAL_kArray(gk_mat4_a ' k_actual)

    k_actual = DaGLMath_Mat4_copy(gk_mat4_b)
    $ASSERT_EQUAL_kArray(gk_mat4_b ' k_actual)
$END_TEST


$TEST_EXPECTED_INIT_FAIL(DaGLMath_Mat4_copy_ShouldFailWhenGivenWrongOutputArrayDimensions)
    $EXPECT_MESSAGE_IN_CAPTURED_OUTPUT(gS_Mat4_WrongOutputArrayDimensionsMessage)

    k_actual[] init 16, 2

    k_actual = DaGLMath_Mat4_copy(gk_mat4_a)
$END_TEST_EXPECTED_INIT_FAIL


$TEST_EXPECTED_INIT_FAIL(DaGLMath_Mat4_copy_ShouldFailWhenGivenWrongOutputArraySize)
    $EXPECT_MESSAGE_IN_CAPTURED_OUTPUT(gS_Mat4_WrongOutputArraySizeMessage)

    k_actual[] init 17

    k_actual = DaGLMath_Mat4_copy(gk_mat4_a)
$END_TEST_EXPECTED_INIT_FAIL


$TEST_EXPECTED_INIT_FAIL(DaGLMath_Mat4_copy_ShouldFailWhenGivenWrongOutputArrayDimensionsAndSize)
    $EXPECT_MESSAGE_IN_CAPTURED_OUTPUT(gS_Mat4_WrongOutputArrayDimensionsMessage)
    $EXPECT_MESSAGE_IN_CAPTURED_OUTPUT(gS_Mat4_WrongOutputArraySizeMessage)

    k_actual[] init 17, 2

    k_actual = DaGLMath_Mat4_copy(gk_mat4_a)
$END_TEST_EXPECTED_INIT_FAIL


$TEST_EXPECTED_INIT_FAIL(DaGLMath_Mat4_copy_ShouldFailWhenGivenWrongArgument1ArrayDimensions)
    $EXPECT_MESSAGE_IN_CAPTURED_OUTPUT(gS_Mat4_WrongArgument1ArrayDimensionsMessage)

    k_actual[] init 16
    k_arg1[] init 16, 2

    k_actual = DaGLMath_Mat4_copy(k_arg1)
$END_TEST_EXPECTED_INIT_FAIL


$TEST_EXPECTED_INIT_FAIL(DaGLMath_Mat4_copy_ShouldFailWhenGivenWrongArgument1ArraySize)
    $EXPECT_MESSAGE_IN_CAPTURED_OUTPUT(gS_Mat4_WrongArgument1ArraySizeMessage)

    k_actual[] init 16
    k_arg1[] init 17

    k_actual = DaGLMath_Mat4_copy(k_arg1)
$END_TEST_EXPECTED_INIT_FAIL


$TEST_EXPECTED_INIT_FAIL(DaGLMath_Mat4_copy_ShouldFailWhenGivenWrongArgument1ArrayDimensionsAndSize)
    $EXPECT_MESSAGE_IN_CAPTURED_OUTPUT(gS_Mat4_WrongArgument1ArrayDimensionsMessage)
    $EXPECT_MESSAGE_IN_CAPTURED_OUTPUT(gS_Mat4_WrongArgument1ArraySizeMessage)

    k_actual[] init 16
    k_arg1[] init 17, 2

    k_actual = DaGLMath_Mat4_copy(k_arg1)
$END_TEST_EXPECTED_INIT_FAIL


$TEST(DaGLMath_Mat4_identity)
    k_actual[] init 16

    k_actual = DaGLMath_Mat4_identity()

    $ASSERT_EQUAL_kArray(gk_mat4_identity ' k_actual)
$END_TEST


$TEST_EXPECTED_INIT_FAIL(DaGLMath_Mat4_identity_ShouldFailWhenGivenWrongOutputArrayDimensions)
    $EXPECT_MESSAGE_IN_CAPTURED_OUTPUT(gS_Mat4_WrongOutputArrayDimensionsMessage)

    k_actual[] init 16, 2

    k_actual = DaGLMath_Mat4_identity()
$END_TEST_EXPECTED_INIT_FAIL


$TEST_EXPECTED_INIT_FAIL(DaGLMath_Mat4_identity_ShouldFailWhenGivenWrongOutputArraySize)
    $EXPECT_MESSAGE_IN_CAPTURED_OUTPUT(gS_Mat4_WrongOutputArraySizeMessage)

    k_actual[] init 17

    k_actual = DaGLMath_Mat4_identity()
$END_TEST_EXPECTED_INIT_FAIL


$TEST_EXPECTED_INIT_FAIL(DaGLMath_Mat4_identity_ShouldFailWhenGivenWrongOutputArrayDimensionsAndSize)
    $EXPECT_MESSAGE_IN_CAPTURED_OUTPUT(gS_Mat4_WrongOutputArrayDimensionsMessage)
    $EXPECT_MESSAGE_IN_CAPTURED_OUTPUT(gS_Mat4_WrongOutputArraySizeMessage)

    k_actual[] init 17, 2

    k_actual = DaGLMath_Mat4_identity()
$END_TEST_EXPECTED_INIT_FAIL


$TEST(DaGLMath_Mat4_zero)
    k_actual[] init 16

    k_actual = DaGLMath_Mat4_zero()

    $ASSERT_EQUAL_kArray(gk_mat4_zero ' k_actual)
$END_TEST


$TEST_EXPECTED_INIT_FAIL(DaGLMath_Mat4_zero_ShouldFailWhenGivenWrongOutputArrayDimensions)
    $EXPECT_MESSAGE_IN_CAPTURED_OUTPUT(gS_Mat4_WrongOutputArrayDimensionsMessage)

    k_actual[] init 16, 2

    k_actual = DaGLMath_Mat4_zero()
$END_TEST_EXPECTED_INIT_FAIL


$TEST_EXPECTED_INIT_FAIL(DaGLMath_Mat4_zero_ShouldFailWhenGivenWrongOutputArraySize)
    $EXPECT_MESSAGE_IN_CAPTURED_OUTPUT(gS_Mat4_WrongOutputArraySizeMessage)

    k_actual[] init 17

    k_actual = DaGLMath_Mat4_zero()
$END_TEST_EXPECTED_INIT_FAIL


$TEST_EXPECTED_INIT_FAIL(DaGLMath_Mat4_zero_ShouldFailWhenGivenWrongOutputArrayDimensionsAndSize)
    $EXPECT_MESSAGE_IN_CAPTURED_OUTPUT(gS_Mat4_WrongOutputArrayDimensionsMessage)
    $EXPECT_MESSAGE_IN_CAPTURED_OUTPUT(gS_Mat4_WrongOutputArraySizeMessage)

    k_actual[] init 17, 2

    k_actual = DaGLMath_Mat4_zero()
$END_TEST_EXPECTED_INIT_FAIL


$TEST(DaGLMath_Mat4_mul)
    k_actual_axb[] init 16
    k_actual_bxa[] init 16

    k_actual_axb = DaGLMath_Mat4_mul(gk_mat4_a, gk_mat4_b)
    k_actual_bxa = DaGLMath_Mat4_mul(gk_mat4_b, gk_mat4_a)

    $ASSERT_EQUAL_kArray(gk_mat4_axb ' k_actual_axb)
    $ASSERT_EQUAL_kArray(gk_mat4_bxa ' k_actual_bxa)
$END_TEST


$TEST_EXPECTED_INIT_FAIL(DaGLMath_Mat4_mul_ShouldFailWhenGivenWrongOutputArrayDimensions)
    $EXPECT_MESSAGE_IN_CAPTURED_OUTPUT(gS_Mat4_WrongOutputArrayDimensionsMessage)

    k_actual[] init 16, 2

    k_actual = DaGLMath_Mat4_mul(gk_mat4_a, gk_mat4_b)
$END_TEST_EXPECTED_INIT_FAIL


$TEST_EXPECTED_INIT_FAIL(DaGLMath_Mat4_mul_ShouldFailWhenGivenWrongOutputArraySize)
    $EXPECT_MESSAGE_IN_CAPTURED_OUTPUT(gS_Mat4_WrongOutputArraySizeMessage)

    k_actual[] init 17

    k_actual = DaGLMath_Mat4_mul(gk_mat4_a, gk_mat4_b)
$END_TEST_EXPECTED_INIT_FAIL


$TEST_EXPECTED_INIT_FAIL(DaGLMath_Mat4_mul_ShouldFailWhenGivenWrongOutputArrayDimensionsAndSize)
    $EXPECT_MESSAGE_IN_CAPTURED_OUTPUT(gS_Mat4_WrongOutputArrayDimensionsMessage)
    $EXPECT_MESSAGE_IN_CAPTURED_OUTPUT(gS_Mat4_WrongOutputArraySizeMessage)

    k_actual[] init 17, 2

    k_actual = DaGLMath_Mat4_mul(gk_mat4_a, gk_mat4_b)
$END_TEST_EXPECTED_INIT_FAIL


$TEST_EXPECTED_INIT_FAIL(DaGLMath_Mat4_mul_ShouldFailWhenGivenWrongArgument1ArrayDimensions)
    $EXPECT_MESSAGE_IN_CAPTURED_OUTPUT(gS_Mat4_WrongArgument1ArrayDimensionsMessage)

    k_actual[] init 16
    k_arg1[] init 16, 2
    k_arg2[] init 16

    k_actual = DaGLMath_Mat4_mul(k_arg1, k_arg2)
$END_TEST_EXPECTED_INIT_FAIL


$TEST_EXPECTED_INIT_FAIL(DaGLMath_Mat4_mul_ShouldFailWhenGivenWrongArgument1ArraySize)
    $EXPECT_MESSAGE_IN_CAPTURED_OUTPUT(gS_Mat4_WrongArgument1ArraySizeMessage)

    k_actual[] init 16
    k_arg1[] init 17
    k_arg2[] init 16

    k_actual = DaGLMath_Mat4_mul(k_arg1, k_arg2)
$END_TEST_EXPECTED_INIT_FAIL


$TEST_EXPECTED_INIT_FAIL(DaGLMath_Mat4_mul_ShouldFailWhenGivenWrongArgument1ArrayDimensionsAndSize)
    $EXPECT_MESSAGE_IN_CAPTURED_OUTPUT(gS_Mat4_WrongArgument1ArrayDimensionsMessage)
    $EXPECT_MESSAGE_IN_CAPTURED_OUTPUT(gS_Mat4_WrongArgument1ArraySizeMessage)

    k_actual[] init 16
    k_arg1[] init 17, 2
    k_arg2[] init 16

    k_actual = DaGLMath_Mat4_mul(k_arg1, k_arg2)
$END_TEST_EXPECTED_INIT_FAIL


$TEST_EXPECTED_INIT_FAIL(DaGLMath_Mat4_mul_ShouldFailWhenGivenWrongArgument2ArrayDimensions)
    $EXPECT_MESSAGE_IN_CAPTURED_OUTPUT(gS_Mat4_WrongArgument2ArrayDimensionsMessage)

    k_actual[] init 16
    k_arg1[] init 16
    k_arg2[] init 16, 2

    k_actual = DaGLMath_Mat4_mul(k_arg1, k_arg2)
$END_TEST_EXPECTED_INIT_FAIL


$TEST_EXPECTED_INIT_FAIL(DaGLMath_Mat4_mul_ShouldFailWhenGivenWrongArgument2ArraySize)
    $EXPECT_MESSAGE_IN_CAPTURED_OUTPUT(gS_Mat4_WrongArgument2ArraySizeMessage)

    k_actual[] init 16
    k_arg1[] init 16
    k_arg2[] init 17

    k_actual = DaGLMath_Mat4_mul(k_arg1, k_arg2)
$END_TEST_EXPECTED_INIT_FAIL


$TEST_EXPECTED_INIT_FAIL(DaGLMath_Mat4_mul_ShouldFailWhenGivenWrongArgument2ArrayDimensionsAndSize)
    $EXPECT_MESSAGE_IN_CAPTURED_OUTPUT(gS_Mat4_WrongArgument2ArrayDimensionsMessage)
    $EXPECT_MESSAGE_IN_CAPTURED_OUTPUT(gS_Mat4_WrongArgument2ArraySizeMessage)

    k_actual[] init 16
    k_arg1[] init 16
    k_arg2[] init 17, 2

    k_actual = DaGLMath_Mat4_mul(k_arg1, k_arg2)
$END_TEST_EXPECTED_INIT_FAIL


$TEST(DaGLMath_Mat4_mulv3)
    k_expected[] fillarray 1.46, 1.52, 1.58
    k_actual[] init 3

    k_actual = DaGLMath_Mat4_mulv3(gk_mat4_a, gk_vec3_a)

    $ASSERT_EQUAL_kArray(k_expected ' k_actual)
$END_TEST


$TEST_EXPECTED_INIT_FAIL(DaGLMath_Mat4_mulv3_ShouldFailWhenGivenWrongOutputArrayDimensions)
    $EXPECT_MESSAGE_IN_CAPTURED_OUTPUT(gS_Vec3_WrongOutputArrayDimensionsMessage)

    k_actual[] init 3, 2

    k_actual = DaGLMath_Mat4_mulv3(gk_mat4_a, gk_vec3_a)
$END_TEST_EXPECTED_INIT_FAIL


$TEST_EXPECTED_INIT_FAIL(DaGLMath_Mat4_mulv3_ShouldFailWhenGivenWrongOutputArraySize)
    $EXPECT_MESSAGE_IN_CAPTURED_OUTPUT(gS_Vec3_WrongOutputArraySizeMessage)

    k_actual[] init 4

    k_actual = DaGLMath_Mat4_mulv3(gk_mat4_a, gk_vec3_a)
$END_TEST_EXPECTED_INIT_FAIL


$TEST_EXPECTED_INIT_FAIL(DaGLMath_Mat4_mulv3_ShouldFailWhenGivenWrongOutputArrayDimensionsAndSize)
    $EXPECT_MESSAGE_IN_CAPTURED_OUTPUT(gS_Vec3_WrongOutputArrayDimensionsMessage)
    $EXPECT_MESSAGE_IN_CAPTURED_OUTPUT(gS_Vec3_WrongOutputArraySizeMessage)

    k_actual[] init 4, 2

    k_actual = DaGLMath_Mat4_mulv3(gk_mat4_a, gk_vec3_a)
$END_TEST_EXPECTED_INIT_FAIL


$TEST_EXPECTED_INIT_FAIL(DaGLMath_Mat4_mulv3_ShouldFailWhenGivenWrongArgument1ArrayDimensions)
    $EXPECT_MESSAGE_IN_CAPTURED_OUTPUT(gS_Mat4_WrongArgument1ArrayDimensionsMessage)

    k_actual[] init 16
    k_arg1[] init 16, 2
    k_arg2[] init 3

    k_actual = DaGLMath_Mat4_mulv3(k_arg1, k_arg2)
$END_TEST_EXPECTED_INIT_FAIL


$TEST_EXPECTED_INIT_FAIL(DaGLMath_Mat4_mulv3_ShouldFailWhenGivenWrongArgument1ArraySize)
    $EXPECT_MESSAGE_IN_CAPTURED_OUTPUT(gS_Mat4_WrongArgument1ArraySizeMessage)

    k_actual[] init 16
    k_arg1[] init 17
    k_arg2[] init 3

    k_actual = DaGLMath_Mat4_mulv3(k_arg1, k_arg2)
$END_TEST_EXPECTED_INIT_FAIL


$TEST_EXPECTED_INIT_FAIL(DaGLMath_Mat4_mulv3_ShouldFailWhenGivenWrongArgument1ArrayDimensionsAndSize)
    $EXPECT_MESSAGE_IN_CAPTURED_OUTPUT(gS_Mat4_WrongArgument1ArrayDimensionsMessage)
    $EXPECT_MESSAGE_IN_CAPTURED_OUTPUT(gS_Mat4_WrongArgument1ArraySizeMessage)

    k_actual[] init 16
    k_arg1[] init 17, 2
    k_arg2[] init 3

    k_actual = DaGLMath_Mat4_mulv3(k_arg1, k_arg2)
$END_TEST_EXPECTED_INIT_FAIL


$TEST_EXPECTED_INIT_FAIL(DaGLMath_Mat4_mul_ShouldFailWhenGivenWrongArgument2ArrayDimensions)
    $EXPECT_MESSAGE_IN_CAPTURED_OUTPUT(gS_Vec3_WrongArgument2ArrayDimensionsMessage)

    k_actual[] init 16
    k_arg1[] init 16
    k_arg2[] init 3, 2

    k_actual = DaGLMath_Mat4_mulv3(k_arg1, k_arg2)
$END_TEST_EXPECTED_INIT_FAIL


$TEST_EXPECTED_INIT_FAIL(DaGLMath_Mat4_mulv3_ShouldFailWhenGivenWrongArgument2ArraySize)
    $EXPECT_MESSAGE_IN_CAPTURED_OUTPUT(gS_Vec3_WrongArgument2ArraySizeMessage)

    k_actual[] init 16
    k_arg1[] init 16
    k_arg2[] init 4

    k_actual = DaGLMath_Mat4_mulv3(k_arg1, k_arg2)
$END_TEST_EXPECTED_INIT_FAIL


$TEST_EXPECTED_INIT_FAIL(DaGLMath_Mat4_mulv3_ShouldFailWhenGivenWrongArgument2ArrayDimensionsAndSize)
    $EXPECT_MESSAGE_IN_CAPTURED_OUTPUT(gS_Vec3_WrongArgument2ArrayDimensionsMessage)
    $EXPECT_MESSAGE_IN_CAPTURED_OUTPUT(gS_Vec3_WrongArgument2ArraySizeMessage)

    k_actual[] init 16
    k_arg1[] init 16
    k_arg2[] init 4, 2

    k_actual = DaGLMath_Mat4_mulv3(k_arg1, k_arg2)
$END_TEST_EXPECTED_INIT_FAIL


$TEST(DaGLMath_Mat4_quat)
    k_expected[] fillarray -0.163232, 0.326464, -0.163232, 1.378405
    k_actual[] init 4

    k_actual = DaGLMath_Mat4_quat(gk_mat4_a)

    $ASSERT_EQUAL_kArray(k_expected ' k_actual)
$END_TEST


$TEST_EXPECTED_INIT_FAIL(DaGLMath_Mat4_quat_ShouldFailWhenGivenWrongOutputArrayDimensions)
    $EXPECT_MESSAGE_IN_CAPTURED_OUTPUT(gS_Quat_WrongOutputArrayDimensionsMessage)

    k_actual[] init 4, 2

    k_actual = DaGLMath_Mat4_quat(gk_mat4_a)
$END_TEST_EXPECTED_INIT_FAIL


$TEST_EXPECTED_INIT_FAIL(DaGLMath_Mat4_quat_ShouldFailWhenGivenWrongOutputArraySize)
    $EXPECT_MESSAGE_IN_CAPTURED_OUTPUT(gS_Quat_WrongOutputArraySizeMessage)

    k_actual[] init 5

    k_actual = DaGLMath_Mat4_quat(gk_mat4_a)
$END_TEST_EXPECTED_INIT_FAIL


$TEST_EXPECTED_INIT_FAIL(DaGLMath_Mat4_mulv3_ShouldFailWhenGivenWrongOutputArrayDimensionsAndSize)
    $EXPECT_MESSAGE_IN_CAPTURED_OUTPUT(gS_Quat_WrongOutputArrayDimensionsMessage)
    $EXPECT_MESSAGE_IN_CAPTURED_OUTPUT(gS_Quat_WrongOutputArraySizeMessage)

    k_actual[] init 5, 2

    k_actual = DaGLMath_Mat4_quat(gk_mat4_a)
$END_TEST_EXPECTED_INIT_FAIL


$TEST_EXPECTED_INIT_FAIL(DaGLMath_Mat4_quat_ShouldFailWhenGivenWrongArgument1ArrayDimensions)
    $EXPECT_MESSAGE_IN_CAPTURED_OUTPUT(gS_Mat4_WrongArgument1ArrayDimensionsMessage)

    k_actual[] init 4
    k_arg1[] init 16, 2

    k_actual = DaGLMath_Mat4_quat(k_arg1)
$END_TEST_EXPECTED_INIT_FAIL


$TEST_EXPECTED_INIT_FAIL(DaGLMath_Mat4_quat_ShouldFailWhenGivenWrongArgument1ArraySize)
    $EXPECT_MESSAGE_IN_CAPTURED_OUTPUT(gS_Mat4_WrongArgument1ArraySizeMessage)

    k_actual[] init 4
    k_arg1[] init 17

    k_actual = DaGLMath_Mat4_quat(k_arg1)
$END_TEST_EXPECTED_INIT_FAIL


$TEST_EXPECTED_INIT_FAIL(DaGLMath_Mat4_quat_ShouldFailWhenGivenWrongArgument1ArrayDimensionsAndSize)
    $EXPECT_MESSAGE_IN_CAPTURED_OUTPUT(gS_Mat4_WrongArgument1ArrayDimensionsMessage)
    $EXPECT_MESSAGE_IN_CAPTURED_OUTPUT(gS_Mat4_WrongArgument1ArraySizeMessage)

    k_actual[] init 4
    k_arg1[] init 17, 2

    k_actual = DaGLMath_Mat4_quat(k_arg1)
$END_TEST_EXPECTED_INIT_FAIL


$TEST(DaGLMath_Mat4_transposeInPlace)
    k_actual_a[] init 16
    k_actual_b[] init 16

    k_actual_a = DaGLMath_Mat4_copy(gk_mat4_a)
    DaGLMath_Mat4_transposeInPlace(k_actual_a)
    k_actual_b = DaGLMath_Mat4_copy(gk_mat4_b)
    DaGLMath_Mat4_transposeInPlace(k_actual_b)

    $ASSERT_EQUAL_kArray(gk_mat4_a_transposed ' k_actual_a)
    $ASSERT_EQUAL_kArray(gk_mat4_b_transposed ' k_actual_b)
$END_TEST


$TEST_EXPECTED_INIT_FAIL(DaGLMath_Mat4_transposeInPlace_ShouldFailWhenGivenWrongArgument1ArrayDimensions)
    $EXPECT_MESSAGE_IN_CAPTURED_OUTPUT(gS_Mat4_WrongArgument1ArrayDimensionsMessage)

    k_arg1[] init 16, 2

    DaGLMath_Mat4_transposeInPlace(k_arg1)
$END_TEST_EXPECTED_INIT_FAIL


$TEST_EXPECTED_INIT_FAIL(DaGLMath_Mat4_transposeInPlace_ShouldFailWhenGivenWrongArgument1ArraySize)
    $EXPECT_MESSAGE_IN_CAPTURED_OUTPUT(gS_Mat4_WrongArgument1ArraySizeMessage)

    k_arg1[] init 17

    DaGLMath_Mat4_transposeInPlace(k_arg1)
$END_TEST_EXPECTED_INIT_FAIL


$TEST_EXPECTED_INIT_FAIL(DaGLMath_Mat4_transposeInPlace_ShouldFailWhenGivenWrongArgument1ArrayDimensionsAndSize)
    $EXPECT_MESSAGE_IN_CAPTURED_OUTPUT(gS_Mat4_WrongArgument1ArrayDimensionsMessage)
    $EXPECT_MESSAGE_IN_CAPTURED_OUTPUT(gS_Mat4_WrongArgument1ArraySizeMessage)

    k_arg1[] init 17, 2

    DaGLMath_Mat4_transposeInPlace(k_arg1)
$END_TEST_EXPECTED_INIT_FAIL


$TEST(DaGLMath_Mat4_transpose)
    k_actual_a[] init 16
    k_actual_b[] init 16

    k_actual_a = DaGLMath_Mat4_transpose(gk_mat4_a)
    k_actual_b = DaGLMath_Mat4_transpose(gk_mat4_b)

    $ASSERT_EQUAL_kArray(gk_mat4_a_transposed ' k_actual_a)
    $ASSERT_EQUAL_kArray(gk_mat4_b_transposed ' k_actual_b)
$END_TEST


$TEST_EXPECTED_INIT_FAIL(DaGLMath_Mat4_transpose_ShouldFailWhenGivenWrongOutputArrayDimensions)
    $EXPECT_MESSAGE_IN_CAPTURED_OUTPUT(gS_Mat4_WrongOutputArrayDimensionsMessage)

    k_actual[] init 16, 2

    k_actual = DaGLMath_Mat4_transpose(gk_mat4_a)
$END_TEST_EXPECTED_INIT_FAIL


$TEST_EXPECTED_INIT_FAIL(DaGLMath_Mat4_transpose_ShouldFailWhenGivenWrongOutputArraySize)
    $EXPECT_MESSAGE_IN_CAPTURED_OUTPUT(gS_Mat4_WrongOutputArraySizeMessage)

    k_actual[] init 17

    k_actual = DaGLMath_Mat4_transpose(gk_mat4_a)
$END_TEST_EXPECTED_INIT_FAIL


$TEST_EXPECTED_INIT_FAIL(DaGLMath_Mat4_transpose_ShouldFailWhenGivenWrongOutputArrayDimensionsAndSize)
    $EXPECT_MESSAGE_IN_CAPTURED_OUTPUT(gS_Mat4_WrongOutputArrayDimensionsMessage)
    $EXPECT_MESSAGE_IN_CAPTURED_OUTPUT(gS_Mat4_WrongOutputArraySizeMessage)

    k_actual[] init 17, 2

    k_actual = DaGLMath_Mat4_transpose(gk_mat4_a)
$END_TEST_EXPECTED_INIT_FAIL


$TEST_EXPECTED_INIT_FAIL(DaGLMath_Mat4_transpose_ShouldFailWhenGivenWrongArgument1ArrayDimensions)
    $EXPECT_MESSAGE_IN_CAPTURED_OUTPUT(gS_Mat4_WrongArgument1ArrayDimensionsMessage)

    k_actual[] init 16
    k_arg1[] init 16, 2

    k_actual = DaGLMath_Mat4_transpose(k_arg1)
$END_TEST_EXPECTED_INIT_FAIL


$TEST_EXPECTED_INIT_FAIL(DaGLMath_Mat4_transpose_ShouldFailWhenGivenWrongArgument1ArraySize)
    $EXPECT_MESSAGE_IN_CAPTURED_OUTPUT(gS_Mat4_WrongArgument1ArraySizeMessage)

    k_actual[] init 16
    k_arg1[] init 17

    k_actual = DaGLMath_Mat4_transpose(k_arg1)
$END_TEST_EXPECTED_INIT_FAIL


$TEST_EXPECTED_INIT_FAIL(DaGLMath_Mat4_transpose_ShouldFailWhenGivenWrongArgument1ArrayDimensionsAndSize)
    $EXPECT_MESSAGE_IN_CAPTURED_OUTPUT(gS_Mat4_WrongArgument1ArrayDimensionsMessage)
    $EXPECT_MESSAGE_IN_CAPTURED_OUTPUT(gS_Mat4_WrongArgument1ArraySizeMessage)

    k_actual[] init 16
    k_arg1[] init 17, 2

    k_actual = DaGLMath_Mat4_transpose(k_arg1)
$END_TEST_EXPECTED_INIT_FAIL


$TEST(DaGLMath_Mat4_scale)
    k_actual_a[] init 16
    k_actual_b[] init 16

    k_actual_a = DaGLMath_Mat4_scale(gk_mat4_a, 2)
    k_actual_b = DaGLMath_Mat4_scale(gk_mat4_b, 2)

    $ASSERT_EQUAL_kArray(gk_mat4_a_scaled_x2 ' k_actual_a)
    $ASSERT_EQUAL_kArray(gk_mat4_b_scaled_x2 ' k_actual_b)
$END_TEST


$TEST_EXPECTED_INIT_FAIL(DaGLMath_Mat4_scale_ShouldFailWhenGivenWrongOutputArrayDimensions)
    $EXPECT_MESSAGE_IN_CAPTURED_OUTPUT(gS_Mat4_WrongOutputArrayDimensionsMessage)

    k_actual[] init 16, 2

    k_actual = DaGLMath_Mat4_scale(gk_mat4_a, 2)
$END_TEST_EXPECTED_INIT_FAIL


$TEST_EXPECTED_INIT_FAIL(DaGLMath_Mat4_scale_ShouldFailWhenGivenWrongOutputArraySize)
    $EXPECT_MESSAGE_IN_CAPTURED_OUTPUT(gS_Mat4_WrongOutputArraySizeMessage)

    k_actual[] init 17

    k_actual = DaGLMath_Mat4_scale(gk_mat4_a, 2)
$END_TEST_EXPECTED_INIT_FAIL


$TEST_EXPECTED_INIT_FAIL(DaGLMath_Mat4_scale_ShouldFailWhenGivenWrongOutputArrayDimensionsAndSize)
    $EXPECT_MESSAGE_IN_CAPTURED_OUTPUT(gS_Mat4_WrongOutputArrayDimensionsMessage)
    $EXPECT_MESSAGE_IN_CAPTURED_OUTPUT(gS_Mat4_WrongOutputArraySizeMessage)

    k_actual[] init 17, 2

    k_actual = DaGLMath_Mat4_scale(gk_mat4_a, 2)
$END_TEST_EXPECTED_INIT_FAIL


$TEST_EXPECTED_INIT_FAIL(DaGLMath_Mat4_scale_ShouldFailWhenGivenWrongArgument1ArrayDimensions)
    $EXPECT_MESSAGE_IN_CAPTURED_OUTPUT(gS_Mat4_WrongArgument1ArrayDimensionsMessage)

    k_actual[] init 16
    k_arg1[] init 16, 2

    k_actual = DaGLMath_Mat4_scale(k_arg1, 2)
$END_TEST_EXPECTED_INIT_FAIL


$TEST_EXPECTED_INIT_FAIL(DaGLMath_Mat4_scale_ShouldFailWhenGivenWrongArgument1ArraySize)
    $EXPECT_MESSAGE_IN_CAPTURED_OUTPUT(gS_Mat4_WrongArgument1ArraySizeMessage)

    k_actual[] init 16
    k_arg1[] init 17

    k_actual = DaGLMath_Mat4_scale(k_arg1, 2)
$END_TEST_EXPECTED_INIT_FAIL


$TEST_EXPECTED_INIT_FAIL(DaGLMath_Mat4_scale_ShouldFailWhenGivenWrongArgument1ArrayDimensionsAndSize)
    $EXPECT_MESSAGE_IN_CAPTURED_OUTPUT(gS_Mat4_WrongArgument1ArrayDimensionsMessage)
    $EXPECT_MESSAGE_IN_CAPTURED_OUTPUT(gS_Mat4_WrongArgument1ArraySizeMessage)

    k_actual[] init 16
    k_arg1[] init 17, 2

    k_actual = DaGLMath_Mat4_scale(k_arg1, 2)
$END_TEST_EXPECTED_INIT_FAIL


$TEST(DaGLMath_Mat4_det)
    k_actual_a init 0
    k_actual_b init 0
    k_actual_identity init 0

    k_actual_identity = DaGLMath_Mat4_det(gk_mat4_identity)
    k_actual_a = DaGLMath_Mat4_det(gk_mat4_a)
    k_actual_b = DaGLMath_Mat4_det(gk_mat4_b)

    $ASSERT_EQUAL_k(0 ' k_actual_a)
    $ASSERT_EQUAL_k(0 ' k_actual_b)
    $ASSERT_EQUAL_k(1 ' k_actual_identity)
$END_TEST


$TEST_EXPECTED_INIT_FAIL(DaGLMath_Mat4_det_ShouldFailWhenGivenWrongArgument1ArrayDimensions)
    $EXPECT_MESSAGE_IN_CAPTURED_OUTPUT(gS_Mat4_WrongArgument1ArrayDimensionsMessage)

    k_actual init 0
    k_arg1[] init 16, 2

    k_actual = DaGLMath_Mat4_det(k_arg1)
$END_TEST_EXPECTED_INIT_FAIL


$TEST_EXPECTED_INIT_FAIL(DaGLMath_Mat4_det_ShouldFailWhenGivenWrongArgument1ArraySize)
    $EXPECT_MESSAGE_IN_CAPTURED_OUTPUT(gS_Mat4_WrongArgument1ArraySizeMessage)

    k_actual init 0
    k_arg1[] init 17

    k_actual = DaGLMath_Mat4_det(k_arg1)
$END_TEST_EXPECTED_INIT_FAIL


$TEST_EXPECTED_INIT_FAIL(DaGLMath_Mat4_det_ShouldFailWhenGivenWrongArgument1ArrayDimensionsAndSize)
    $EXPECT_MESSAGE_IN_CAPTURED_OUTPUT(gS_Mat4_WrongArgument1ArrayDimensionsMessage)
    $EXPECT_MESSAGE_IN_CAPTURED_OUTPUT(gS_Mat4_WrongArgument1ArraySizeMessage)

    k_actual init 0
    k_arg1[] init 17, 2

    k_actual = DaGLMath_Mat4_det(k_arg1)
$END_TEST_EXPECTED_INIT_FAIL


$TEST(DaGLMath_Mat4_inv)
    k_actual_a[] init 16
    k_actual_b[] init 16
    k_actual_identity[] init 16

    k_actual_a = DaGLMath_Mat4_inv(gk_mat4_a)
    k_actual_b = DaGLMath_Mat4_inv(gk_mat4_b)
    k_actual_identity = DaGLMath_Mat4_inv(gk_mat4_identity)

    $ASSERT_EQUAL_kArray(gk_mat4_a_inverted ' k_actual_a)
    $ASSERT_EQUAL_kArray(gk_mat4_b_inverted ' k_actual_b)
    $ASSERT_EQUAL_kArray(gk_mat4_identity ' k_actual_identity)
$END_TEST


$TEST_EXPECTED_INIT_FAIL(DaGLMath_Mat4_inv_ShouldFailWhenGivenWrongOutputArrayDimensions)
    $EXPECT_MESSAGE_IN_CAPTURED_OUTPUT(gS_Mat4_WrongOutputArrayDimensionsMessage)

    k_actual[] init 16, 2

    k_actual = DaGLMath_Mat4_inv(gk_mat4_a)
$END_TEST_EXPECTED_INIT_FAIL


$TEST_EXPECTED_INIT_FAIL(DaGLMath_Mat4_inv_ShouldFailWhenGivenWrongOutputArraySize)
    $EXPECT_MESSAGE_IN_CAPTURED_OUTPUT(gS_Mat4_WrongOutputArraySizeMessage)

    k_actual[] init 17

    k_actual = DaGLMath_Mat4_inv(gk_mat4_a)
$END_TEST_EXPECTED_INIT_FAIL


$TEST_EXPECTED_INIT_FAIL(DaGLMath_Mat4_inv_ShouldFailWhenGivenWrongOutputArrayDimensionsAndSize)
    $EXPECT_MESSAGE_IN_CAPTURED_OUTPUT(gS_Mat4_WrongOutputArrayDimensionsMessage)
    $EXPECT_MESSAGE_IN_CAPTURED_OUTPUT(gS_Mat4_WrongOutputArraySizeMessage)

    k_actual[] init 17, 2

    k_actual = DaGLMath_Mat4_inv(gk_mat4_a)
$END_TEST_EXPECTED_INIT_FAIL


$TEST_EXPECTED_INIT_FAIL(DaGLMath_Mat4_inv_ShouldFailWhenGivenWrongArgument1ArrayDimensions)
    $EXPECT_MESSAGE_IN_CAPTURED_OUTPUT(gS_Mat4_WrongArgument1ArrayDimensionsMessage)

    k_actual[] init 16
    k_arg1[] init 16, 2

    k_actual = DaGLMath_Mat4_inv(k_arg1)
$END_TEST_EXPECTED_INIT_FAIL


$TEST_EXPECTED_INIT_FAIL(DaGLMath_Mat4_inv_ShouldFailWhenGivenWrongArgument1ArraySize)
    $EXPECT_MESSAGE_IN_CAPTURED_OUTPUT(gS_Mat4_WrongArgument1ArraySizeMessage)

    k_actual[] init 16
    k_arg1[] init 17

    k_actual = DaGLMath_Mat4_inv(k_arg1)
$END_TEST_EXPECTED_INIT_FAIL


$TEST_EXPECTED_INIT_FAIL(DaGLMath_Mat4_inv_ShouldFailWhenGivenWrongArgument1ArrayDimensionsAndSize)
    $EXPECT_MESSAGE_IN_CAPTURED_OUTPUT(gS_Mat4_WrongArgument1ArrayDimensionsMessage)
    $EXPECT_MESSAGE_IN_CAPTURED_OUTPUT(gS_Mat4_WrongArgument1ArraySizeMessage)

    k_actual[] init 16
    k_arg1[] init 17, 2

    k_actual = DaGLMath_Mat4_inv(k_arg1)
$END_TEST_EXPECTED_INIT_FAIL


#include "test-end.orc"
