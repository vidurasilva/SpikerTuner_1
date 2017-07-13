#include <Servo.h>
Servo temp1;
Servo temp2;
Servo temp3;
Servo mainGate;
Servo stage;

int stemp1, stemp2, stemp3;
int stage2, stage3;

const int trigPin = 10;
const int echoPin = 11;

long duration;
int distance;


void setup() {
  // put your setup code here, to run once:

  temp1.attach(7);
  temp2.attach(8);
  temp3.attach(9);
  mainGate.attach(6);
  stage.attach(5);

  temp1.write(0);
  temp1.write(0);
  temp1.write(0);
  mainGate.write(0);
  stage.write(0);

  Serial.begin(9600);

  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);

}
void perform() {


}
void runtemp1() {
  temp1.write(90);
  temp2.write(0);
  temp3.write(0);
}
void runtemp2() {
  temp2.write(90);
  temp1.write(0);
  temp3.write(0);
}
void runtemp3() {
  temp3.write(90);
  temp1.write(0);
  temp2.write(0);
}
void stemp2{
  delay(2000);
  }
void stemp2{


}
void dis() {
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);
  duration = pulseIn(echoPin, HIGH);
  distance = duration * 0.034 / 2;

}
stemp1 = 0;
stemp2 = 0;
stemp3 = 0;

stage2 = 0;
stage3 = 0;


void loop() {

  String t;
  while (Serial.available()) {
    t = t + (char)Serial.read();
  }

  if (t == "temp1") {
    stemp1 = 1;
    runtemp1();
  }
  if (t == "temp2") {
    stemp2 = 1;
    runtemp2();
  }
  if (t == "temp3") {
    stemp3 = 1;
    runtemp3();
  }

  if (t == "stage2") {
    stage2 = 1;
  }
  if (t == "stage3") {
    stage3 = 1;
  }
  if (t == "open") {
    mainGate.write();

  }
  if (t == "run") {
    perform();

  }
}

void stemp1{

}
}

