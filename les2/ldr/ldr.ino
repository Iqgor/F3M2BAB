int LDR_In = A0;

int LichtHoeveelheid;

uint8_t Led1 = D3;
uint8_t Led2 = D5;
uint8_t Led3 = D6;

void setup(){
  Serial.begin(9600);
  pinMode(Led1,OUTPUT);
  pinMode(Led2,OUTPUT);
  pinMode(Led3,OUTPUT);
  
}

void loop(){
  LichtHoeveelheid = analogRead(LDR_In);

  Serial.println(LichtHoeveelheid);

  if (LichtHoeveelheid > 50){
    digitalWrite(Led1, HIGH);
  }

 
    
  else{
    digitalWrite(Led1, LOW);
  }
  
  if (LichtHoeveelheid > 30){
    digitalWrite(Led2, HIGH);
  }

 
    
  else{
    digitalWrite(Led2, LOW);
  }

  if (LichtHoeveelheid > 28){
    digitalWrite(Led3, HIGH);
  }

 
    
  else{
    digitalWrite(Led3, LOW);
  }
  delay(1000);
}
