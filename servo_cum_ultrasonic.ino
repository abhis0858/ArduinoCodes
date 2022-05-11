#include<Servo.h>
// assign servo to variable m
Servo m;
// define trigger and echo of ultrasonic sensor
const int trigPin = 12;
const int echoPin = 13;
// defines variables
long duration;
int distance;

void setup() {
  pinMode(trigPin, OUTPUT); // Sets the trigPin as an Output
  pinMode(echoPin, INPUT); // Sets the echoPin as an Input
  Serial.begin(9600); // Starts the serial communication
  pinMode(8, OUTPUT);
  m.attach(9);
}
void loop() {
  // Clears the trigPin
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);
  // Sets the trigPin on HIGH state for 10 micro seconds
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);
  // Reads the echoPin, returns the sound wave travel time in microseconds
  duration = pulseIn(echoPin, HIGH);
  // Calculating the distance
  // Distance in cm
  distance = duration * 0.034 / 2;
  // Prints the distance on the Serial Monitor
  Serial.print("Distance: ");
  Serial.println(distance);
  // if distance calcluated is less than a certain range 
  //then the servo will open the gate and as soon as distance goes out of range it closes again
  if(distance<15){
    m.write(180);
  }
  else{
    m.write(-180);
  }
}
