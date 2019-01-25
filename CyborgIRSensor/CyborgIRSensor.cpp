#include "Arduino.h"
#include "CyborgIRSensor.h"


    CyborgIRSensor::CyborgIRSensor(int analogPin){
        _analogPin = analogPin;
    }

    bool CyborgIRSensor::onLine(int th){

        if(analogRead(_analogPin)>= th ){
            return true;
        }
        return false;
    }

    int CyborgIRSensor::getReading(){
        int r = analogRead(_analogPin);
        return r;
    }


