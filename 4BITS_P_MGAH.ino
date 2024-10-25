void setup() {
  pinMode(2,INPUT);
  pinMode(3,INPUT);
  pinMode(4,INPUT);
//INPUTS de los bus de control 
  pinMode(5,INPUT);
  pinMode(6,INPUT);
  pinMode(7,INPUT);
  pinMode(8,INPUT);

  pinMode(13,OUTPUT);
  pinMode(12,OUTPUT);
  pinMode(11,OUTPUT);
  //salida de las operacion
  
}
void loop() { 
//suma          0                  0               1
if((!digitalRead(2) && !digitalRead(3)&&digitalRead(4))&&digitalRead(5)^digitalRead(6)){ 

    digitalWrite(11,HIGH);
  }else{
    digitalWrite(11,LOW);
  }
//suma decenas    0                   0               1
  if((!digitalRead(2) && !digitalRead(3)&&digitalRead(4))&&digitalRead(5)&&digitalRead(6)^digitalRead(7)^digitalRead(8)){ 

    digitalWrite(12,HIGH);
  }else{
    digitalWrite(12,LOW);
  }
//suma acarreo     0                  0               1  
  if((!digitalRead(2) && !digitalRead(3)&&digitalRead(4))&&digitalRead(7)&&digitalRead(8)){
    digitalWrite(13,HIGH);
  }else{
    digitalWrite(13,LOW);
  }
  //resta        0                 1                0
if((!digitalRead(2) && digitalRead(3)&&!digitalRead(4))&&digitalRead(5)&&!digitalRead(6)){ 

    digitalWrite(11,HIGH);
  }else{
    digitalWrite(11,LOW);
  }
//resta decenas    0                 1                0
  if((!digitalRead(2) && digitalRead(3)&&!digitalRead(4))&&digitalRead(7)&&!digitalRead(8)){ 

    digitalWrite(12,HIGH);
  }else{
    digitalWrite(12,LOW);
  }
//multipli       0                 1               1
if((!digitalRead(2) && digitalRead(3)&&digitalRead(4))&&digitalRead(5)&&digitalRead(6)){ 

    digitalWrite(11,HIGH);
  }else{
    digitalWrite(11,LOW);
  }
//multip dec       0                 1               1
  if((!digitalRead(2) && digitalRead(3)&&digitalRead(4))&&digitalRead(7)&&digitalRead(8)){ 

    digitalWrite(12,HIGH);
  }else{
    digitalWrite(12,LOW);
  }
//division      1                  0                0
if((digitalRead(2) && !digitalRead(3)&&!digitalRead(4))&&!digitalRead(5)^digitalRead(6)){ 

    digitalWrite(11,HIGH);
  }else{
    digitalWrite(11,LOW);
  }
//division dec    1                  0                0
  if((digitalRead(2) && !digitalRead(3)&&!digitalRead(4))&&!digitalRead(7)^digitalRead(8)){ 

    digitalWrite(12,HIGH);
  }else{
    digitalWrite(12,LOW);
  }
//and             1                  0               1  
  if((digitalRead(2) && !digitalRead(3)&&digitalRead(4))&&digitalRead(7)&&digitalRead(8)&&digitalRead(5)&&digitalRead(6)){
    digitalWrite(11,HIGH);
  }else{
    digitalWrite(11,LOW);
  }
//or              1                 1                0  
  if((digitalRead(2) && digitalRead(3)&&!digitalRead(4))&&digitalRead(7)||digitalRead(8)||digitalRead(5)||digitalRead(6)){
    digitalWrite(11,HIGH);
  }else{
    digitalWrite(11,LOW);
  }
//xor             1                 1               1  
  if((digitalRead(2) && digitalRead(3)&&digitalRead(4))&&digitalRead(7)^digitalRead(8)^digitalRead(5)^digitalRead(6)){
    digitalWrite(11,HIGH);
  }else{
    digitalWrite(11,LOW);
  }
}
