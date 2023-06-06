int PULSADOR = 2, LED = 3, ESTADO = LOW;


void setup() {
  //pin 2 como entrada
  pinMode(PULSADOR, INPUT);
  //pin 2 como salida
  pinMode(LED, OUTPUT);
}

void loop() {
  //Mientras el led este LOW se va quedar en este ciclo
  while (digitalRead(PULSADOR) == LOW) {
  }
  ESTADO = digitalRead(LED);
  digitalWrite(LED, !ESTADO); //"!" esto significa que está NEGADO
  //Mientras el led este HIGH se va quedar en este ciclo
  while(digitalRead(PULSADOR)==HIGH){

  }
}
