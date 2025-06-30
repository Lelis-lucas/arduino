
int ledVerde = 2;
int ledAmarelo = 3;
int ledVermelho = 4; 

void setup(){
pinMode(ledVerde, OUTPUT);
pinMode(ledAmarelo, OUTPUT);
pinMode(ledVermelho, OUTPUT);

}

void loop(){
  //acende verde
  digitalWrite(ledVerde, HIGH);
  delay(10000);
  digitalWrite(ledVerde, LOW);

  //acende amarelo
  digitalWrite(ledAmarelo, HIGH);
  delay(5000);
  digitalWrite(ledAmarelo, LOW);

  //acende vermelho
  digitalWrite(ledVermelho, HIGH);
  delay(5000);
  digitalWrite(ledVermelho, LOW);
}