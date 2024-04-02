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