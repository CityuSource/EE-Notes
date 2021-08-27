# MPLAB IDE generated this makefile for use with GNU make.
# Project: proj.mcp
# Date: Thu Nov 19 14:06:43 2020

AS = MPASMWIN.exe
CC = 
LD = mplink.exe
AR = mplib.exe
RM = rm

proj.cof : asm/proj.o
	$(CC) /p18F4520 "asm\proj.o" /z__MPLAB_BUILD=1 /o"proj.cof" /M"proj.map" /W /x

asm/proj.o : proj.asm C:/Program\ Files\ (x86)/Microchip/MPASM\ Suite/P18F4520.INC
	$(AS) /q /p18F4520 "proj.asm" /l"proj.lst" /e"proj.err"

clean : 
	$(CC) "asm\proj.o" "asm\proj.hex" "asm\proj.err" "asm\proj.lst" "proj.cof"

