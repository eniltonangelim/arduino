
const int ledPin1=13;
const int ledPin2=12;
const int ledPin3=11;
const int botao1=2;
const int botao2=3;
const int botao3=4;
int estadoBotao1=0;
int estadoBotao2=0;
int estadoBotao3=0;
void setup() {
  // put your setup code here, to run once:
  pinMode(ledPin1, OUTPUT);
  pinMode(botao1, INPUT);
  pinMode(ledPin2, OUTPUT);
  pinMode(botao2, INPUT);
  pinMode(ledPin3, OUTPUT);
  pinMode(botao3, INPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  estadoBotao1=digitalRead(botao1);
  estadoBotao2=digitalRead(botao2);
  estadoBotao3=digitalRead(botao3);

  if ( estadoBotao1 == HIGH ){
    digitalWrite(ledPin1, HIGH);  
  }else {
    digitalWrite(ledPin1, LOW);
  }

  if ( estadoBotao2 == HIGH ){
    digitalWrite(ledPin2, HIGH);
  } else {
    digitalWrite(ledPin2, LOW);
  }

  if ( estadoBotao3 == HIGH ){
    digitalWrite(ledPin3, HIGH);
  } else {
    digitalWrite(ledPin3, LOW);
  }
}
