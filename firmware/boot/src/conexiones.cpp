#include "conexiones.h"
#include <Arduino.h>

void configurarPines()
{

    // Configurar motores
    pinMode(MOTOR_FL, OUTPUT);
    pinMode(MOTOR_FR, OUTPUT);
    pinMode(MOTOR_BL, OUTPUT);
    pinMode(MOTOR_BR, OUTPUT);

    // Configurar buzzer
    pinMode(BUZZER_PIN, OUTPUT);

}
