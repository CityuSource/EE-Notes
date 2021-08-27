LIST P=18F4520 ;directive to define processor
#include <P18F4520.INC> ;CPU specific variable definitions

CONFIG OSC = XT
CONFIG WDT = OFF
CONFIG LVP = OFF

ORG 0x0000

bcf TRISB, 6
movlw 0x08
movwf T0CON             ;cycle t = 0.25e-6
Here: 
    movlw 0xfd
    movwf TMR0H
    movlw 0x65
    movwf TMR0L
    bcf INTCON, TMR0IF
    call Delay
    btg PORTB, 6
    bra Here

Delay:
    bsf T0CON, TMR0ON
Again:
    btfss INTCON,TMR0IF
    bra Again
    bcf T0CON, TMR0ON
    return

END


