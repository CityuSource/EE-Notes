; EE 2004 
; Instructor: Bernard Chiu
; This program demonstrates two ways for implementing a lookup table. 

;------------------------------------------------------------------------------
				LIST	P=18F4520			;directive to define processor
				#include <P18F4520.INC>		;processor specific variable definitions

;------------------------------------------------------------------------------
x equ 0x00
COUNT equ 0x01
COUNTA equ 0x02
COUNTB equ 0x03
temp equ 0x04
		ORG 0x000000
		goto Main


Main:  			clrf WREG
				lfsr 0, 0x40
				movlw 0xF1
				call Init
				movlw 0x54
				call Init
				movlw 0xAC
				call Init
				movlw 0x3F
				call Init
				
				lfsr 0, 0x40
				lfsr 1, 0x50
				
				movlw 0x04
				movwf COUNTA, A
				
Bittiess:		movlw 0x04
				movwf COUNTB, A
				movf INDF0, W ,A
				call MSB
				call Init2
				
				movf POSTINC0, W ,A
				call LSB
				call Init2
				decfsz COUNTA, F, A
				bra Bittiess
				
				lfsr 0, 0x40
				lfsr 1, 0x50
				movlw 0x04
				movwf COUNTA, A
				
Convert:		call f_Table
				call f_Table
				decfsz COUNTA, F, A
				bnn Convert
				bra$

f_Table:		movlw	upper array
				movwf	TBLPTRU
				movlw	high array
				movwf	TBLPTRH
				movlw	low array
				movwf	TBLPTRL
	        	movf    INDF1, W, A
				addlw   0x01
				movwf   COUNT, A
Loop:       	tblrd*+
            	decf    COUNT, F, A
            	bnz Loop    			
				movff    TABLAT, POSTINC1   
            	return
				
Init:			movwf POSTINC0				;Initiliaze FSR0
				return

Init2:			movwf POSTINC1				;Initiliaze FSR1
				return
				
MSB:			andlw 0xF0
				movwf temp
				call ShiftR
				movf temp, W, A
				return

LSB:			andlw 0x0F
				return
				
ShiftR:			RRNCF temp
				decfsz COUNTB, F, A
				bnz ShiftR
				return

				org 0x000500

array db h'30', h'31', h'32', h'33', h'34', h'35', h'36', h'37', h'38', h'40', h'41', h'42', h'43', h'44', h'45', h'46'

				end
