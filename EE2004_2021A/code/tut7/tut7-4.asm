LIST P=18F4520 ;directive to define processor
#include <P18F4520.INC> ;CPU specific variable definitions

;4x4 button input and 4 digit LED display

CONFIG OSC = XT
CONFIG WDT = OFF
CONFIG LVP = OFF

ORG 0x0000
DELAY_REG EQU 0x20
clrf TRISB  ;Set Port B direction output
clrf TRISD  ;Set Port D direction output
clrf PORTB  ;reset PORTB
clrf PORTD  ;reset PORTD
movlw 0xf0  ;1111 0000
movwf TRISC ;Set Port C direction with 0~3:output 4~7:input

goto Big_Loop
ORG 0x0030

Big_Loop:

movlw 0x0E      ;0000 1110
movwf PORTC     ;set to detect row 1 (p1 to p4)
btfss PORTC, 4  ;button column 1
call display_1
btfss PORTC, 5  ;button column 2
call display_2
btfss PORTC, 6  ;button column 3
call display_3
btfss PORTC, 7  ;button column 4
call display_4

movlw 0x0D      ;0000 1101
movwf PORTC     ;set to detect row 2 (p5 to p8)
btfss PORTC, 4  ;button column 1
call display_5
btfss PORTC, 5  ;button column 2
call display_6
btfss PORTC, 6  ;button column 3
call display_7
btfss PORTC, 7  ;button column 4
call display_8

movlw 0x0B      ;0000 1011
movwf PORTC     ;set to detect row 3 (p9 to p12)
btfss PORTC, 4  ;button column 1
call display_9
btfss PORTC, 5  ;button column 2
call display_10
btfss PORTC, 6  ;button column 3
call display_11
btfss PORTC, 7  ;button column 4
call display_12

movlw 0x07      ;0000 0111
movwf PORTC     ;set to detect row 4 (p13 to p16)
btfss PORTC, 4  ;button column 1
call display_13
btfss PORTC, 5  ;button column 2
call display_14
btfss PORTC, 6  ;button column 3
call display_15
btfss PORTC, 7  ;button column 4
call display_16

goto Big_Loop

Delay: movlw 0x02 ; delay function with 02
movwf DELAY_REG
Delay_loop: decf DELAY_REG, F
bnz Delay_loop
return

display_1: movlw 0x00 ;Turn on LED0
movwf PORTB
clrf PORTD
movlw 0x06 ;Display ‘1’
movwf PORTD
call Delay
wait_up_p1: btfss PORTC, 4 ;button column 1
bra wait_up_p1
call Delay
return

display_2: movlw 0x00 ;Turn on LED0
movwf PORTB
clrf PORTD
movlw 0x5b ;Display ‘2’
movwf PORTD
call Delay
wait_up_p2: btfss PORTC, 5 ;button column 2
bra wait_up_p2
call Delay
return

display_3: movlw 0x00 ;Turn on LED0
movwf PORTB
clrf PORTD
movlw 0x4f ;Display ‘3’
movwf PORTD
call Delay
wait_up_p3: btfss PORTC, 6 ;button column 3
bra wait_up_p3
call Delay
return

display_4: movlw 0x00 ;Turn on LED0
movwf PORTB
clrf PORTD
movlw 0x66 ;Display ‘3’
movwf PORTD
call Delay
wait_up_p4: btfss PORTC, 7 ;button column 4
bra wait_up_p4
call Delay
return

display_5: movlw 0x01 ;Turn on LED1
movwf PORTB
clrf PORTD
movlw 0x6d ;Display ‘5’
movwf PORTD
call Delay
wait_up_p5: btfss PORTC, 4 ;button column 1
bra wait_up_p5
call Delay
return

display_6: movlw 0x01 ;Turn on LED1
movwf PORTB
clrf PORTD
movlw 0x7d ;Display ‘6’
movwf PORTD
call Delay
wait_up_p6: btfss PORTC, 5 ;button column 2
bra wait_up_p6
call Delay
return

display_7: movlw 0x01 ;Turn on LED1
movwf PORTB
clrf PORTD
movlw 0x07 ;Display ‘7’
movwf PORTD
call Delay
wait_up_p7: btfss PORTC, 6 ;button column 3
bra wait_up_p7
call Delay
return

display_8: movlw 0x01 ;Turn on LED1
movwf PORTB
clrf PORTD
movlw 0x7F ;Display ‘8’
movwf PORTD
call Delay
wait_up_p8: btfss PORTC, 7 ;button column 4
bra wait_up_p8
call Delay
return

display_9: movlw 0x02 ;Turn on LED2
movwf PORTB
clrf PORTD
movlw 0x6f ;Display ‘9’
movwf PORTD
call Delay
wait_up_p9: btfss PORTC, 4 ;button column 1
bra wait_up_p9
call Delay
return

display_10: movlw 0x02 ;Turn on LED2
movwf PORTB
clrf PORTD
movlw 0x77 ;Display ‘a’
movwf PORTD
call Delay
wait_up_p10: btfss PORTC, 5 ;button column 2
bra wait_up_p10
call Delay
return

display_11: movlw 0x02 ;Turn on LED2
movwf PORTB
clrf PORTD
movlw 0x7c ;Display ‘b’
movwf PORTD
call Delay
wait_up_p11: btfss PORTC, 6 ;button column 3
bra wait_up_p11
call Delay
return

display_12: movlw 0x02 ;Turn on LED2
movwf PORTB
clrf PORTD
movlw 0x39 ;Display ‘c’
movwf PORTD
call Delay
wait_up_p12: btfss PORTC, 7 ;button column 4
bra wait_up_p12
call Delay
return

display_13: movlw 0x03 ;Turn on LED3
movwf PORTB
clrf PORTD
movlw 0x5e ;Display ‘d’
movwf PORTD
call Delay
wait_up_p13: btfss PORTC, 4 ;button column 1
bra wait_up_p13
call Delay
return

display_14: movlw 0x03 ;Turn on LED3
movwf PORTB
clrf PORTD
movlw 0x79 ;Display ‘e’
movwf PORTD
call Delay
wait_up_p14: btfss PORTC, 5 ;button column 2
bra wait_up_p14
call Delay
return

display_15: movlw 0x03 ;Turn on LED3
movwf PORTB
clrf PORTD
movlw 0x71 ;Display ‘f’
movwf PORTD
call Delay
wait_up_p15: btfss PORTC, 6 ;button column 3
bra wait_up_p15
call Delay
return

display_16: movlw 0x03 ;Turn on LED3
movwf PORTB
clrf PORTD
movlw 0x3f ;Display ‘0’
movwf PORTD
call Delay
wait_up_p16: btfss PORTC, 7 ;button column 4
bra wait_up_p16
call Delay
return

END