const int pinCerradura = 13;
 
void setup() {
   Serial.begin(9600);
   pinMode(pinCerradura, OUTPUT);
}
 
void loop() {
   if (Serial.available()>0) {
      int option = Serial.read();
      if (option == '1') {
         digitalWrite(pinCerradura, HIGH);
      }else {
        digitalWrite(pinCerradura, LOW);
      }
   }
}
