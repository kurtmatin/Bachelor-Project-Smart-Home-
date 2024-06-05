#include <Sim800l.h>
#include <SoftwareSerial.h>

Sim800l Sim800l;

char* number = "+989029765318";

String textSms,numberSms;
uint8_t index;
int led = 6;
bool error;


void setup() {

  Serial.begin(115200);
  pinMode(led , OUTPUT);
  digitalWrite(led ,LOW);
  Sim800l.begin();

  error = Sim800l.delAllSms();
  }
  

void loop() {

  int sensorValue = analogRead(A0);
  if (sensorValue > 570)  {
    int outputValue = map(sensorValue, 570, 770, 0, 255);
    Serial.println(outputValue);
    analogWrite(led, 255 - outputValue); // generate PWM signal
  }
  if (textSms.indexOf("POOL")!= -1)
      {
        float pool_water_height = map(sensorValue, 570, 770, 0, 4); //We assumed that the hight of the pool is 4 meters
        String strHeight = String(pool_water_height) ;
        
        char* text1 = "THE HEIGHT OF THE POOL WATER IS EQUAL TO:";
        char* text2 = "strHeight";

        error = Sim800l.sendSms(number,text1);
        error = Sim800l.sendSms(number,text2);
      }
      error = Sim800l.delAllSms();
    }
  



