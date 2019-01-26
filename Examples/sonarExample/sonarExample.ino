#include <CyborgSonar.h>

const int echoPin = 10;
const int trigPin = 9;

CyborgSonar sonarA(10, 9);

void setup() {
  // put your setup code here, to run once:
  
  Serial.begin(9600);

}

void loop() {
  // put your main code here, to run repeatedly:
  int d  = sonarA.getDistance();
  Serial.println(d);
}
