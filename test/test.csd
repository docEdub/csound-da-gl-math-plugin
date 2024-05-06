<CsoundSynthesizer>
<CsOptions>

--messagelevel=0
--nodisplays
--nosound
--output=null

-+msg_color=false

</CsOptions>
<CsInstruments>

nchnls = 1
sr = 48000
kr = 4800
0dbfs = 1

gk_failures init 0

#include "macros.orc"
#include "test-mat4.orc"

instr RunTests
    prints("\n")
    prints("------------------------------------------------------------------\n")

    ki init 0
    k_previousFailureCount init 0
    while (ki < nstrnum(p1)) do
        if (active(ki) > 0 && ki > 0) then
            printsk("%d is active\n", ki)
            kgoto end
        else
            ki += 1
            if (ki < nstrnum(p1)) then
                printsk("\n")
                event("i", ki, 0, p3)
                kgoto end
            endif
        endif
    od

    printsk("------------------------------------------------------------------\n")
    printsk("\n")

    if (gk_failures == 0) then
        printsk("All tests passed.\n")
    else
        printsk("%d tests failed.\n", gk_failures)
    endif

    printsk("\n")

    event("i", "Exit", 0, 1)
end:
endin

instr Exit
    exitnow(i(gk_failures))
endin

</CsInstruments>
<CsScore>

i "RunTests" 0 1000

</CsScore>
</CsoundSynthesizer>
