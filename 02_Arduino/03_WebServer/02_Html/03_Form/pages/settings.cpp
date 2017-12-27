#include "pages.h"
#include <string>

std::string SettingsPage::setHeader()
{
  std::string result = "";
  result += "<head>";
  result += "<meta http-equiv='refresh' content='10'/>";
  result += "<title>ESP8266 Demo</title>";
  result += "<style> body { background-color: #fffff; font-family: Arial, Helvetica, Sans-Serif; Color: #000088; }</style>";
  result += "</head>";
  return result;
}

std::string SettingsPage::setBody()
{
  std::string result = "";
  result += "<body>";
  result += "<h1>Settings page</h1>";
  result += "<form action='/submit' method='POST'>";
  result += "SenzorID<br>";
  result += "<input type=\"text\" name=\"senzorid\"><br>";
  result += "wifiSSID<br>";
  result += "<input type=\"text\" name=\"wifissid\"><br>";
  result += "wifiPsswd<br>";
  result += "<input type=\"text\" name=\"wifipsswd\"><br>";
  result += "mqttUrl:Port<br>";
  result += "<input type=\"text\" name=\"mqtturl\"><br>";
  result += "<input type=\"submit\" value=\"Submit\">";
  result += "</form>";
  result += "</body>";
  return result;
}

std::string SettingsPage::getHTML()
{
  std::string page = "<html>";
  page += setHeader();
  page += setBody();
  page += "</html>";
  return page;
}
