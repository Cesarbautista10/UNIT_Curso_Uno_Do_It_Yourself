---
title: 5. Configuración del PWM
type: docs
weight: 9
BookToC: false
---

# Configuración del PWM 
---


### Conceptos Básicos

La Modulación de Ancho de Pulso (PWM) es una técnica utilizada para controlar la potencia entregada a un dispositivo. Se logra variando la duración de una señal digital de alta frecuencia, controlando así la cantidad de potencia entregada al dispositivo. Esto es útil en diversas aplicaciones, como el control de motores, ajuste de brillo de LED y generación de señales analógicas.

<div style="text-align: center;">
  <img src="/docs/5-Controlador_pwm/images/led.png" style="width: 60%;" alt="PWM" />
</div>



<div style="text-align: right;">
    <a href="/docs/8-Entradas_analogicas/code/adc.ino" download="adc.ino">
        <button style="background-color: #4CAF50; color: white; padding: 10px 20px; border: none; border-radius: 4px; cursor: pointer;">
            Descarga adc.ino 
        </button>
    </a>
</div>

```c
#include <Serial.h>

void setup() {
  // No es necesario inicializar USBSerial

  pinMode(11, INPUT);
}

void loop() {
  // Leer la entrada en el pin analógico 0, P1.1:
  int sensorValue = analogRead(11);
  // Convertir la lectura analógica (que va de 0 a 255) a un voltaje (0 a 3.3V):
  float voltage = sensorValue * (3.3 / 255.0);
  // Imprimir el valor leído:
  USBSerial_println(voltage);
  // O con precisión:
  //USBSerial_println(voltage,1);

  delay(10);
}
```
⌨️ con ❤️ por [UNIT-Electronics](https://github.com/UNIT-Electronics) 😊
 
