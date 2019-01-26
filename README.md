For information on installing libraries, see: http://www.arduino.cc/en/Guide/Libraries


CyborgMotor :   "Control the motor functions"
              <br> CyborgMotor(int pinA, int pinB, int enPin) : Pins and Enable pin 
               <br> moveForward(int speed) : rotate in forward direction
              <br> moveBackward(int speed) : rotate in backward direction
               <br > stop() : stops the motor


<br> CyborgIRSensor :   "Control the IRSensors functions"
                <br> CyborgIRSensor(int analogPin) : Constructor to initialize pin
               <br> onLine(int threshold) : returns true if the sensor Reading is more than threshold
               <br> getReading() : returns the value read by sensor


<br> CyborgSonar :   "Control the SONAR sensors"
                <br> CyborgSonar(int trigPin, int echoPin) : Constructor to initialize sonar with trigger pin and echo pin 
               <br> getDistance() : returns the distance


            
