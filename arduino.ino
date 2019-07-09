#define LED 13
int mssg = 0; //variable para guardar el mensaje
 
void setup()
{
   pinMode(LED, OUTPUT); //establecemos 13 como salida
   Serial.begin(9600); //iniciando Serial
}
 
void loop()
{
   if (Serial.available() > 0)
   {
      mssg = Serial.read(); //leemos el serial
 
      if(mssg >= 20)
      {
         digitalWrite(13, HIGH); //si entra una 'e' encendemos
      }
      else if(mssg < 20)
      {
         digitalWrite(13, LOW); //si entra una 'a' apagamos
      }
   }
}
