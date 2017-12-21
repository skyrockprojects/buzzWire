/**
Welcome to SkyrockProjects, 
After some basic practice these days, we are going to make our buzzWire project.
**/



/**
Section 1:
a. Blink with led by delay(),
b. Sweep servomotor by servo lib,
c. Control led by push button.
**/

/******a******/

#define ledPin 13

void setup() {
  // put your setup code here, to run once:
  pinMode(ledPin, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(ledPin, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(1000);                       // wait for a second
  digitalWrite(ledPin, LOW);    // turn the LED off by making the voltage LOW
  delay(1000);                       // wait for a second
}

/****** end ******/

/******b******/
/*
#include <Servo.h>
#define ledPin 13

Servo myservo;  // create servo object to control a servo

int pos = 0;    // variable to store the servo position


void setup() {
  // put your setup code here, to run once:
  pinMode(ledPin, OUTPUT);
  myservo.attach(9);  // attaches the servo on pin 9 to the servo object

}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(ledPin, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(1000);                       // wait for a second
  digitalWrite(ledPin, LOW);    // turn the LED off by making the voltage LOW
  delay(1000);                       // wait for a second

  for (pos = 0; pos <= 180; pos += 1) { // goes from 0 degrees to 180 degrees
    // in steps of 1 degree
    myservo.write(pos);              // tell servo to go to position in variable 'pos'
    delay(15);                       // waits 15ms for the servo to reach the position
  }
  for (pos = 180; pos >= 0; pos -= 1) { // goes from 180 degrees to 0 degrees
    myservo.write(pos);              // tell servo to go to position in variable 'pos'
    delay(15);                       // waits 15ms for the servo to reach the position
  }
  delay(1000);
}
*/
/******end******/

/******c******/
/*
#define ledPin 13

// constants won't change. They're used here to set pin numbers:
const int buttonPin = 12;     // the number of the pushbutton pin
int buttonState = 0;         // variable for reading the pushbutton status

void setup() {
  // put your setup code here, to run once:
  pinMode(ledPin, OUTPUT);
  pinMode(buttonPin, INPUT_PULLUP);      // Push-Button On Bread Board

}

void loop() {
  bool buttonState = digitalRead(12);  // store current state of pin 12
  digitalWrite(ledPin, buttonState);
  
}
*/
/******end******/

/**how about put all things together?
or connect with buzzer and make some noise?
***/


