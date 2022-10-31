#include "SPI.h"

void SPI1_init(void){
    SPI1BUF = 0;                        // clear SPI bus by reading from it
    SPI1BRG = 50;                       // baud rate = (120000000/2*(x+1)) = 1,2MHz przy x=50
    SPI1STATbits.SPIROV = 0;            // clear the overflow bit
    SPI1CONbits.FRMEN   = 0;            // frame support diabled
    SPI1CONbits.MCLKSEL = 0;            // PPBCLK used by baud rate generator
    SPI1CONbits.MODE32  = 0;            // use 8 bit mode
    SPI1CONbits.MODE16  = 0;            // use 16 bit mode
    SPI1CONbits.MSTEN   = 1;            // user SPI in master mode
    SPI1CONbits.CKP     = 0;            // clock idle state
    SPI1CONbits.CKE     = 1;            // SPI Clock Edge Select bit
    SPI1CONbits.SMP     = 0;            // SPI Data Input Sample Phase bit
    SPI1CONbits.ON      = 1;            // turn on SPI1
}
void SPI2_init(void){
    SPI2BUF = 0;                        // clear SPI bus by reading from it
    SPI2BRG = 50;                       // baud rate = (120000000/2*(x+1)) = 1,2MHz przy x=50
    SPI2STATbits.SPIROV = 0;            // clear the overflow bit
    SPI2CONbits.FRMEN   = 0;            // frame support diabled
    SPI2CONbits.MCLKSEL = 0;            // PPBCLK used by baud rate generator
    SPI2CONbits.MODE32  = 0;            // use 8 bit mode
    SPI2CONbits.MODE16  = 0;            // use 16 bit mode
    SPI2CONbits.MSTEN   = 1;            // user SPI in master mode
    SPI2CONbits.CKP     = 0;            // clock idle state
    SPI2CONbits.CKE     = 1;            // SPI Clock Edge Select bit
    SPI2CONbits.SMP     = 0;            // SPI Data Input Sample Phase bit
    SPI2CONbits.ON      = 1;            // turn on SPI1
}
void SPI3_init(void){
    SPI3BUF = 0;                        // clear SPI bus by reading from it
    SPI3BRG = 50;                       // baud rate = (120000000/2*(x+1)) = 1,2MHz przy x=50
    SPI3STATbits.SPIROV = 0;            // clear the overflow bit
    SPI3CONbits.FRMEN   = 0;            // frame support diabled
    SPI3CONbits.MCLKSEL = 0;            // PPBCLK used by baud rate generator
    SPI3CONbits.MODE32  = 0;            // use 8 bit mode
    SPI3CONbits.MODE16  = 0;            // use 16 bit mode
    SPI3CONbits.MSTEN   = 1;            // user SPI in master mode
    SPI3CONbits.CKP     = 0;            // clock idle state
    SPI3CONbits.CKE     = 1;            // SPI Clock Edge Select bit
    SPI3CONbits.SMP     = 0;            // SPI Data Input Sample Phase bit
    SPI3CONbits.ON      = 1;            // turn on SPI1
}
void SPI4_init(void){
    SPI4BUF = 0;                        // clear SPI bus by reading from it
    SPI4BRG = 50;                       // baud rate = (120000000/2*(x+1)) = 1,2MHz przy x=50
    SPI4STATbits.SPIROV = 0;            // clear the overflow bit
    SPI4CONbits.FRMEN   = 0;            // frame support diabled
    SPI4CONbits.MCLKSEL = 0;            // PPBCLK used by baud rate generator
    SPI4CONbits.MODE32  = 0;            // use 8 bit mode
    SPI4CONbits.MODE16  = 0;            // use 16 bit mode
    SPI4CONbits.MSTEN   = 1;            // user SPI in master mode
    SPI4CONbits.CKP     = 0;            // clock idle state
    SPI4CONbits.CKE     = 1;            // SPI Clock Edge Select bit
    SPI4CONbits.SMP     = 0;            // SPI Data Input Sample Phase bit
    SPI4CONbits.ON      = 1;            // turn on SPI1
}
void SPI5_init(void){
    SPI5BUF = 0;                        // clear SPI bus by reading from it
    SPI5BRG = 50;                       // baud rate = (120000000/2*(x+1)) = 1,2MHz przy x=50
    SPI5STATbits.SPIROV = 0;            // clear the overflow bit
    SPI5CONbits.FRMEN   = 0;            // frame support diabled
    SPI5CONbits.MCLKSEL = 0;            // PPBCLK used by baud rate generator
    SPI5CONbits.MODE32  = 0;            // use 8 bit mode
    SPI5CONbits.MODE16  = 0;            // use 16 bit mode
    SPI5CONbits.MSTEN   = 1;            // user SPI in master mode
    SPI5CONbits.CKP     = 0;            // clock idle state
    SPI5CONbits.CKE     = 1;            // SPI Clock Edge Select bit
    SPI5CONbits.SMP     = 0;            // SPI Data Input Sample Phase bit
    SPI5CONbits.ON      = 1;            // turn on SPI1
}
void SPI6_init(void){
    SPI6BUF = 0;                        // clear SPI bus by reading from it
    SPI6BRG = 50;                       // baud rate = (120000000/2*(x+1)) = 1,2MHz przy x=50
    SPI6STATbits.SPIROV = 0;            // clear the overflow bit
    SPI6CONbits.FRMEN   = 0;            // frame support diabled
    SPI6CONbits.MCLKSEL = 0;            // PPBCLK used by baud rate generator
    SPI6CONbits.MODE32  = 0;            // use 8 bit mode
    SPI6CONbits.MODE16  = 0;            // use 16 bit mode
    SPI6CONbits.MSTEN   = 1;            // user SPI in master mode
    SPI6CONbits.CKP     = 0;            // clock idle state
    SPI6CONbits.CKE     = 1;            // SPI Clock Edge Select bit
    SPI6CONbits.SMP     = 0;            // SPI Data Input Sample Phase bit
    SPI6CONbits.ON      = 1;            // turn on SPI1
}

unsigned char SPI1_Exchange(unsigned char a){
	SPI1BUF = a;                        // write to buffer for TX
    while( ! SPI1STATbits.SPIRBF);      // wait transfer complete
    return SPI1BUF;                     // read the received value 
}
unsigned char SPI2_Exchange(unsigned char a){
	SPI2BUF = a;                        // write to buffer for TX
    while( ! SPI2STATbits.SPIRBF);      // wait transfer complete
    return SPI2BUF;                     // read the received value 
}
unsigned char SPI3_Exchange(unsigned char a){
	SPI3BUF = a;                        // write to buffer for TX
    while( ! SPI3STATbits.SPIRBF);      // wait transfer complete
    return SPI3BUF;                     // read the received value 
}
unsigned char SPI4_Exchange(unsigned char a){
	SPI4BUF = a;                        // write to buffer for TX
    while( ! SPI4STATbits.SPIRBF);      // wait transfer complete
    return SPI4BUF;                     // read the received value 
}
unsigned char SPI5_Exchange(unsigned char a){
	SPI5BUF = a;                        // write to buffer for TX
    while( ! SPI5STATbits.SPIRBF);      // wait transfer complete
    return SPI5BUF;                     // read the received value 
}
unsigned char SPI6_Exchange(unsigned char a){
	SPI6BUF = a;                        // write to buffer for TX
    while( ! SPI6STATbits.SPIRBF);      // wait transfer complete
    return SPI6BUF;                     // read the received value 
}

unsigned char SPI1_ExchangeString(unsigned char *str){
    unsigned char i = 0;
    while(str[i]){
        SPI1_Exchange(str[i++]);
    }
}
unsigned char SPI2_ExchangeString(unsigned char *str){
    unsigned char i = 0;
    while(str[i]){
        SPI2_Exchange(str[i++]);
    }
}
unsigned char SPI3_ExchangeString(unsigned char *str){
    unsigned char i = 0;
    while(str[i]){
        SPI3_Exchange(str[i++]);
    }
}
unsigned char SPI4_ExchangeString(unsigned char *str){
    unsigned char i = 0;
    while(str[i]){
        SPI4_Exchange(str[i++]);
    }
}
unsigned char SPI5_ExchangeString(unsigned char *str){
    unsigned char i = 0;
    while(str[i]){
        SPI5_Exchange(str[i++]);
    }
}
unsigned char SPI6_ExchangeString(unsigned char *str){
    unsigned char i = 0;
    while(str[i]){
        SPI6_Exchange(str[i++]);
    }
}