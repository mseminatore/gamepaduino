#include <Servo.h>

#define SERVO_PIN 9

// Create our servo object(s)
Servo servo;

// This code runs once at startup
void setup() {
  servo.attach(SERVO_PIN);

  // move servo to safe position
  safePos();
}

//
void pushButton() {
  // press button
  servo.write(49);
  delay(100 + random(50));

  // release button
  servo.write(45);
}

//
void safePos() {
  servo.write(0);
  delay(15);
}

// This code runs periodically
void loop() {
  // TODO - random button presses
  
  pushButton();
  
  delay(150 + random(3000));
}
