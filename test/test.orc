
$TEST(ArraysAreEqual)
    k_mat4_a[] init 16
    k_mat4_b[] init 16

    $ASSERT_EQUAL_kArray(k_mat4_a ' k_mat4_b)
$END_TEST


$TEST(ArrayLengthsAreNotEqual)
    k_mat4_a[] init 16
    k_mat4_b[] init 17

    $ASSERT_EQUAL_kArray(k_mat4_a ' k_mat4_b)
$END_TEST


$TEST(ArrayItemsAreNotEqual)
    k_mat4_a[] init 16
    k_mat4_b[] init 16

    k_mat4_b[0] = 1

    $ASSERT_EQUAL_kArray(k_mat4_a ' k_mat4_b)
$END_TEST
