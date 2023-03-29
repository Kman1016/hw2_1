#include "mbed.h"

// main() runs in its own thread in the OS
PwmOut PWM1(D6);
AnalogIn Ain(A0);
int main()
{
    while (true) {
        PWM1.period_ms(5);
        PWM1 = Ain*5;
        //printf("%f\n", PWM1.read());
        ThisThread::sleep_for(50ms);
    }
}