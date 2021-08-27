LIST P=18F4520 ;directive to define processor
#include <P18F4520.INC> ;CPU specific variable definitions

ORG 0x0000
CBLOCK 0x0010
    L_Byte
    H_Byte
    D1
    D2
    D3
    D4
ENDC
goto Start

ORG 0x0080
Start:  ;56 04 66 80
    movlw 0x56
    movwf D1
    movlw 0x04
    movwf D2
    movlw 0x66
    movwf D3
    movlw 0x80
    movwf D4
    clrf L_Byte
    clrf H_Byte
    movf L_Byte, w
    addwf D1, w
    daw
    bnc N_1
    incf H_Byte,f
N_1:
    addwf D2, w
    daw
    bnc N_2
    incf H_Byte,f
N_2:
    addwf D3, w
    daw
    bnc N_3
    incf H_Byte,f
N_3:
    addwf D4, w
    daw
    bnc N_4
    incf H_Byte,f
N_4:
    movwf L_Byte

Here: goto Here

END