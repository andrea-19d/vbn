#include "../src/lab0/lab0.hpp"

void setup_lab0() {
  LedIni();
  ButtonIni();
}

void loop_lab0() {
    if(HIGH == ButtonCheckState()){
        LedOn(LED_PIN);
    }else{
        LedOff(LED_PIN);
    }
}
void loop_lab1() {
    LedOn_13();
        delay(1000);
    LedOff_13();
        delay(1000);
}

