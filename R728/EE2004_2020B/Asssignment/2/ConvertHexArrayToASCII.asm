; EE 2004 
; Instructor: Bernard Chiu
; This program demonstrates two ways for implementing a lookup table. 

;------------------------------------------------------------------------------
				LIST	P=18F4520			;directive to define processor
				#include <P18F4520.INC>		;processor specific variable definitions

;------------------------------------------------------------------------------
x equ 0x00
COUNT equ 0x01 	

		ORG 0x000000
		goto Main

Main:   clrf WREG
		movlw  0x02; Put 02 into x
		movwf	x, A
		call f_Table;
	  	bra$

f_Table:		movlw	upper array
				movwf	TBLPTRU
				movlw	high array
				movwf	TBLPTRH
				movlw	low array
				movwf	TBLPTRL
	        	movf    x, W, A
				addlw   0x01
				movwf   COUNT, A
Loop:       	tblrd*+
            	decf    COUNT, F, A
            	bnz Loop    			
				movf    TABLAT, W   ;Result in WREG
            	return

				org 0x000500

array db h'30', h'31', h'32', h'33', h'34', h'35', h'36', h'37', h'38', h'40', h'41', h'42', h'43', h'44', h'45', h'46'

	 	end
