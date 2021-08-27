LIST P=18F4520 ;directive to define processor
#include <P18F4520.INC> ;CPU specific variable definitions

;4 digit LED display

DELAY_REG EQU 0xF0
ORG 0x0000
clrf TRISB ;Set Port B direction output
clrf TRISD ;Set Port D direction output
clrf PORTB

Loop:
clrf PORTD
movlw 0x00 ;Turn on LED0
movwf PORTB
movlw 0x7D ;Display ‘6’
movwf PORTD
call Delay
clrf PORTD
movlw 0x01 ;Turn on LED1
movwf PORTB
movlw 0x7F ;Display ‘8’
movwf PORTD
call Delay
clrf PORTD
movlw 0x02 ;Turn on LED2
movwf PORTB
movlw 0x3F ;Display ‘0’
movwf PORTD
call Delay
clrf PORTD
movlw 0x03 ;Turn on LED3
movwf PORTB
movlw 0x71 ;Display ‘F’
movwf PORTD
call Delay
goto Loop

Delay: movlw 0x02 ; delay function with 02
movwf DELAY_REG
LOOP: decf DELAY_REG, F
bnz LOOP
return

END