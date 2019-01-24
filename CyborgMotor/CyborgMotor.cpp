#include "Arduino.h"
#include "CyborgMotor.h"

CyborgMotor::CyborgMotor(int pinA, int pinB, int enPin){

    _enPin = enPin;    
    _pinA = pinA;
    _pinB = pinB;
    pinMode(_pinA, OUTPUT);
    pinMode(_pinB, OUTPUT);
    pinMode(_enPin, OUTPUT);

}
    
        void CyborgMotor::goForward(int speed){

            analogWrite(_enPin, speed);
            if(_enPin != _pinA){
                digitalWrite(_pinA, HIGH);
            }            
            digitalWrite(_pinB, LOW);
        }

        void CyborgMotor::goBackward(int speed){

            if(_enPin == _pinA ){
                digitalWrite(_pinB, speed);
            }else{
                analogWrite(_enPin, speed); 
                digitalWrite(_pinB,HIGH);
            }
            digitalWrite(_pinA, LOW);
       
        }

        void CyborgMotor::stop(){

            digitalWrite(_pinA, LOW);
            digitalWrite(_pinB, LOW);
        }




