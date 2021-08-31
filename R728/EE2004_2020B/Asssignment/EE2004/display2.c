#include "DS18B20.h"

// Available Functions:
void Delay(int cnt);	// Delay
float OneWireTemp(void); // Returns the temperature in celsius 
unsigned int OneWireReset(void); // Sends a reset pulse to the sensor 
void OneWireWriteBit(unsigned char); // write a single bit to the OneWire
unsigned char OneWireReadBit(void); // reads a single bit 
void OneWireWriteByte(unsigned char); // writes a byte 
unsigned char OneWireReadByte(void); // reads a byte 
unsigned char OneWireRead(void); // reads the current status of the bus
void OneWireHigh(void); // sets the bus high
void OneWireRelease(void); // releases the bus 

void Delay(int cnt){
	unsigned int i;
	for(i = 0; i < cnt; i++);
	return;
}

float OneWireTemp(){
    
    OneWireReset(); // Reset Pulse 
    OneWireWriteByte(0xCC); // Issue skip ROM command (CCh)
    OneWireWriteByte(0x44); // Convert T command (44h)
    while(!BUSIN); // DS will hold line low while making measurement
    OneWireReset(); // Start new command sequence 
    OneWireWriteByte(0xCC); // Issue skip ROM command 
    OneWireWriteByte(0xBE); // Read Scratchpad (BEh) - 15 bits
    unsigned char LSB = OneWireReadByte();
    unsigned char MSB = OneWireReadByte();
    OneWireReset(); // Stop Reading 
    unsigned int data = MSB;
    float temperature = (data << 8) | LSB;
    return (temperature/16); 
   
}

void OneWireHigh(){
    BUSDIR = 0; // Set as output
    BUSOUT = 1; // Set high 
}

void OneWireRelease(){
    BUSDIR = 0; // Set as output
    BUSOUT = 0; // Set low 
}

unsigned char OneWireRead(){
    return BUSIN;
}

unsigned int OneWireReset(){
    OneWireRelease();
    Delay(240); // 480uS Delay
    Delay(240);
    OneWireHigh();
    Delay(70); // wait 70 uS before reading
    unsigned int OW = OneWireRead(); // check for OneWire
    Delay(205); // 410 uS delay
    Delay(205);
    OneWireHigh(); // give bus back to OneWire
    return OW; 
}


void OneWireWriteBit(unsigned char b){
    if(b){
        OneWireRelease();
        Delay(6); // wait 6uS
        OneWireHigh();
        Delay(64); // wait 64uS
    }
    else{
        OneWireRelease();
        Delay(60); // wait 60uS
        OneWireHigh();
        Delay(10); // wait 10uS
    }
}

unsigned char OneWireReadBit(){
    OneWireRelease();
    Delay(6); // wait 6uS
    OneWireHigh();
    Delay(9); // wait 9uS
    unsigned char out = OneWireRead();
    Delay(55); // wait 55uS
    return out;
}

void OneWireWriteByte(unsigned char b){
    for(int i = 0; i < 8; i++){
        OneWireWriteBit(b & 0x01); // send LS bit first 
        b = b >> 1;
    }
}

unsigned char OneWireReadByte(void){
    unsigned char out; 
    for(int i = 0; i < 8; i++){ // read in LS bit first
        out = out >> 1; // get out ready for next bit
        if(OneWireReadBit() & 0x01) // if its a one 
            out = out | 0x80; // place a 1 
    }
    return out;
}