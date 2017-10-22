//Modulo Photoresistor LDR

byte sensorPin = 3; //estableciendo pin para el sensor
byte indicator = 13; //estableciendo led de pin 13 de arduino como indicador
void setup()
{
  pinMode(sensorPin,INPUT);//pin entrada
  pinMode(indicator,OUTPUT);//pin salida
  Serial.begin(9600);
}

void loop()
{
  byte state = digitalRead(sensorPin);
  digitalWrite(indicator,state);
  if(state == 1)Serial.println("¡El área esta iluminada!");
  else if(state == 0)Serial.println("¡No se detecto iluminacion!");
  delay(500);
}

