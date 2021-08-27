;*******************************************************************
; main.asm
;*******************************************************************

; Laurtec Freedom II connections:
;
; RA0 - Photoresistor analog input
; RA1 - Trimmer analog input
; RA2 - LM35 temperature sensor analog input
; RB0 - I2C SDA bus
; RB1 - I2C SCL bus
; RB2 - RTC INT
; RB4 - Button1
; RB5 - Button2
; RB6 - Button3
; RB7 - Button4
; RC0 - Buzzer


    RADIX DEC
    INCLUDE <p18f2550.inc>
    INCLUDE "isr.inc"		; Include file with constants for the interrupt REG_FLAG bits
	
		UDATA_acs
SerialData res 1
SerialCount res 1
Counter0 res 1
Counter1 res 1
    
; !!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
; constants
; Remove comments from the settings that you want to use:
	#DEFINE ISR_ON 1		; Use Interrupt Service Routines
	#DEFINE DELAY_ON 1		; Use DELAY_ON settings and subs
;	#DEFINE BUZZER_ON 1	; Use BUZZER_ON settings and subs
;	#DEFINE LCD_ON 1		; Use LCD_ON subs
;	#DEFINE CHAR3ASCII_ON 1		; Use CHAR3ASCII subs
;	#DEFINE BYTE2DIGITS_ON 1	; Use Byte2Digits subs
;	#DEFINE SERIAL_ON 1	; Use SERIAL_ON settings and subs
;	#DEFINE ADC_ON 1		; Use ADC_ON settings and subs. NB: the source (photores,trimmer,temp sensor) has to be specified in the sub!
;	#DEFINE I2C_EEPROM_ON 1		; Use I2C_EEPROM_ON settings and subs
;	#DEFINE I2C_RTCC_ON 1		; Use I2C_RTCC_ON settings and subs
;	#DEFINE TMR0_1s_ON 1		; Use TMR0_1s_ON settings (TMR0 overflow every 1 second)
;	#DEFINE TMR0_10ms_ON 1		; Use TMR0_10ms_ON settings (TMR0 overflow every 10 milliseconds)
;	#DEFINE CCP1_ON 1			; Capture Compare PWM module 1
;	#DEFINE CCP2_ON 1			; Capture Compare PWM module 2
;	#DEFINE MATH_ON 1		; Use Math routines

; Other defines: 
      #define BT1 PORTB,4
      #define BT2 PORTB,5
      #define BT3 PORTB,6
      #define BT4 PORTB,7
      #define CLOCK_SH_CP_Pin PORTC,0	; CLOCK pin
      #define DATA_DS_Pin PORTC,1	; DATA pin
	  #define LATCH_ST_CP_Pin PORTC,2	; LATCH pin

    CONFIG	FOSC=HS		; High frequency clock
    CONFIG	WDT=OFF		; Watchdog timer disabled
    CONFIG	PBADEN=OFF	; Analog inputs disabled
    CONFIG	LVP=OFF		; Low voltage programming disabled
    
; !!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
; reset vector
; Program begins here
.reset CODE 0x00	; Beginning of a PROGRAM CODE section (.reset)
			;  The starting address (0x00) is declared explicitly
Rst
	call Init
	goto Start	; Skip interrupt vectors (0x08 and 0x18)
; end reset vector
; !!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!

; !!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
; start
.start CODE         	; Beginning of a PROGRAM CODE section (.start)
                    	;  The starting address is not specified, so it  
                    	;  will be assingned during the linking phase (with gplink)
Start
	bcf LATCH_ST_CP_Pin		; Initialize 74HC595 pins
	bcf CLOCK_SH_CP_Pin		;
	bcf DATA_DS_Pin			;
	clrf SerialCount
	goto Main
; end start
; !!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!


; !!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
; main
.main CODE         	; Beginning of a PROGRAM CODE section (.main)
                    	;  The starting address is not specified, so it  
                    	;  will be assigned during the linking phase (with gplink)
; Main loop
Main
	movlw d'250'	; Load values to waste some time later
	movwf Counter1
Smile
	movlw b'10000000'			; Load SerialData reg with value
	call SendSerialData		; Data goes to the daisy-chained (2nd) 74HC595
	movlw b'00000000'			; Load SerialData reg with value
	call SendSerialData		; Data goes to the 1st 74HC595
	bsf LATCH_ST_CP_Pin		; Set Latch pin: parallel output
	bcf LATCH_ST_CP_Pin		; Clear Latch pin: parallel output
	
	movlw b'01000000'			; Load SerialData reg with value
	call SendSerialData		; Data goes to the daisy-chained (2nd) 74HC595
	movlw b'00110110'			; Load SerialData reg with value
	call SendSerialData		; Data goes to the 1st 74HC595
	bsf LATCH_ST_CP_Pin		; Set Latch pin: parallel output
	bcf LATCH_ST_CP_Pin		; Clear Latch pin: parallel output	

	movlw b'00100000'			; Load SerialData reg with value
	call SendSerialData		; Data goes to the daisy-chained (2nd) 74HC595
	movlw b'01000110'			; Load SerialData reg with value
	call SendSerialData		; Data goes to the 1st 74HC595
	bsf LATCH_ST_CP_Pin		; Set Latch pin: parallel output
	bcf LATCH_ST_CP_Pin		; Clear Latch pin: parallel output	

	movlw b'00010000'			; Load SerialData reg with value
	call SendSerialData		; Data goes to the daisy-chained (2nd) 74HC595
	movlw b'01000000'			; Load SerialData reg with value
	call SendSerialData		; Data goes to the 1st 74HC595
	bsf LATCH_ST_CP_Pin		; Set Latch pin: parallel output
	bcf LATCH_ST_CP_Pin		; Clear Latch pin: parallel output	

	movlw b'00001000'			; Load SerialData reg with value
	call SendSerialData		; Data goes to the daisy-chained (2nd) 74HC595
	movlw b'01000000'			; Load SerialData reg with value
	call SendSerialData		; Data goes to the 1st 74HC595
	bsf LATCH_ST_CP_Pin		; Set Latch pin: parallel output
	bcf LATCH_ST_CP_Pin		; Clear Latch pin: parallel output	

	movlw b'00000100'			; Load SerialData reg with value
	call SendSerialData		; Data goes to the daisy-chained (2nd) 74HC595
	movlw b'01000110'			; Load SerialData reg with value
	call SendSerialData		; Data goes to the 1st 74HC595
	bsf LATCH_ST_CP_Pin		; Set Latch pin: parallel output
	bcf LATCH_ST_CP_Pin		; Clear Latch pin: parallel output	

	movlw b'00000010'			; Load SerialData reg with value
	call SendSerialData		; Data goes to the daisy-chained (2nd) 74HC595
	movlw b'00110110'			; Load SerialData reg with value
	call SendSerialData		; Data goes to the 1st 74HC595
	bsf LATCH_ST_CP_Pin		; Set Latch pin: parallel output
	bcf LATCH_ST_CP_Pin		; Clear Latch pin: parallel output	

	movlw b'00000001'			; Load SerialData reg with value
	call SendSerialData		; Data goes to the daisy-chained (2nd) 74HC595
	movlw b'00000000'			; Load SerialData reg with value
	call SendSerialData		; Data goes to the 1st 74HC595
	bsf LATCH_ST_CP_Pin		; Set Latch pin: parallel output
	bcf LATCH_ST_CP_Pin		; Clear Latch pin: parallel output

	movlw d'250'		; Waste some time
	movwf Counter0		;
	call WasteTimeRoutine	;
	decfsz Counter1,F	;
	bra Smile		; Go back to light leds and show face
				; Now that time has been wasted other face can be shown

	movlw d'250'	; Load values to waste some time later
	movwf Counter1	
Neutral
	movlw b'10000000'			; Load SerialData reg with value
	call SendSerialData		; Data goes to the daisy-chained (2nd) 74HC595
	movlw b'00000000'			; Load SerialData reg with value
	call SendSerialData		; Data goes to the 1st 74HC595
	bsf LATCH_ST_CP_Pin		; Set Latch pin: parallel output
	bcf LATCH_ST_CP_Pin		; Clear Latch pin: parallel output

	movlw b'01000000'			; Load SerialData reg with value
	call SendSerialData		; Data goes to the daisy-chained (2nd) 74HC595
	movlw b'00000110'			; Load SerialData reg with value
	call SendSerialData		; Data goes to the 1st 74HC595
	bsf LATCH_ST_CP_Pin		; Set Latch pin: parallel output
	bcf LATCH_ST_CP_Pin		; Clear Latch pin: parallel output	
	movlw b'00100000'			; Load SerialData reg with value
	call SendSerialData		; Data goes to the daisy-chained (2nd) 74HC595
	movlw b'01000110'			; Load SerialData reg with value
	call SendSerialData		; Data goes to the 1st 74HC595
	bsf LATCH_ST_CP_Pin		; Set Latch pin: parallel output
	bcf LATCH_ST_CP_Pin		; Clear Latch pin: parallel output	

	movlw b'00010000'			; Load SerialData reg with value
	call SendSerialData		; Data goes to the daisy-chained (2nd) 74HC595
	movlw b'01000000'			; Load SerialData reg with value
	call SendSerialData		; Data goes to the 1st 74HC595
	bsf LATCH_ST_CP_Pin		; Set Latch pin: parallel output
	bcf LATCH_ST_CP_Pin		; Clear Latch pin: parallel output	
	movlw b'00001000'			; Load SerialData reg with value
	call SendSerialData		; Data goes to the daisy-chained (2nd) 74HC595
	movlw b'01000000'			; Load SerialData reg with value
	call SendSerialData		; Data goes to the 1st 74HC595
	bsf LATCH_ST_CP_Pin		; Set Latch pin: parallel output
	bcf LATCH_ST_CP_Pin		; Clear Latch pin: parallel output	

	movlw b'00000100'			; Load SerialData reg with value
	call SendSerialData		; Data goes to the daisy-chained (2nd) 74HC595
	movlw b'01000110'			; Load SerialData reg with value
	call SendSerialData		; Data goes to the 1st 74HC595
	bsf LATCH_ST_CP_Pin		; Set Latch pin: parallel output
	bcf LATCH_ST_CP_Pin		; Clear Latch pin: parallel output	
	movlw b'00000010'			; Load SerialData reg with value
	call SendSerialData		; Data goes to the daisy-chained (2nd) 74HC595
	movlw b'00000110'			; Load SerialData reg with value
	call SendSerialData		; Data goes to the 1st 74HC595
	bsf LATCH_ST_CP_Pin		; Set Latch pin: parallel output
	bcf LATCH_ST_CP_Pin		; Clear Latch pin: parallel output	

	movlw b'00000001'			; Load SerialData reg with value
	call SendSerialData		; Data goes to the daisy-chained (2nd) 74HC595
	movlw b'00000000'			; Load SerialData reg with value
	call SendSerialData		; Data goes to the 1st 74HC595
	bsf LATCH_ST_CP_Pin		; Set Latch pin: parallel output
	bcf LATCH_ST_CP_Pin		; Clear Latch pin: parallel output

	movlw d'250'		; Waste some time
	movwf Counter0		;
	call WasteTimeRoutine	;
	decfsz Counter1,F	;
	bra Neutral		; Go back to light leds and show face
				; Now that time has been wasted other face can be shown

	movlw d'250'	; Load values to waste some time later
	movwf Counter1	
Suprise
	movlw b'10000000'			; Load SerialData reg with value
	call SendSerialData		; Data goes to the daisy-chained (2nd) 74HC595
	movlw b'00000000'			; Load SerialData reg with value
	call SendSerialData		; Data goes to the 1st 74HC595
	bsf LATCH_ST_CP_Pin		; Set Latch pin: parallel output
	bcf LATCH_ST_CP_Pin		; Clear Latch pin: parallel output
	
	movlw b'01000000'			; Load SerialData reg with value
	call SendSerialData		; Data goes to the daisy-chained (2nd) 74HC595
	movlw b'00000110'			; Load SerialData reg with value
	call SendSerialData		; Data goes to the 1st 74HC595
	bsf LATCH_ST_CP_Pin		; Set Latch pin: parallel output
	bcf LATCH_ST_CP_Pin		; Clear Latch pin: parallel output	

	movlw b'00100000'			; Load SerialData reg with value
	call SendSerialData		; Data goes to the daisy-chained (2nd) 74HC595
	movlw b'00000110'			; Load SerialData reg with value
	call SendSerialData		; Data goes to the 1st 74HC595
	bsf LATCH_ST_CP_Pin		; Set Latch pin: parallel output
	bcf LATCH_ST_CP_Pin		; Clear Latch pin: parallel output	

	movlw b'00010000'			; Load SerialData reg with value
	call SendSerialData		; Data goes to the daisy-chained (2nd) 74HC595
	movlw b'01100000'			; Load SerialData reg with value
	call SendSerialData		; Data goes to the 1st 74HC595
	bsf LATCH_ST_CP_Pin		; Set Latch pin: parallel output
	bcf LATCH_ST_CP_Pin		; Clear Latch pin: parallel output	

	movlw b'00001000'			; Load SerialData reg with value
	call SendSerialData		; Data goes to the daisy-chained (2nd) 74HC595
	movlw b'01100000'			; Load SerialData reg with value
	call SendSerialData		; Data goes to the 1st 74HC595
	bsf LATCH_ST_CP_Pin		; Set Latch pin: parallel output
	bcf LATCH_ST_CP_Pin		; Clear Latch pin: parallel output	

	movlw b'00000100'			; Load SerialData reg with value
	call SendSerialData		; Data goes to the daisy-chained (2nd) 74HC595
	movlw b'00000110'			; Load SerialData reg with value
	call SendSerialData		; Data goes to the 1st 74HC595
	bsf LATCH_ST_CP_Pin		; Set Latch pin: parallel output
	bcf LATCH_ST_CP_Pin		; Clear Latch pin: parallel output	

	movlw b'00000010'			; Load SerialData reg with value
	call SendSerialData		; Data goes to the daisy-chained (2nd) 74HC595
	movlw b'00000110'			; Load SerialData reg with value
	call SendSerialData		; Data goes to the 1st 74HC595
	bsf LATCH_ST_CP_Pin		; Set Latch pin: parallel output
	bcf LATCH_ST_CP_Pin		; Clear Latch pin: parallel output	

	movlw b'00000001'			; Load SerialData reg with value
	call SendSerialData		; Data goes to the daisy-chained (2nd) 74HC595
	movlw b'00000000'			; Load SerialData reg with value
	call SendSerialData		; Data goes to the 1st 74HC595
	bsf LATCH_ST_CP_Pin		; Set Latch pin: parallel output
	bcf LATCH_ST_CP_Pin		; Clear Latch pin: parallel output

	movlw d'250'		; Waste some time
	movwf Counter0		;
	call WasteTimeRoutine	;
	decfsz Counter1,F	;
	bra Suprise		; Go back to light leds and show face
				; Now that time has been wasted other face can be shown
	
	bra Main			; Back to Main

; end main
; !!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!

WasteTimeRoutine
Loop0
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
	decfsz Counter0,F	; 1 cycle (0,2uS)
	bra Loop0	; 2 cycles (0,4uS)
	return

SendSerialData
	movwf SerialData	; Copy W value into SerialData
	bcf LATCH_ST_CP_Pin		; Clear LATCH pin
	bsf SerialCount,3	; Count = 8
RotateSerialData				; Routine to reverse the byte, which has to be sent MSB
	rlcf SerialData			; Get leftmost bit and put into Carry
	bc DATA_DS_Pin1			; DATA; Carry = 1? If Yes branch to DATA_DS_Pin1
	bcf DATA_DS_Pin			; No, Carry = 0; DATA_DS_Pin = 0
	bcf CLOCK_SH_CP_Pin		; CLOCK; LOW-to-HIGH
	bsf CLOCK_SH_CP_Pin		;  transition
	goto EndDATA_DS_Pin
DATA_DS_Pin1
	bsf DATA_DS_Pin			; Carry = 1; DATA_DS_Pin = 1
	bcf CLOCK_SH_CP_Pin		; LOW-to-HIGH
	bsf CLOCK_SH_CP_Pin		;  transition
EndDATA_DS_Pin
	bcf STATUS,C			; Now clear Carry
	decfsz SerialCount			; SerialCount = 0?
	goto RotateSerialData		; No, keep left rotating SerialData
	return

; !!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
; init
.init CODE         	; Beginning of a PROGRAM CODE section (.init)
                    	;  The starting address is not specified, so it  
                    	;  will be assigned during the linking phase (with gplink)

Init
; Default initialization
	clrf LATA
	clrf LATB
	clrf LATC
	movlw b'11111111'       ; Configure PORTA lines
	movwf TRISA
	movlw 0Fh 		; Configure A/D
	movwf ADCON1 		;  for digital inputs
	movlw 07h 		; Configure comparators
	movwf CMCON 		;  for digital input
	movlw b'11111111'      	; Configure PORTB lines
	movwf TRISB
	movlw 00h
	movwf INTCON2		; bit 7 /RBPU: weak pull-ups enabled when it reads as 0
				;  on POR it reads as 1, thus disabled
	movlw b'00000000'	; Configure PORTC lines
	movwf TRISC
	EXTERN REG_FLAG
	clrf REG_FLAG

; DELAY_ON init
	IFDEF DELAY_ON
	EXTERN msDelay,usDelay	; Uses a label defined in another (external) module
	ENDIF

; BUZZER_ON init
	IFDEF BUZZER_ON
	bcf TRISC,0		; Set RC0 as output (BUZZER)
	#define BUZZER PORTC,0
	ENDIF

; LCD_ON init
	IFDEF LCD_ON
	movlw b'00000000'       ; Configure PORTD lines as output
	movwf TRISD		;  for LCD
;	TRISC='xxxxxx1x'
	bcf TRISC,RC1		; Configure RC1 as output for LCD backlight
	bsf PORTC,RC1		; Light on LCD backlight
	EXTERN LcdInit,LcdClear,LcdLocate,LcdSendData,LcdSendCommand
	call LcdInit		; Call external init routine
	ENDIF

; CHAR3ASCII_ON init
	IFDEF CHAR3ASCII_ON
	EXTERN Char3ASCII,units,tenths,hundreds
	ENDIF

; BYTE2DIGITS_ON init
	IFDEF BYTE2DIGITS_ON
	EXTERN Byte2Digits,units,tenths,hundreds
	ENDIF


; SERIAL_ON init
	IFDEF SERIAL_ON
;	TRISC='11xxxxxx'
	bsf TRISC,RC6		; Configure RC6 (TX) and RC7 (RX) as inputs
	bsf TRISC,RC7		;  "The EUSART control will automatically reconfigure the pins from input to output as needed."
	EXTERN SerialSendData
							; Serial: see datasheet for values
    movlw   129             ; Set constant for 9.600 b. (with 20MHz quartz and BRGH=1)
    movwf   SPBRG           ; Register SPBRG
	movlw   b'00100100'     ; bit 6 TX9 = 0  -> 8 bit TX
							; bit 5 TXEN = 1 -> Trasmit enabled
							; bit 4 SYNC = 0 -> asyncrhonous mode
							; bit 2 BRGH = 1 -> high baud rate
	movwf   TXSTA           ; load values into register TXSTA
	clrf    RCREG           ; Clear RX register RS232
	movlw   b'11010000'     ; bit 7 SPEN = 1 -> Serial port enabled
							; bit 6 RX9 = 1  -> 9 bit RX
							; bit 4 CREN = 1 -> Receiver enabled
	; RC6 Clock - RC7 Data
	movwf   RCSTA           ; load values into register RCSTA 
	; Set registers for interrupt
	; Enable PEIE (bit 6) 
	bsf INTCON,PEIE
	; Enable RCIE (bit 5) of PIE1 register, for serial RX
	bsf PIE1,RCIE
	ENDIF

; ADC_ON init
	IFDEF ADC_ON
;	TRISA='xxxxx111'
	bsf TRISA,RA0		; Configure RA0 (photoresistor on Freedom II) as input
	bsf TRISA,RA1		; Configure RA1 (trimmer on Freedom II) as input
	bsf TRISA,RA2		; Configure RA2 (LM35 temperature sensor on Freedom II) as input
	movlw b'00001100' 	; RA0/AN0, RA1/AN1, RA2/AN2 analog, others digital
	movwf ADCON1		; load value into A/D CONTROL REGISTER 1 (A/D Port Configuration Control bits)
	movlw b'00111100' 	; Left justified - 20TAD ACQT - FOSC/4 ADCS
;	movwf ADCON2		; load value into A/D CONTROL REGISTER 2
;	movlw b'00000000' 	; read RA0/AN0 (Photoresistor)
	movlw b'00000100' 	; read RA1/AN1 (trimmer)
;	movlw b'00001000'	; read RA2/AN2 (LM35 temperature sensor)
	movwf ADCON0		; load value into A/D CONTROL REGISTER 0
	; Set registers for interrupt
	; Clear ADIF
	bcf PIR1,ADIF
	; Enable PEIE (bit 6) 
	bsf INTCON,PEIE
	; Enable ADIE (bit 6) of PIE1 register, for ADC
	bsf PIE1,ADIE
	bsf ADCON0,ADON 	; Turn the A/D converter on 
	movlw .10
	call usDelay		; Wait at least 10us after turning ADC on, before Go/Done
	ENDIF

; I2C_EEPROM_ON init
	IFDEF I2C_EEPROM_ON
;	TRISB='xxxxxx11'
	bsf TRISB,RB0		; Configure RB0 (SDA) and RB1 (SCL) as inputs for I2C operations
	bsf TRISB,RB1		; 
	movlw 100		; Delay to stabilize SDA, SCL and +5V lines, when using external hardware
	call msDelay
	; Configure MSSP module as I2C Master Mode
	movlw b'00101000' 	; bit5 (SSPEN) = enable I2C and configure pin SDA and SCL for I2C serial communication
				; bit3-0(SSPM) = set I2C as Master Mode
	movwf SSPCON1 		; Load values in SSPCON
	movlw b'10000000' 	; Slew Rate control disabled for standard speed mode (100kHz)
	movwf SSPSTAT 		; Load value in SSPSTAT
	; Configure Baud Rate (see datasheet)
	#define valBAUD 100 		; desired Baud Rate value in kbps
	#define valFOSC 20000 		; Oscillator Clock value in kHz
	movlw (valFOSC / (4 * valBAUD)) - 1 ; As seen in datasheet
	movwf SSPADD 		; Load value in SSPADD
	EXTERN I2C_Start,I2C_SendSSPBUF,I2C_RepeatedStart,I2C_Stop,I2C_RCEN,I2C_MasterAck,I2C_MasterNack,I2C_AckPoll
	EXTERN I2C_SequentialReadEEPROM_SendSerial,I2C_InitPageWrite,I2C_PageWriteEEPROM
	EXTERN I2CReg
	ENDIF

; I2C_RTCC_ON init
	IFDEF I2C_RTCC_ON
;	TRISB='xxxxxx11'
	bsf TRISB,RB0		; Configure RB0 (SDA) and RB1 (SCL) as inputs for I2C operations
	bsf TRISB,RB1		; 
	movlw 100		; Delay to stabilize SDA, SCL and +5V lines, when using external hardware
	call msDelay
	; Configure MSSP module as I2C Master Mode
	movlw b'00101000' 	; bit5 (SSPEN) = enable I2C and configure pin SDA and SCL for I2C serial communication
				; bit3-0(SSPM) = set I2C as Master Mode
	movwf SSPCON1 		; Load values in SSPCON
	movlw b'10000000' 	; Slew Rate control disabled for standard speed mode (100kHz)
	movwf SSPSTAT 		; Load value in SSPSTAT
	; Configure Baud Rate (see datasheet)
	#define valBAUD 100 		; desired Baud Rate value in kbps
	#define valFOSC 20000 		; Oscillator Clock value in kHz
	movlw (valFOSC / (4 * valBAUD)) - 1 ; As seen in datasheet
	movwf SSPADD 		; Load value in SSPADD
	EXTERN I2C_Start,I2C_SendSSPBUF,I2C_RepeatedStart,I2C_Stop,I2C_RCEN,I2C_MasterAck,I2C_MasterNack,I2C_AckPoll
	EXTERN I2C_RTCRead,I2C_BCD2BYTE,I2C_RTCWrite,I2C_BYTE2BCD,I2C_RTCTimerInit,SecondsByte,MinutesByte,HoursByte,DayByte,MonthByte,YearByte
	EXTERN MinutesAlarmByte,HoursAlarmByte,DayAlarmByte,MinutesAE,HoursAE,DayAE
	EXTERN I2C_RTCCtrlStatus2Read,RTCReg0x01,I2C_RTCCtrlStatus2Set
	ENDIF

; TMR0_1s_ON init: TRM0 overflow every 1 second
	IFDEF TMR0_1s_ON
	; With a 256 prescaler we can use a reduced frequency for TMR0
        ; 5000000Hz (FOSC) / 256 = 19531,25Hz (cycles/sec).
        ; After those cycles 1 sec has passed, so we set TMR0 initial value
        ; to a number which, added to 19531, makes 65535 (when TMR0 16bit overflows):
        ; 65535-19531=46004=0xB3B4
        movlw 0x07          ; 16bit, prescaler 1:256
        movwf T0CON
        movlw 0xB3          ; set initial values for registers TMR0H and TMR0L (16 bit counter)
        movwf TMR0H
        movlw 0xB4
        movwf TMR0L
	bcf INTCON,TMR0IF               ; clear flag TMR0IF
        bsf INTCON,TMR0IE              ; enable TMR0 interrupt
        bsf T0CON,TMR0ON                ; start TMR0
	ENDIF

; TMR0_10ms_ON init: TRM0 overflow every 10 milliseconds
	IFDEF TMR0_10ms_ON
	; With a 256 prescaler we can use a reduced frequency for TMR0
        ; 5000000Hz (FOSC) / 256 = 19531,25Hz (cycles/sec).
        ; After those cycles 1 sec has passed, after 195 cycles 1/100 sec (10ms) have passed.
	; So we set TMR0 initial value 
        ; to a number which, added to 195, makes 255 (when TMR0 8bit overflows):
        ; 255-195=60=0x3C
        movlw 0x47          ; 8bit, prescaler 1:256
        movwf T0CON
        movlw 0x3C          ; set initial values for register TMR0L (8 bit counter)
        movwf TMR0L
	bcf INTCON,TMR0IF               ; clear flag TMR0IF
        bsf INTCON,TMR0IE              ; enable TMR0 interrupt
        bsf T0CON,TMR0ON                ; start TMR0
	ENDIF
	
; CCP1_ON init:
	IFDEF CCP1_ON
		EXTERN CCPR2High,CCPR2Low
		movlw b'00000101'	
		movwf CCP1CON		; CCP1 module captures +ve edge
		bsf PIE1,CCP1IE		; Enable interrupts from CCP1
		movlw b'11110001'	; Timer3 enabled, 16bit write, internal osc, prescale 1:8
		movwf T3CON
		bsf INTCON,PEIE		; Enable PEIE (bit 6) 
	ENDIF
	
; CCP2_ON init:
	IFDEF CCP2_ON
		movlw b'00000100'
		movwf CCP2CON		; CCP2 module captures -ve edge
		bsf PIE2,CCP2IE		; Enable interrupts from CCP2
		movlw b'11110001'	; Timer3 enabled, 16bit write, internal osc, prescale 1:8
		movwf T3CON
		bsf INTCON,PEIE		; Enable PEIE (bit 6) 
	ENDIF

; MATH_ON init:
	IFDEF MATH_ON
		EXTERN DivisionByX,quotient,remainder,InvertByte,byte_inverted
	ENDIF


; ISR_ON init
	IFDEF ISR_ON
	; INSERT COMMENT WHERE NOT NEEDED
	bsf INTCON3,INT2IE	; Enable External Interrupt 2 on pin RB2
	bsf INTCON,GIE ; Set registers for global interrupt. Enable GIE (bit 7)
	ENDIF

	return				; sub Init return
; end init
; !!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!

	END



