#include "pages.h"
#include <string>

std::string ContactPage::setHeader()
{
  std::string result = "";
  result += "<head>";
  result += "<meta http-equiv='refresh' content='10'/>";
  result += "<title>ESP8266 Demo</title>";
  result += "<style> body { background-color: #fffff; font-family: Arial, Helvetica, Sans-Serif; Color: #000088; }</style>";
  result += "</head>";
  return result;
}

std::string ContactPage::setBody()
{
  std::string result = "";
  result += "<body>";
  result += "<h1>Contact page</h1>";
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

std::string ContactPage::getHTML()
{
  std::string page = "<html>";
  page += setHeader();
  page += setBody();
  page += "</html>";
  return page;
}
