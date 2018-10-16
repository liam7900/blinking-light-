
int p=50;

void setup ()  {
  pinMode (3, OUTPUT);
  pinMode (7, OUTPUT);
   pinMode (0, OUTPUT);
  pinMode (9, OUTPUT);
   pinMode (4, OUTPUT);
  pinMode (5, OUTPUT);
   pinMode (6, OUTPUT);
  pinMode (8, OUTPUT);
} // setup

void loop() {
  digitalWrite(3, HIGH);
  delay(p);
  digitalWrite(3, LOW);
  delay(p);
  digitalWrite(7, HIGH);
  delay(p);
  digitalWrite(7, LOW);
  delay(p);
  digitalWrite(0, HIGH);
  delay(p);
  digitalWrite(0, LOW);
  delay(p);
  digitalWrite(9, HIGH);
  delay(p);
  digitalWrite(9, LOW);
  digitalWrite(4, HIGH);
  delay(p);
  digitalWrite(4, LOW);
  delay(p);
  digitalWrite(5, HIGH);
  delay(p);
  digitalWrite(5, LOW);
  delay(p);
  digitalWrite(6, HIGH);
  delay(p);
  digitalWrite(6, LOW);
  
  digitalWrite(8, HIGH);
  delay(p);
  digitalWrite(8, LOW);
} //loop
