LIST P=18F4520 ;directive to define processor
#include <P18F4520.INC> ;CPU specific variable definitions

;8 button input and 1 digit LED display

CONFIG OSC = XT
CONFIG WDT = OFF
CONFIG LVP = OFF
DELAY_REG EQU 0xF0

ORG 0x0000
goto Main
ORG 0x0030

Main:
movlw 0x0f
movwf ADCON1
clrf TRISD
setf TRISC
movlw 0x3F
movwf PORTD

Loop:
btfss PORTC, 0
call p1
btfss PORTC, 1
call p2
btfss PORTC, 2
call p3
btfss PORTC, 3
call p4
btfss PORTC, 4
call p5
btfss PORTC, 5
call p6
btfss PORTC, 6
call p7
btfss PORTC, 7
call p8
goto Loop

Delay: movlw 0x20 ; delay function with 02
movwf DELAY_REG
LOOP: decf DELAY_REG, F
bnz LOOP
return

p1: movlw 0x06
movwf PORTD
call Delay
wait_up_p1: btfss PORTC, 0
bra wait_up_p1
call Delay
return

p2: movlw 0x5B
movwf PORTD
call Delay
wait_up_p2: btfss PORTC, 1
bra wait_up_p2
call Delay
return

p3: movlw 0x4F
movwf PORTD
call Delay
wait_up_p3: btfss PORTC, 2
bra wait_up_p3
call Delay
return

p4: movlw 0x66
movwf PORTD
call Delay
wait_up_p4: btfss PORTC, 3
bra wait_up_p4
call Delay
return

p5: movlw 0x6D
movwf PORTD
call Delay
wait_up_p5: btfss PORTC, 4
bra wait_up_p5
call Delay
return

p6: movlw 0x7D
movwf PORTD
call Delay
wait_up_p6: btfss PORTC, 5
bra wait_up_p6
call Delay
return

p7: movlw 0x07
movwf PORTD
call Delay
wait_up_p7: btfss PORTC, 6
bra wait_up_p7
call Delay
return

p8: movlw 0x7F
movwf PORTD
call Delay
wait_up_p8: btfss PORTC, 7
bra wait_up_p8
call Delay
return

END