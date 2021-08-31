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

Main:  			clrf WREG
				movlw  0x02; Input value to be looked up here
				movwf	x, A ; for now x is just '2'
				call f_Table;
				call f_Retlw;
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

f_Retlw:  		movf x, W
		      	addwf WREG, W
		      	addwf PCL, F
		      	retlw h'30'
		      	retlw h'31'
		      	retlw h'32'
				retlw h'33'
				retlw h'34'
				retlw h'35'
				retlw h'36'
				retlw h'37'
				retlw h'38'
				retlw h'40'
				retlw h'41'
				retlw h'42'
				retlw h'43'
				retlw h'44'
				retlw h'45'
				retlw h'46'
				return

				org 0x000500

array db h'30', h'31', h'32', h'33', h'34', h'35', h'36', h'37', h'38', h'40', h'41', h'42', h'43', h'44', h'45', h'46'

				end
