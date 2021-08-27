LIST P=18F4520 ;directive to define processor
#include <P18F4520.INC> ;CPU specific variable definitions

ORG 0x0000
count EQU 0x05

cblock 0x10
char_A1, char_A2 ,char_A3 ,char_A4 ,char_A5
endc

cblock 0x90
char_B1 ,char_B2 ,char_B3 ,char_B4 ,char_B5
endc

cblock 0x70
char_C1 ,char_C2 ,char_C3 ,char_C4 ,char_C5
endc

lfsr 0, char_A1
lfsr 1, char_B1
lfsr 2, char_C1

setf TRISB

Main:
    btfss PORTB, 0
    call ADD
    btfss PORTB, 1
    call SUB
goto Main

ADD:
    movlw d'5'
    movwf count
    Loopadd:
        movf INDF0, w
        addwf INDF1, w
        movwf INDF2
        incf FSR0L, f
        incf FSR1L, f
        incf FSR2L, f
        decf count, f
        bnz Loopadd
return

SUB:
    movlw d'5'
    movwf count
    Loopsub:
        movf INDF0, w
        subwf INDF1, w
        movwf INDF2
        incf FSR0L, f
        incf FSR1L, f
        incf FSR2L, f
        decf count, f
        bnz Loopsub
return

END