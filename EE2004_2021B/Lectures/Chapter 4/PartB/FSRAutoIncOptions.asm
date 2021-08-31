; EE 2004 
; Instructor: Bernard Chiu
; Handout demonstrating auto-increment options in Section 3.5.

				LIST	P=18F4520			;directive to define processor
				#include <P18F4520.INC>		;processor specific variable definitions

;------------------------------------------------------------------------------
				ORG		0x0000

;------------------------------------------------------------------------------
;Initialization

		lfsr 0, 0x020;  [FSR0] = 0x020
		movlw 0x05;     [WREG] = 0x05

		; Please uncomment any one of the following line
		; and verify the result.
		
		;(a) POSTDEC0

		;movwf POSTDEC0

		; Result after operation: [FSR0] = 0x01F, [020] = 0x05

		;(b) POSTINC0

		;movwf POSTINC0

		;Result after operation: [FSR0] = 0x021, [020] = 0x05

		;(c) PREINC0

		;movwf PREINC0

		; Result after operation: [FSR0] = 0x021, [021] = 0x05

		;(d) PLUSW0
		
		movwf PLUSW0

		; Result after operation: [FSR0] = 0x020 (unchanged), [025] = 0x05

	    END