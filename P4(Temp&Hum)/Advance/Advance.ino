#include <ESP8266WiFi.h>
#include "DHT.h"
#define SECRET_SSID "kurtmatin"    // replace MySSID with your WiFi network name
#define SECRET_PASS "95083100" // replace MyPassword with your WiFi password

#define SECRET_CH_ID 2554535      // replace 0000000 with your channel number
#define SECRET_WRITE_APIKEY "LA0PDX85CT4O1RHU"   // replace XYZ with your channel write API Key
#include "ThingSpeak.h" // always include thingspeak header file after other header files and custom macros
char ssid[] = "kurtmatin";   // your network SSID (name) 
char pass[] = "95083100";   // your network password
int keyIndex = 0;            // your network key Index number (needed only for WEP)
WiFiClient  client;

unsigned long myChannelNumber = SECRET_CH_ID;
const char * myWriteAPIKey = SECRET_WRITE_APIKEY;

#define DHTPIN 16
#define DHTTYPE DHT22
DHT dht(DHTPIN, DHTTYPE);

void setup() {
  Serial.begin(115200);  // Initialize serial  
  WiFi.mode(WIFI_STA); 
  dht.begin();
  ThingSpeak.begin(client);  // Initialize ThingSpeak
}

void loop() {
  
  // Connect or reconnect to WiFi
  if(WiFi.status() != WL_CONNECTED){
    Serial.print("Attempting to connect to SSID: ");
    Serial.println(SECRET_SSID);
    while(WiFi.status() != WL_CONNECTED){
      WiFi.begin(ssid, pass);  // Connect to WPA/WPA2 network. Change this line if using open or WEP network
      Serial.print(".");
      delay(5000);     
    } 
    Serial.println("\nConnected.");
  }

  
    float localTemp = dht.readTemperature(); //READ DHT22 Tepmerature
    float localHum = dht.readHumidity();   //READ DHT22 Humidity
   

  ThingSpeak.setField(1, localTemp);
  ThingSpeak.setField(2, localHum);

 int x = ThingSpeak.writeFields(myChannelNumber, myWriteAPIKey);

  if(x == 200){
    Serial.println("Channel update successful.");
    Serial.print(F("Humidity: "));Serial.print(localHum);Serial.print(F("%  Temperature: "));Serial.print(localTemp);Serial.print(F("°C "));
  }
  else{
    Serial.println("Problem updating channel. HTTP error code " + String(x));
  }

  delay(15000); // Wait 15 seconds to update the channel again
}
