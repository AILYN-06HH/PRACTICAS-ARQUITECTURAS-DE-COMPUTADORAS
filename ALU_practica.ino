void setup() {
  pinMode(2,INPUT);
  pinMode(3,INPUT);
  pinMode(4,INPUT);
//Entradas de bus de control 
  pinMode(5,INPUT);
  pinMode(6,INPUT);
  pinMode(13,OUTPUT);
  //salida de las operaciones 
  pinMode(7,OUTPUT);
  //Salida de acarreos 
  pinMode(8,OUTPUT);
  //Errores
  pinMode(9,OUTPUT);
}
void loop() { 
  //OPERACIONES 
//Suma
if((!digitalRead(2)&&!digitalRead(3)&&digitalRead(4))&&(digitalRead(5)^digitalRead(6))){
  digitalWrite(13,HIGH);
}else{
  digitalWrite(13,LOW);
  if(digitalRead(5)&&digitalRead(6)){
    digitalWrite(12,HIGH);
  }else {
    digitalWrite(12,LOW);
  }
}
//Acarreo en suma
if((!digitalRead(2)&&!digitalRead(3)&&digitalRead(4))&&(digitalRead(5)&&digitalRead(6))){
  digitalWrite(7,HIGH);
}else{
  digitalWrite(7,LOW);
}

//Resta
if((!digitalRead(2)&&digitalRead(3)&&!digitalRead(4))&&(digitalRead(5)^digitalRead(6))){
  digitalWrite(13,HIGH);
}else{
  digitalWrite(13,LOW);
}
//Resta negativa
if((!digitalRead(2)&&digitalRead(3)&&!digitalRead(4))&&(digitalRead(5)&&!digitalRead(6))){
  digitalWrite(9,HIGH);
}else{
  digitalWrite(9,LOW);
}
//Multiplicacion
if((!digitalRead(2)&&digitalRead(3)&&digitalRead(4))&&(digitalRead(5)&&digitalRead(6))){
  digitalWrite(13,HIGH);
}else{
  digitalWrite(13,LOW);
}
//Dision
if((digitalRead(2)&&!digitalRead(3)&&!digitalRead(4))&&(!digitalRead(5)^digitalRead(6))){
  digitalWrite(13,HIGH);
}else{
  digitalWrite(13,LOW);
}
//Error en division
if((digitalRead(2)&&!digitalRead(3)&&!digitalRead(4))&&(!digitalRead(5)&&digitalRead(6))){
  digitalWrite(8,HIGH);
}else{
  digitalWrite(8,LOW);
}
//COMPUERTAS
//AND
if((digitalRead(2)&&!digitalRead(3)&&digitalRead(4))&&(digitalRead(5)&&digitalRead(6))){
  digitalWrite(13,HIGH);
}else{
  digitalWrite(13,LOW);
}
//OR 
if((digitalRead(2)&&digitalRead(3)&&!digitalRead(4))&&(digitalRead(5)||digitalRead(6))){
  digitalWrite(13,HIGH);
}else{
  digitalWrite(13,LOW);
}
//XOR   
if((digitalRead(2)&&digitalRead(3)&&digitalRead(4))&&(digitalRead(5)^digitalRead(6))){
  digitalWrite(13,HIGH);
}else{
  digitalWrite(13,LOW);
}
}
