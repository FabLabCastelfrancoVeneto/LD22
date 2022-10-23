/**
   LD22 - "Che aria tira a Pordenone"
   WS introduttivo
   Prime sperimentazioni con chiamate GET e API
   
   Based on BasicHTTPClient.ino
   Created on: 22.10.2022
   CC0 1.0 Universal
*/

#include <Arduino.h>

#include <ESP8266WiFi.h>
#include <ESP8266WiFiMulti.h>

#include <ESP8266HTTPClient.h>

#include <WiFiClient.h>
#include "DHT.h"

#define DHTPIN D3
#define DHTTYPE DHT22

ESP8266WiFiMulti WiFiMulti;
DHT dht(DHTPIN, DHTTYPE);

void setup() {

  Serial.begin(115200);
  // Serial.setDebugOutput(true);

  Serial.println();
  Serial.println();
  Serial.println();

  for (uint8_t t = 4; t > 0; t--) {
    Serial.printf("[SETUP] WAIT %d...\n", t);
    Serial.flush();
    delay(1000);
  }

  WiFi.mode(WIFI_STA);
  WiFiMulti.addAP("TimUaifai", "B4ubAum1ciomic1o");

  dht.begin();
}

void loop() {

  //DHT22
  float h = dht.readHumidity();
  // Read temperature as Celsius (the default)
  float t = dht.readTemperature();

  //LDR
  int light = analogRead(A0);

  //endpoint
  String url = "http://192.168.1.123:1880/test";
  
  //costruzione GET iniziando con ID
  url += "?id=1";
  
  //aggiunta dei valori temperatura e umidità
  url += "&temp=" + String(t) + "&hum=" + String(h) + "&light=" + String(light);
  
  // wait for WiFi connection
  if ((WiFiMulti.run() == WL_CONNECTED)) {

    WiFiClient client;

    HTTPClient http;

    Serial.print("[HTTP] begin...\n");
    if (http.begin(client, url)) {  // Richiesta HTTP in cui usiamo la url creata prima


      Serial.print("[HTTP] GET...\n");
      // start connection and send HTTP header
      int httpCode = http.GET();

      // httpCode will be negative on error
      if (httpCode > 0) {
        // HTTP header has been send and Server response header has been handled
        Serial.printf("[HTTP] GET... code: %d\n", httpCode);

        // file found at server
        if (httpCode == HTTP_CODE_OK || httpCode == HTTP_CODE_MOVED_PERMANENTLY) {
          String payload = http.getString();
          Serial.println(payload);
        }
      } else {
        Serial.printf("[HTTP] GET... failed, error: %s\n", http.errorToString(httpCode).c_str());
      }

      http.end();
    } else {
      Serial.printf("[HTTP} Unable to connect\n");
    }
  }

  delay(10000);
}
