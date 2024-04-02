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