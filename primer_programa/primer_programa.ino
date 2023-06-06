void setup() {
  //Defino pin 13 como salida
  pinMode(13, OUTPUT);
}
//Este programa prende y apaga el led que se encuentra en la placa de ARDUINO UNO
void loop() {
  //Prendo LED
  digitalWrite (13, HIGH);
  //Delay de 1s
  delay(1000);
  digitalWrite (13, LOW);
  //Apago LED
  delay(1000);
}