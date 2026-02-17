Software Requirements Specification (SRS)
Project Name: Sistema de Control de Dron con Comunicación LoRa
 Version: 0.1 – Primer Borrador
 Date: 16 / 02 / 2026
 Author(s): jair, daniel, salvador, rafael 
 Responsible Signs: ___________________________

1. Introduction
1.1 Purpose
El propósito de este documento es establecer los requerimientos funcionales y no funcionales del sistema de control del dron, incluyendo la comunicación inalámbrica, las interfaces de hardware y las restricciones del sistema embebido.

1.2 Scope
El sistema consiste en un dron armado mediante un kit comercial y un control remoto personalizado. El sistema permitirá la transmisión de comandos de control utilizando comunicación inalámbrica LoRa.
El problema que se busca resolver es la implementación de un sistema de control remoto confiable y de largo alcance para un dron, utilizando componentes electrónicos comerciales e integración en PCB.

1.3 Definitions, Acronyms, and Abbreviations
LoRa: Tecnología de comunicación inalámbrica de largo alcance y bajo consumo.


PCB: Placa de Circuito Impreso (Printed Circuit Board).


MCU: Microcontrolador (Microcontroller Unit).


Joystick: Dispositivo de entrada analógica para control de movimiento.


TX / RX: Transmisor / Receptor.


Controlador de Vuelo: Unidad encargada de la estabilidad y control del dron.



1.4 References
Datasheet del módulo LoRa utilizado.


Documentación del microcontrolador seleccionado.


Manual del kit de dron adquirido.


Normas básicas de seguridad para sistemas UAV.



1.5 Document Overview
Este documento se divide en:
Introducción


Descripción General del Sistema


Requerimientos Específicos


Verificación y Validación (No requerido)


Matriz de Trazabilidad (No requerido)



2. Overall Description
2.1 Product Perspective
El sistema es un sistema embebido parcialmente independiente, compuesto por:
Unidad aérea (dron basado en kit)


Unidad de control (control remoto personalizado)


Ambas unidades interactúan mediante comunicación LoRa.

2.2 Product Functions
El sistema deberá:
Permitir control remoto inalámbrico del dron


Transmitir comandos de movimiento


Mantener comunicación estable


Interpretar entradas de joystick


Garantizar operación segura



2.3 User Characteristics
Los usuarios esperados poseen:
Conocimientos básicos de electrónica


Conocimientos básicos de sistemas embebidos


Capacidad de operar controles manuales



2.4 Constraints
El sistema presenta las siguientes restricciones:
Uso de componentes comerciales disponibles


Limitaciones de energía (baterías)


Alcance y latencia de LoRa


Presupuesto limitado


Tamaño físico del control remoto



2.5 Assumptions and Dependencies
Se asume que:
Los módulos LoRa son compatibles entre sí


El controlador de vuelo acepta señales externas


La PCB será fabricada correctamente


Las baterías proporcionan energía suficiente



3. Specific Requirements

3.1 Functional Requirements
FR-01: El sistema deberá permitir el control inalámbrico del dron.
FR-02: El sistema deberá transmitir comandos de movimiento desde el control remoto hacia el dron mediante LoRa.
FR-03: El sistema deberá interpretar correctamente las señales de los joysticks.
FR-04: El sistema deberá mantener un enlace de comunicación estable.
FR-05: El sistema deberá permitir encendido y apagado seguro.

3.2 Non-Functional Requirements
NFR-01 – Performance: El sistema deberá responder a comandos dentro de un tiempo aceptable para control remoto.
NFR-02 – Power Consumption: El consumo energético deberá ser compatible con operación mediante baterías.
NFR-03 – Reliability: El sistema deberá operar de manera estable durante la sesión de uso.
NFR-04 – Security: La comunicación deberá minimizar interferencias o pérdidas de señal.
NFR-05 – Maintainability: El sistema deberá permitir reemplazo de módulos o componentes.

3.3 External Interface Requirements

3.3.1 User Interfaces
Joysticks de control
Botones de operación
Indicadores LED (opcional)



3.3.2 Hardware Interfaces
Joysticks → MCU
MCU → Módulo LoRa (SPI / UART según diseño)
LoRa RX → Controlador de Vuelo
Sistema de alimentación





3.3.3 Software Interfaces
Protocolo de comunicación LoRa


Firmware del microcontrolador



3.4 Real-Time Requirements
El sistema deberá procesar y transmitir comandos en tiempo cercano a real para garantizar control adecuado del dron.

3.5 Safety and Regulatory Requirements
El sistema deberá operarse bajo prácticas básicas de seguridad para UAV, evitando riesgos físicos y eléctricos.


Roles del Equipo
Integrante 1 (salva, daniel)– Ensamblaje del dron
 salvador
Integrante 2 (jair, salva)– Electrónica
 Responsable de módulos LoRa, conexiones y energía.
Integrante 3 (jair, daniel)– Diseño PCB
 Responsable del diseño y validación de la placa.
Integrante 4 (salva, rafael)– Programación / Comunicación
 Responsable de transmisión y recepción de datos.
Integrante 5 (rafael, daniel)– Documentación
 Responsable del SRS, reportes y presentación.
