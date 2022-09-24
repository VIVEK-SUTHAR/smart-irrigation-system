
int relayPin = 8;
int sensor_pin = A0;
int output_value ;
void setup()    
{ 
  Serial.begin(9600);                 
  pinMode(relayPin, OUTPUT);
  pinMode(sensor_pin, INPUT);
  Serial.println("Reading From the Sensor ...");
  delay(2000);
}

void loop()
{
 output_value= analogRead(sensor_pin);
 output_value = map(output_value,550,10,0,100);
 Serial.print("Mositure : ");
 Serial.print(output_value);
 Serial.println("%");
 if(output_value<20){
  digitalWrite(relayPin, LOW);
 }
 else
 {
  digitalWrite(relayPin, HIGH);       
 }
 delay(1000);
}