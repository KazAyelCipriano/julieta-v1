#include "FalconRobot.h"
FalconRobotMotors motors(5, 7, 6, 8);
FalconRobotDistanceSensor distanceSensor(2, 3);

int distancia; 

void setup() {
}

void loop() {
  distancia = distanceSensor.read();
  if(distancia < 20){
    motors.stop();
    delay(250);
    motors.drive(50,BACKWARD);
    delay(250);
    motors.stop();
    delay(250);
    motors.leftDrive(50, FORWARD);
    motors.rightDrive(50, BACKWARD); 
    delay(250);
    motors.stop();
    delay(250);
}
  else{
    motors.drive(75, FORWARD);
  }
  delay(60);
}