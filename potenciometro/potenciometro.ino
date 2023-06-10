int LED=3, BRILLO, POT= 0;
void setup() {
  pinMode(LED,OUTPUT);
  //las entradas analógicas no requieren inicialización
}

void loop() {
  BRILLO =analogRead(POT) /4;
  analogWrite(LED, BRILLO);
}
