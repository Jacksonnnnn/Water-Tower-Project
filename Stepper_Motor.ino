#include <Stepper.h>

const int stepsPerRevolution = 2052;
int rotate = 0;

Stepper myStepper = Stepper(stepsPerRevolution, 8, 10, 9, 11);

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  myStepper.setSpeed(10);
} 

void loop() {
  // put your main code here, to run repeatedly:
  if (Serial.available() > 0) {
    rotate = Serial.parseInt();
    myStepper.step(rotate);
    rotate = 0;
    }
}
