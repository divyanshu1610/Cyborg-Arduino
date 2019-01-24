#include "Arduino.h"
#include "CyborgMotor.h"

CyborgMotor::CyborgMotor(int pinA, int pinB){

    _pinA = pinA;
    _pinB = pinB;
    pinMode(_pinA, OUTPUT);
    pinMode(_pinB, OUTPUT);

}
    
        void CyborgMotor::moveForward(){

            digitalWrite(_pinA, HIGH);
            digitalWrite(_pinB, LOW);
        }

        void CyborgMotor::moveBackward(){

            digitalWrite(_pinA, LOW);
            digitalWrite(_pinB, HIGH);
        }

        void CyborgMotor::stop(){

            digitalWrite(_pinA, LOW);
            digitalWrite(_pinB, LOW);
        }



