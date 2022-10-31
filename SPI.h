#ifndef __SPI_H
#define __SPI_H

#include <xc.h>

void SPI1_init(void);
void SPI2init(void);
void SPI3_init(void);
void SPI4_init(void);
void SPI5_init(void);
void SPI6_init(void);

unsigned char SPI1_Exchange(unsigned char a);
unsigned char SPI2_Exchange(unsigned char a);
unsigned char SPI3_Exchange(unsigned char a);
unsigned char SPI4_Exchange(unsigned char a);
unsigned char SPI5_Exchange(unsigned char a);
unsigned char SPI6_Exchange(unsigned char a);

unsigned char SPI1_ExchangeString(unsigned char *str);
unsigned char SPI2_ExchangeString(unsigned char *str);
unsigned char SPI3_ExchangeString(unsigned char *str);
unsigned char SPI4_ExchangeString(unsigned char *str);
unsigned char SPI5_ExchangeString(unsigned char *str);
unsigned char SPI6_ExchangeString(unsigned char *str);


#endif /* __SPI_H */