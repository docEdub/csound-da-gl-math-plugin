
gk_vec3_a[] fillarray 0.1, 0.2, 0.3

gk_mat4_identity[] fillarray \
    1, 0, 0, 0, \
    0, 1, 0, 0, \
    0, 0, 1, 0, \
    0, 0, 0, 1

gk_mat4_zero[] fillarray \
    0, 0, 0, 0, \
    0, 0, 0, 0, \
    0, 0, 0, 0, \
    0, 0, 0, 0

gk_mat4_a[] fillarray \
    1.1, 1.2, 1.3, 1.4, \
    2.1, 2.2, 2.3, 2.4, \
    3.1, 3.2, 3.3, 3.4, \
    4.1, 4.2, 4.3, 4.4

gk_mat4_b[] fillarray \
    5.1, 5.2, 5.3, 5.4, \
    6.1, 6.2, 6.3, 6.4, \
    7.1, 7.2, 7.3, 7.4, \
    8.1, 8.2, 8.3, 8.4

gk_mat4_axb[] fillarray \
    55.1, 57.2, 59.3, 61.4, \
    65.5, 68.0, 70.5, 73.0, \
    75.9, 78.8, 81.7, 84.6, \
    86.3, 89.6, 92.9, 96.2

gk_mat4_bxa[] fillarray \
    33.5, 34.0, 34.5, 35.0, \
    59.9, 60.8, 61.7, 62.6, \
    86.3, 87.6, 88.9, 90.2, \
    112.7, 114.4, 116.1, 117.8


$TEST(glm_mat4_copy)
    k_actual[] init 16

    glm_mat4_copy(gk_mat4_a, k_actual)
    $ASSERT_EQUAL_kArray(gk_mat4_a ' k_actual)

    glm_mat4_copy(gk_mat4_b, k_actual)
    $ASSERT_EQUAL_kArray(gk_mat4_b ' k_actual)
$END_TEST


$TEST(glm_mat4_identity)
    k_actual[] init 16

    glm_mat4_identity(k_actual)
    $ASSERT_EQUAL_kArray(gk_mat4_identity ' k_actual)
$END_TEST


$TEST(glm_mat4_zero)
    k_actual[] init 16

    glm_mat4_zero(k_actual)
    $ASSERT_EQUAL_kArray(gk_mat4_zero ' k_actual)
$END_TEST


$TEST(glm_mat4_mul)
    k_actual[] init 16

    glm_mat4_mul(gk_mat4_a, gk_mat4_b, k_actual)
    $ASSERT_EQUAL_kArray(gk_mat4_axb ' k_actual)

    glm_mat4_mul(gk_mat4_b, gk_mat4_a, k_actual)
    $ASSERT_EQUAL_kArray(gk_mat4_bxa ' k_actual)
$END_TEST


$TEST(glm_mat4_mulv3)
    k_expected[] fillarray 5.56, 5.72, 5.88
    k_actual[] init 3

    glm_mat4_mulv3(gk_mat4_a, gk_vec3_a, k_actual)
    $ASSERT_EQUAL_kArray(k_expected ' k_actual)
$END_TEST
