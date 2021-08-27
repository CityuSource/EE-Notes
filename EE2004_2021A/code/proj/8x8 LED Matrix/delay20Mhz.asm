;********************************************************
; delay20mhz.asm
;********************************************************
	
	RADIX DEC
	INCLUDE "p18f2550.inc"


;@20Mhz Fosc/4=5Mhz
; 5000000 instruction/sec
; that is 1 instruction every 0,2uS (1/50000000)

	GLOBAL msDelay,usDelay	; Makes msDelay e usDelay labels, defined in this module, available to other modules

	UDATA_acs		; By declaring the following variables as UNINITIALIZED DATA_ACS
msDelayCounter0 res 1		;  we don't have to worry about their location in data memory or that they 
msDelayCounter1 res 1		;  conflict with other variables declared in other modules


.MSUSDELAY CODE			; Beginning of a PROGRAM CODE section (.MSUSDELAY)
	                        ;  The starting address is not specified, so it  
        	                ;  will be assingned during the linking phase (with gplink)

;********** msDelay ********** 								
msDelay
	movwf msDelayCounter1
Delay1mS
	movlw d'250'
	movwf msDelayCounter0

Delay4uS
	; A total of 4uS:
	bra $ + 2	; 2 cycles (0,4uS)
	bra $ + 2	; 2 cycles (0,4uS)
	bra $ + 2	; 2 cycles (0,4uS)
	bra $ + 2	; 2 cycles (0,4uS)
	bra $ + 2	; 2 cycles (0,4uS)
	bra $ + 2	; 2 cycles (0,4uS)
	bra $ + 2	; 2 cycles (0,4uS)
	bra $ + 2	; 2 cycles (0,4uS)
	nop		; 1 cycle (0,2uS)
	decfsz msDelayCounter0,F	; 1 cycle (0,2uS)
	bra Delay4uS	; 2 cycles (0,4uS)

	; When it arrives here 1mS has passed
	decfsz msDelayCounter1,F
	bra Delay1mS

	; When it arrives here the mS specified in W, before the msDelay call, have passed
	return


;********** usDelay **********
usDelay
	movwf msDelayCounter1

Delay1uS
	bra $ + 2	;2 cycles (0,4uS)
	decfsz msDelayCounter1,F	; Normally 1 cycle (0,2uS)
	bra Delay1uS			; 2 cycles (0,4uS)

	; When it arrives here the uS specified in W, before the usDelay call, have passed
	return


	END
