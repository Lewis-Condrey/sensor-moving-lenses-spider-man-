#include <Servo.h>

// sensors 
 const int leftsensor = 17;
 const int rightsensor = 6;

// servo's
 Servo left;
 Servo right;

 
void setup() 
{
  // Set up servo's
  left.attach (14);
  right.attach(9);
  // Set up sensor pins as inputs 
  pinMode(leftsensor, INPUT);
  pinMode(rightsensor, INPUT);

}

void loop() {
 int detectleft = digitalRead(leftsensor);
 int detectright = digitalRead(rightsensor);
  if(detectleft == LOW)
 {left.write (180);  //close the lense
 }
 if(detectleft == HIGH)
 {
  left.write (0);  //open the lense
 }
 if(detectright == LOW)
 {right.write (0);  //close the lense
 }
 if(detectright == HIGH)
 {
  right.write (180);  //open the lense
 }
 delay(300);
}
