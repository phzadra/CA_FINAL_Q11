//NOTE: This is a code that was not run on mbed as the chracteristics of the requirements were not in alignment with the actual hardware available.
//P13, P16, P23 and P25 are not actual I/Os on the mbed development kit provided, and where only used to satisfy the requirements.

#include "mbed.h"

DigitalIn button1(P13);
DigitalIn button2(P16);
DigitalOut led1(P23);
DigitalOut led2(P25);


int main()
{
    while (true){
        if(button1 == 1){
            led1 = 1;
            led2 = 0;
        }
        else if (button2 == 1){
            led1 = 0;
            led2 = 1;
        }
        else{
            led1 = 0;
            led2 = 0;
        }
    }
}

