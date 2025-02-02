#include "ledcontrol.h"


LEDCONTROL::LEDCONTROL(int pin){
    _pin = pin;
    pinMode(_pin, OUTPUT);
}

void LEDCONTROL::allumer(){
    digitalWrite(_pin, HIGHT);
}

void LEDCONTROL::eteindre(){
    digitalWrite(_pin, LOW);
}