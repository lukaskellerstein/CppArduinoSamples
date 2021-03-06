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
  server.on("/", handle_webpage);

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

std::string setHeader()
{
  std::string result = "";
  result += "<head>";
  result += "<meta http-equiv='refresh' content='10'/>";
  result += "<title>ESP8266 Demo</title>";
  result += "<style> body { background-color: #fffff; font-family: Arial, Helvetica, Sans-Serif; Color: #000088; }</style>";
  result += "</head>";
  return result;
}

std::string setBody()
{
  std::string result = "";
  result += "<body>";
  result += "<h1>ESP8266 Demo</h1>";
  result += "<div>Some text</div>";
  result += "<div>Some text</div>";
  result += "<div>Some text</div>";
  result += "<div>Some text</div>";
  result += "<div>Some text</div>";
  result += "<div>Some text</div>";
  result += "<div>Some text</div>";
  result += "</body>";
  return result;
}

std::string getPage()
{
  std::string page = "<html>";
  page += setHeader();
  page += setBody();
  page += "</html>";
  return page;
}

void handle_webpage()
{
  std::string temp = getPage();
  server.send(200, "text/html", temp.c_str());
}
