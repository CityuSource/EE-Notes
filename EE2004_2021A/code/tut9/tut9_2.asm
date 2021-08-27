LIST P=18F4520 ;directive to define processor
#include <P18F4520.INC> ;CPU specific variable definitions

CONFIG OSC = XT
CONFIG WDT = OFF
CONFIG LVP = OFF

ORG 0x0000

goto Start
ORG 0x400

Start:      
    movlw 0x01          ; select channel AN0 and enable A/D
    movwf ADCON0, A
    movlw 0x0E          ; use VDD & VSS as reference voltages &
    movwf ADCON1, A     ; configure channel AN0 as analog input
    movlw 0x08          ; select right justification, set TACQ and TAD
    movwf ADCON2, A     ; 00 001 000
    clrf TRISD
    clrf PORTD

Here:       
    bsf ADCON0, GO, A       ; start A/D conversion
wait_con:   
    btfsc ADCON0, DONE, A   ; wait until conversion is done
    bra wait_con
    movff ADRESH, PRODH     ; save conversion result
    movff ADRESL, PRODL
    nop
    nop
    movff PRODH, PORTD
    goto Here

END