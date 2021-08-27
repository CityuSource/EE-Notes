LIST P=18F4520 ;directive to define processor
#include <P18F4520.INC> ;CPU specific variable definitions

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
    DELAY_REG_inner
    DELAY_REG_mid
    DELAY_REG_outer
    input_times             ;repeat times for each set of number
    output_4times           ;4 output display -> loop 4 times for each LED
    output_placement_ini    ;inital place for the LED
    input_reg               ;input reg for the table
ENDC

goto Start
ORG 0x00F0

Start:  movlw 0x04
        movwf output_4times
        clrf output_placement_ini
        call Big_loop
        goto Start

Big_loop:   call repeat_times
            inner_loop:  
                    movff output_placement_ini, PORTB
                    movf output_placement_ini, w
                    mullw 0x04
                    movff PRODL, input_reg

                    call table_1
                    movwf PORTD
                    call Delay

                    incf input_reg, f
                    call table_1
                    movwf PORTD
                    call Delay

                    incf input_reg, f
                    call table_1
                    movwf PORTD
                    call Delay

                    incf input_reg, f
                    call table_1
                    movwf PORTD
                    call Delay

                    decf input_times, f
                    bnz inner_loop
            incf output_placement_ini, f
            decf output_4times, f
            bnz Big_loop
return

;repeat times for the display: set to 3
repeat_times:   movlw 0x03
                movwf input_times
return

;delay function
Delay:      movlw d'4'
            movwf DELAY_REG_outer
Delay_2:    movlw d'250'
            movwf DELAY_REG_mid
Delay_3:    movlw d'50'
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

;look-up table function
table_1:    movlw low table_1_data
            movwf TBLPTRL
            movlw high table_1_data
            movwf TBLPTRH
            movlw upper table_1_data
            movwf TBLPTRU
            movf input_reg, w
            mullw 0x02
            movf PRODL, w
            addwf TBLPTRL
            movlw 0x00
            addwfc TBLPTRH
            addwfc TBLPTRU  
            TBLRD*
            movf TABLAT, w
return

ORG 0x0030
table_1_data
    db 0x3f ;0
    db 0x06
    db 0x5b
    db 0x4f
    db 0x66 ;4
    db 0x6d
    db 0x7d
    db 0x07
    db 0x7f ;8
    db 0x6f
    db 0x77
    db 0x7c
    db 0x39 ;12
    db 0x5e
    db 0x79
    db 0x71
END
