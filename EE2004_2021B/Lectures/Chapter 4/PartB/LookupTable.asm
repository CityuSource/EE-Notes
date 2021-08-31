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
		;call f_Retlw;
	  	bra$

f_Table:	movlw	upper array
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

f_Retlw:  movf x, W
		      	addwf WREG, W
		      	addwf PCL, F
		      	retlw d'5';    f(0)
		      	retlw d'6';    f(1)
		      	retlw d'9';    f(2)
		      	retlw d'14';   f(3)
		      	retlw d'21';   f(4)
				return

			org 0x000500

array db d'5', d'6', d'9', d'14', d'21'

	 	end
