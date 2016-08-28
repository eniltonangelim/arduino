const int LM35 = 0;
float temperatura = 0;
int ADClido = 0;
const int Buzzer = 12;
void setup(){
  analogReference(INTERNAL); //No Mega, use INTERNAL1V1, no Leonardo remova essa linha
  pinMode(Buzzer, OUTPUT);
}
void loop(){
  ADClido = analogRead(LM35);
  temperatura = ADClido * 0.1075268817204301; //no Leonardo use 0.4887585532
  if(temperatura > 32){ // setei como 25oC
    digitalWrite(Buzzer, HIGH);
  }
  else{
    digitalWrite(Buzzer, LOW);
  }
}
