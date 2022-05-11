#define led (2,3,4,5,6,7,8,9,10,11);

void setup() {
  // put your setup code here, to run once:

  // declaring digital pins as OUTPUT
pinMode(2, OUTPUT);
pinMode(3, OUTPUT);
pinMode(4, OUTPUT);
pinMode(5, OUTPUT);
pinMode(6, OUTPUT);
pinMode(7, OUTPUT);
pinMode(8, OUTPUT);
pinMode(9, OUTPUT);
pinMode(10, OUTPUT);
pinMode(11, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
// making 1st led to glow
digitalWrite(2, HIGH);
// keeping the led glow for 0.1 sec
delay(100);
// switch off 1st led
digitalWrite(2, LOW);
// keep it off for 0.1 sec
delay(100);


// Repeat the same for rest LEDs

digitalWrite(3, HIGH);
delay(100);
digitalWrite(3, LOW);
delay(100);


digitalWrite(4, HIGH);
delay(100);
digitalWrite(4, LOW);
delay(100);


digitalWrite(5, HIGH);
delay(100);
digitalWrite(5, LOW);
delay(100);


digitalWrite(6, HIGH);
delay(100);
digitalWrite(6, LOW);
delay(100);


digitalWrite(7, HIGH);
delay(100);
digitalWrite(7, LOW);
delay(100);


digitalWrite(8, HIGH);
delay(100);
digitalWrite(8, LOW);
delay(100);


digitalWrite(9, HIGH);
delay(100);
digitalWrite(9, LOW);
delay(100);


digitalWrite(10, HIGH);
delay(100);
digitalWrite(10, LOW);
delay(100);


digitalWrite(11, HIGH);
delay(100);
digitalWrite(11, LOW);
delay(100);
}
