#ifndef DD_LED_H_
#define DD_LED_H_

#include <Arduino.h>

#define LED 13

void LedIni();
void LedOn_13();
void LedOff_13();

void LedOff(int ledPin);
void LedOn(int ledPin);

#endif