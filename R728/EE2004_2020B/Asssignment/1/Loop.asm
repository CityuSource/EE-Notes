				LIST	P=18F4520			;directive to define processor
				#include <P18F4520.INC>		;processor specific variable definitions

;------------------------------------------------------------------------------
sum		set 0x00
Count	set 0x01
Numi	set 0x02
a		set 0x03
b		set 0x04
c		set 0x05

				ORG		0x000A
				goto	Main

;------------------------------------------------------------------------------
;Start of main program

Main:	clrf	sum, A
		clrf	Numi, A
		clrf	a, A
		clrf	b, A
		clrf	c, A
		movlw	D'1'
		movwf 	c, A

start:	movlw	D'7'
		movwf	Count, A
		cpfsgt	Numi, A			;Compare value of count and Numi
		bra		sumL
		bra		done

sumL:	movf	a,W,A
		addwf	b,W,A
		addwf	c,W,A
		movwf	sum,A

		movff	b,a				;Update the Qn values
		movff	c,b
		movff	sum,c

		incf	Numi,F,A
		bra 	start


;******************************************************************************
;End of program
;
done:	nop
		End