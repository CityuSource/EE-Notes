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

Main: movlw 0x41
movwf number_1_L_byte
movlw 0x98
movwf number_1_H_byte
movlw 0x23
movwf number_2_L_byte
movlw 0x24
movwf number_2_H_byte

movf number_1_L_byte, W
subwf number_2_L_byte, W ;@
movwf L_result ;@
movf number_1_H_byte, W
subwfb number_2_H_byte, W ;@
movwf H_result ;@

Here: bra Here
END