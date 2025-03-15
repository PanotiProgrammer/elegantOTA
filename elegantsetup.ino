// This code sets up an ESP8266 to connect to a Wi-Fi network and creates 
// an asynchronous web server for over-the-air (OTA) updates using the ElegantOTA library. 
// It provides a web interface at the /update endpoint for uploading new 
// firmware and displays a simple homepage with a link to the OTA update page.
#include <ESP8266WiFi.h>
#include <ESPAsyncTCP.h>
#include <ESPAsyncWebServer.h>
#include <ElegantOTA.h>

const char* ssid = "Sharmas5G";      // Replace with your WiFi SSID
const char* password = "12345678";  // Replace with your WiFi password

AsyncWebServer server(80);  // Create web server instance on port 80

void setup() {
  Serial.begin(115200);
  
  // Connect to WiFi
  WiFi.begin(ssid, password);
  while (WiFi.status() != WL_CONNECTED) {
    delay(1000);
    Serial.println("Connecting to WiFi...");
  }
  Serial.print("Connected to WiFi, IP Address: ");
  Serial.println(WiFi.localIP());

  // Setup Web Server
  server.on("/", HTTP_GET, [](AsyncWebServerRequest *request){
    request->send(200, "text/html", "<h1>ESP8266 OTA Update</h1><p>Go to <a href='/update'>OTA Update Page</a></p>");
  });

  // Initialize ElegantOTA
  ElegantOTA.begin(&server);

  // Start the server
  server.begin();
}

void loop() {
  // No need to call ElegantOTA.loop() as it runs with AsyncWebServer
}
