/*
 * led.c
 *
 *  Created on: 2018. 6. 11.
 *      Author: Baram
 */




#include "led.h"





void ledInit(void)
{
  // PA17 Output
  //
  PORT->Group[0].PINCFG[PIN_PA17].bit.INEN = 1;
  PORT->Group[0].DIRSET.reg = (1<<PIN_PA17);
}

void ledOn(uint8_t ch)
{
  PORT->Group[0].OUTSET.reg = (1<<PIN_PA17);
}

void ledOff(uint8_t ch)
{
  PORT->Group[0].OUTCLR.reg = (1<<PIN_PA17);
}

void ledToggle(uint8_t ch)
{
  PORT->Group[0].OUTTGL.reg = (1<<PIN_PA17);
}
