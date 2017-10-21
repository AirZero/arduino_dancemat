void setup() {
  
  
Serial.begin(9600);

  portOne.begin(9600);
  portTwo.begin(9600);
  pinMode(4,OUTPUT);
  pinMode(5,OUTPUT);
  pinMode(6,OUTPUT);
  pinMode(7,OUTPUT);
  pinMode(A2,OUTPUT);
  pinMode(A3,OUTPUT);
  pinMode(A4,OUTPUT);
  pinMode(A5,OUTPUT);
 
}
 


void loop() {
  portOne.listen();
  char c = mySerial.read();
  Serial.println(c); 
  
  
//debugging prints
  if (portOne.isListening()) {
   Serial.println("Port One is listening!"); 
}else{
   Serial.println("Port One is not listening!"); 
}

  if (portTwo.isListening()) {
   Serial.println("Port Two is listening!"); 
}else{
   Serial.println("Port Two is not listening!"); 
}

}
