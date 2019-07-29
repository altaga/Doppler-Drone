/*
 Controlling a servo position using a potentiometer (variable resistor)
 by Michal Rinott <http://people.interaction-ivrea.it/m.rinott>

 modified on 8 Nov 2013
 by Scott Fitzgerald
 http://www.arduino.cc/en/Tutorial/Knob
*/

#include <Servo.h>
#include <SoftwareSerial.h>

SoftwareSerial mySerial(11, 10); // RX, TX

Servo myservo;  // create servo object to control a servo

int potpin = 0;  // analog pin used to connect the potentiometer
int val;    // variable to read the value from the analog pin
bool check=true;

void setup() {
  mySerial.begin(9600);
  Serial.begin(9600);
  myservo.attach(3);  // attaches the servo on pin 9 to the servo object
}

void loop() {
  while(mySerial.available()) {
  String a= mySerial.readString();// read the incoming data as string
  Serial.println(a.substring(0,1));
  if(a.substring(0,1)=="s")
  {
    check=!(check);
    Serial.println(check);
  }
  }
  if(check)
  {
  val = 20;            // reads the value of the potentiometer (value between 0 and 1023)
  val = map(val, 0, 1023, 0, 180);     // scale it to use it with the servo (value between 0 and 180)
  myservo.write(val); 
  }
  else
  {
  val = 980;            // reads the value of the potentiometer (value between 0 and 1023)
  val = map(val, 0, 1023, 0, 180);     // scale it to use it with the servo (value between 0 and 180)
  myservo.write(val);  
  }                         // waits for the servo to get there
}
