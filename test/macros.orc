
#define TEST(InstrumentName) #
instr $InstrumentName
    prints("%s\n", nstrstr(p1))
    prints("  ")
#

#define END_TEST #
    // Decrement failure count to account for proactively incremented count.
    ; prints("\n")
    ; prints("Decrementing gi_failures\n")
    gi_failures -= 1
    ; prints("gi_failures = %d\n", gi_failures)

    turnoff()
endin
#

#define FUZZY_EQUAL(Expected'Actual) #abs($Expected - $Actual) < 0.0001#
#define FUZZY_UNEQUAL(Expected'Actual) #abs($Expected - $Actual) > 0.0001#

#define ASSERT_EQUAL_k(Expected'Actual) #
    if ($FUZZY_EQUAL($Expected ' $Actual)) then
        ; printsk("  + PASSED:  ASSERT_EQUAL_k($Expected'$Actual)\n")
        printsk(".")
    else
        printsk("  - FAILED:  ASSERT_EQUAL_k($Expected'$Actual)\n")
        printsk("             Expected = %f\n", $Expected)
        printsk("               Actual = %f\n", $Actual)
        printsk("  ")
        gk_failures += 1
    endif
#

#define ASSERT_EQUAL_kArray(Expected'Actual) #
    k_failed = 0
    if (lenarray($Expected) != lenarray($Actual)) then
        printsk("  - FAILED:  ASSERT_EQUAL_kArray($Expected'$Actual)\n")
        printsk("                 Expected length = %d\n", lenarray($Expected))
        printsk("                   Actual length = %d\n", lenarray($Actual))
        printsk("  ")
        k_failed = 1
    else
        ki = 0
        k_printedFailed = 0
        while (ki < lenarray($Expected)) do
            if ($FUZZY_UNEQUAL($Expected[ki] ' $Actual[ki])) then
                if (k_printedFailed == 0) then
                    printsk("  - FAILED:  ASSERT_EQUAL_kArray($Expected'$Actual)\n")
                    k_printedFailed = 1
                endif
                printsk("                 Expected[%d] = %f\n", ki, $Expected[ki])
                printsk("                   Actual[%d] = %f\n", ki, $Actual[ki])
                printsk("  ")
                k_failed = 1
            endif
            ki += 1
        od
    endif

    if (k_failed == 0) then
        ; printsk("  + PASSED:  ASSERT_EQUAL_kArray($Expected'$Actual)\n")
        printsk(".")
    else
        gk_failures += 1
    endif
#
