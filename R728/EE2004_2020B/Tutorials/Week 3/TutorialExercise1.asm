				LIST	P=18F4520			;directive to define processor
				#include <P18F4520.INC>		;processor specific variable definitions

;------------------------------------------------------------------------------

				ORG		0x0000

;------------------------------------------------------------------------------
;Start of main program

Main:	movlw  0x32
		movwf  0x05, A
	 	movlw  0xDF
		addwf  0x05, F, A
		movlw  0x34
		movwf  0x06, A
		movlw  0x57		
		addwfc 0x06, F, A

;******************************************************************************
;End of program
;
				END
