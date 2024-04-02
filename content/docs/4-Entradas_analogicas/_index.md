---
title: 4. Entradas análogicas
type: docs
weight: 8
BookToC: false
---
# Entradas Analógicas

En este ejemplo, se presenta un código que permite interactuar con entradas analógicas, específicamente utilizando un potenciómetro como sensor. La imagen a continuación muestra un esquema básico del proceso de lectura de entradas analógicas mediante un conversor analógico a digital (ADC).

<p align="center">
    <img src="/docs/4-Entradas_analogicas/images/adc.png" alt="adc" style="width: 50%;">
</p>

## Código

Este tipo de código es útil para la lectura de sensores analógicos, como potenciómetros o sensores de luz, donde la variación de voltaje proporciona información sobre la cantidad medida.

<div style="text-align: right;">
    <a href="/docs/4-Entradas_analogicas/code/AnalogInput.ino" download="AnalogInput.ino">
        <button style="background-color: #4CAF50; color: white; padding: 10px 20px; border: none; border-radius: 4px; cursor: pointer;">
            Descargar AnalogInput.ino 
        </button>
    </a>
</div>

```c
// Definimos los pines para los LEDs
const int ledPin1 = 13;
const int ledPin2 = 12;
const int ledPin3 = 11;

// Definimos el pin para el potenciómetro
const int potPin = A0;

void setup() {
  // Configuramos los pines de los LEDs como salida
  pinMode(ledPin1, OUTPUT);
  pinMode(ledPin2, OUTPUT);
  pinMode(ledPin3, OUTPUT);
}

void loop() {
  // Leemos el valor del potenciómetro (0-1023)
  int potValue = analogRead(potPin);

  // Mapeamos el valor del potenciómetro al rango de brillo (0-255)
  int brightness = map(potValue, 0, 1023, 0, 255);

  // Encendemos los LEDs en función del rango de brillo
  if (brightness > 85) {
    analogWrite(ledPin1, brightness - 85);
  } else {
    analogWrite(ledPin1, 0);
  }

  if (brightness > 170) {
    analogWrite(ledPin2, brightness - 170);
  } else {
    analogWrite(ledPin2, 0);
  }

  if (brightness > 255) {
    analogWrite(ledPin3, brightness - 255);
  } else {
    analogWrite(ledPin3, 0);
  }
}

```
<div style="text-align: right">
    <h1><a href="/docs/5-controlador_pwm/">Siguiente</a></h>
</div>


---
⌨️ con ❤️ por [UNIT-Electronics](https://github.com/UNIT-Electronics) 😊