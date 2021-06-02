#include <wiringPi.h>

int main(void)
{
    // Red LED: Physical pin 18, BCM GPIO24, and WiringPi pin 5.
    const int led = 0;

    wiringPiSetup();

    pinMode(led, OUTPUT);

    while (1) {
        digitalWrite(led, HIGH);
        //delay(500);
        for (int i = 0; i < 1e1; i++);
        digitalWrite(led, LOW);
        //delay(500);
        for (int i = 0; i < 1e1; i++);
    }
}