#include <ledcontrol.h>


LEDCONTROL led(13);


void setup(){
    Serial.begin(115200);
}


void loop(){
    led.allumer();
    Serial.println("Led allumé !!");
    delay(2000);
    led.eteindre();
    Serial.println("Led eteint !!")
    delay(2000);
}