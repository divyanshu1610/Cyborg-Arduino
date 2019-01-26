#ifndef CyborgSonar_h
#define CyborgSonar_h
#include "Arduino.h"

class CyborgSonar{


    private:
            int _trigPin;
            int _echoPin;
            long _duration;
            int _distance;
        public:
            int getDistance();






};

#endif
