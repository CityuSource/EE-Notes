LIST	P=18F4520
#include <P18F4520.INC>

      cblock 0x40
        mem1
        mem2:d'8'
        mem3:0e
        mem4
      endc
      ORG	0x0000
      goto  Main
      ORG	0x0010
Main: movlw	a'a'
      movwf	mem1
      movlw	d'80'
      movwf	mem2
      movlw	b'01101100'
      addwf	mem2,w
      movwf	mem3
      movlw	0f
      andwf	mem3,w
      movwf	mem4
Here: goto 	Here
      nop
      END
