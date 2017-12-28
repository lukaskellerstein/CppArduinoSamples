#include <ESP8266WiFi.h>
#include <ESP8266WebServer.h>

const char *ssid = "CellarstoneDevicesWifi";
const char *password = "Cllrs123IoT456";

// HTTP server will listen at port 80
ESP8266WebServer server(80);

//SETUP
void setup(void)
{
  Serial.begin(115200);
  Serial.println("");

  // Connect to WiFi network
  WiFi.begin(ssid, password);

  // Wait for connection
  while (WiFi.status() != WL_CONNECTED)
  {
    delay(500);
    Serial.print(".");
  }
  Serial.println("");
  Serial.print("Connected to ");
  Serial.println(ssid);
  Serial.print("IP address: ");
  Serial.println(WiFi.localIP());

  // Set up the endpoints for HTTP server
  //
  // Endpoints can be written as inline functions:
  server.on("/", handle_getInfo);

  // Start the server
  server.begin();
  Serial.println("HTTP server started");
}

//LOOP
void loop(void)
{
  // check for incomming client connections frequently in the main loop:
  server.handleClient();
}

/*******************************************************/
/*                       HANDLER                       */
/*******************************************************/

void handle_getInfo()
{
  std::string result = "";
  result += "{";
  result += "\"error\": \"\",";
  result += "\"data\": {";
  result += "\"senzorID\": \"\",";
  result += "\"wifiSSID\": \"\",";
  result += "\"wifiPsswd\": \"\",";
  result += "\"mqttUrl\": \"\",";
  result += "\"mqttUsername\": \"\",";
  result += "\"mqttPsswd\": \"\"";
  result += "}";
  result += "}";

  server.send(200, "text/json", result.c_str());
}
