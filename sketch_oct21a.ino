#include <ESP8266WiFi.h>
#include <ESP8266WebServer.h>
#include <TM1638.h>

//Soft AP
const char ssid="박준상";
const char password="12341234"

TM1638 aa(D2,D1,D0);
ESP8266WebServer server(80);

void setup(){

}

void loop() {
  
}