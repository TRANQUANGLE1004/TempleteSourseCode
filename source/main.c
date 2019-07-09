/*
 * Copyright (c) 12.2013, Martin Kojtal (0xc0170)
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */
#include "main.h"
#include "MKL46Z4.h"
#include"gpio.h"
#include"Touch_Sen.h"
#include"Seg_LCD.h"

//choose Example code
// must choose one
//*********************************************
//#define BLINK_LED
#define LCD_TEST    

//********************************************
#ifdef BLINK_LED
    int main(void)
    {
        initLedRed;
        initLedYellow;
        while(1){
            toggleLedRed;
            toggleLedYellow;
            delay();
        }

    }

#else LCD_TEST
    //todo
    int main(void)
    {
        SegLCD_Init(); // init LCD 
        register unsigned int count =0;
        while(1){
            SegLCD_DisplayDecimal(count);
            ++count;
            delay(); 
        }
    }
#endif 


void delay(void)
{
    volatile unsigned int i,j;

    for (i = 0U; i < 5000U; i++) {
        for (j = 0U; j < 100U; j++) {
            __asm__("nop");
        }
    }
}