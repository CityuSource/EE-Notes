				LIST	P=18F4520			;directive to define processor
				#include <P18F4520.INC>		;processor specific variable definitions

;------------------------------------------------------------------------------
InputBCD equ 0x00
OutputHex equ 0x01
Temp equ 0x02

ORG 0x0000
goto Main 
;------------------------------------------------------------------------------
org 0x000036
Main:		movlw 0x54
			movwf InputBCD, A
			call BCD2Hex
			bra $
			
BCD2Hex:	andlw 0x0F
			movwf Temp, A
			movlw InputBCD

			swapf WREG
			andlw 0x0F
			addwf Temp
			movFF Temp, OutputHex
			return
			
	END