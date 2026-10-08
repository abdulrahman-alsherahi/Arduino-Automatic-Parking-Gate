#include <Servo.h>

Servo gate;

const int trigPin = 7;
const int echoPin = 8;
const int servoPin = 9;

const int greenLed = 3;
const int redLed = 4;

long duration;
int distance;

void setup() {
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);

  pinMode(greenLed, OUTPUT);
  pinMode(redLed, OUTPUT);

  gate.attach(servoPin);
  gate.write(0);

  Serial.begin(9600);
}

void loop() {

  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);

  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);

  digitalWrite(trigPin, LOW);

  duration = pulseIn(echoPin, HIGH);

  distance = duration * 0.034 / 2;

  Serial.println(distance);

  if (distance < 15) {

    gate.write(90);

    digitalWrite(redLed, HIGH);
    digitalWrite(greenLed, LOW);

  } else {

    gate.write(0);

    digitalWrite(redLed, LOW);
    digitalWrite(greenLed, HIGH);
  }

  delay(200);
}
