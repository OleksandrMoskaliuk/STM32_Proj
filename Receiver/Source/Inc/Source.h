/*
 * Source.h
 *
 *  Created on: Nov 26, 2020
 *      Author: Oleksandr
 */

#ifndef INC_SOURCE_H_
#define INC_SOURCE_H_
#include "ssd1306.h"
#include "stdbool.h"
#include "stdint.h"

#define IsBitSet(byte, bit_position) ((byte & (128>>bit_position)) != 0)
#define IsBitSet2(byte, bit_position) ? (1): ((byte & (128>>bit_position)) != 0)
typedef unsigned char byte;

#define DATA_SIZE 10
#define BIT_SIZE 7
#define GSS 1 // giroscope sensor
#define CPS 2 // capacitive sensor
#define MVS 3 // movement sensor


#define WRITE_KEY_STORAGE   0x8C // початковий ключ для передачі масиву згенерованих ключів
#define WRITE_KEY 		    0x8A
#define READ_KEY 		    0x3B
#define DATA_TRANSMIT       0x55
#define READ_KEY_STORAGE    0x32



#define SENSOR_AMOUNT 3

#define MS_ON  0x0f  //00_00_1_1_1_1 movement sensor on
#define MS_OFF 0x00  //00_00_0_0_0_0 movement sensor off

#define GS_ON  0x5F  //01_01_1_1_1_1 giroscope sensor on
#define GS_OFF 0x50  //01_01_0_0_0_0 giroscope sensor off

#define CP_ON  0xff  //11_11_1_1_1_1 capacitive sensor on
#define CP_OFF 0xf0  //11_11_0_0_0_0 capacitive sensor off




void Source();
void GS_SNS(_Bool x); // giroscope sensor
void MV_SNS(_Bool x); // movement sensor
void CP_SNS(_Bool x); // capacitive sensor
void UART1_CallBack();
uint8_t DEF_SNS(byte DATA);   //define sensor type
_Bool Check_SNS_State(byte DATA); //check sensor state on or off


void TRANSMIT_KEYS();
void  TIM2_INTR();
void KEYGEN();
void RECEIVE_DATA();

#endif /* INC_SOURCE_H_ */
