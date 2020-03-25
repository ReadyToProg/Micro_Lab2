#ifndef INC_LCD1602_H_
#define INC_LCD1602_H_

#include "stm32f4xx.h"

#define SET GPIO_PIN_SET
#define RESET GPIO_PIN_RESET

#define rsPort  GPIOE
#define rwPort  GPIOE
#define enPort  GPIOE
#define dhPort  GPIOE
#define rsPin  GPIO_PIN_7
#define rwPin  GPIO_PIN_10
#define enPin  GPIO_PIN_11
#define dh4Pin  GPIO_PIN_12
#define dh5Pin  GPIO_PIN_13
#define dh6Pin  GPIO_PIN_14
#define dh7Pin  GPIO_PIN_15

#define RS(X) HAL_GPIO_WritePin(rsPort,rsPin,X);
#define RW(X) HAL_GPIO_WritePin(rwPort,rwPin,X);
#define EN(X) HAL_GPIO_WritePin(enPort,enPin,X);
#define DH4(X) HAL_GPIO_WritePin(dhPort,dh4Pin,X);
#define DH5(X) HAL_GPIO_WritePin(dhPort,dh5Pin,X);
#define DH6(X) HAL_GPIO_WritePin(dhPort,dh6Pin,X);
#define DH7(X) HAL_GPIO_WritePin(dhPort,dh7Pin,X);

void LCD_Send(uint8_t,uint8_t);
void write(uint8_t);
void command(uint8_t);
void write4Bits(uint8_t);
void setCursor(uint8_t, uint8_t);
void parametrsToggle(uint8_t,uint8_t,uint8_t);
void shiftToggle(uint8_t,uint8_t);
void scrollRight(void);
void scrollLeft(void);
void clear(void);
void home(void);


void lcdSend(uint8_t isCommand, uint8_t data);
void lcdCommand(uint8_t cmd);
void lcdChar(const char chr);
void lcdInit(void);
void LCD_string(uint8_t*);



#endif