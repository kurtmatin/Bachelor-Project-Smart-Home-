#include <ESP8266WiFi.h>
const char* ssid = "kurtmatin";
const char* password = "95083100";
WiFiServer server(80);
int led = 10;

void setup()
{
  Serial.begin(115200);
  delay(100);
  pinMode(led,OUTPUT);
  digitalWrite(led,0);
  Serial.println();
  Serial.println();
  Serial.print("Connecting to ");
  Serial.println(ssid);
  WiFi.begin(ssid,password);
  while (WiFi.status() != WL_CONNECTED)
  {
    delay(250);
    Serial.print(".");
  }
  Serial.println("");
  Serial.println("WiFi Connected.");
  server.begin();
  Serial.println("Server Started");
  Serial.println(WiFi.localIP());
}

void loop() 
{
  WiFiClient client = server.available();
  if (!client)
  {
    return;
  }

  Serial.println("new client");
  while (!client.available())
  {
    delay(1);
  }

  String req = client.readStringUntil('\r');
  Serial.println(req);
  client.flush();
  //-----------------------------------------
  if (req.indexOf("/on") != -1)
  {
    digitalWrite(led,1);
  }
  else if (req.indexOf("/off") != -1)
  {
    digitalWrite(led,0);
  }
  else if (req.indexOf("/sleep") != -1)
  {
   
  for(int j=250;j>=0;j-=50)
  {
    analogWrite(led,j);
    delay(3000);
  }
  }
  else if (req.indexOf("/automatic") != -1){
  int c1 = 0  ;
  int c2 = 0  ;
  int value = 0 ;
  while(value < 800){
  value = analogRead(A0)  ;
  Serial.println(value);
  c1= value/4; 
  c2= 200-c1;  
  analogWrite(led,c2);
  delay(5000);
  }
   analogWrite(led,0);  
  }
  
  
  //-----------------------------------------
  client.flush();
  //-----------------------------------------

  String s = "HTTP/1.1 200 OK\r\nContent-Type: text/html\r\n\r\n";
  s += "<head>";
  s += "<meta charset=\"utf-8\">";
  s += "<meta name=\"viewport\" content=\"width=device-width, initial-scale=1\">";
  s += "<script src=\"https://code.jquery.com/jquery-2.1.3.min.js\"></script>";
  s += "<link rel=\"stylesheet\" href=\"https://maxcdn.bootstrapcdn.com/bootstrap/3.3.4/css/bootstrap.min.css\">";
  s += "</head>";

  s += "<div class=\"container\">";
  s += "<h1>Device Control</h1>";
  s += "<div class=\"row\">";

  s += "<div class=\"col-md-2\"><input class=\"btn btn-block btn-lg btn-success\"style=\"font-size:22px;border-radius:100%;height:150px;width:150px;\"type=\"button\" value=\"ON\" onclick=\"on()\"></div>";
  s += "<div class=\"col-md-2\"><input class=\"btn btn-block btn-lg btn-danger\"style=\"font-size:22px;border-radius:100%;height:150px;width:150px;\" type=\"button\" value=\"OFF\" onclick=\"off()\"></div>";
  s += "<div class=\"col-md-2\"><input class=\"btn btn-block btn-lg btn-warning\"style=\"font-size:22px;border-radius:100%;height:150px;width:150px;\" type=\"button\" value=\"SLEEP\" onclick=\"sleep()\"></div>";
  s += "<div class=\"col-md-2\"><input class=\"btn btn-block btn-lg btn-info\"style=\"font-size:22px;border-radius:100%;height:150px;width:150px;\" type=\"button\" value=\"AUTOMATIC\" onclick=\"automatic()\"></div>";

  s += "</div></div>";

  s += "<script>function on() {$.get(\"/on\");}</script>";
  s += "<script>function off() {$.get(\"/off\");}</script>";
  s += "<script>function sleep() {$.get(\"/sleep\");}</script>";
  s += "<script>function automatic() {$.get(\"/automatic\");}</script>";

  client.print(s);
  delay(1);
  Serial.println("disconnected");
}









