#include <SharpIR.h>
#include <AccelStepper.h>
//#include <AFMotor.h>
// Include the Arduino Stepper.h library:
#include <Stepper.h>

const int stepsPerRevolution = 200;  // change this to fit the number of steps per revolution
// Create stepper object called 'myStepper', note the pin order:
Stepper myStepper = Stepper(stepsPerRevolution, A0, A1, A2, A3);
//SharpIR dSens = SharpIR(IRPin, model);

void setup() {
  
  // Set the speed to 10 rpm:
  myStepper.setSpeed(10);
  
  // Begin Serial communication at a baud rate of 9600:
  Serial.begin(9600);
}

void loop() {
  //read serial sent from Python script
  //if (Serial.read()=="S")
  // put your main code here, to run repeatedly:
  // Step one revolution in one direction:
  //distance_cm = dSens.distance();
  //Serial.print("Mean distance: ");
  //Serial.print(distance_cm);
  //Serial.println(" cm");
  //if(distance_cm < 5){
  Serial.println("clockwise");
  myStepper.step(stepsPerRevolution);
  delay(1000);
  //}
  //else
  // Step one revolution in the other direction:
  //Serial.println("counterclockwise");
  //myStepper.step(-stepsPerRevolution);
  //delay(500);


}
