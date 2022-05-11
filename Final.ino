#include <LiquidCrystal.h>
const int trigPin = 12;
const int echoPin = 13;
// defines variables
long duration;
int distance;
LiquidCrystal lcd(2,3,4,5,6,7);
void setup() {
  lcd.begin(16, 2);
  pinMode(trigPin, OUTPUT); // Sets the trigPin as an Output
  pinMode(echoPin, INPUT); // Sets the echoPin as an Input
  Serial.begin(9600); // Starts the serial communication
  pinMode(8, OUTPUT);
//  lcd.print("Distance");
}
void loop() {
  // Clears the trigPin
 
  lcd.setCursor(0, 0);
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
  Serial.print("Distance(in cm:) ");
  lcd.print("Distance(in cm) ");
  Serial.println(distance);
  lcd.setCursor(0,1);
  lcd.print(distance);
  delay(1000);
  lcd.clear();
  if(distance<15){
    digitalWrite(8, HIGH);
    
  }
  else{
    digitalWrite(8, LOW);
  }
}
