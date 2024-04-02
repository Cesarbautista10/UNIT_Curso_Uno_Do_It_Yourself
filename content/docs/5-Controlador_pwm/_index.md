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

## Código
---
Se proporciona un ejemplo de código para demostrar el uso del PWM en Arduino.

<div style="text-align: right;">
    <a href="/docs/5-Controlador_pwm/code/OutPutPWM.ino" download="OutPutPWM.ino">
        <button style="background-color: #4CAF50; color: white; padding: 10px 20px; border: none; border-radius: 4px; cursor: pointer;">
            Descargar OutPutPWM.ino 
        </button>
    </a>
</div>

```c
// Definimos los pines para los LEDs
const int ledPin1 = 13;
const int ledPin2 = 12;
const int ledPin3 = 11;

void setup() {
  // Configuramos los pines de los LEDs como salida
  pinMode(ledPin1, OUTPUT);
  pinMode(ledPin2, OUTPUT);
  pinMode(ledPin3, OUTPUT);
}

void loop() {
  // Generamos un brillo aleatorio para cada LED (de 0 a 255)
  int brightness1 = random(256);
  int brightness2 = random(256);
  int brightness3 = random(256);

  // Establecemos el brillo de cada LED
  analogWrite(ledPin1, brightness1);
  analogWrite(ledPin2, brightness2);
  analogWrite(ledPin3, brightness3);

  // Esperamos un tiempo antes de cambiar la secuencia de brillo
  delay(500); // Puedes ajustar este valor según lo desees
}

```

<div style="text-align: right">
    <h1><a href="/docs/6-comunicacion_i2c/">Siguiente</a></h>
</div>



⌨️ con ❤️ por [UNIT-Electronics](https://github.com/UNIT-Electronics) 😊
 
