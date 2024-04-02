---
title: 1. Descripción general
type: docs
weight: 1
BookToC: false
---

<!-- # 8-bit enhanced USB microcontroller CH559 -->

# UNIT Uno Do It Your Self

El proyecto `UNIT Uno Do It Your Self` surge como respuesta a la necesidad de proporcionar una plataforma de desarrollo accesible y educativa para personas que se adentran en el campo de la electrónica. La idea se gesta a partir de la observación de que muchos entusiastas y estudiantes carecen de recursos adecuados para aprender y experimentar con microcontroladores y circuitos electrónicos.

Con la intención de brindar una solución a esta problemática, un equipo de ingenieros y entusiastas de la electrónica se reúne y comienza a trabajar en el diseño y desarrollo de una tarjeta de desarrollo que sea asequible, fácil de usar y que permita a los usuarios familiarizarse con los principios básicos de la electrónica y la programación de microcontroladores.

Inspirados en el éxito y la popularidad del Arduino UNO, deciden basar su proyecto en este microcontrolador, el ATMEGA328P, y asegurarse de que sea compatible con el entorno de desarrollo integrado (IDE) de Arduino. Esto garantizará que los usuarios tengan acceso a una amplia gama de recursos y tutoriales disponibles en línea para aprender y desarrollar sus habilidades.

Además, conscientes de la importancia de la soldadura y la comprensión de la estructura interna de los dispositivos electrónicos, deciden diseñar la tarjeta utilizando componentes Through Hole. Esta elección facilitará a los principiantes la soldadura de los componentes y les permitirá comprender mejor cómo están conectados los diferentes elementos en el circuito.



## Materiales requeridos  

-	<a href="https://uelectronics.com/categoria-producto/equipo-laboratorio/herramientas/" target="_blank">Cautín tipo lápiz</a>
-	<a href="https://uelectronics.com/categoria-producto/equipo-laboratorio/material-general/" target="_blank">Soldadura de estaño</a>
-	<a href="https://uelectronics.com/categoria-producto/componentes/cables/" target="_blank">Cable USB tipo C</a>
-	IDE de Arduino o compilador equivalente

## Características técnicas 
---
| USB tipo C Voltaje de salida |                                               |
|------------------------------|-----------------------------------------------|
| 5V, 2 A por USB              |                                               |
| 5V, 800mA por conector Jack  | (Se requiere disipación)                      |
| 3.3V, 800mA                  | (Se requiere disipación)                      |
---
| Voltaje de entrada          |                                              |
|-----------------------------|----------------------------------------------|
| 5V USB                      |                                              |
| 7V – 12V Power Jack         | (sugerido 7V a 9V)                           |
---
| Microcontrolador ATmega328 |
|-----------------------------|----------------------------------------------|
| Pines Digitales I/O         | 14 (de los cuales 6 son PWM)                 |
| Entradas Analógicas         | 6 entradas                                   |
| Corriente Directa por Pin   | 40mA                                         |
| Voltaje por Pin             | 5V                                           |
| Memoria Flash               | 32 KB; de los cuales 0.5 KB son usados por el bootloader |
| SRAM                        | 2 KB                                         |
| EEPROM                      | 1 KB                                         |
| Frecuencia de Trabajo       | 16 MHz                                       |

## Manual 📙

El ensamblaje de la tarjeta es de nivel básico. Consulta y descarga el manual de armado y programación completo en el siguiente <a href="https://github.com/UNIT-Electronics/UNIT-Uno-Do-It-Yourself/blob/main/docs/manual.pdf" target="_blank">enlace.</a>

 Circuito impreso:

<p align="center">
  <img src="/docs/1-Descripcion-general/images/PCB.png" alt="salida led" width="60%">
</p>


```py
La guía completa de programación puedes encontrarla en el manual.pdf
```



## Licencia

Este proyecto está bajo la licencia <a href="https://www.gnu.org/licenses/gpl-3.0.html" target="_blank">GPL-3.0</a>.

## Contacto

Si tienes alguna pregunta o sugerencia, no dudes en contactarnos en ventas@uelectronics.com. También te invitamos a visitar nuestro sitio web <a href="www.uelectronics.com" target="_blank">UNIT electronics</a>, donde encontrarás una amplia variedad de sensores, módulos, shields y componentes para llevar a cabo todas tus prácticas.


## Autores ✒️

```
Material compilado por el equipo de UNIT Electronics
```
- <a href="https://uelectronics.com/" target="_blank">UNIT Electronics</a>
- <a href="https://github.com/fede-hidalgo" target="_blank">Federico Hidalgo</a>


<div style="text-align: right">
    <h1><a href="/docs/2-salidas_digitales/">Siguiente</a></h>
</div>



⌨️ con ❤️ por [UNIT-Electronics](https://github.com/UNIT-Electronics) 😊