int sensorAnaValue = 0;
//int sensorDigValue = LOW;
int sensorAnaPin = A0;
//int sensorDigPin = 13;
//int LED = 12;
char val;

#include <SoftwareSerial.h> 

// Pin10为RX，接HC05的TXD
// Pin11为TX，接HC05的RXD
SoftwareSerial BT(10, 11); 


void setup() 
  // put your setup code here, to run once:
{ 
  pinMode(A0,INPUT);
  //pinMode(sensorDigPin,INPUT);
  //pinMode(LED,OUTPUT);
  Serial.begin(9600);
  BT.begin(9600);
  delay(100);
}
void loop()
{
  sensorAnaValue = analogRead(sensorAnaPin);
 // sensorDigValue = digitalRead(sensorDigPin);
  
  
   Serial.println("Begin");
   Serial.println(sensorAnaValue, DEC);
  // Serial.println(sensorDigValue);
   BT.println(sensorAnaValue, DEC);
   Serial.println("End sending");
   //digitalWrite(LED,HIGH);
   delay(1000);
  
  // digitalWrite(LED,LOW);
   delay(1000);
  
    
  
}
