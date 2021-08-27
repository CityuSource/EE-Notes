LIST P=18F4520 ;directive to define processor
#include <P18F4520.INC> ;CPU specific variable definitions

CONFIG OSC = XT
CONFIG WDT = OFF
CONFIG LVP = OFF

ORG 0x0000

bcf TRISB, 7
movlw 0x08
movwf T1CON             ;cycle t = 0.25e-6
Here: 
    movlw 0x00
    movwf TMR1H
    movlw 0x01
    movwf TMR1L
    bcf INTCON, TMR1IF
    call Delay
    btg PORTB, 7
    bra Here

Delay:
    bsf T1CON, TMR1ON
Again:
    btfss INTCON,TMR1IF
    bra Again
    bcf T1CON, TMR1ON
    return

END

