#ifndef CyborgMotor_h
#define CyborgMotor_h
#include "Arduino.h"

class CyborgMotor{


        private:
            int _pinA;
            int _pinB;
            int _enPin;
        
        public:
            CyborgMotor(int pinA, int pinB, int enPin);
            void goBackward(int speed);
            void goForward(int speed);
            void stop();

};

#endif

