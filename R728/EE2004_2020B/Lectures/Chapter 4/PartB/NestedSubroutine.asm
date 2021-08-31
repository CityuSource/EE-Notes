; EE2004
; Instructor: Bernard Chiu
; Handout demonstrating the nested subroutine calls.

				LIST	P=18F4520			;directive to define processor
				#include <P18F4520.INC>		;processor specific variable definitions
				
				CBLOCK 0X00
				finput
				ginput
				foutput
				goutput
				endc
;------------------------------------------------------------------------------

				ORG		0x0000
				goto	Main				;go to start of main code

;------------------------------------------------------------------------------
;Start of main program

Main:			movlw 0x07
				movwf finput, A
				call f                      ; Point 1
				movf foutput, W, A
				bra $

f: 				movf finput, W, A			;[WREG] = [finput]
				addlw 0x18					;[WREG] = [WREG] + 0x18	
				movwf ginput, A				;[ginput] = [WREG]
				call g	                    ; Point 2
				movf goutput, W, A			;[WREG] = [goutput]
				addlw 0x05					;[WREG] = [WREG] + 0x05
				movwf foutput, A			;[foutput] = [WREG]
				return                      ; Point 3

g:				movf ginput, W, A; [WREG] = [ginput]
				addlw 0x12; [WREG] = [WREG] + 0x12
				movwf goutput, A; [goutput] = [WREG]
				return                      ; Point 4
;******************************************************************************
;End of program
;
				END
