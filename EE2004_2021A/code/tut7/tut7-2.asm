LIST P=18F4520 ;directive to define processor
#include <P18F4520.INC> ;CPU specific variable definitions

CONFIG OSC = XT
CONFIG WDT = OFF
CONFIG LVP = OFF

L_result EQU 0
H_result EQU 1
number_1_L_byte EQU 2
number_1_H_byte EQU 3
number_2_L_byte EQU 4
number_2_H_byte EQU 5

ORG 0x0000
goto Main
ORG 0x020
movlw 0x00

Main: movlw 0x69
movwf number_1_L_byte
movlw 0x48
movwf number_1_H_byte
movlw 0x47
movwf number_2_L_byte
movlw 0x89
movwf number_2_H_byte
movf number_1_L_byte, W
addwf number_2_L_byte, W ;@
daw ;@
movwf L_result ;@
movf number_1_H_byte, W
addwfc number_2_H_byte, W ;@
daw ;@
movwf H_result ;@

Here: bra Here
END