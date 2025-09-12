#include "../include/dd_button.hpp"

void ButtonIni(){
    pinMode(BUTTON,INPUT_PULLUP);
}

bool ButtonCheckState(){
    bool state = digitalRead(BUTTON);
    return !state;
}