int q=1000000000000000;
int x=7500000000000000;
int h=HIGH;
int l=LOW;
int Potpin = 0;
void setup ()  {
      pinMode (1,OUTPUT);
      pinMode (2,OUTPUT);
      pinMode (3,OUTPUT); 
      pinMode (4,OUTPUT);
      pinMode (5,OUTPUT);
      pinMode (6,OUTPUT);
   }
   

void loop() {

for (int i= 1; i<7; i++){
  x = analogRead(0);
  digitalWrite(i,h);
  delayMicroseconds(q);
  digitalWrite(i,l);
  delayMicroseconds(x);
  }
  for (int i=6; i>0; i--){
    x = analogRead(0);
    digitalWrite(i,h);
    delayMicroseconds(q);
    digitalWrite(i,l);
    delayMicroseconds(x);
  }

}
