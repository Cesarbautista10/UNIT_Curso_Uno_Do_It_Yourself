---
title: 3. Entradas digitales
type: docs
weight: 6
BookToC: false
---

# Entradas digitales

---
Este código permite interactuar con una entrada digital, en este caso, un botón conectado al pin `P1.1`. La lectura de este pin se realiza para determinar si el botón está presionado o no.


<p align="center">
    <img src="/docs/3-Entradas_digitales/images/led2.png" alt="salida led" style="width: 70%;">
</p>

La lógica del código implica que, cuando el botón está presionado (pin `P1.1` leído como LOW), se enciende el LED (HIGH), y cuando el botón está suelto, se apaga el LED (LOW).

## Código
---
Se utiliza una estructura de control if-else para evaluar el estado del botón y tomar decisiones en consecuencia.
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
    <h1><a href="/docs/7-entradas_open_drain/">Siguiente</a></h>
</div>



---
⌨️ con ❤️ por [UNIT-Electronics](https://github.com/UNIT-Electronics) 😊


