
void setup() {
 pinMode(10, OUTPUT); //motor 1 sürücü kartı
  pinMode(12, OUTPUT); //motor 1 geri gitme
  pinMode(11, OUTPUT); //motor 1 ileri gitme
  pinMode(7, OUTPUT); //motor 2 sürücü kartı
  pinMode(9, OUTPUT); //motor 2 ileri gitme
  pinMode(8, OUTPUT); //motor 2 geri gitme

}

void loop() 
 {
  delay(2000);
  
  digitalWrite(12, HIGH);
  digitalWrite(11, LOW);
  analogWrite(10, 170);
 analogWrite(10, 200);
 analogWrite(10, 230);
 analogWrite(10, 250);

 delay(10000);
  
  digitalWrite(8, HIGH);
  digitalWrite(9, LOW);
 analogWrite(7, 170);
 analogWrite(7, 200);
 analogWrite(7, 230);
 analogWrite(7, 250);

 delay(10000);
  
delay(3000);

  digitalWrite(12, HIGH);
  digitalWrite(11, HIGH);
  analogWrite(10, 0);

  

  digitalWrite(8, HIGH);
  digitalWrite(9, HIGH);
  analogWrite(7, 0);
}
