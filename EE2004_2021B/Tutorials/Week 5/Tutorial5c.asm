#include <P18F4520.INC>	
	CBLOCK 0x00
                 FirstReg
                 SecondReg
  	             ThirdReg
                 MaxReg
        endc
; 
      			org 0x000000
     			goto Main	
       			org 0x000040
Main:   	    movlw d'44'
                movwf FirstReg, A
                movlw d'60'
                movwf SecondReg, A
                movlw d'55'
                movwf ThirdReg, A
Here:           movf FirstReg, W, A      
                movwf MaxReg, A           
                cpfsgt SecondReg, A
                bra Continue
                bra MaxEqSecond
MaxEqSecond:    movf SecondReg, W, A
                movwf MaxReg, A 
Continue:       movf MaxReg, W, A
                cpfsgt ThirdReg, A
                bra Over
MaxEqThird:     movf ThirdReg, W, A
                movwf MaxReg, A 
Over:           bra Over
                end
