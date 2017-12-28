#include "pages.h"
#include <string>

std::string HomePage::setHeader()
{
  std::string result = "";
  result += "<head>";
  result += "<meta http-equiv='refresh' content='10'/>";
  result += "<title>ESP8266 Demo</title>";
  result += "<style> body { background-color: #fffff; font-family: Arial, Helvetica, Sans-Serif; Color: #000088; }</style>";
  result += "</head>";
  return result;
}

std::string HomePage::setBody()
{
  std::string result = "";
  result += "<body>";
  result += "<h1>Home page</h1>";
  result += "<div>SenzorID</div>";
  result += "<div>{{senzorid}}</div>";
  result += "<div>Wifi SSID</div>";
  result += "<div>{{wifissid}}</div>";
  result += "<div>Wifi Psswd</div>";
  result += "<div>{{wifipsswd}}</div>";
  result += "<div>MQTT Url : Port</div>";
  result += "<div>{{mqtturl}}</div>";
  result += "</body>";
  return result;
}

std::string HomePage::getHTML()
{
  std::string page = "<html>";
  page += setHeader();
  page += setBody();
  page += "</html>";
  return page;
}
