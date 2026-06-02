#include "Pala.h"

Pala::Pala(int pinservo){
  _pinServo = pinservo;
}

void Pala::iniciaPala(){
  _servo.attach(_pinServo);
}

void Pala::muevePala(int direccion){
  switch (direccion) {
   case 0:
      for(int x = _servo.read(); x > 0; x--){
        _servo.write(x);
        delay(3);
      }
      break;
   case 1:
      for(int x = _servo.read(); x < 160; x++){
        _servo.write(x);
        delay(3);
      }
      break;
  }
}
