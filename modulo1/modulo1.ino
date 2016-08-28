

const int ledPin = 13;
const int botao = 2;
int estadoBotao = 0;
void setup() {
 // put your setup code here, to run once:
 pinMode(ledPin, OUTPUT);
 pinMode(botao, OUTPUT);
}

void loop() {
 // put your main code here, to run repeatedly:
 estadoBotao = digitalRead(botao);

 if(estadoBotao == HIGH){
  digitalWrite(ledPin, HIGH);  
 }else{ 
  digitalWrite(ledPin, LOW);
 }

}
