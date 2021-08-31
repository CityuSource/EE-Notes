				LIST	P=18F4520			;directive to define processor
				#include <P18F4520.INC>		;processor specific variable definitions

;------------------------------------------------------------------------------
CBLOCK 0x30
a1		
a2		
a3				
b1		
b2			
b3						
r1		
r2			
r3		
r4		
ENDC

;------------------------------------------------------------------------------
;Start of main program


		MOVLW H'98'
		MOVWF a1
		MOVLW H'41'
		MOVWF a2
		MOVLW H'52'
		MOVWF a3
		MOVLW H'98'
		MOVWF b1
		MOVLW H'79'
		MOVWF b2
		MOVLW H'48'
		MOVWF b3
		
		MOVF a1, W
		ADDWF b1, W
		DAW
		MOVWF r1
		
		MOVF a2, W
		ADDWFC b2, W
		DAW
		MOVWF r2
		
		MOVF a3, W
		ADDWFC b3, W
		DAW
		MOVWF r3
		
		MOVF H'0', W
		ADDWFC H'0', W
		DAW
		MOVWF r4
		

;******************************************************************************
;End of program
;
done:	nop
		End