void setup() {
  // put your setup code here, to run once:
  pinMode(13,OUTPUT);
}
int value;
void loop() {
  // put your main code here, to run repeatedly:
  value=analogRead(0);
  digitalWrite(13,HIGH);
  delay(value);
  digitalWrite(13,LOW);
  delay(value);
}
