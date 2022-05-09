void setup() {
    pinMode(inPin , INPUT);
    Serial.begin(9600);
}

void loop() {

    Serial.println(analogRead(inPin));
    delay(250);
   
   if (x > 512){
     digitalWrite(13, HIGH); 
   }
   else {
     digitalWrite(13,LOW);
   }
   }
