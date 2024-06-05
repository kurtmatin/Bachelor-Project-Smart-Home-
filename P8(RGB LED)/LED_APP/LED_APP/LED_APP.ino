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
int NUM_LEDS = 8  ;
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
String command ;
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
server.on("/voice",Voice_command);

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
    if(!server.authenticate(ssid , password))
    return server.requestAuthentication() ;
  }

  
RED = server.arg("Red");
GREEN = server.arg("Green");
BLUE = server.arg("Blue");
Pixel_Number= server.arg("Pixel_Number");
All = server.arg("All");
FXbox = server.arg("FXbox") ;
FXmode = server.arg("FXbox").toInt();
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
  check_mode_from_android();
  ws2812fx.init();
  ws2812fx.setBrightness(BRIGHTNESS);
  ws2812fx.setSpeed(Speed);
  ws2812fx.setColor(RED.toInt(),GREEN.toInt(),BLUE.toInt());
  ws2812fx.setMode(FXmode);
  ws2812fx.start();
  server.send(204,"");
}
  void authenticate_check(){
    if(server.arg("user")== ssid && server.arg("password")== password){
   server.send(200,"text/plain","password is Correct"); 
  }else {
   server.send(200,"text/plain","Wrong Password"); 
  }
}

void Voice_command(){
    if(server.arg("user")== ssid && server.arg("password")== password){
  }else {
     if(!server.authenticate(ssid, password))
      return server.requestAuthentication();
  }
  command=server.arg("Command");
 
if (command=="love"){
  ws2812fx.stop();
   strip.setBrightness(BRIGHTNESS);
  strip.begin(); 
   for(uint16_t i=0;i< NUM_LEDS;i++){
    strip.setPixelColor(i,255,0,20);
strip.show();
delay(1);
}
  
}
if (command=="allLEDsoff"){
  ws2812fx.stop();
   strip.setBrightness(BRIGHTNESS);
  strip.begin(); 
   for(uint16_t i=0;i< NUM_LEDS;i++){
    strip.setPixelColor(i,0,0,0);
strip.show();
delay(1);
}
}
server.send(204,"");
}

void check_mode_from_android(){
if(FXbox=="STATIC")FXmode = 0;
if(FXbox=="BLINK")FXmode =1;
if(FXbox=="BREATH")FXmode =2;
if(FXbox=="COLOR_WIPE")FXmode = 3;
if(FXbox=="COLOR_WIPE_RANDOM")FXmode = 4;
if(FXbox=="RANDOM_COLOR")FXmode = 5;
if(FXbox=="SINGLE_DYNAMIC")FXmode = 6;
if(FXbox=="MULTI_DYNAMIC")FXmode = 7;
if(FXbox=="RAINBOW")FXmode = 8;
if(FXbox=="RAINBOW_CYCLE")FXmode = 9;
if(FXbox=="SCAN")FXmode = 10;
if(FXbox=="DUAL_SCAN")FXmode = 11;
if(FXbox=="FADE")FXmode = 12;
if(FXbox=="THEATER_CHASE")FXmode = 13;
if(FXbox=="THEATER_CHASE_RAINBOW")FXmode = 14;
if(FXbox=="RUNNING_LIGHTS")FXmode = 15;
if(FXbox=="TWINKLE")FXmode = 16;
if(FXbox=="TWINKLE_RANDOM")FXmode = 17;
if(FXbox=="TWINKLE_FADE")FXmode = 18;
if(FXbox=="WINKLE_FADE_RANDOM")FXmode = 19;
if(FXbox=="SPARKLE")FXmode = 20;
if(FXbox=="FLASH_SPARKLE")FXmode = 21;
if(FXbox=="HYPER_SPARKLE")FXmode = 22;
if(FXbox=="STROBE")FXmode = 23;
if(FXbox=="STROBE_RAINBOW")FXmode = 24;
if(FXbox=="MULTI_STROBE")FXmode = 25;
if(FXbox=="BLINK_RAINBOW")FXmode = 26;
if(FXbox=="CHASE_WHITE")FXmode = 27;
if(FXbox=="CHASE_COLOR")FXmode = 28;
if(FXbox=="CHASE_RANDOM")FXmode = 29;
if(FXbox=="CHASE_RAINBOW")FXmode = 30;
if(FXbox=="CHASE_FLASH")FXmode = 31;
if(FXbox=="CHASE_FLASH_RANDOM")FXmode = 32;
if(FXbox=="CHASE_RAINBOW_WHITE")FXmode = 33;
if(FXbox=="CHASE_BLACKOUT")FXmode = 34;
if(FXbox=="CHASE_BLACKOUT_RAINBOW")FXmode = 35;
if(FXbox=="COLOR_SWEEP_RANDOM")FXmode = 36;
if(FXbox=="RUNNING_COLOR")FXmode = 37;
if(FXbox=="RUNNING_RED_BLUE")FXmode = 38;
if(FXbox=="RUNNING_RANDOM")FXmode = 39;
if(FXbox=="LARSON_SCANNER")FXmode = 40;
if(FXbox=="COMET")FXmode = 41;
if(FXbox=="FIREWORKS")FXmode = 42;
if(FXbox=="FIREWORKS_RANDOM")FXmode = 43;
if(FXbox=="MERRY_CHRISTMAS")FXmode = 44;
if(FXbox=="FIRE_FLICKER")FXmode = 45;
if(FXbox=="FIRE_FLICKER_SOFT")FXmode = 46;
}

