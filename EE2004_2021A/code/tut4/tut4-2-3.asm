LIST	P=18F4520
#include <P18F4520.INC>

MyReg	EQU	0x0F

      ORG	0x0000
      goto	Main

      ORG	0x0060
Main:	nop
      call	Delay
      nop
Here:       goto Here
Delay:      movlw	0x91
      movwf	MyReg
Again:      nop
      nop
      nop
      nop
      decf	MyReg,F
      bnz	Again
      return
      END
