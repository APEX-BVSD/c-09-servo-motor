/**
 * Demonstrates how to use the servo
 * @author First Last
 * @date Month Year
 */

#include <Servo.h>

const int servoPin = 3;

Servo servo; // create the servo object

void setup() {
    servo.attach(servoPin); // enable the servo on the pin

}

void loop() {
    servo.write(0);
    delay(1000);

    servo.write(90);
    delay(1000);

    servo.write(180);
    delay(1000);
}