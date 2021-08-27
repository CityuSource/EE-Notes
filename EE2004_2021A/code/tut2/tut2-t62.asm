LIST P=18F4520 
#include <P18F4520.INC>

ORG	0x0000
Main:
movlw 0x20
xorlw 0x04
addlw 0x16
movlw 0x68
andlw 0x49
movlw 0x00
nop
nop
bra Main
END