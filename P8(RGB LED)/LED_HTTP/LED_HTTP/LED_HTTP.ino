#include <ESP8266WiFi.h>
#include <ESP8266WebServer.h>//کتابخانه ای برای ارتباط با ماژول
#include <ESP8266mDNS.h>// این کتابخانه پاسخ به ماژول را برای ما آماده می کند 
#include <Adafruit_NeoPixel.h>

#define PIN 14// Pin D7 = 14

#define NUM_LEDS 7



Adafruit_NeoPixel strip = Adafruit_NeoPixel(NUM_LEDS, PIN, NEO_GRB + NEO_KHZ800);

const char *ssid = "kurtmatin";
const char *password = "95083100";

ESP8266WebServer server ( 80 );
void setup() {
  strip.begin(); 
  
  
  pinMode ( 2, OUTPUT );
  digitalWrite ( 2, 1 );
  pinMode ( 16, OUTPUT );
  digitalWrite ( 16, 1 );
  
  Serial.begin ( 115200 );
  WiFi.disconnect();
  WiFi.begin ( ssid, password );

while ( WiFi.status() != WL_CONNECTED ) { // تا زمانی که به وای فای متصل نشده، ال ای دی شماره 2 خاموش و روشن شود
    digitalWrite ( 2, 0 );
    delay ( 250 );
    Serial.print ( "." );
    digitalWrite ( 2, 1 );
    delay ( 250 );
  }

//Connected signal
  
server.begin();  //Start web server
Serial.println ( "HTTP server started" ); 
Serial.println(WiFi.localIP());

server.on("/" ,Handle_Root);
server.on("/RGB" ,Handle_RGB);

}

void loop() {
 server.handleClient();

}


void Handle_Root(){
  
  server.send(200,"text/plain","Kurt Matin LED Project");
}

void Handle_RGB(){
String RED = server.arg("Red");
String GREEN = server.arg("Green");
String BLUE = server.arg("Blue");
String Pixel_Number= server.arg("Pixel_Number");
String All = server.arg("All");
if (All=="on"){
   for(uint16_t i=0;i< NUM_LEDS;i++){
     strip.setPixelColor(i,RED.toInt(),GREEN.toInt(),BLUE.toInt());
     strip.show();
     delay(1);
   }
    
}else{
  strip.setPixelColor(Pixel_Number.toInt(),RED.toInt(),GREEN.toInt(),BLUE.toInt());
strip.show();

}
server.send(204,"");
}
//برای ارسال دستور از عبارت زیر در مرورگر استفاده می کنیم
//http://192.168.132.101/RGB?Red=255&Green=10&Blue=120&Pixel_Number=1
//اگر خواتیم که تمامی ال ای دی ها یک رنگ شوند به دستور فوق، دستور زیر را هم اضافه می کنیم
//&All=on
