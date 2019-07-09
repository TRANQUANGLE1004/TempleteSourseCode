#include"gpio.h"

void initPortE(uint32_t pin,uint32_t initValue){
    SIM->SCGC5 = SIM_SCGC5_PORTE_MASK;
    PORTE->PCR[pin] = PORT_PCR_MUX(1U);
    PTE->PDDR = (1U << pin);
    PTE->PSOR = (initValue << pin);
}
void initPortD(uint32_t pin,uint32_t initValue){
    SIM->SCGC5 = SIM_SCGC5_PORTD_MASK; // setting clock for PORTD
    PORTD->PCR[pin] = PORT_PCR_MUX(1U); // setting GPIO for pin
    PTD->PDDR=(1U<<pin); // setting pin is output
    PTD->PSOR = (initValue << pin);
}