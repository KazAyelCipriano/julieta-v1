#include "FalconRobot.h"
FalconRobotLineSensor left(A2);
FalconRobotLineSensor right(A3);

int leftValue;
int rightValue;
#define LINETHRESHOLD 700
#define SPEED 50

FalconRobotMotors motors(5, 7, 6, 8);
int leftSpeed;
int rightSpeed;


void setup() {
  Serial.begin(9600);
  Serial.println("Welcome to experiment 5.2 - Line Following");
  delay(2000);
  Serial.println("Line Sensor Readings: ");
  delay(500);
}

void loop() {

  leftValue = left.read();
  rightValue = right.read();

  Serial.print(leftValue);
  Serial.print("\t");
  Serial.print(rightValue);
  Serial.println();
  if((leftValue > LINETHRESHOLD) && (rightValue > LINETHRESHOLD)) {
  	leftSpeed = SPEED;
  	rightSpeed = SPEED;
  }

  else if(rightValue > LINETHRESHOLD) {
  	leftSpeed = SPEED + 40;
  	rightSpeed = SPEED - 40;
  }

  else if(leftValue > LINETHRESHOLD) {
  	leftSpeed = SPEED - 40;
  	rightSpeed = SPEED + 40;
  }

  motors.leftDrive(leftSpeed, FORWARD);
  motors.rightDrive(rightSpeed, FORWARD);

  delay(0);
}