/*
 * bsp.h
 *
 *  Created on: 2018. 6. 11.
 *      Author: Baram
 */

#ifndef SRC_BSP_BSP_H_
#define SRC_BSP_BSP_H_


#ifdef __cplusplus
extern "C" {
#endif


#include "def.h"
#include "samd21.h"


void bspInit(void);

void delay(uint32_t time_ms);
uint32_t millis(void);


#ifdef __cplusplus
}
#endif

#endif /* SRC_BSP_BSP_H_ */
