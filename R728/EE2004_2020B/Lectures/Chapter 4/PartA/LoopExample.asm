;******************************************************************************
; EE 2004
; Instructor: Bernard Chiu
; A loop that computes the sum of consecutive integers from 1 to 10.
; An example in Section 4.3
;******************************************************************************

				LIST	P=18F4520			;directive to define processor
				#include <P18F4520.INC>		;processor specific variable definitions

;------------------------------------------------------------------------------
		cblock 0x00
			Count 
			Numi 
			Sum  
		endc

		org 0x000000
Initialization:	movlw d'10'
		movwf Count, A
		movlw d'1'
		movwf Numi, A
		clrf Sum, A
Here:   movf Numi, W, A;      [WREG] = [Numi]
		addwf Sum, F, A;      [Sum]  = [Sum] + [WREG]
		incf Numi, F, A; 	  [Numi] = [Numi] + 1
		decfsz Count, F, A;   [Count] = [Count] - 1; skip if [Count] = 0;
        bra Here
		bra $
		end

