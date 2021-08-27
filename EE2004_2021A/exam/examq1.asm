LIST P=18F4520 ;directive to define processor
#include <P18F4520.INC> ;CPU specific variable definitions

R1 EQU 0x0010
R2 EQU 0x0011

delay:
    movlw 0x3e ;62
    movwf R1
again:
    movlw 0x9a ;154
    movwf R2
here:
    nop
    nop
    decf R2, f
    bnz here
    decf R1, f
    bnz again
nop
nop
nop
nop
nop
nop
nop
nop
nop
nop

return

END