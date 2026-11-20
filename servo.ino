/**
 * Demonstrates how to use the servo
 * @author First Last
 * @date Month Year
 */

#include <Servo.h>

const int servoPin = 3;

Servo myServo; // create the servo object

void setup() {
    myServo.attach(servoPin); // enable the servo on the pin

}

void loop() {
    myServo.write(0);
    delay(1000);

    myServo.write(90);
    delay(1000);

    myServo.write(90);
    delay(1000);
}