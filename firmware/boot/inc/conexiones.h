#ifndef CONEXIONES_H
#define CONEXIONES_H

// ===============================
// MOTORES
// ===============================
#define MOTOR_FL 6   // Front Left
#define MOTOR_FR 9   // Front Right
#define MOTOR_BL 5   // Back Left
#define MOTOR_BR 3   // Back Right


// ===============================
// NRF24L01 (SPI)
// ===============================
#define NRF_CE   9
#define NRF_CSN  10
#define NRF_SCK  13
#define NRF_MOSI 11
#define NRF_MISO 12


// ===============================
// MPU6050 (I2C)
// ===============================
#define MPU_SDA A4
#define MPU_SCL A5


// ===============================
// BUZZER
// ===============================
#define BUZZER_PIN 8


// ===============================
// BATERIA
// ===============================
#define BATERIA_VCC "3.7V LiPo"

#endif
