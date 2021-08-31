; EE 2004 
; Instructor: Bernard Chiu
; This program demonstrates two ways for implementing a lookup table. 

;------------------------------------------------------------------------------
				LIST	P=18F4520			;directive to define processor
				#include <P18F4520.INC>		;processor specific variable definitions

;------------------------------------------------------------------------------

		ORG 0x000000
		bra Main
		ORG 0x000008
		; Check which interrupt flag is raised, branch to the
		; appropriate ISR. 
		
		ORG 0X000018
		bra T0_ISR

Main:  		clrf TRISD
			clrf PORTD
			
			movlw 0x02		; Prescale 1:8
			movwf T0CON
			movlw 0x0B
			movwf TMR0H
			movlw 0xDC
			movwf TMR0L
		
			bsf RCON, IPEN
			bsf INTCON, TMR0IF
			bsf INTCON, TMR0IE
			bsf INTCON2, TMR0IP

			bsf INTCON, GIEH
			bsf INTCON, GIEL
		
Over:		bsf T0CON, TMR0ON
			btfsc PORTC, 2
			bra T0_ISR
			btfss INTCON, TMR0IF
			bra Over
		
			bra$
			
T0_ISR:		btfss INTCON, TMR0IF
			retfie
			bcf INTCON, TMR0IF
			incf PORTD
			retfie
			
INT0_ISR:	bcf INTCON, TMR0IF
			bsf T0CON, TMR0ON
			bsf TRISB, 6	; Set it to RB6
			btg PORTD, RD0	; Toggle led on
			retfie
			

INT1_ISR:	bcf INTCON, TMR0IF
			bsf T0CON, TMR0ON
			bsf TRISB, 7
			btg PORTD, RD0
			retfie
				
end