LIST P=18F4520 ;directive to define processor
#include <P18F4520.INC> ;CPU specific variable definitions

CONFIG OSC = XT
CONFIG WDT = OFF
CONFIG LVP = OFF

L_BYTE EQU 0
H_BYTE EQU 1
mem1 EQU 2
mem2 EQU 3
mem3 EQU 4
ORG 0x0000
goto Main
ORG 0x020

Main: movlw 0x28
movwf mem1
movlw 0x49
movwf mem2
movlw 0x99
movwf mem3
movlw 0
movwf L_BYTE
movwf H_BYTE
addwf mem1, W ;@
daw ;@
bnc K_1
incf H_BYTE,F

K_1: addwf mem2, W ;@
daw ;@
bnc K_2
incf H_BYTE, F

K_2: addwf mem3, W ;@
daw ;@
bnc K_3
incf H_BYTE, F ;@

K_3: movwf L_BYTE ;@
Here: bra Here

END