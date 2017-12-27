#include <string>

#include "eepromUtil.h"

EepromUtil eepromutil;

using namespace std;

//
// A pair of functions to show how long it takes to work with eeprom.
//
int start_time;
int stop_time;

void start_timing()
{
  start_time = millis();
}

void print_elapsed()
{
  stop_time = millis();
  Serial.print("Time elapsed (ms): ");
  Serial.println(stop_time - start_time);
}

const int BUFSIZE = 100;
char buf[BUFSIZE];

void setup()
{
  EEPROM.begin(512);
  Serial.begin(115200);

  eepromutil.eeprom_erase_all();


  //SAVE STRING
  eepromutil.eeprom_write_string(8, "ASDF");

  //READ STRING
  char * aaa = "";
  eepromutil.eeprom_read_string(8, aaa, 10);


  Serial.print(aaa);

}

void loop()
{
}
