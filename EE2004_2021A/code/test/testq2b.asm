LIST P=18F4520 ;directive to define processor
#include <P18F4520.INC> ;CPU specific variable definitions

ORG 0x0000
count EQU 0x05

cblock 0x10
char_A: 5
endc

cblock 0x90
char_B: 5
endc

cblock 0x70
char_C: 5
endc

lfsr 0, char_A
lfsr 1, char_B
lfsr 2, char_C

movlw d'5'
movwf count
Loop:
    movf INDF0, w
    subwf INDF1, w
    movwf INDF2

    incf FSR0L, f
    incf FSR1L, f
    incf FSR2L, f

    decf count, f
    bnz Loop

END