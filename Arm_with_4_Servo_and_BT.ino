#include <Servo.h> 
 
Servo middle, left, right, claw ;  // creates 4 "servo objects"

int x;
int m=0;
int c=0;
int cl=0;
void setup() {

  Serial.begin(9600);
  middle.attach(11);  // attaches the servo on pin 11 to the middle object
  left.attach(10);  // attaches the servo on pin 10 to the left object
  right.attach(9);  // attaches the servo on pin 9 to the right object
  claw.attach(6);  // attaches the servo on pin 6 to the claw object
}

void loop() {
  if (Serial.available()> 0 )
  {
  x = Serial.read();
switch(x){
case '3' : m=m+5;
 middle.write(m); // sets the servo position according to the value(degrees)
break;

case '4' : m=m-5;
 middle.write(m); // sets the servo position according to the value(degrees)
break;

case '1' : c=c+5;
  left.write(c); // does the same
  right.write(c); // and again
break;

case '2' : c=c-5;
  left.write(c); // does the same
  right.write(c); // and again
break;

case 'A' : cl=cl+5;
claw.write(cl); // yes you've guessed it
break;

case '8' : cl=cl-5;
claw.write(cl); // yes you've guessed it
break;



}}}
