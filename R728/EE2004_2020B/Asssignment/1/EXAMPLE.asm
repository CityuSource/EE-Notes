				LIST	P=18F4520			;directive to define processor
				#include <P18F4520.INC>		;processor specific variable definitions

;------------------------------------------------------------------------------
CBLOCK 0x03
BankB
MyReg
BankA
ENDC

ORG 0x0000
goto Main 
;------------------------------------------------------------------------------

Main:		movlw BankA
			movlw 0x93
			movwf MyReg, A
			movlw 0x20
			addwf MyReg, F, A

			movlw 0xFF
			movwf MyReg, BANKED
			movlw 0xD5
			addwf MyReg, F, BANKED
			
			movlb BankB
			movlw 0x80
			movwf MyReg, BANKED
			movlw 0x7F
			andwf MyReg, F, BANKED
	END