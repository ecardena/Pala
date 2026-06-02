#ifndef PALA_H
#define PALA_H

#include <Arduino.h>
#include <Servo.h>

class Pala{
    
  private:
    Servo _servo;
    int _pinServo;
    int _direccion;

  public:
    Pala(int pinservo);
    void iniciaPala();
    void muevePala(int direccion);
};

#endif