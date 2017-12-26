//External libraries
#include <ESP8266WiFi.h>
#include <ESP8266WebServer.h>

//Internal libraries
#include "pages/pages.h"
#include "pages/homepage.cpp"
#include "pages/aboutpage.cpp"
#include "pages/contactpage.cpp"

const char *ssid = "CellarstoneDevicesWifi";
const char *password = "Cllrs123IoT456";

// HTTP server will listen at port 80
ESP8266WebServer server(80);

HomePage temphomepage = HomePage();
AboutPage tempaboutpage = AboutPage();
ContactPage tempcontactpage = ContactPage();

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
    server.on("/about", handle_aboutpage);
    server.on("/contact", handle_contactpage);

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
    server.send(200, "text/html", temp.c_str());
}

void handle_aboutpage()
{
    std::string temp = tempaboutpage.getHTML();
    server.send(200, "text/html", temp.c_str());
}

void handle_contactpage()
{
    std::string temp = tempcontactpage.getHTML();
    server.send(200, "text/html", temp.c_str());
}
