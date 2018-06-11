/*
 * ap.cpp
 *
 *  Created on: 2018. 6. 11.
 *      Author: Baram
 */




#include "ap.h"






void apInit(void)
{
  ledOff(0);
}

void apMain(void)
{


  while(1)
  {
    ledToggle(0);
    delay(500);
  }
}
