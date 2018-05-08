/*
 * IR_Sensor_Tests.ino
 * 
 * quick testing of various sensors:
 * Sharp GP2Y0A21YK0F 10 ro 80 cm.
 */

#include "sensors.h"


#define testPin A5
Sharp2Y0A21 mySensor(A5);

void setup() {
  Serial.begin(9600);
}

// the loop function runs over and over again forever
void loop() {
  Serial.println(mySensor.senseRaw());
  delay(10);                    
}
