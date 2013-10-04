/*Ryan Fiske September 2013
Below is a simple code to have a servo rotate when a pushbutton is pressed.
Connect the servo to digital pin 4
Connect pushbutton between pin 2 and ground
NOTE: It is recommended that you use separate power to power the servo unless you are using
a very small servo.To adjust servo angle, change the values for the two servo.write commands
*/
#include <Servo.h>
int pushButton = 2; //button pin, connect to ground to move servo
int pressed = 0;
Servo servo;

void setup()
{
  pinMode(pushButton, INPUT);
  servo.attach(4);
  digitalWrite(2, HIGH); //enable pullups to make pin high
}

void loop()
{
  pressed = digitalRead(pushButton);
  if (pressed == LOW)
  {
    servo.write(0);
  }
  else
  {
    servo.write(160);
  }
}
