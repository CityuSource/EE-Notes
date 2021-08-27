LIST P=18F4520 ;directive to define processor
#include <P18F4520.INC> ;CPU specific variable definitions
;------------------------------
;Configuration bits definitions
;
CONFIG OSC = XT
CONFIG WDT = OFF
CONFIG LVP = OFF
;--------------------
;Reset vector
DELAY_REG EQU 0xF0
ORG 0x0000 ;code origin, program starts from here
goto Main
ORG 0x0100
Main: movlw 0x0F
movwf ADCON1
clrf TRISC ;Set Port C direction output
clrf PORTC

Loop: ; ID = 56046680
movlw 0x6D ;Display ‘5’
movwf PORTC
call Delay
movlw 0x7D ;Display ‘6’
movwf PORTC
call Delay
movlw 0x3F ;Display ‘0’
movwf PORTC
call Delay
movlw 0x66 ;Display ‘4’
movwf PORTC
call Delay
movlw 0x7D ;Display ‘6’
movwf PORTC
call Delay
movlw 0x7D ;Display ‘6’
movwf PORTC
call Delay
movlw 0x7F ;Display ‘8’
movwf PORTC
call Delay
movlw 0x3F ;Display ‘0’
movwf PORTC
call Delay
goto Loop

Delay: movlw 0x0F ; delay function with 0F
movwf DELAY_REG
LOOP: decf DELAY_REG, F
bnz LOOP
return

END