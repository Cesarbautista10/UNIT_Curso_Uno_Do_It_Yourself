---
title: 3. Entradas digitales
type: docs
weight: 6
BookToC: false
---
# Entradas Digitales

---

Este código permite interactuar con entradas digitales, en este caso, tres botones conectados a los pines 7, 6 y 5 respectivamente. Se lee el estado de estos pines para determinar si los botones están presionados o no.

<p align="center">
    <img src="/docs/3-Entradas_digitales/images/led2.png" alt="salida led" style="width: 70%;">
</p>

La lógica del código implica que cuando un botón está presionado, se enciende el LED correspondiente y cuando está suelto, se apaga.

## Código
---
Se emplea una estructura de control if-else para evaluar el estado de cada botón y actuar en consecuencia.

<div style="text-align: right;">
    <a href="/docs/3-Entradas_digitales/code/InputsDigitals.ino " download="InputsDigitals.ino">
        <button style="background-color: #4CAF50; color: white; padding: 10px 20px; border: none; border-radius: 4px; cursor: pointer;">
            Descargar InputsDigitals.ino 
        </button>
    </a>
</div>

```cpp
// Definimos los pines para los LEDs
const int ledPin1 = 13;
const int ledPin2 = 12;
const int ledPin3 = 11;

// Definimos los pines para los botones
const int buttonPin1 = 7;
const int buttonPin2 = 6;
const int buttonPin3 = 5;

void setup() {
  // Configuramos los pines de los LEDs como salida
  pinMode(ledPin1, OUTPUT);
  pinMode(ledPin2, OUTPUT);
  pinMode(ledPin3, OUTPUT);

  // Configuramos los pines de los botones como entrada con resistencia pull-up
  pinMode(buttonPin1, INPUT_PULLUP);
  pinMode(buttonPin2, INPUT_PULLUP);
  pinMode(buttonPin3, INPUT_PULLUP);
}

void loop() {
  // Verificamos si se presionó el primer botón y encendemos o apagamos el primer LED
  if (digitalRead(buttonPin1) == LOW) {
    digitalWrite(ledPin1, HIGH); // Encendemos el LED
  } else {
    digitalWrite(ledPin1, LOW); // Apagamos el LED
  }

  // Verificamos si se presionó el segundo botón y encendemos o apagamos el segundo LED
  if (digitalRead(buttonPin2) == LOW) {
    digitalWrite(ledPin2, HIGH); // Encendemos el LED
  } else {
    digitalWrite(ledPin2, LOW); // Apagamos el LED
  }

  // Verificamos si se presionó el tercer botón y encendemos o apagamos el tercer LED
  if (digitalRead(buttonPin3) == LOW) {
    digitalWrite(ledPin3, HIGH); // Encendemos el LED
  } else {
    digitalWrite(ledPin3, LOW); // Apagamos el LED
  }
}
```


<div style="text-align: right">
    <h1><a href="/docs/4-entradas_analogicas/">Siguiente</a></h>
</div>



---
⌨️ con ❤️ por [UNIT-Electronics](https://github.com/UNIT-Electronics) 😊


