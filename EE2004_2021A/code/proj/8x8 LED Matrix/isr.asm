;*******************************************************************
;* Isr.asm
;*
;*******************************************************************

	radix DEC
	include "P18F2550.INC"
	; Include file with constants for the interrupt REG_FLAG bits
	include "isr.inc" 

	UDATA_acs
W_temp res 1
STATUS_temp res 1
BSR_temp res 1
REG_FLAG res 1
DurationL res 1
DurationH res 1
CCPR2Low res 1
CCPR2High res 1

	GLOBAL REG_FLAG, CCPR2Low, CCPR2High

;Inizio programma

.ISR CODE 0x08		; Beginning of a PROGRAM CODE section (.ISR)
			;  The starting address (0x00) is declared explicitly
			;Interrupt Service Routine
Isr
	movwf W_temp		; Save w.reg in a temporary register
	movff STATUS,STATUS_temp; Save STATUS in a temporary register
	movff BSR,BSR_temp	; Save BSR in a temporary register

;	btfsc PIR1,RCIF		; Check if the interrupt comes from Serial Reception
;	goto IsrRCSer
;	btfsc PIR1,ADIF		; Check if the interrupt comes from AD Conversion
;	goto IsrADC	
;	btfsc INTCON,RBIF	; Check if the interrupt comes from the pression of buttons RB4:RB7
;	goto IsrRB
	btfsc INTCON3,INT2IF	; Check if the interrupt comes from INT2 External Interrupt
	goto IsrINT2
;	btfsc INTCON,TMR0IF	; Check if the interrupt comes from TMR0 Overflow
;	goto IsrTmr0



;	btfsc PIR1,CCP1IF	; A CCP1 rising edge capture?
;	bra CAPTURE1		; YES
;	btfss PIR2,CCP2IF	; a CCP2 falling edge capture?
;	goto EndIsr			; false alarm
;CAPTURE2 
;	movff CCPR2L,CCPR2Low	; Get low byte of captured time
;	movff CCPR2H,CCPR2High	; Get high byte of captured time
;	bcf PIR2,CCP2IF		; Clear flag
;	bsf REG_FLAG,CCPInt	; Set flag CCP in the custom register REG_FLAG, which is checked in main.asm
;	goto EndIsr
;CAPTURE1
;	clrf TMR3H			; Zero count
;	clrf TMR3L
;	bcf PIR1,CCP1IF		; Clear flag
;	goto EndIsr

IsrRB
	bcf INTCON,RBIF		
	bsf REG_FLAG,RBInt	; Set flag RBInt in the custom register REG_FLAG, which is checked in main.asm
	goto EndIsr
	
IsrRCSer
	;bcf PIR1,RCIF		;"The RCIF interrupt flag bit is read-only, it cannot be set or cleared by software."
	movf RCREG,W		; IMPORTANT!!!: Read RCREG in order to clear RCIF; without this line the PIC loops in the ISR routine
	bsf REG_FLAG,RCSer	; Set flag RCSer in the custom register REG_FLAG, which is checked in main.asm
	goto EndIsr
	
IsrADC
	bcf PIR1,ADIF
	bsf REG_FLAG,ADC	; Set flag ADC in the custom register REG_FLAG, which is checked in main.asm
	goto EndIsr

IsrINT2
	bcf INTCON3,INT2IF
	bsf REG_FLAG,INT2ExtInt	; Set flag INT2ExtInt in the custom register REG_FLAG, which is checked in main.asm
	goto EndIsr


IsrTmr0
	bcf INTCON,TMR0IF
	bsf REG_FLAG,TMR0	; Set flag TMR0 in the custom register REG_FLAG, which is checked in main.asm
	goto EndIsr

EndIsr
	movff BSR_temp,BSR	; Restore BSR
	movf W_temp,W		; Restore W
	movff STATUS_temp,STATUS; Restore STATUS
	retfie			; Return and enable GIE

	END
