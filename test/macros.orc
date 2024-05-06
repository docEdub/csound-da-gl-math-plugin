
#define TEST(InstrumentName) #
instr $InstrumentName
    prints("%s", nstrstr(p1))
#

#define END_TEST #
    printsk("\n")
    turnoff()
endin
#

#define ASSERT_EQUAL_k(Expected'Actual) #
    if ($Expected == $Actual) then
        printsk("\n  + PASSED:  ASSERT_EQUAL_k($Expected'$Actual)")
    else
        printsk("\n  - FAILED:  ASSERT_EQUAL_k($Expected'$Actual)")
        printsk("\n             Expected = %f", $Expected)
        printsk("\n               Actual = %f", $Actual)
        gk_failures += 1
    endif
#

#define ASSERT_EQUAL_kArray(Expected'Actual) #
    k_failed = 0
    if (lenarray($Expected) != lenarray($Actual)) then
        printsk("\n  - FAILED:  ASSERT_EQUAL_kArray($Expected'$Actual)")
        printsk("\n                 Expected length = %d", lenarray($Expected))
        printsk("\n                   Actual length = %d", lenarray($Actual))
        k_failed = 1
    else
        ki = 0
        k_printedFailed = 0
        while (ki < lenarray($Expected)) do
            if ($Expected[ki] != $Actual[ki]) then
                if (k_printedFailed == 0) then
                    printsk("\n  - FAILED:  ASSERT_EQUAL_kArray($Expected'$Actual)")
                    k_printedFailed = 1
                endif
                printsk("\n                 Expected[%d] = %f", ki, $Expected[ki])
                printsk("\n                   Actual[%d] = %f", ki, $Actual[ki])
                k_failed = 1
            endif
            ki += 1
        od
    endif

    if (k_failed == 0) then
        printsk("\n  + PASSED:  ASSERT_EQUAL_kArray($Expected'$Actual)")
    else
        gk_failures += 1
    endif
#
