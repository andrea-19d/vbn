#include "../include/dd_led.hpp"

void LedIni(){
        pinMode(LED, OUTPUT);
}
void LedOn_13(){
    digitalWrite(LED, HIGH);
}
void LedOff_13(){
    digitalWrite(LED, LOW);
}

void LedOff(int ledPin){
    digitalWrite(ledPin, LOW);
}
void LedOn(int ledPin){
    digitalWrite(ledPin, HIGH);
}

