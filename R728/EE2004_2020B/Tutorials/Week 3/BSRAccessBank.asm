; EE2004
; Instructor: Bernard Chiu
; Handout demonstrating the difference 
; between two uses of the data memory:
; (a) Use of access bank
; (b) Use of Bank Select Register (BSR)


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
				goto UseBSR
				;goto UseAccessBank

UseAccessBank: 	movlw 0x32			   
				movwf MyReg, A		   ;mov to data memory address 020
				movlw 0x45
				addwf MyReg, F         ;sum stored in data memory address 020
				bra $

UseBSR: 		movlw 0x32
				movwf MyReg, BANKED    ;mov to data memory address 220
				movlw 0x45
				addwf MyReg, F, BANKED ;sum stored in data memory address 220
				bra $
				
;******************************************************************************
;End of program
;
				END
