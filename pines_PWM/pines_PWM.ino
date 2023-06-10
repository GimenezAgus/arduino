int LED=3, BRILLO;
void setup() {
  pinMode(LED,OUTPUT);
}

void loop() {
  //SUBE EL BRILLO
  for (BRILLO=0; BRILLO < 256; BRILLO++){
    analogWrite(LED, BRILLO);
    delay(15);
  }
  // El máximo (255) serían 5v, en este caso 127 es el 50% osea 2.5v
  //analogWrite(LED, 127);
  //BAJA EL BRILLO
 for (BRILLO=255; BRILLO >= 0; BRILLO--){
    analogWrite(LED, BRILLO);
    delay(15);
  }
}
