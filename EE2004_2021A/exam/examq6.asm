LIST P=18F4520 ;directive to define processor
#include <P18F4520.INC> ;CPU specific variable definitions

;io
;CONFIG OSC = XT
;CONFIG WDT = OFF
;CONFIG LVP = OFF

ORG 0x0000
;CBLOCK 0x0010
;ENDC
goto Start

ORG 0x0080
Start:

;Here: goto Here

END