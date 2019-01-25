#ifndef CyborgIRSensor_h
#define CyborgIRSensor_h
#include "Arduino.h"


class CyborgIRSensor{


        private:
            int _analogPin;
        
        public:
            CyborgIRSensor(int analogPin);
            bool onLine(int th);
            int getReading();

};

#endif
