//STARTER 
//THIS EXERCISE IS TO BE DONE IN THE ARM MBED SIMULATOR
//http://195.130.59.221/
//IF YOU HAVE ISSUES WITH THE SIMULATOR, CONTACT EMBEDDED LEAD
#include "mbed.h"

AnalogIn pot(p15);
DigitalOut led(LED1);

int main() {
    while (1) {
        double value=pot;
        int on=value*2000;
        int off=2000-on;

        led=1;
        wait_ms(on);
        led=0;
        wait_ms(off);
        // MAKE SURE THERE IS ALWAYS A WAIT ON THE SIM OR IT WILL CRASH
        wait_ms(500); 
    }
}
