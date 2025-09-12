#include <Arduino.h>
#include "../src/lab0/lab0.hpp"

//#define LAB0   //Cod sursa pentru laboratorul 0
#define LAB1     //Cod sursa pentru laboratorul 1
//#define LAB2
//#define LAB3

void setup() {
  setup_lab0();
}

void loop() {
  
   #ifdef LAB0
  loop_lab0();
  #endif

  #ifdef LAB1
  loop_lab1();
  #endif
}

// Funcția pentru scrierea unui caracter pe Serial
int serial_putchar(char c, FILE *f) {
  Serial.write(c);
  return c;
}

// Funcția pentru citirea unui caracter de la Serial
int serial_getchar(FILE *f) {
  while (!Serial.available());  // Așteaptă până când există un caracter disponibil
  return Serial.read();         // Citește și returnează caracterul
}

// Setup-ul pentru redirecționarea printf și scanf către Serial
void setup_stdio() {

  Serial.begin(9600);
  
  static FILE serial_stdout;
  static FILE serial_stdin;

  fdev_setup_stream(&serial_stdout, serial_putchar, NULL, _FDEV_SETUP_WRITE);
  fdev_setup_stream(&serial_stdin, NULL, serial_getchar, _FDEV_SETUP_READ);

  stdout = &serial_stdout;
  stdin = &serial_stdin;
}

