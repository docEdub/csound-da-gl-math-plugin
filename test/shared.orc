
gS_Mat4_WrongOutputArrayDimensionsMessage       = "Mat4: output must have 1 dimension"
gS_Mat4_WrongArgument1ArrayDimensionsMessage    = "Mat4: argument 1 must have 1 dimension"
gS_Mat4_WrongArgument2ArrayDimensionsMessage    = "Mat4: argument 2 must have 1 dimension"
gS_Mat4_WrongOutputArraySizeMessage             = "Mat4: output must have 16 elements"
gS_Mat4_WrongArgument1ArraySizeMessage          = "Mat4: argument 1 must have 16 elements"
gS_Mat4_WrongArgument2ArraySizeMessage          = "Mat4: argument 2 must have 16 elements"

gS_Vec3_WrongOutputArrayDimensionsMessage       = "Vec3: output must have 1 dimension"
gS_Vec3_WrongArgument1ArrayDimensionsMessage    = "Vec3: argument 1 must have 1 dimension"
gS_Vec3_WrongArgument2ArrayDimensionsMessage    = "Vec3: argument 2 must have 1 dimension"
gS_Vec3_WrongOutputArraySizeMessage             = "Vec3: output must have 3 elements"
gS_Vec3_WrongArgument1ArraySizeMessage          = "Vec3: argument 1 must have 3 elements"
gS_Vec3_WrongArgument2ArraySizeMessage          = "Vec3: argument 2 must have 3 elements"

gS_Quat_WrongOutputArrayDimensionsMessage       = "Quat: output must have 1 dimension"
gS_Quat_WrongArgument1ArrayDimensionsMessage    = "Quat: argument 1 must have 1 dimension"
gS_Quat_WrongArgument2ArrayDimensionsMessage    = "Quat: argument 2 must have 1 dimension"
gS_Quat_WrongOutputArraySizeMessage             = "Quat: output must have 4 elements"
gS_Quat_WrongArgument1ArraySizeMessage          = "Quat: argument 1 must have 4 elements"
gS_Quat_WrongArgument2ArraySizeMessage          = "Quat: argument 2 must have 4 elements"

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
    0.0, 0.0, 0.0, 1.0

gk_mat4_a_scaled_x2[] fillarray \
    2.2, 2.4, 2.6, 2.8, \
    4.2, 4.4, 4.6, 4.8, \
    6.2, 6.4, 6.6, 6.8, \
    0.0, 0.0, 0.0, 2.0

gk_mat4_a_inverted[] fillarray \
    1200959900632128.000000, \
    -2401919801264272.000000, \
    1200959900632138.500000, \
    4.333333, \
    -2401919801264266.500000, \
    4803839602528533.000000, \
    -2401919801264272.000000, \
    7.333333, \
    1200959900632138.500000, \
    -2401919801264256.000000, \
    1200959900632128.000000, \
    -8.666667, \
    0.000000, \
    -0.000000, \
    0.000000, \
    -1.333333

gk_mat4_a_transposed[] fillarray \
    1.1, 2.1, 3.1, 0.0, \
    1.2, 2.2, 3.2, 0.0, \
    1.3, 2.3, 3.3, 0.0, \
    1.4, 2.4, 3.4, 1.0

gk_mat4_b[] fillarray \
    5.1, 5.2, 5.3, 5.4, \
    6.1, 6.2, 6.3, 6.4, \
    7.1, 7.2, 7.3, 7.4, \
    0.0, 0.0, 0.0, 1.0

gk_mat4_b_scaled_x2[] fillarray \
    10.2, 10.4, 10.6, 10.8, \
    12.2, 12.4, 12.6, 12.8, \
    14.2, 14.4, 14.6, 14.8, \
    00.0, 00.0, 00.0, 02.0

gk_mat4_b_inverted[] fillarray \
    -2641407406082.439941, \
    5282814812164.692383, \
    -2641407406082.439941, \
    -0.651026, \
    5282814812164.879883, \
    -10565629624329.572266, \
    5282814812164.879883, \
    -0.052786, \
    -2641407406082.251953, \
    5282814812164.879883, \
    -2641407406082.439941, \
    0.140762, \
    0, \
    0, \
    0, \
    0.530792

gk_mat4_b_transposed[] fillarray \
    5.1, 6.1, 7.1, 0.0, \
    5.2, 6.2, 7.2, 0.0, \
    5.3, 6.3, 7.3, 0.0, \
    5.4, 6.4, 7.4, 1.0

gk_mat4_axb[] fillarray \
    32.96, 34.52, 36.08, 43.04, \
    39.26, 41.12, 42.98, 51.24, \
    45.56, 47.72, 49.88, 59.44, \
    00.00, 00.00, 00.00, 01.00

gk_mat4_bxa[] fillarray \
    22.16, 22.52, 22.88, 24.64, \
    40.46, 41.12, 41.78, 44.84, \
    58.76, 59.72, 60.68, 65.04, \
    00.00, 00.00, 00.00, 01.00

gk_vec3_eulerAnglesXYZ[] fillarray \
    $M_PI * 30 / 180, \
    $M_PI * 45 / 180, \
    $M_PI * 60 / 180

gk_mat4_eulerAnglesXYZ[] fillarray \
     0.353553,  0.926777,  0.126826,  0.000000, \
    -0.612372,  0.126826,  0.780330,  0.000000, \
     0.707107, -0.353553,  0.612372,  0.000000, \
     0.000000,  0.000000,  0.000000,  1.000000
