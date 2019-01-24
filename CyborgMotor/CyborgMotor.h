#ifndef CyborgMotor_h
#define CyborgMotor_h
#include "Arduino.h"

class CyborgMotor{


        private:
            int _pinA;
            int _pinB;
        
        public:
            CyborgMotor(int pinA, int pinB);
            void moveBackward();
            void moveForward();
            void stop();

};

#endif

