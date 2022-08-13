#include <ESP8266WiFi.h>
#include <ESP8266WebServer.h>
#include <WiFiClient.h>

#include "index.h"

// network
const char* ssid = "";
const char* password = "";
const char* hostName = "buzzer";

const int port = 80;

const int buzzerPin = 14; // D5
const int frequency = 1400;
const int duration = 5000;

ESP8266WebServer server(port);

void handleIndex() {
  tone(buzzerPin, frequency, duration);
  server.send(200, "text/html", INDEX_PAGE);
}


void setup() {

  WiFi.mode(WIFI_STA);
  WiFi.begin(ssid, password);
  while (WiFi.status() != WL_CONNECTED) { delay(500); }

  WiFi.hostname(hostName);

  server.on("/", handleIndex);
  server.begin();
}

void loop()
{
  server.handleClient();
}
