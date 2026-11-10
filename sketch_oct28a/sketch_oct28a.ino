const int g = 10;
// z ktybdsq kj,jnhhhhhhzc
void setup() {
  // put your setup code here, to run once:
  
  pinMode(g,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  PWM();
}
void PWM()
{
  digitalWrite(g,HIGH);
  delay(0.5);
  digitalWrite(g,LOW);
  delay(0.5);
}
