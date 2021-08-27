LIST P=18F4520 
#include <P18F4520.INC>

ORG 0x0000
Sum EQU 0x20        ;Sum @location 0x20
MOVLW 0H            ;set w = 0
MOVWF Sum           ;move w to sum
MOVLW 5H            ;set w
ADDWF Sum           ;add w to sum
MOVLW 6H            ;set w
ADDWF Sum           ;add w to sum
MOVLW 0H            ;set w
ADDWF Sum           ;add w to sum
MOVLW 4H            ;set w
ADDWF Sum           ;add w to sum
MOVLW 6H            ;set w
ADDWF Sum           ;add w to sum
MOVLW 6H            ;set w
ADDWF Sum           ;add w to sum
MOVLW 8H            ;set w
ADDWF Sum           ;add w to sum
MOVLW 0H            ;set w
ADDWF Sum           ;add w to sum
Result: GOTO Result ;stay here forever
END