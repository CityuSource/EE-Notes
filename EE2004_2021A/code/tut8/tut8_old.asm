LIST P=18F4520 ;directive to define processor
#include <P18F4520.INC> ;CPU specific variable definitions

;4x4 button input and 4 digit LED display

CONFIG OSC = XT
CONFIG WDT = OFF
CONFIG LVP = OFF

ORG 0x0000
movlw 0x0f
movwf ADCON1
clrf TRISB ;Set Port B direction output
clrf TRISD ;Set Port D direction output
clrf PORTB
clrf PORTD

CBLOCK 0x20
    DELAY_REG_inner     ;20
    DELAY_REG_mid
    DELAY_REG_outer
    input_times
    input_reg
ENDC

goto Start
ORG 0x00F0

Start:
call repeat_times

Loop0:  movlw 0x00
        movwf PORTB
        movwf input_reg
        call table_1
        movwf PORTD
        call Delay

        movlw 0x01
        movwf input_reg
        call table_1
        movwf PORTD
        call Delay

        movlw 0x02
        movwf input_reg
        call table_1
        movwf PORTD
        call Delay

        movlw 0x03
        movwf input_reg
        call table_1
        movwf PORTD
        call Delay

        decf input_times, f
        bnz Loop0

call repeat_times

Loop1:  movlw 0x01
        movwf PORTB
        movlw 0x04
        movwf input_reg
        call table_1
        movwf PORTD
        call Delay

        movlw 0x05
        movwf input_reg
        call table_1
        movwf PORTD
        call Delay

        movlw 0x06
        movwf input_reg
        call table_1
        movwf PORTD
        call Delay

        movlw 0x07
        movwf input_reg
        call table_1
        movwf PORTD
        call Delay

        decf input_times, f
        bnz Loop1

call repeat_times

Loop2:  movlw 0x02
        movwf PORTB
        movlw 0x08
        movwf input_reg
        call table_1
        movwf PORTD
        call Delay

        movlw 0x09
        movwf input_reg
        call table_1
        movwf PORTD
        call Delay

        movlw 0x0a
        movwf input_reg
        call table_1
        movwf PORTD
        call Delay

        movlw 0x0b
        movwf input_reg
        call table_1
        movwf PORTD
        call Delay

        decf input_times, f
        bnz Loop2

call repeat_times

Loop3:  movlw 0x03
        movwf PORTB
        movlw 0x0c
        movwf input_reg
        call table_1
        movwf PORTD
        call Delay

        movlw 0x0d
        movwf input_reg
        call table_1
        movwf PORTD
        call Delay

        movlw 0x0e
        movwf input_reg
        call table_1
        movwf PORTD
        call Delay

        movlw 0x0f
        movwf input_reg
        call table_1
        movwf PORTD
        call Delay

        decf input_times, f
        bnz Loop3

goto Start

;repeat n times
repeat_times:   movlw 0x02
                movwf input_times
return

;delay function with 1000ms
Delay:      movlw d'8'
            movwf DELAY_REG_outer
Delay_2:    movlw d'250'
            movwf DELAY_REG_mid
Delay_3:    movlw d'250'
            movwf DELAY_REG_inner
Delay_4:    nop
            nop
            decf DELAY_REG_inner, f
            bnz Delay_4
            decf DELAY_REG_mid, f
            bnz Delay_3
            decf DELAY_REG_outer, f
            bnz Delay_2
return

table_1:    movlw low table_1_data
            movwf TBLPTRL
            movlw high table_1_data
            movwf TBLPTRH
            movlw upper table_1_data
            movwf TBLPTRU
            movf input_reg, w
            mullw 0x02
            movf PRODL, w
            addwf TBLPTRL       ;pointer + input
            movlw 0x00
            addwfc TBLPTRH
            addwfc TBLPTRU  
            TBLRD*
            movf TABLAT, w
return

ORG 0x0030
table_1_data
    db 0x3f
    db 0x06
    db 0x5b
    db 0x4f

    db 0x66
    db 0x6d
    db 0x7d
    db 0x07

    db 0x7f
    db 0x6f
    db 0x77
    db 0x7c

    db 0x39
    db 0x5e
    db 0x79
    db 0x71
END