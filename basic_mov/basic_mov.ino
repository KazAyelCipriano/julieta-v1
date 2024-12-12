const int motor1 = 5;
const int motor2 = 6;
const int dir1 = 7;
const int dir2 = 8;

void setup() {
  pinMode(motor1, OUTPUT);
  pinMode(motor2, OUTPUT);
  pinMode(dir1, OUTPUT);
  pinMode(dir2, OUTPUT);
}

void loop() {

  digitalWrite(dir1, HIGH);
  digitalWrite(dir2, LOW);
  analogWrite(motor1, 200);
  analogWrite(motor2, 200);
  
  delay(1000);
  
  analogWrite(motor1, 0);
  analogWrite(motor2, 0);
  
  delay(1000);
  
  digitalWrite(dir1, LOW);
  digitalWrite(dir2, HIGH);
  analogWrite(motor1, 200);
  analogWrite(motor2, 200);
  
  delay(1000);

  analogWrite(motor1, 0);
  analogWrite(motor2, 0);
  
  delay(1000);
}