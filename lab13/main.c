#include <stdio.h>
#include <errno.h>
#include <wiringPi.h>
#define BUTTON_PIN 0

volatile int eventCount = 0;

void myInterrupt(void)
{
    eventCount++;
}

int main(void)
{
    if (wiringPiSetup() < 0)
    {
        printf("Cannot setup wiringPi: %s \n", strerror(errno));
        return 1;
    }

    if (wiringPiISR(BUTTON_PIN, INT_EDGE_FALLING, &myInterrupt) < 0)
    {
        printf("Cannot setup ISR: %s\n", strerror(errno));
        return 2;
    }

    while(1)
    {
        printf("%d\n", eventCount);
        eventCount = 0;
        delay(1000);
    }

    return 0;
}
