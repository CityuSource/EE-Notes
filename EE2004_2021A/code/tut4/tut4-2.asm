LIST	P=18F4520
#include <P18F4520.INC>
	
      ORG	0x0000
      goto	Main
      ORG	0x0060
Main:	movlw	0x57
      addlw	0x0F
      movlw	0xAB
      andlw	0x58
      movlw	0x32
      xorlw	0x6D
Here:	goto 	Here
      nop
      END

