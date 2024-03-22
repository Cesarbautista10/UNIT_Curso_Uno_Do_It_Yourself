---
title: 6. Comunicación I2C
type: docs
weight: 10
BookToC: false
---

# Comunicación I2C
---
En la intersección de la innovación tecnológica y la creatividad visual, las pantallas OLED desempeñan un papel central. 


<p align="center">
    <img src="\docs\6-Comunicacion_I2C\images\oled.png" alt="frecuecy" style="width: 50%;">
</p>




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




<div style="text-align: right">
    <h1><a href="/docs/11-comunicacion_neopixels/">Siguiente</a></h>
</div>



---
⌨️ con ❤️ por [UNIT-Electronics](https://github.com/UNIT-Electronics) 😊