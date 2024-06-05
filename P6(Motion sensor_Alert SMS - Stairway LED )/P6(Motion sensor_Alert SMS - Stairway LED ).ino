#include <Sim800l.h>
#include <SoftwareSerial.h>

Sim800l Sim800l;

char* text = "Someone is near the south wall";
char* number = "+989029765318";

String textSms,numberSms;
uint8_t index;
int led = 13;
bool error;

void setup() {
  pinMode(8 , INPUT); //Motion sensor
  pinMode(led ,OUTPUT);
  digitalWrite(led , 0);
  Serial.begin(9600);
  Sim800l.begin();
  error = Sim800l.delAllSms();
  

  }
  

void loop() {

   if(digitalRead(8) == HIGH){ //Read Motion sensor
   error = Sim800l.sendSms(number,text);  //SMS tso Alert
   delay(30000);
   digitalWrite(led,HIGH); //LED staircase lighting
   delay(30000);
   digitalWrite(led,LOW); //Stairway LED turns off after 30 seconds
   }
   error = Sim800l.delAllSms();
}



