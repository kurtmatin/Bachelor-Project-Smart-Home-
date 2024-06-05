#include <ESP8266WiFi.h>
#include "DHT.h"

#define DHTPIN 16
#define DHTTYPE DHT22

DHT dht(DHTPIN,DHTTYPE,15);

const char* ssid = "kurtmatin";
const char* password = "95083100";

WiFiServer server(80);
//----------------------------------------------

void setup()
{
  Serial.begin(115200);
  delay(10);

  dht.begin();

  Serial.println();
  Serial.println();
  Serial.print("Connecting to ");
  Serial.println(ssid);

  WiFi.begin(ssid,password);

  while (WiFi.status() != WL_CONNECTED)
  {
    delay(250);
    Serial.print("");
  }
  Serial.println("");
  Serial.println("WiFi Connected");

  server.begin();
  Serial.println("Server Start");

  Serial.println(WiFi.localIP());
}

void loop() 
{
  WiFiClient client = server.available();
  if (!client)
  {
    return;
  }

  Serial.println("new Client...");
  while (!client.available())
  {
    delay(2);
  }

  float h = dht.readHumidity();
  float t = dht.readTemperature();


  String req = client.readStringUntil('\r');
  Serial.println(req);
  client.flush();
  //-----------------------------------------------
  String s = "HTTP/1.1 200 OK\r\nContent-Type: text/html\r\n\r\n";
  s += "<head>";
  s += "<meta charset=\"utf-8\">";
  s += "<meta name=\"viewport\" content=\"width=device-width, initial-scale=1\">";
  //- - - - - -
  s += "<meta http-equiv=\"refresh\" content=\"10\" />";
  //- - - - - -
  s += "<script src=\"https://code.jquery.com/jquery-2.1.3.min.js\"></script>";
  s += "<link rel=\"stylesheet\" href=\"https://maxcdn.bootstrapcdn.com/bootstrap/3.3.4/css/bootstrap.min.css\">";
  
  s += "<style>body{font-size: 24px;} .voffset {margin-top: 30px;}</style>";
  s += "</head>";

  s += "<div class=\"container\">";
  s += "<h1> Wireless Meteorology</h1>";
  s += "<div class=\"row voffset\">";
  s += "<div class=\"col-md-3\">Temperature: </div><div class=\"col-md-3\">" + String(t) + "</div>";
  s += "<div class=\"col-md-3\">Humidity: </div><div class=\"col-md-3\">" + String(h) + "</div>";
  s += "</div>";
  s += "</div>";

  client.print(s);
  delay(1);
  Serial.println("Client Disconnect.");
}





