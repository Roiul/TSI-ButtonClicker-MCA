#include "mbed.h"
#include "TSISensor.h"
#include <stdio.h>

int main()
{
    PwmOut led(LED1);
    TSISensor tsi;
    while (true) {
        led = 1.0 - tsi.readPercentage();
        printf("%d\n",(int )(100 - (100*led.read())));
        ThisThread::sleep_for(100ms);
    }
}