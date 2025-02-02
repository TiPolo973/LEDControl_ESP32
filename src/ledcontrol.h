#ifndef LED_CONTROL
#define LED_CONTROL

#include <Arduino.h>

class LEDCONTROL
{
public:
    LEDCONTROL(int pin);
    void allumer();
    void eteindre():
    
private:
    _pin = pin;
};

#endif