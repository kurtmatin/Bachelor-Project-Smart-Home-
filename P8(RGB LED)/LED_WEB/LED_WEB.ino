#include <ESP8266WiFi.h>
#include <ESP8266WebServer.h>//کتابخانه ای برای ارتباط با ماژول
#include <ESP8266mDNS.h>// این کتابخانه پاسخ به ماژول را برای ما آماده می کند 
#include <Adafruit_NeoPixel.h>
#include <WS2812FX.h>
#include "index.h" 
#include "index_css.h" 
#include "Test_LEDcss.h" 
#include "index_js.h" 

int PIN = 14  ;// Pin D5 = 14
int NUM_LEDS =  8  ;
String RED  ;
String GREEN ;
String BLUE ;
String All ;
String FX ;
String FXbox ;
String Pixel_Number ;
uint8_t FXmode;
uint8_t BRIGHTNESS = 255 ;
int Speed = 200 ;

Adafruit_NeoPixel strip = Adafruit_NeoPixel(NUM_LEDS, PIN, NEO_GRB + NEO_KHZ800);
WS2812FX ws2812fx = WS2812FX(NUM_LEDS,PIN, NEO_GRB + NEO_KHZ800);

const char *ssid = "kurtmatin";
const char *password = "95083100";

ESP8266WebServer server ( 80 );
void setup() {
  
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
server.on("/index.css",[](){server.send(200,"text/css",indexcss);});
server.on("/TestLED.css",[](){server.send(200,"text/css",TestLEDcss);});
server.on("/index.js",[](){server.send(200,"aplication/javascript",indexjs);});
server.on("/authenticate",authenticate_check) ;

}

void loop() {
  server.handleClient();
  ws2812fx.service();

}

void Handle_Root(){
  
 if(!server.authenticate(ssid, password))
      return server.requestAuthentication();
  server.send(200,"text/html",index_page);}

void Handle_RGB(){
  if(server.arg("user") == ssid &&  server.arg("password") == password){
  }else{
    if(!server.authenticate(ssid , password)}
    return server.requestAuthentication() ;
  }

  
RED = server.arg("Red");
GREEN = server.arg("Green");
BLUE = server.arg("Blue");
Pixel_Number= server.arg("Pixel_Number");
All = server.arg("All");
FXbox = server.arg("FXbox") ;
FX = server.arg("FX") ;
BRIGHTNESS = server.arg("BRIGHTNESS").toInt();
Speed = server.arg("Speed").toInt();
strip.setBrightness(BRIGHTNESS);
strip.begin(); 
if (FX == "on"){ 
  Handle_FX();
}else{
  ws2812fx.stop();
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
}
void Handle_FX(){
  ws2812fx.init();
  ws2812fx.setBrightness(BRIGHTNESS);
  ws2812fx.setSpeed(Speed);
  ws2812fx.setColor(RED.toInt(),GREEN.toInt(),BLUE.toInt());
  ws2812fx.setMode(FXbox.toInt());
  ws2812fx.start();
  server.send(204,"");
}
  void authenticate_check (){
    if(server.arg("user")== ssid && server.arg("password")== password){
   server.send(200,"text/plain","password is Correct"); 
  }else {
   server.send(200,"text/plain","Wrong Password"); 
  }
}

