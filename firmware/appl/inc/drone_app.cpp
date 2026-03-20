#include <SPI.h>
#include <RF24.h>, #include "I2Cdev.h"
#include "MPU6050.h"
#include "Wire.h" 

void droneSetup()
{
    Serial.begin(9600);
}

void droneLoop()
{
    // ejemplo simple
    analogWrite(MOTOR_FL,120);
    analogWrite(MOTOR_FR,120);
    analogWrite(MOTOR_BL,120);
    analogWrite(MOTOR_BR,120);

    delay(2000);

    analogWrite(MOTOR_FL,0);
    analogWrite(MOTOR_FR,0);
    analogWrite(MOTOR_BL,0);
    analogWrite(MOTOR_BR,0);

    delay(2000);
}
