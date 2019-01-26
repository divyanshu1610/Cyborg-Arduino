#include "Arduino.h"
#include "CyborgSonar.h"

CyborgSonar::CyborgSonar(int trigPin, int echoPin){
    
    _duration = 0;
    _distance = 0;
    _trigPin = trigPin;
    _echoPin = echoPin;
    pinMode(_trigPin, OUTPUT);
    pinMode(_echoPin, INPUT);
}

    int CyborgSonar::getDistance(){

        digitalWrite(_trigPin, LOW);
        delayMicroseconds(2);
    
        digitalWrite(_trigPin, HIGH);
        delayMicroseconds(10);
        digitalWrite(_trigPin, LOW);
       
        _duration = pulseIn(_echoPin, HIGH);
        _distance =  _duration * 0.034/2;
        return _distance;
   
    }




