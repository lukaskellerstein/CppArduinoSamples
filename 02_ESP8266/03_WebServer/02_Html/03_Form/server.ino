//External libraries
#include <ESP8266WiFi.h>
#include <ESP8266WebServer.h>

//Internal libraries
#include "pages/pages.h"
#include "pages/homepage.cpp"
#include "pages/settings.cpp"

using namespace std;

const char *ssid = "CellarstoneDevicesWifi";
const char *password = "Cllrs123IoT456";

// HTTP server will listen at port 80
ESP8266WebServer server(80);

HomePage temphomepage = HomePage();
SettingsPage tempsettingspage = SettingsPage();

//INPUTS
string senzorid = "";
string wifissid = "";
string wifipsswd = "";
string mqtturl = "";

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
    server.on("/", handle_homepage);
    server.on("/home", handle_homepage);
    server.on("/settings", handle_settingspage);
    server.on("/submit", handle_submitpage);

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

void handle_homepage()
{
    std::string temp = temphomepage.getHTML();
    replace(temp, "{{senzorid}}", senzorid);
    replace(temp,"{{wifissid}}", wifissid);
    replace(temp,"{{wifipsswd}}", wifipsswd);
    replace(temp,"{{mqtturl}}", mqtturl);
    server.send(200, "text/html", temp.c_str());
}

void handle_settingspage()
{
    std::string temp = tempsettingspage.getHTML();
    server.send(200, "text/html", temp.c_str());
}

void handle_submitpage()
{

    if (server.args() > 0)
    {
        for (uint8_t i = 0; i < server.args(); i++)
        {
            if (server.argName(i) == "senzorid")
            {
                senzorid = string(server.arg(i).c_str());
            }
            if (server.argName(i) == "wifissid")
            {
                wifissid = string(server.arg(i).c_str());
            }
            if (server.argName(i) == "wifipsswd")
            {
                wifipsswd = string(server.arg(i).c_str());
            }
            if (server.argName(i) == "mqtturl")
            {
                mqtturl = string(server.arg(i).c_str());
            }
        }

        Serial.println(senzorid.c_str());
        Serial.println(wifissid.c_str());
        Serial.println(wifipsswd.c_str());
        Serial.println(mqtturl.c_str());
    }

    string result = temphomepage.getHTML();
    replace(result, "{{senzorid}}", senzorid);
    replace(result, "{{wifissid}}", wifissid);
    replace(result, "{{wifipsswd}}", wifipsswd);
    replace(result, "{{mqtturl}}", mqtturl);
    server.send(200, "text/html", result.c_str());
}


/*********************************************************/
// HELPERS
/*********************************************************/
bool replace(std::string& str, const std::string& from, const std::string& to) {
    size_t start_pos = str.find(from);
    if(start_pos == std::string::npos)
        return false;
    str.replace(start_pos, from.length(), to);
    return true;
}