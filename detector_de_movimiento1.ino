int pirPin = 7;    // Pin digital al que está conectado el sensor PIR
int buzzerPin = 8; // Pin digital al que está conectado el zumbador

void setup() {
  pinMode(pirPin, INPUT);
  pinMode(buzzerPin, OUTPUT);
}

void loop() {
  int movimiento = digitalRead(pirPin);

  if (movimiento == HIGH) {
    // Si se detecta movimiento, activar el zumbador
    digitalWrite(buzzerPin, HIGH);
    delay(1000); // Puedes ajustar la duración del sonido según sea necesario
    digitalWrite(buzzerPin, LOW);
  } else {
    digitalWrite(buzzerPin, LOW);
  }
}
