
#include <WiFi.h>
#include <WebServer.h>
#include "DHT.h"

#define DHTPIN 4
#define DHTTYPE DHT11

const char* ssid = "YOUR_WIFI_NAME";
const char* password = "YOUR_WIFI_PASSWORD";

DHT dht(DHTPIN, DHTTYPE);
WebServer server(80);

void handleRoot() {

  float temperature = dht.readTemperature();
  float humidity = dht.readHumidity();

  String page = "<html><head><title>ESP32 Weather Station</title>";
  page += "<meta http-equiv='refresh' content='5'>";
  page += "<style>body{font-family:Arial;text-align:center;margin-top:50px}</style>";
  page += "</head><body>";
  page += "<h1>ESP32 Weather Station</h1>";
  page += "<h2>Temperature: " + String(temperature) + " °C</h2>";
  page += "<h2>Humidity: " + String(humidity) + " %</h2>";
  page += "</body></html>";

  server.send(200, "text/html", page);
}

void setup() {

  Serial.begin(115200);
  dht.begin();

  WiFi.begin(ssid, password);

  Serial.print("Connecting");

  while (WiFi.status() != WL_CONNECTED) {
    delay(500);
    Serial.print(".");
  }

  Serial.println("");
  Serial.println("Connected");
  Serial.println(WiFi.localIP());

  server.on("/", handleRoot);
  server.begin();
}

void loop() {
  server.handleClient();
}
