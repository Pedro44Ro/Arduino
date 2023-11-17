void setup() {
  pinMode(8,OUTPUT);//acende o led especificado pelo numero
  pinMode(13,OUTPUT);
  pinMode(4,OUTPUT);

}

void loop() {
  digitalWrite(8, HIGH);//faz que o led ligue
  delay(1000);// tempo que ficara ligado
  digitalWrite(8, LOW);// faz que o led apague
  delay(1000);// o tempo que o led ficara apagado
  digitalWrite(13, HIGH);
  delay(1000);
  digitalWrite(13, LOW);
  delay(1000);
  digitalWrite(4, HIGH);
  delay(1000);
  digitalWrite(4, LOW);
  delay(1000);
}
