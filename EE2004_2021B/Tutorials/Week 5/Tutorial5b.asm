		LIST	P=18F4520	;directive to define processor
		#include <P18F4520.INC> ;processor specific
        ;variable definitions

         CBLOCK 0x20
            Binary
            Tens
            Units
         ENDC
    
            ORG  0x0000
            goto Main
            ORG  0x0020
Main:       movlw d'77'
            movwf Binary, A
Bin_2_BCD:  clrf Tens, A
            clrf Units, A
            movf Binary, W, A
Loop:       addlw -d'10'
            bnc Next
			incf Tens, F, A
			bra Loop
Next:       addlw d'10'
            movwf Units, A
            END

