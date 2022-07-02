; EE2004
; Instructor: Bernard Chiu
; Handout demonstrating the subroutine calls.

				LIST	P=18F4520			;directive to define processor
				#include <P18F4520.INC>		;processor specific variable definitions
				
MyReg equ 0x20

;------------------------------------------------------------------------------

				ORG		0x0000
				goto	Main				;go to start of main code

;------------------------------------------------------------------------------
;Start of main program

Main:			movlb 0x2			   ;set BSR = 2; Bank 2	
				clrf MyReg, A          ;clear contents in data memory address 020
				clrf MyReg, BANKED     ;clear contents in data memory address 220
				call UseBSR
				clrf WREG
				movf MyReg, W, BANKED
				bra $

UseBSR: 		movlw 0x32
				movwf MyReg, BANKED    ;mov to data memory address 220
				movlw 0x45
				addwf MyReg, F, BANKED ;sum stored in data memory address 220
				return
				
;******************************************************************************
;End of program
;
				END
