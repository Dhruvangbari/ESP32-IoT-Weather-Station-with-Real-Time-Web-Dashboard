#include <WiFi.h>
#include <WebServer.h>
#include "sensor_manager.h"
#include "../config/config.h"

WebServer server(80);

void handleRoot() {
  server.send(200, "text/html", "<h1>ESP32 Weather API Running</h1>");
}

void handleData() {

  float temp = readTemperature();
  float hum = readHumidity();

  String json = "{";
  json += "\"temperature\":" + String(temp) + ",";
  json += "\"humidity\":" + String(hum);
  json += "}";

  server.send(200, "application/json", json);
}

void setup() {

  Serial.begin(115200);

  connectWiFi();

  initSensor();

  server.on("/", handleRoot);
  server.on("/data", handleData);

  server.begin();
}

void loop() {
  server.handleClient();
}
