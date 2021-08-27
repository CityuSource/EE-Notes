LIST P=18F4520 ;directive to define processor
#include <P18F4520.INC> ;CPU specific variable definitions

;clock cycle time = 1us 30e3 8

bcf TRISB, 2
movlw 0x02
movwf T0CON

HERE:
    movlw 0x8a
    movwf TMR0H
    movlw 0xd0
    movwf TMR0L
    bcf INTCON, TMR0IF
    call DELAY
    btg PORTB, 2
    bra HERE

DELAY:
    bsf T0CON, TMR0ON
AGAIN: 
    btfss INTCON, TMR0IF
    bra AGAIN
    bcf T0CON, TMR0ON
    return

END