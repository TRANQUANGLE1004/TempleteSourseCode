#ifndef _LIB_TEST_H_
#define _LIB_TEST_H_
#include "MKL46Z4.h"
#include"Configuration.h"

#define toggleLedRed  PTE->PTOR = (1U << LED_RED)
#define toggleLedYellow  PTD->PTOR = (1U << LED_YELLOW)

//init LED BUILD IN
// 1 is NOT BRIGHT
// 0 is BRIGHT
#define initLedRed  initPortE(LED_RED,1)  // init LED RED LOW
#define initLedYellow  initPortD(LED_YELLOW,0) //init LED YELLOW HIGh

//
void initPortE(uint32_t pin,uint32_t initValue);
void initPortD(uint32_t pin,uint32_t initValue);

/*
will be move
 */


#endif
