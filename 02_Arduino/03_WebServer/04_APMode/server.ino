#include <ESP8266WiFi.h>
#include <ESP8266WebServer.h>

const char WiFiAPPSK[] = "ESP8266SenzorAPModeWifi";

// WiFiServer server(80);
ESP8266WebServer server(80);

IPAddress ip(192, 168, 8, 1);
IPAddress gateway(192, 168, 8, 1);
IPAddress subnet(255, 255, 255, 0);

void setup() 
{
  Serial.begin(115200);

  setupAP();
  
  
  server.on("/", [](){
   server.send(200, "text/html", "HELLO WORLD");
  });
  
  // Start the server 
  server.begin();
  Serial.println("HTTP server started");
}

void loop(void) {
  // check for incomming client connections frequently in the main loop:
  server.handleClient();
}

void setupAP()
{
  WiFi.mode(WIFI_AP);

  WiFi.softAP("Cellarstone ESP8266 Wifi", "Cllrs123IoT456");

  WiFi.config(ip,gateway, subnet);
  WiFi.begin();
}
