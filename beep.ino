void setup()  { 
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
} 

void loop()  {
  beep(110); 
  delay(15000);
}

void beep(unsigned char delayus){
  for (int i=0; i <= 500; i++){
        digitalWrite(3, HIGH);
        digitalWrite(4, LOW);                        
        delayMicroseconds(delayus);          
        digitalWrite(4, HIGH);       
        digitalWrite(3, LOW);
        delayMicroseconds(delayus);    
   }
}  
