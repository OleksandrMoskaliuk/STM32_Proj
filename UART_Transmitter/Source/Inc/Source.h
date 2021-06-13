/*
 * Source.h
 *
 *  Created on: Nov 27, 2020
 *      Author: Oleksandr
 */

#ifndef INC_SOURCE_H_
#define INC_SOURCE_H_
#define DATA_SIZE 10
#define GSS 0 // giroscope sensor
#define CPS 1 // capacitive sensor
#define MVS 2 // movement sensor

#define SENSOR_AMOUNT 3

#define SNS_ON  0xFF  // sensor on
#define SNS_OFF 0x00  // sensor off

#define GYRO_SNS_DELAY 5000 //gyro sensor delay

#define WRITE_KEY_STORAGE   0x32// початковий ключ для передачі масиву згенерованих ключів
#define READ_KEY_STORAGE    0x8C
#define WRITE_KEY 		    0x8A
#define READ_KEY 		    0x3B
#define DATA_TRANSMIT       0x55


void Source();
void tim2_interrapts();
void GSs_request(); // gyroscope sensor request
void CPs_request(); // capacitive sensor request
void MVs_request(); // movement sensor request
void USART1_INTR();
_Bool WAS_KEYS_WRITTEN();
void  TIM2_INTR();
#endif /* INC_SOURCE_H_ */
