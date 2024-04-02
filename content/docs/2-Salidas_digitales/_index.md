---
title: 2. Salidas Digitales
type: docs
weight: 4
BookToC: false
---

# Salidas Digitales
---
El desarrollo de este ejemplo se enfoca en el control de pines de salida digital para encender y apagar LEDs, así como la implementación de secuencias lógicas sencillas.

## Programación 💻
1. **Instala el driver** <a href="http://www.wch.cn/download/CH341SER_EXE.html" target="_blank">CH340E</a> en tu computadora y un **compilador** como <a href="https://www.arduino.cc/en/software" target="_blank">Arduino IDE</a>.

2. Ejecuta el código <a href="https://github.com/UNIT-Electronics/UNIT-Uno-Do-It-Yourself/blob/main/codigos/blink" target="_blank">blink</a> y observa como el LED de tu tarjeta comienza a parpadear cada segundo.

## Esquema de conexión
---
<p align="center">
  <img src="/docs/2-Salidas_digitales/images/led.png" alt="salida led" width="60%">
</p>

## Código
---

<div style="text-align: right;">
    <a href="/docs/2-Salidas_digitales/code/OutPutBlink.ino" download="OutPutBlink.ino">
        <button style="background-color: #4CAF50; color: white; padding: 10px 20px; border: none; border-radius: 4px; cursor: pointer;">
            Descarga OutPutBlink.ino
        </button>
    </a>
</div>


```c

#47849C
// Definimos los pines para los LEDs
int ledPin1 = 13;
int ledPin2 = 12;
int ledPin3 = 11;

void setup() {
  // Configuramos los pines como salida
  pinMode(ledPin1, OUTPUT);
  pinMode(ledPin2, OUTPUT);
  pinMode(ledPin3, OUTPUT);
}

void loop() {
  // Encendemos y apagamos los LEDs en secuencia
  digitalWrite(ledPin1, HIGH);
  delay(500); // Esperamos medio segundo
  digitalWrite(ledPin1, LOW);

  digitalWrite(ledPin2, HIGH);
  delay(500);
  digitalWrite(ledPin2, LOW);

  digitalWrite(ledPin3, HIGH);
  delay(500);
  digitalWrite(ledPin3, LOW);
}

```


<div style="text-align: right">
    <h1><a href="/docs/3-entradas_digitales/">Siguiente</a></h>
</div>
---
⌨️ con ❤️ por [UNIT-Electronics](https://github.com/UNIT-Electronics) 😊