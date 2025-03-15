# ESP8266 OTA (Over-the-Air) Programming

This repository provides a basic example of implementing Over-the-Air (OTA) programming on the ESP8266 microcontroller. OTA allows developers to upload new firmware to their devices wirelessly, eliminating the need for physical connections during updates.

## Features

- **Wireless Firmware Updates:** Upload new sketches to the ESP8266 over Wi-Fi.
- **LED Blink Example:** Demonstrates OTA functionality by blinking an LED connected to GPIO2.

## Prerequisites

- **Hardware:** ESP8266 development board.
- **Software:** Arduino IDE with the ESP8266 board package installed.

## Getting Started

1. **Clone this repository:**

   ```bash
   git clone https://github.com/yourusername/esp8266-ota-example.git
Open the ota_basic.ino sketch in the Arduino IDE.

Configure your Wi-Fi credentials:

Replace your_SSID and your_PASSWORD with your network's SSID and password:

cpp
Copy
const char* ssid = "your_SSID";
const char* password = "your_PASSWORD";
Upload the sketch via serial:

Connect your ESP8266 to the computer using a USB-to-serial adapter.

Select the appropriate board and port in the Arduino IDE.

Upload the sketch.

Perform OTA updates:

After the initial upload, the ESP8266 will connect to your Wi-Fi network.

In the Arduino IDE, navigate to Tools > Port and select the network port corresponding to your device (e.g., esp8266-[IP address]).

Upload subsequent sketches wirelessly.

Notes
Initial Serial Upload: The first firmware upload must be done via a serial connection to enable OTA functionality.

Sketch Size Limitation: Ensure that the compiled sketch size does not exceed 50% of the ESP8266's flash memory to accommodate OTA updates.

For more detailed information and advanced configurations, refer to the ESP8266 Arduino Core documentation.

License
This project is licensed under the MIT License. See the LICENSE file for details.

Copy

This is the complete markdown version of the README file. Let me know if you need further assistance! 🚀
