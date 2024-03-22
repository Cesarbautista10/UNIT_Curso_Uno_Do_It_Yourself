---
title: 7. Comunicación con neopixels
type: docs
weight: 11
BookToC: false
---

# Comunicación con neopixels 


Los Neopixels utilizan el protocolo WS2812, que implica enviar una serie de bits que representan los valores de color para cada LED en la cadena. Se debe generar la secuencia de bits de acuerdo con las especificaciones del protocolo.


  <p align="center">
    <img src="\docs\7-Comunicacion_neopixels\images\neopixel.png" style="width: 80%;" alt="neopixel">
</p>



<div style="text-align: right;">
    <a href="/docs/6-Entradas_digitales/code/input_digital.ino" download="input_digital.ino">
        <button style="background-color: #4CAF50; color: white; padding: 10px 20px; border: none; border-radius: 4px; cursor: pointer;">
            Descarga input_digital.ino 
        </button>
    </a>
</div>

```c
#include <Serial.h>

void setup() {
  // No need to init USBSerial
  pinMode(11, INPUT);
  pinMode(33, OUTPUT);
}

void loop() {
  // Leer el valor del botón en una variable
  int sensorVal = digitalRead(11);
  // Imprimir el valor del botón en el monitor serial
  USBSerial_println(sensorVal);
  if (sensorVal == HIGH) {
    digitalWrite(33, LOW);
  } else {
    digitalWrite(33, HIGH);
  }

  delay(10);
}
```



<div style="text-align: right">
    <h1><a href="/docs/12-comunicacion_serial/">Siguiente</a></h>
</div>


⌨️ con ❤️ por [UNIT-Electronics](https://github.com/UNIT-Electronics) 😊
 
