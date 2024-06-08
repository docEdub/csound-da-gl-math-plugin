$TEST_FILE(test_vec3)


/// #region         distance


$TEST(DaGLMath_Vec3_distance_ShouldReturnCorrectValue)
    k_actual = DaGLMath_Vec3_distance(gk_vec3_000, gk_vec3_100)
    $ASSERT_EQUAL_k(1.0 ' k_actual)

    k_actual = DaGLMath_Vec3_distance(gk_vec3_000, gk_vec3_010)
    $ASSERT_EQUAL_k(1.0 ' k_actual)

    k_actual = DaGLMath_Vec3_distance(gk_vec3_000, gk_vec3_001)
    $ASSERT_EQUAL_k(1.0 ' k_actual)

    k_vec3_a1[] = fillarray(1.0, 2.0, 3.0)
    k_vec3_b1[] = fillarray(4.0, 5.0, 6.0)
    k_actual = DaGLMath_Vec3_distance(k_vec3_a1, k_vec3_b1)
    $ASSERT_EQUAL_k(5.196152422706632 ' k_actual)

    k_vec3_a1[] = fillarray(-1.0, -2.0, -3.0)
    k_vec3_b1[] = fillarray(-4.0, -5.0, -6.0)
    k_actual = DaGLMath_Vec3_distance(k_vec3_a1, k_vec3_b1)
    $ASSERT_EQUAL_k(5.196152422706632 ' k_actual)
$END_TEST


$TEST_EXPECTED_INIT_FAIL(DaGLMath_Vec3_distance_ShouldFailWhenGivenWrongArgument1ArrayDimensions)
    $EXPECT_MESSAGE_IN_CAPTURED_OUTPUT(gS_Vec3_WrongArgument1ArrayDimensionsMessage)

    k_arg[] init 3, 2

    k_actual = DaGLMath_Vec3_distance(k_arg, gk_vec3_010)
$END_TEST_EXPECTED_INIT_FAIL


$TEST_EXPECTED_INIT_FAIL(DaGLMath_Vec3_distance_ShouldFailWhenGivenWrongArgument1ArraySize)
    $EXPECT_MESSAGE_IN_CAPTURED_OUTPUT(gS_Vec3_WrongArgument1ArraySizeMessage)

    k_arg[] init 4

    k_actual = DaGLMath_Vec3_distance(k_arg, gk_vec3_010)
$END_TEST_EXPECTED_INIT_FAIL


$TEST_EXPECTED_INIT_FAIL(DaGLMath_Vec3_distance_ShouldFailWhenGivenWrongArgument1ArrayDimensionsAndSize)
    $EXPECT_MESSAGE_IN_CAPTURED_OUTPUT(gS_Vec3_WrongArgument1ArrayDimensionsMessage)
    $EXPECT_MESSAGE_IN_CAPTURED_OUTPUT(gS_Vec3_WrongArgument1ArraySizeMessage)

    k_arg[] init 4, 2

    k_actual = DaGLMath_Vec3_distance(k_arg, gk_vec3_010)
$END_TEST_EXPECTED_INIT_FAIL


$TEST_EXPECTED_INIT_FAIL(DaGLMath_Vec3_distance_ShouldFailWhenGivenWrongArgument2ArrayDimensions)
    $EXPECT_MESSAGE_IN_CAPTURED_OUTPUT(gS_Vec3_WrongArgument2ArrayDimensionsMessage)

    k_arg[] init 3, 2

    k_actual = DaGLMath_Vec3_distance(gk_vec3_100, k_arg)
$END_TEST_EXPECTED_INIT_FAIL


$TEST_EXPECTED_INIT_FAIL(DaGLMath_Vec3_distance_ShouldFailWhenGivenWrongArgument2ArraySize)
    $EXPECT_MESSAGE_IN_CAPTURED_OUTPUT(gS_Vec3_WrongArgument2ArraySizeMessage)

    k_arg[] init 4

    k_actual = DaGLMath_Vec3_distance(gk_vec3_100, k_arg)
$END_TEST_EXPECTED_INIT_FAIL


$TEST_EXPECTED_INIT_FAIL(DaGLMath_Vec3_distance_ShouldFailWhenGivenWrongArgument2ArrayDimensionsAndSize)
    $EXPECT_MESSAGE_IN_CAPTURED_OUTPUT(gS_Vec3_WrongArgument2ArrayDimensionsMessage)
    $EXPECT_MESSAGE_IN_CAPTURED_OUTPUT(gS_Vec3_WrongArgument2ArraySizeMessage)

    k_arg[] init 4, 2

    k_actual = DaGLMath_Vec3_distance(gk_vec3_100, k_arg)
$END_TEST_EXPECTED_INIT_FAIL


/// #endregion
/// #region         distanceSquared


$TEST(DaGLMath_Vec3_distanceSquared_ShouldReturnCorrectValue)
    k_actual = DaGLMath_Vec3_distanceSquared(gk_vec3_000, gk_vec3_100)
    $ASSERT_EQUAL_k(1.0 ' k_actual)

    k_actual = DaGLMath_Vec3_distanceSquared(gk_vec3_000, gk_vec3_010)
    $ASSERT_EQUAL_k(1.0 ' k_actual)

    k_actual = DaGLMath_Vec3_distanceSquared(gk_vec3_000, gk_vec3_001)
    $ASSERT_EQUAL_k(1.0 ' k_actual)

    k_vec3_a1[] = fillarray(1.0, 2.0, 3.0)
    k_vec3_b1[] = fillarray(4.0, 5.0, 6.0)
    k_actual = DaGLMath_Vec3_distanceSquared(k_vec3_a1, k_vec3_b1)
    $ASSERT_EQUAL_k(27.0 ' k_actual)

    k_vec3_a1[] = fillarray(-1.0, -2.0, -3.0)
    k_vec3_b1[] = fillarray(-4.0, -5.0, -6.0)
    k_actual = DaGLMath_Vec3_distanceSquared(k_vec3_a1, k_vec3_b1)
    $ASSERT_EQUAL_k(27.0 ' k_actual)
$END_TEST


$TEST_EXPECTED_INIT_FAIL(DaGLMath_Vec3_distanceSquared_ShouldFailWhenGivenWrongArgument1ArrayDimensions)
    $EXPECT_MESSAGE_IN_CAPTURED_OUTPUT(gS_Vec3_WrongArgument1ArrayDimensionsMessage)

    k_arg[] init 3, 2

    k_actual = DaGLMath_Vec3_distanceSquared(k_arg, gk_vec3_100)
$END_TEST_EXPECTED_INIT_FAIL


$TEST_EXPECTED_INIT_FAIL(DaGLMath_Vec3_distanceSquared_ShouldFailWhenGivenWrongArgument1ArraySize)
    $EXPECT_MESSAGE_IN_CAPTURED_OUTPUT(gS_Vec3_WrongArgument1ArraySizeMessage)

    k_arg[] init 4

    k_actual = DaGLMath_Vec3_distanceSquared(k_arg, gk_vec3_010)
$END_TEST_EXPECTED_INIT_FAIL


$TEST_EXPECTED_INIT_FAIL(DaGLMath_Vec3_distanceSquared_ShouldFailWhenGivenWrongArgument1ArrayDimensionsAndSize)
    $EXPECT_MESSAGE_IN_CAPTURED_OUTPUT(gS_Vec3_WrongArgument1ArrayDimensionsMessage)
    $EXPECT_MESSAGE_IN_CAPTURED_OUTPUT(gS_Vec3_WrongArgument1ArraySizeMessage)

    k_arg[] init 4, 2

    k_actual = DaGLMath_Vec3_distanceSquared(k_arg, gk_vec3_010)
$END_TEST_EXPECTED_INIT_FAIL


$TEST_EXPECTED_INIT_FAIL(DaGLMath_Vec3_distanceSquared_ShouldFailWhenGivenWrongArgument2ArrayDimensions)
    $EXPECT_MESSAGE_IN_CAPTURED_OUTPUT(gS_Vec3_WrongArgument2ArrayDimensionsMessage)

    k_arg[] init 3, 2

    k_actual = DaGLMath_Vec3_distanceSquared(gk_vec3_100, k_arg)
$END_TEST_EXPECTED_INIT_FAIL


$TEST_EXPECTED_INIT_FAIL(DaGLMath_Vec3_distanceSquared_ShouldFailWhenGivenWrongArgument2ArraySize)
    $EXPECT_MESSAGE_IN_CAPTURED_OUTPUT(gS_Vec3_WrongArgument2ArraySizeMessage)

    k_arg[] init 4

    k_actual = DaGLMath_Vec3_distanceSquared(gk_vec3_100, k_arg)
$END_TEST_EXPECTED_INIT_FAIL


$TEST_EXPECTED_INIT_FAIL(DaGLMath_Vec3_distanceSquared_ShouldFailWhenGivenWrongArgument2ArrayDimensionsAndSize)
    $EXPECT_MESSAGE_IN_CAPTURED_OUTPUT(gS_Vec3_WrongArgument2ArrayDimensionsMessage)
    $EXPECT_MESSAGE_IN_CAPTURED_OUTPUT(gS_Vec3_WrongArgument2ArraySizeMessage)

    k_arg[] init 4, 2

    k_actual = DaGLMath_Vec3_distanceSquared(gk_vec3_100, k_arg)
$END_TEST_EXPECTED_INIT_FAIL


/// #endregion
/// #region         dot


$TEST(DaGLMath_Vec3_dot_ShouldReturnCorrectValue)
    k_actual = DaGLMath_Vec3_dot(gk_vec3_100, gk_vec3_100)
    $ASSERT_EQUAL_k(1.0 ' k_actual)

    k_actual = DaGLMath_Vec3_dot(gk_vec3_100, gk_vec3_010)
    $ASSERT_EQUAL_k(0.0 ' k_actual)

    k_actual = DaGLMath_Vec3_dot(gk_vec3_100, gk_vec3_001)
    $ASSERT_EQUAL_k(0.0 ' k_actual)

    k_actual = DaGLMath_Vec3_dot(gk_vec3_010, gk_vec3_100)
    $ASSERT_EQUAL_k(0.0 ' k_actual)

    k_actual = DaGLMath_Vec3_dot(gk_vec3_010, gk_vec3_010)
    $ASSERT_EQUAL_k(1.0 ' k_actual)

    k_actual = DaGLMath_Vec3_dot(gk_vec3_010, gk_vec3_001)
    $ASSERT_EQUAL_k(0.0 ' k_actual)

    k_actual = DaGLMath_Vec3_dot(gk_vec3_001, gk_vec3_100)
    $ASSERT_EQUAL_k(0.0 ' k_actual)

    k_actual = DaGLMath_Vec3_dot(gk_vec3_001, gk_vec3_010)
    $ASSERT_EQUAL_k(0.0 ' k_actual)

    k_actual = DaGLMath_Vec3_dot(gk_vec3_001, gk_vec3_001)
    $ASSERT_EQUAL_k(1.0 ' k_actual)

    k_vec3_a1[] = fillarray(1.0, 2.0, 3.0)
    k_vec3_b1[] = fillarray(4.0, 5.0, 6.0)
    k_actual = DaGLMath_Vec3_dot(k_vec3_a1, k_vec3_b1)
    $ASSERT_EQUAL_k(32.0 ' k_actual)
$END_TEST


$TEST_EXPECTED_INIT_FAIL(DaGLMath_Vec3_dot_ShouldFailWhenGivenWrongArgument1ArrayDimensions)
    $EXPECT_MESSAGE_IN_CAPTURED_OUTPUT(gS_Vec3_WrongArgument1ArrayDimensionsMessage)

    k_arg[] init 3, 2

    k_actual = DaGLMath_Vec3_dot(k_arg, gk_vec3_100)
$END_TEST_EXPECTED_INIT_FAIL


$TEST_EXPECTED_INIT_FAIL(DaGLMath_Vec3_dot_ShouldFailWhenGivenWrongArgument1ArraySize)
    $EXPECT_MESSAGE_IN_CAPTURED_OUTPUT(gS_Vec3_WrongArgument1ArraySizeMessage)

    k_arg[] init 4

    k_actual = DaGLMath_Vec3_dot(k_arg, gk_vec3_010)
$END_TEST_EXPECTED_INIT_FAIL


$TEST_EXPECTED_INIT_FAIL(DaGLMath_Vec3_dot_ShouldFailWhenGivenWrongArgument1ArrayDimensionsAndSize)
    $EXPECT_MESSAGE_IN_CAPTURED_OUTPUT(gS_Vec3_WrongArgument1ArrayDimensionsMessage)
    $EXPECT_MESSAGE_IN_CAPTURED_OUTPUT(gS_Vec3_WrongArgument1ArraySizeMessage)

    k_arg[] init 4, 2

    k_actual = DaGLMath_Vec3_dot(k_arg, gk_vec3_010)
$END_TEST_EXPECTED_INIT_FAIL


$TEST_EXPECTED_INIT_FAIL(DaGLMath_Vec3_dot_ShouldFailWhenGivenWrongArgument2ArrayDimensions)
    $EXPECT_MESSAGE_IN_CAPTURED_OUTPUT(gS_Vec3_WrongArgument2ArrayDimensionsMessage)

    k_arg[] init 3, 2

    k_actual = DaGLMath_Vec3_dot(gk_vec3_100, k_arg)
$END_TEST_EXPECTED_INIT_FAIL


$TEST_EXPECTED_INIT_FAIL(DaGLMath_Vec3_dot_ShouldFailWhenGivenWrongArgument2ArraySize)
    $EXPECT_MESSAGE_IN_CAPTURED_OUTPUT(gS_Vec3_WrongArgument2ArraySizeMessage)

    k_arg[] init 4

    k_actual = DaGLMath_Vec3_dot(gk_vec3_100, k_arg)
$END_TEST_EXPECTED_INIT_FAIL


$TEST_EXPECTED_INIT_FAIL(DaGLMath_Vec3_dot_ShouldFailWhenGivenWrongArgument2ArrayDimensionsAndSize)
    $EXPECT_MESSAGE_IN_CAPTURED_OUTPUT(gS_Vec3_WrongArgument2ArrayDimensionsMessage)
    $EXPECT_MESSAGE_IN_CAPTURED_OUTPUT(gS_Vec3_WrongArgument2ArraySizeMessage)

    k_arg[] init 4, 2

    k_actual = DaGLMath_Vec3_dot(gk_vec3_100, k_arg)
$END_TEST_EXPECTED_INIT_FAIL


/// #endregion
/// #region         length


$TEST(DaGLMath_Vec3_length_ShouldReturnCorrectValue)
    k_actual = DaGLMath_Vec3_length(gk_vec3_100)
    $ASSERT_EQUAL_k(1.0 ' k_actual)

    k_actual = DaGLMath_Vec3_length(gk_vec3_010)
    $ASSERT_EQUAL_k(1.0 ' k_actual)

    k_actual = DaGLMath_Vec3_length(gk_vec3_001)
    $ASSERT_EQUAL_k(1.0 ' k_actual)

    k_vec3_a1[] = fillarray(1.0, 2.0, 3.0)
    k_actual = DaGLMath_Vec3_length(k_vec3_a1)
    $ASSERT_EQUAL_k(3.741657 ' k_actual)

    k_vec3_a1[] = fillarray(-1.0, -2.0, -3.0)
    k_actual = DaGLMath_Vec3_length(k_vec3_a1)
    $ASSERT_EQUAL_k(3.741657 ' k_actual)
$END_TEST


$TEST_EXPECTED_INIT_FAIL(DaGLMath_Vec3_length_ShouldFailWhenGivenWrongArgument1ArrayDimensions)
    $EXPECT_MESSAGE_IN_CAPTURED_OUTPUT(gS_Vec3_WrongArgument1ArrayDimensionsMessage)

    k_arg[] init 3, 2

    k_actual = DaGLMath_Vec3_length(k_arg)
$END_TEST_EXPECTED_INIT_FAIL


$TEST_EXPECTED_INIT_FAIL(DaGLMath_Vec3_length_ShouldFailWhenGivenWrongArgument1ArraySize)
    $EXPECT_MESSAGE_IN_CAPTURED_OUTPUT(gS_Vec3_WrongArgument1ArraySizeMessage)

    k_arg[] init 4

    k_actual = DaGLMath_Vec3_length(k_arg)
$END_TEST_EXPECTED_INIT_FAIL


$TEST_EXPECTED_INIT_FAIL(DaGLMath_Vec3_length_ShouldFailWhenGivenWrongArgument1ArrayDimensionsAndSize)
    $EXPECT_MESSAGE_IN_CAPTURED_OUTPUT(gS_Vec3_WrongArgument1ArrayDimensionsMessage)
    $EXPECT_MESSAGE_IN_CAPTURED_OUTPUT(gS_Vec3_WrongArgument1ArraySizeMessage)

    k_arg[] init 4, 2

    k_actual = DaGLMath_Vec3_length(k_arg)
$END_TEST_EXPECTED_INIT_FAIL


/// #endregion
/// #region         lengthSquared


$TEST(DaGLMath_Vec3_lengthSquared_ShouldReturnCorrectValue)
    k_actual = DaGLMath_Vec3_lengthSquared(gk_vec3_100)
    $ASSERT_EQUAL_k(1.0 ' k_actual)

    k_actual = DaGLMath_Vec3_lengthSquared(gk_vec3_010)
    $ASSERT_EQUAL_k(1.0 ' k_actual)

    k_actual = DaGLMath_Vec3_lengthSquared(gk_vec3_001)
    $ASSERT_EQUAL_k(1.0 ' k_actual)

    k_vec3_a1[] = fillarray(1.0, 2.0, 3.0)
    k_actual = DaGLMath_Vec3_lengthSquared(k_vec3_a1)
    $ASSERT_EQUAL_k(14.0 ' k_actual)

    k_vec3_a1[] = fillarray(-1.0, -2.0, -3.0)
    k_actual = DaGLMath_Vec3_lengthSquared(k_vec3_a1)
    $ASSERT_EQUAL_k(14.0 ' k_actual)
$END_TEST


$TEST_EXPECTED_INIT_FAIL(DaGLMath_Vec3_lengthSquared_ShouldFailWhenGivenWrongArgument1ArrayDimensions)
    $EXPECT_MESSAGE_IN_CAPTURED_OUTPUT(gS_Vec3_WrongArgument1ArrayDimensionsMessage)

    k_arg[] init 3, 2

    k_actual = DaGLMath_Vec3_lengthSquared(k_arg)
$END_TEST_EXPECTED_INIT_FAIL


$TEST_EXPECTED_INIT_FAIL(DaGLMath_Vec3_lengthSquared_ShouldFailWhenGivenWrongArgument1ArraySize)
    $EXPECT_MESSAGE_IN_CAPTURED_OUTPUT(gS_Vec3_WrongArgument1ArraySizeMessage)

    k_arg[] init 4

    k_actual = DaGLMath_Vec3_lengthSquared(k_arg)
$END_TEST_EXPECTED_INIT_FAIL


$TEST_EXPECTED_INIT_FAIL(DaGLMath_Vec3_lengthSquared_ShouldFailWhenGivenWrongArgument1ArrayDimensionsAndSize)
    $EXPECT_MESSAGE_IN_CAPTURED_OUTPUT(gS_Vec3_WrongArgument1ArrayDimensionsMessage)
    $EXPECT_MESSAGE_IN_CAPTURED_OUTPUT(gS_Vec3_WrongArgument1ArraySizeMessage)

    k_arg[] init 4, 2

    k_actual = DaGLMath_Vec3_lengthSquared(k_arg)
$END_TEST_EXPECTED_INIT_FAIL


/// #endregion
/// #region         triangleNormal


$TEST(DaGLMath_Vec3_triangleNormal_ShouldInitOutput)
    k_actual_a[] = DaGLMath_Vec3_triangleNormal(gk_vec3_000, gk_vec3_100, gk_vec3_010)
    k_actual_b[] = DaGLMath_Vec3_triangleNormal(gk_vec3_100, gk_vec3_000, gk_vec3_001)
    k_actual_c[] = DaGLMath_Vec3_triangleNormal(gk_vec3_000, gk_vec3_010, gk_vec3_001)

    $ASSERT_EQUAL_kArray(gk_vec3_001 ' k_actual_a)
    $ASSERT_EQUAL_kArray(gk_vec3_010 ' k_actual_b)
    $ASSERT_EQUAL_kArray(gk_vec3_100 ' k_actual_c)
$END_TEST


$TEST(DaGLMath_Vec3_triangleNormal_ShouldSetExistingOutput)
    k_actual_a[] init 3
    k_actual_b[] init 3
    k_actual_c[] init 3

    k_actual_a = DaGLMath_Vec3_triangleNormal(gk_vec3_000, gk_vec3_100, gk_vec3_010)
    k_actual_b = DaGLMath_Vec3_triangleNormal(gk_vec3_100, gk_vec3_000, gk_vec3_001)
    k_actual_c = DaGLMath_Vec3_triangleNormal(gk_vec3_000, gk_vec3_010, gk_vec3_001)

    $ASSERT_EQUAL_kArray(gk_vec3_001 ' k_actual_a)
    $ASSERT_EQUAL_kArray(gk_vec3_010 ' k_actual_b)
    $ASSERT_EQUAL_kArray(gk_vec3_100 ' k_actual_c)
$END_TEST


$TEST_EXPECTED_INIT_FAIL(DaGLMath_Vec3_triangleNormal_ShouldFailWhenGivenWrongOutputArrayDimensions)
    $EXPECT_MESSAGE_IN_CAPTURED_OUTPUT(gS_Vec3_WrongOutputArrayDimensionsMessage)

    k_actual[] init 3, 2

    k_actual = DaGLMath_Vec3_triangleNormal(gk_vec3_100, gk_vec3_010, gk_vec3_001)
$END_TEST_EXPECTED_INIT_FAIL


$TEST_EXPECTED_INIT_FAIL(DaGLMath_Vec3_triangleNormal_ShouldFailWhenGivenWrongOutputArraySize)
    $EXPECT_MESSAGE_IN_CAPTURED_OUTPUT(gS_Vec3_WrongOutputArraySizeMessage)

    k_actual[] init 4

    k_actual = DaGLMath_Vec3_triangleNormal(gk_vec3_100, gk_vec3_010, gk_vec3_001)
$END_TEST_EXPECTED_INIT_FAIL


$TEST_EXPECTED_INIT_FAIL(DaGLMath_Vec3_triangleNormal_ShouldFailWhenGivenWrongOutputArrayDimensionsAndSize)
    $EXPECT_MESSAGE_IN_CAPTURED_OUTPUT(gS_Vec3_WrongOutputArrayDimensionsMessage)
    $EXPECT_MESSAGE_IN_CAPTURED_OUTPUT(gS_Vec3_WrongOutputArraySizeMessage)

    k_actual[] init 4, 2

    k_actual = DaGLMath_Vec3_triangleNormal(gk_vec3_100, gk_vec3_010, gk_vec3_001)
$END_TEST_EXPECTED_INIT_FAIL


$TEST_EXPECTED_INIT_FAIL(DaGLMath_Vec3_triangleNormal_ShouldFailWhenGivenWrongArgument1ArrayDimensions)
    $EXPECT_MESSAGE_IN_CAPTURED_OUTPUT(gS_Vec3_WrongArgument1ArrayDimensionsMessage)

    k_arg[] init 3, 2

    k_actual[] = DaGLMath_Vec3_triangleNormal(k_arg, gk_vec3_010, gk_vec3_001)
$END_TEST_EXPECTED_INIT_FAIL


$TEST_EXPECTED_INIT_FAIL(DaGLMath_Vec3_triangleNormal_ShouldFailWhenGivenWrongArgument1ArraySize)
    $EXPECT_MESSAGE_IN_CAPTURED_OUTPUT(gS_Vec3_WrongArgument1ArraySizeMessage)

    k_arg[] init 4

    k_actual[] = DaGLMath_Vec3_triangleNormal(k_arg, gk_vec3_010, gk_vec3_001)
$END_TEST_EXPECTED_INIT_FAIL


$TEST_EXPECTED_INIT_FAIL(DaGLMath_Vec3_triangleNormal_ShouldFailWhenGivenWrongArgument1ArrayDimensionsAndSize)
    $EXPECT_MESSAGE_IN_CAPTURED_OUTPUT(gS_Vec3_WrongArgument1ArrayDimensionsMessage)
    $EXPECT_MESSAGE_IN_CAPTURED_OUTPUT(gS_Vec3_WrongArgument1ArraySizeMessage)

    k_arg[] init 4, 2

    k_actual[] = DaGLMath_Vec3_triangleNormal(k_arg, gk_vec3_010, gk_vec3_001)
$END_TEST_EXPECTED_INIT_FAIL


$TEST_EXPECTED_INIT_FAIL(DaGLMath_Vec3_triangleNormal_ShouldFailWhenGivenWrongArgument2ArrayDimensions)
    $EXPECT_MESSAGE_IN_CAPTURED_OUTPUT(gS_Vec3_WrongArgument2ArrayDimensionsMessage)

    k_arg[] init 3, 2

    k_actual[] = DaGLMath_Vec3_triangleNormal(gk_vec3_100, k_arg, gk_vec3_001)
$END_TEST_EXPECTED_INIT_FAIL


$TEST_EXPECTED_INIT_FAIL(DaGLMath_Vec3_triangleNormal_ShouldFailWhenGivenWrongArgument2ArraySize)
    $EXPECT_MESSAGE_IN_CAPTURED_OUTPUT(gS_Vec3_WrongArgument2ArraySizeMessage)

    k_arg[] init 4

    k_actual[] = DaGLMath_Vec3_triangleNormal(gk_vec3_100, k_arg, gk_vec3_001)
$END_TEST_EXPECTED_INIT_FAIL


$TEST_EXPECTED_INIT_FAIL(DaGLMath_Vec3_triangleNormal_ShouldFailWhenGivenWrongArgument2ArrayDimensionsAndSize)
    $EXPECT_MESSAGE_IN_CAPTURED_OUTPUT(gS_Vec3_WrongArgument2ArrayDimensionsMessage)
    $EXPECT_MESSAGE_IN_CAPTURED_OUTPUT(gS_Vec3_WrongArgument2ArraySizeMessage)

    k_arg[] init 4, 2

    k_actual[] = DaGLMath_Vec3_triangleNormal(gk_vec3_100, k_arg, gk_vec3_001)
$END_TEST_EXPECTED_INIT_FAIL


$TEST_EXPECTED_INIT_FAIL(DaGLMath_Vec3_triangleNormal_ShouldFailWhenGivenWrongArgument3ArrayDimensions)
    $EXPECT_MESSAGE_IN_CAPTURED_OUTPUT(gS_Vec3_WrongArgument3ArrayDimensionsMessage)

    k_arg[] init 3, 2

    k_actual[] = DaGLMath_Vec3_triangleNormal(gk_vec3_100, gk_vec3_010, k_arg)
$END_TEST_EXPECTED_INIT_FAIL


$TEST_EXPECTED_INIT_FAIL(DaGLMath_Vec3_triangleNormal_ShouldFailWhenGivenWrongArgument3ArraySize)
    $EXPECT_MESSAGE_IN_CAPTURED_OUTPUT(gS_Vec3_WrongArgument3ArraySizeMessage)

    k_arg[] init 4

    k_actual[] = DaGLMath_Vec3_triangleNormal(gk_vec3_100, gk_vec3_010, k_arg)
$END_TEST_EXPECTED_INIT_FAIL


$TEST_EXPECTED_INIT_FAIL(DaGLMath_Vec3_triangleNormal_ShouldFailWhenGivenWrongArgument3ArrayDimensionsAndSize)
    $EXPECT_MESSAGE_IN_CAPTURED_OUTPUT(gS_Vec3_WrongArgument3ArrayDimensionsMessage)
    $EXPECT_MESSAGE_IN_CAPTURED_OUTPUT(gS_Vec3_WrongArgument3ArraySizeMessage)

    k_arg[] init 4, 2

    k_actual[] = DaGLMath_Vec3_triangleNormal(gk_vec3_100, gk_vec3_010, k_arg)
$END_TEST_EXPECTED_INIT_FAIL


/// #endregion
