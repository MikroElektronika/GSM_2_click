/*

Use mikroE Timer Calculator to generate proper timer configuration
and timer ISR.

https://www.mikroe.com/timer-calculator

*/
#include "Click_GSM_2_types.h"

#define __GSM_2_TIMER__

static void gsm2_configTimer()
{


    // Configure Timer
}

void Timer_interrupt()
{
    gsm2_tick();
    // Reset Flag
}