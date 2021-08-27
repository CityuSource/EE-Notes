LIST P=18F4520 
#include <P18F4520.INC>

ORG 0x0000          ;id = 56046680
clrf TRISD, 0x00    ;protd -> output
Sum EQU 0x10        ;Sum @location 0x10
MOVLW 0H            ;set w = 0
MOVWF Sum           ;move w to sum
MOVWF PORTD         ;move w to portd

MOVLW 5H            ;set w
ADDWF Sum           ;add w to sum
MOVWF PORTD         ;move w to portd
MOVLW 6H            ;set w
ADDWF Sum           ;add w to sum
MOVWF PORTD         ;move w to portd
MOVLW 0H            ;set w
ADDWF Sum           ;add w to sum
MOVWF PORTD         ;move w to portd
MOVLW 4H            ;set w
ADDWF Sum           ;add w to sum
MOVWF PORTD         ;move w to portd
MOVLW 6H            ;set w
ADDWF Sum           ;add w to sum
MOVWF PORTD         ;move w to portd
MOVLW 6H            ;set w
ADDWF Sum           ;add w to sum
MOVWF PORTD         ;move w to portd
MOVLW 8H            ;set w
ADDWF Sum           ;add w to sum
MOVWF PORTD         ;move w to portd
MOVLW 0H            ;set w
ADDWF Sum           ;add w to sum
MOVWF PORTD         ;move w to portd
Result: GOTO Result ;stay here forever

END