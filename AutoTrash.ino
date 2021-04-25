#include <SharpIR.h>
#include <AccelStepper.h>

//SharpIR dSens = SharpIR(A4, model);
int dSens = analogRead(4);
AccelStepper stepper(4,A0,A1,A2,A3);

void setup() {
  
  // Begin Serial communication at a baud rate of 9600:
  Serial.begin(9600);
  //stepper.setMaxSpeed(1000);
  stepper.setSpeed(350);
  stepper.setMaxSpeed(350); 
  stepper.setAcceleration(20);        
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
  Serial.println(dSens);
  //if(distance_cm < 5){
  stepper.moveTo(10000);
  stepper.runToPosition();
  
  if (stepper.distanceToGo() == 0){
  stepper.setAcceleration(20); 
  stepper.moveTo(-10000);
  stepper.runToPosition();
  }
  //}
  //delay(500);
  //}
  //else
  //stepper.moveTo(10000);
  //stepper.runToPosition();

}
