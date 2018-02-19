int led=5;
int sensor=A0;
int sensorvalue;

void setup() 
{
  pinMode(led,OUTPUT);

}

void loop()
{
  sensorvalue=analogRead(sensor);
  digitalWrite(led,HIGH);
  delay(sensorvalue);
  digitalWrite(led,LOW);
  delay(sensorvalue);

}
