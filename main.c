#include <xc.h>
#include "DeviceConfig.h"
#include "SPI.h"

void main(void){
	// Ustaw porty jako cyfrowe
    ANSELA = 0;
    ANSELB = 0;
    ANSELC = 0;
    ANSELE = 0;
    ANSELG = 0;
    
    // Set up PPS for SPI 1
	SDI1R = 0b1011;         // RF1 = SPI1 SDI
    TRISBbits.TRISB7 = 0;   // RB7 = SPI1 CLK
	SS1R = 0b1100;          // RF0 = SPI1 SS    // optional. Inaczej CS - Chip Select
    RPA0R = 0b00011;        // RA0 = SPI1 SDO
    
	Set_MaxSpeed_Mode();
    SPI1_init();
	
    while (1){

    }
}