LIST P=18F4520 
#include <P18F4520.INC>

ORG 0x0000
Main:
movlw 0x27 
addlw 0x32
addlw 0x7F
nop
nop
goto
Main
nop
END