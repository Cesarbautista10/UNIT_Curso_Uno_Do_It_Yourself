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