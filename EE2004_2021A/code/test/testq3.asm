LIST P=18F4520 ;directive to define processor
#include <P18F4520.INC> ;CPU specific variable definitions

CONFIG OSC = XT
CONFIG WDT = OFF
CONFIG LVP = OFF

ORG 0x0000
goto Start

ORG 40
Start:      
    movlw b'00000001'          ; select channel AN0 and enable A/D
    movwf ADCON0, A
    movlw b'00000001'          ; use VDD & VSS as reference voltages &
    movwf ADCON1, A            ; configure channel AN0 as analog input
    movlw b'01010011'          ; tad = (16e6/32)^-1 = 2e-6 > 1.8 tacq = 2x6
    movwf ADCON2, A            ; 01 010 011 select right justification
    clrf TRISD
    clrf PORTD

Here:       
    bsf ADCON0, GO, A       ; start A/D conversion
wait_con:   
    btfsc ADCON0, DONE, A   ; wait until conversion is done
    bra wait_con
    movff ADRESH, PORTD     ; transfer the conversion result to Port D
    goto Here

END

