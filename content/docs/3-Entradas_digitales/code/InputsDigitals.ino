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