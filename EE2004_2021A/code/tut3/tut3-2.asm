LIST P=18F4520 
#include <P18F4520.INC>

ORG 0x0000 
CBLOCK 0xA5         ;56046680
  group1: 1, group2: -6, group3: 4, group4: 2
  group5: 0, group6: 2, group7: -8, group8
ENDC
MOVLW 00            ;set w = 0
MOVWF TRISC, 0x00   ;protc i/o setting
MOVLW group1        ;group1 A5, move group1 to w
MOVWF PORTC         ;move w to portc
MOVLW group2        ;group2 A6, move group2 to w
MOVWF PORTC         ;move w to portc
MOVLW group3        ;group3 A0, move group3 to w
MOVWF PORTC         ;move w to portc
MOVLW group4        ;group4 A4, move group4 to w
MOVWF PORTC         ;move w to portc
MOVLW group5        ;group5 A6, move group5 to w
MOVWF PORTC         ;move w to portc
MOVLW group6        ;group6 A6, move group6 to w
MOVWF PORTC         ;move w to portc
MOVLW group7        ;group7 A8, move group7 to w
MOVWF PORTC         ;move w to portc
MOVLW group8        ;group8 A0, move group8 to w
MOVWF PORTC         ;move w to portc
Result: GOTO Result ;stay here forever
END