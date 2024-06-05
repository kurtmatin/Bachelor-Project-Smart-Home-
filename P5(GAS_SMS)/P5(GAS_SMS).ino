#include <Sim800l.h>
#include <SoftwareSerial.h>

Sim800l Sim800l;

char* text1 = "Gas level is high!";
char* text2 = "Windows are opening";
char* number = "+989029765318";

String textSms,numberSms;
uint8_t index;
int Windows = 13;
bool error;


void setup() 
{
  pinMode(Windows,OUTPUT);
  digitalWrite(Windows,0);

  Serial.begin(9600);
  Sim800l.begin();

  error = Sim800l.delAllSms();
}

void loop() 
{
  int gasValue = analogRead(A0);

      if (gasValue > 500) {
        while(textSms.indexOf("OK")!= -1){
        error = Sim800l.sendSms(number,text1);
        delay(30000);
        }
        }
      if(textSms.indexOf("OK")!= -1){
        digitalWrite(Windows,1);
        error = Sim800l.sendSms(number,text2);
        }
       error = Sim800l.delAllSms();
}









