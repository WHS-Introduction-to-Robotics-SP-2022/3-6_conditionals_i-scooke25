int x = analogRead(A0);
 


void setup() {
    pinMode(A0 , INPUT);
    pinMode(LED_BUILTIN, OUTPUT);
    Serial.begin(9600);
}

void loop() {

    Serial.println(x);
   
   if (x > 512){
     digitalWrite(LED_BUILTIN, HIGH); 
   }
   else {
     digitalWrite(LED_BUILTIN,LOW);
   }
   }
