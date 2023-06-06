void setup() {
  //pin 2 como entrada
 pinMode (2,INPUT);
 //pin 2 como salida
 pinMode (3,OUTPUT);
}

void loop() {
  //evaluo si 2 esta presionado
  if(digitalRead(2) == HIGH){
    digitalWrite(3,HIGH); //enciende led
  }
  else{
    digitalWrite(3,LOW); //apaga led
  }
}
