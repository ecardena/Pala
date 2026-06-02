#include "Pala.h"

Pala pala(4);

void setup() {
  //Pala(4);
  // put your setup code here, to run once:
//   servo.attach(4);
}

void loop() {
  // put your main code here, to run repeatedly:
 pala.muevePala(0);
 delay(1000);
 pala.muevePala(1);
 delay(1000); 
}
