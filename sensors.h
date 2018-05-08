/*
   sensors.h

   How to test each sensor.
*/
#ifndef sensors_h
#define sensors_h

#include "Arduino.h"

class Sharp2Y0A21 {
  private:
    int testPin;

  public:
    Sharp2Y0A21(int pin);

    int senseRaw();
};

Sharp2Y0A21::Sharp2Y0A21(int pin) {
  testPin = pin;
  pinMode(testPin, INPUT);
}

int Sharp2Y0A21::senseRaw() {
  return analogRead(testPin);
}

#endif

