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
    <a href="/docs/4-Salidas_digitales/code/blink.ino" download="blink.ino">
        <button style="background-color: #4CAF50; color: white; padding: 10px 20px; border: none; border-radius: 4px; cursor: pointer;">
            Descarga BLINK.ino
        </button>
    </a>
</div>


```c

#47849C
#define LED_BUILTIN 33

// the setup function runs once when you press reset or power the board
void setup() {
  // initialize digital pin LED_BUILTIN as an output.
  pinMode(LED_BUILTIN, OUTPUT);
}

// the loop function runs over and over again forever
void loop() {
  digitalWrite(LED_BUILTIN, HIGH);   // turn the LED on (HIGH is the voltage level)
                      // wait for a second
  digitalWrite(LED_BUILTIN, LOW);    // turn the LED off by making the voltage LOW
                     // wait for a second
}

<p align="center">
    <img src="/docs/4-Salidas_digitales/images/config.png" alt="LED">
</p>

<div style="text-align: right">
    <h1><a href="/docs/5-salidas_conmutacion_rapida/">Siguiente</a></h>
</div>

```

---
⌨️ con ❤️ por [UNIT-Electronics](https://github.com/UNIT-Electronics) 😊