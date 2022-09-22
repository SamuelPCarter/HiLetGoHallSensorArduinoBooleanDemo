int hallSensorPin = 2;     
int state = 0;          

void setup() {
  pinMode(LED_BUILTIN, OUTPUT);      
  pinMode(hallSensorPin, INPUT);     
}

void loop(){
  
  state = digitalRead(hallSensorPin);

  if (state == LOW) {        
    digitalWrite(LED_BUILTIN, HIGH);  
  } 
  else {
    digitalWrite(LED_BUILTIN, LOW); 
  }
}
