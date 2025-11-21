// --- TEST DE HARDWARE PARA LEDS ---
// Sube este código para verificar tus conexiones

const int ledPET = 13;
const int ledHDPEM = 12;
const int ledALU = 14;
const int ledGLASS = 27;

void setup() {
  pinMode(ledPET, OUTPUT);
  pinMode(ledHDPEM, OUTPUT);
  pinMode(ledALU, OUTPUT);
  pinMode(ledGLASS, OUTPUT);
}

void loop() {
  // Prender TODOS
  digitalWrite(ledPET, HIGH);
  digitalWrite(ledHDPEM, HIGH);
  digitalWrite(ledALU, HIGH);
  digitalWrite(ledGLASS, HIGH);
  
  delay(1000); // Esperar 1 segundo
  
  // Apagar TODOS
  digitalWrite(ledPET, LOW);
  digitalWrite(ledHDPEM, LOW);
  digitalWrite(ledALU, LOW);
  digitalWrite(ledGLASS, LOW);
  
  delay(1000); // Esperar 1 segundo
}