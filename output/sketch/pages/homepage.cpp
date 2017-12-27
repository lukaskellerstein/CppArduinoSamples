#include "pages.h"
#include <string>

std::string HomePage::setHeader()
{
  std::string result = "";
  result += "<head>";
  //result += "<meta http-equiv='refresh' content='10'/>";
  result += "<title>ESP8266 Demo</title>";
  result += "<style> body { background-color: #fffff; font-family: Arial, Helvetica, Sans-Serif; Color: #000088; } </style>";
  result += "<style> #logo { height: 100px; display: block; margin: auto; } </style>";
  result += "<style> #mycontainer { width: 50%; } </style>";
  result += "<style> .myvalue { color: blue; } </style>";
  result += "<link rel=\"stylesheet\" href=\"https://maxcdn.bootstrapcdn.com/bootstrap/4.0.0-beta.2/css/bootstrap.min.css\" integrity=\"sha384-PsH8R72JQ3SOdhVi3uxftmaW6Vc51MKb0q5P2rRUpPvrszuE4W1povHYgTpBfshb\" crossorigin=\"anonymous\">";
  result += "<script src=\"https://code.jquery.com/jquery-3.2.1.slim.min.js\" integrity=\"sha384-KJ3o2DKtIkvYIK3UENzmM7KCkRr/rE9/Qpg6aAZGJwFDMVNA/GpGFF93hXpG5KkN\" crossorigin=\"anonymous\"></script>";
  result += "<script src=\"https://cdnjs.cloudflare.com/ajax/libs/popper.js/1.12.3/umd/popper.min.js\" integrity=\"sha384-vFJXuSJphROIrBnz7yo7oB41mKfc8JzQZiCq4NCceLEaO4IHwicKwpJf9c9IpFgh\" crossorigin=\"anonymous\"></script>";
  result += "<script src=\"https://maxcdn.bootstrapcdn.com/bootstrap/4.0.0-beta.2/js/bootstrap.min.js\" integrity=\"sha384-alpBpkh1PFOepccYVYDB4do5UnbKysX5WZXm3XxPqe5iKTfUKjNkCk9SaVuEZflJ\" crossorigin=\"anonymous\"></script>";
  result += "</head>";
  return result;
}

std::string HomePage::setBody()
{
  std::string result = "";
  result += "<body>";

  result += "<div class=\"container\">";
  result += "<img id=\"logo\" src=\"data:image/svg+xml;base64,PD94bWwgdmVyc2lvbj0iMS4wIiBlbmNvZGluZz0idXRmLTgiPz4KPCEtLSBHZW5lcmF0b3I6IEFkb2JlIElsbHVzdHJhdG9yIDIxLjEuMCwgU1ZHIEV4cG9ydCBQbHVnLUluIC4gU1ZHIFZlcnNpb246IDYuMDAgQnVpbGQgMCkgIC0tPgo8c3ZnIHZlcnNpb249IjEuMSIgaWQ9IkxheWVyXzEiIHhtbG5zPSJodHRwOi8vd3d3LnczLm9yZy8yMDAwL3N2ZyIgeG1sbnM6eGxpbms9Imh0dHA6Ly93d3cudzMub3JnLzE5OTkveGxpbmsiIHg9IjBweCIgeT0iMHB4IgoJIHZpZXdCb3g9IjAgMCAxMDAgMTAwIiBzdHlsZT0iZW5hYmxlLWJhY2tncm91bmQ6bmV3IDAgMCAxMDAgMTAwOyIgeG1sOnNwYWNlPSJwcmVzZXJ2ZSI+CjxzdHlsZSB0eXBlPSJ0ZXh0L2NzcyI+Cgkuc3Qwe2ZpbGw6I0JCQkRCRjt9Cgkuc3Qxe2ZpbGw6IzY4Njg2ODt9Cgkuc3Qye2ZpbGw6dXJsKCNTVkdJRF8xXyk7fQoJLnN0M3tmaWxsOnVybCgjU1ZHSURfMl8pO30KPC9zdHlsZT4KPGcgaWQ9IkxheWVyXzIiPgoJPHBhdGggY2xhc3M9InN0MCIgZD0iTTkzLjMsODQuOGMwLDYuNi0zLjksOC45LTguOSw4LjlIMTVjLTQuNywwLTguOS0zLjktOC45LTguOVYxNS41YzAtNSwzLjktOC45LDguOS04LjloNzAKCQljNi45LDAsOC4zLDIuMiw4LjMsOC45Vjg0Ljh6Ii8+Cgk8Zz4KCQk8cGF0aCBjbGFzcz0ic3QxIiBkPSJNODUuNiw2LjZjNC4yLDAsNy41LDMuMyw3LjUsNy41aDYuOVY4LjljMC01LTMuOS04LjktOC45LTguOWgtNS42VjYuNnoiLz4KCQk8cGF0aCBjbGFzcz0ic3QxIiBkPSJNOTMuMywyMS42djY0YzAsNC4yLTMuMyw3LjgtNy44LDcuOEgxNC40Yy00LjIsMC03LjgtMy4zLTcuOC03LjhWMTQuNGMwLTQuMiwzLjMtNy44LDcuOC03LjhoNjMuOVYwSDguOQoJCQlDNC4yLDAsMCwzLjksMCw4Ljl2ODIuM2MwLDUsMy45LDguOSw4LjksOC45aDgyLjJjNSwwLDguOS0zLjksOC45LTguOVYyMS42SDkzLjN6Ii8+Cgk8L2c+Cgk8Zz4KCQk8Zz4KCQkJCgkJCQk8bGluZWFyR3JhZGllbnQgaWQ9IlNWR0lEXzFfIiBncmFkaWVudFVuaXRzPSJ1c2VyU3BhY2VPblVzZSIgeDE9IjMzLjg4ODkiIHkxPSIxMC43MTU4IiB4Mj0iMzMuODg4OSIgeTI9IjkzLjI2NDMiIGdyYWRpZW50VHJhbnNmb3JtPSJtYXRyaXgoMSAwIDAgLTEgMCAxMDIpIj4KCQkJCTxzdG9wICBvZmZzZXQ9IjAiIHN0eWxlPSJzdG9wLWNvbG9yOiM0MjhDQ0IiLz4KCQkJCTxzdG9wICBvZmZzZXQ9IjAuMjk2OSIgc3R5bGU9InN0b3AtY29sb3I6IzQwOENDQSIvPgoJCQkJPHN0b3AgIG9mZnNldD0iMC40MDM5IiBzdHlsZT0ic3RvcC1jb2xvcjojMzk4QkM3Ii8+CgkJCQk8c3RvcCAgb2Zmc2V0PSIwLjQ4MDEiIHN0eWxlPSJzdG9wLWNvbG9yOiMyRThCQzIiLz4KCQkJCTxzdG9wICBvZmZzZXQ9IjAuNTQxOCIgc3R5bGU9InN0b3AtY29sb3I6IzFEOEFCQiIvPgoJCQkJPHN0b3AgIG9mZnNldD0iMC41OTM5IiBzdHlsZT0ic3RvcC1jb2xvcjojMDc4OEIxIi8+CgkJCQk8c3RvcCAgb2Zmc2V0PSIwLjYwNzQiIHN0eWxlPSJzdG9wLWNvbG9yOiMwMDg4QUUiLz4KCQkJCTxzdG9wICBvZmZzZXQ9IjAuNjIyNyIgc3R5bGU9InN0b3AtY29sb3I6IzBEOTNCQiIvPgoJCQkJPHN0b3AgIG9mZnNldD0iMC42NTU5IiBzdHlsZT0ic3RvcC1jb2xvcjojMjNBNkQwIi8+CgkJCQk8c3RvcCAgb2Zmc2V0PSIwLjY5NSIgc3R5bGU9InN0b3AtY29sb3I6IzM0QjVFMCIvPgoJCQkJPHN0b3AgIG9mZnNldD0iMC43NDM0IiBzdHlsZT0ic3RvcC1jb2xvcjojM0ZCRkVDIi8+CgkJCQk8c3RvcCAgb2Zmc2V0PSIwLjgxMTQiIHN0eWxlPSJzdG9wLWNvbG9yOiM0NkM1RjIiLz4KCQkJCTxzdG9wICBvZmZzZXQ9IjEiIHN0eWxlPSJzdG9wLWNvbG9yOiM0OEM3RjQiLz4KCQkJPC9saW5lYXJHcmFkaWVudD4KCQkJPHBhdGggY2xhc3M9InN0MiIgZD0iTTQ4LjksOTEuNEgxOC42Yy01LjYsMC04LjYtMi44LTguNi03LjVWMTYuM2MwLTUsMy4xLTcuNSw4LjYtNy41aDMwLjNjNS44LDAsOC45LDIuOCw4LjksNy41djE5LjRINDMuMwoJCQkJVjE5LjRIMjQuNHY2MS41aDE4LjlWNjMuNGgxNC40djIwLjVDNTcuOCw4OC42LDU0LjcsOTEuNCw0OC45LDkxLjR6Ii8+CgkJPC9nPgoJCTxnPgoJCQkKCQkJCTxsaW5lYXJHcmFkaWVudCBpZD0iU1ZHSURfMl8iIGdyYWRpZW50VW5pdHM9InVzZXJTcGFjZU9uVXNlIiB4MT0iNjYuODA1NSIgeTE9IjEwLjU4NzMiIHgyPSI2Ni44MDU1IiB5Mj0iOTMuMTM1NyIgZ3JhZGllbnRUcmFuc2Zvcm09Im1hdHJpeCgxIDAgMCAtMSAwIDEwMikiPgoJCQkJPHN0b3AgIG9mZnNldD0iMCIgc3R5bGU9InN0b3AtY29sb3I6IzQyOENDQiIvPgoJCQkJPHN0b3AgIG9mZnNldD0iMC4yOTY5IiBzdHlsZT0ic3RvcC1jb2xvcjojNDA4Q0NBIi8+CgkJCQk8c3RvcCAgb2Zmc2V0PSIwLjQwMzkiIHN0eWxlPSJzdG9wLWNvbG9yOiMzOThCQzciLz4KCQkJCTxzdG9wICBvZmZzZXQ9IjAuNDgwMSIgc3R5bGU9InN0b3AtY29sb3I6IzJFOEJDMiIvPgoJCQkJPHN0b3AgIG9mZnNldD0iMC41NDE4IiBzdHlsZT0ic3RvcC1jb2xvcjojMUQ4QUJCIi8+CgkJCQk8c3RvcCAgb2Zmc2V0PSIwLjU5MzkiIHN0eWxlPSJzdG9wLWNvbG9yOiMwNzg4QjEiLz4KCQkJCTxzdG9wICBvZmZzZXQ9IjAuNjA3NCIgc3R5bGU9InN0b3AtY29sb3I6IzAwODhBRSIvPgoJCQkJPHN0b3AgIG9mZnNldD0iMC42MjI3IiBzdHlsZT0ic3RvcC1jb2xvcjojMEQ5M0JCIi8+CgkJCQk8c3RvcCAgb2Zmc2V0PSIwLjY1NTkiIHN0eWxlPSJzdG9wLWNvbG9yOiMyM0E2RDAiLz4KCQkJCTxzdG9wICBvZmZzZXQ9IjAuNjk1IiBzdHlsZT0ic3RvcC1jb2xvcjojMzRCNUUwIi8+CgkJCQk8c3RvcCAgb2Zmc2V0PSIwLjc0MzQiIHN0eWxlPSJzdG9wLWNvbG9yOiMzRkJGRUMiLz4KCQkJCTxzdG9wICBvZmZzZXQ9IjAuODExNCIgc3R5bGU9InN0b3AtY29sb3I6IzQ2QzVGMiIvPgoJCQkJPHN0b3AgIG9mZnNldD0iMSIgc3R5bGU9InN0b3AtY29sb3I6IzQ4QzdGNCIvPgoJCQk8L2xpbmVhckdyYWRpZW50PgoJCQk8cGF0aCBjbGFzcz0ic3QzIiBkPSJNODEuNCw5MS40SDUyLjJjLTUuNiwwLTguOS0yLjgtOC45LTcuNVY2My40aDE0LjR2MTcuN2gxNy44VjY0LjhMNDYuNCw0MS4zYy0yLjUtMS45LTMuMS0zLjMtMy4xLTYuNlYxNi4zCgkJCQljMC01LDMuMS03LjUsOC45LTcuNWgyOS4yYzUuNiwwLDguOSwyLjgsOC45LDcuNXYxOC42SDc1LjhWMTkuMUg1OC4xdjE1bDI5LjIsMjMuM2MyLjUsMS45LDMuMSwzLjYsMy4xLDYuNnYxOS43CgkJCQlDOTAuMyw4OC42LDg2LjksOTEuNCw4MS40LDkxLjR6Ii8+CgkJPC9nPgoJPC9nPgo8L2c+Cjwvc3ZnPgo=\" alt=\"none\"/>";
  result += "</div>";

  result += "<h1 class=\"text-center\">Home page</h1>";
  result += "<div id=\"mycontainer\" class=\"container\">";

  result += "<table class=\"table table-bordered\">";
  result += "<thead class=\"thead-inverse\">";
  result += "<tr>";
  result += "<th>Parameter</th>";
  result += "<th>Value</th>";
  result += "</tr>";
  result += " </thead>";
  result += "<tbody>";

  result += "<tr>";
  result += "<td>SenzorID</td>";
  result += "<td class=\"myvalue\">{{senzorid}}</td>";
  result += "</tr>";

  result += "<tr>";
  result += "<td>Wifi SSID</td>";
  result += "<td class=\"myvalue\">{{wifissid}}</td>";
  result += "</tr>";

  result += "<tr>";
  result += "<td>Wifi Psswd</td>";
  result += "<td class=\"myvalue\">{{wifipsswd}}</td>";
  result += "</tr>";

  result += "<tr>";
  result += "<td>MQTT Url : Port</td>";
  result += "<td class=\"myvalue\">{{mqtturl}}</td>";
  result += "</tr>";

  result += "</tbody>";
  result += "</table>";

  result += "</div>";

  result += "<div class=\"container text-center\">";
  result += "<a href=\"/settings\" class=\"btn btn-info text-center\" role=\"button\">Change settings</button>";
  result += "</div>";

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
