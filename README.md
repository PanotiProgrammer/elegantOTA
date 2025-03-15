# ESP8266 OTA (Over-the-Air) Programming 🚀

Welcome to the **ESP8266 OTA Programming** repository! This project provides a simple and practical example of implementing Over-the-Air (OTA) updates on the ESP8266 microcontroller. With OTA, you can upload new firmware to your ESP8266 wirelessly, making it easier to maintain and update your IoT devices without physical connections.

Whether you're building smart home devices, IoT sensors, or just experimenting with the ESP8266, this example will help you get started with OTA updates quickly and efficiently.

---

## ✨ Features

- **Wireless Firmware Updates:** Seamlessly upload new sketches to your ESP8266 over Wi-Fi.
- **LED Blink Example:** A simple yet effective demonstration of OTA functionality by blinking an LED connected to GPIO2.
- **Easy Setup:** Step-by-step instructions to get you up and running in no time.

---

## 🛠️ Prerequisites

Before diving in, make sure you have the following:

- **Hardware:**
  - ESP8266 development board (e.g., NodeMCU, Wemos D1 Mini).
  - LED and resistor (optional, for the blink example).
- **Software:**
  - Arduino IDE installed.
  - ESP8266 board package installed in the Arduino IDE.

---

## 🚀 Getting Started

### 1. Clone the Repository
Start by cloning this repository to your local machine:

### 2. Open the Sketch
Open the ota_basic.ino file in the Arduino IDE.

### 3. Configure Wi-Fi Credentials
Replace the placeholders with your Wi-Fi network's SSID and password:

```bash
const char* ssid = "your_SSID";      // Replace with your Wi-Fi SSID
const char* password = "your_PASSWORD"; // Replace with your Wi-Fi password
```
### 4. Upload the Sketch via Serial
Connect your ESP8266 to your computer using a USB-to-serial adapter. Select the appropriate board and port in the Arduino IDE. Upload the sketch to your ESP8266.

### 5. Perform OTA Updates
After the initial upload, your ESP8266 will connect to your Wi-Fi network.

In the Arduino IDE, go to Tools > Port and select the network port corresponding to your device (e.g., esp8266-[IP address]).

Upload new sketches wirelessly—no cables needed!

📝 Notes
Initial Serial Upload: The first firmware upload must be done via a serial connection to enable OTA functionality.

Sketch Size Limitation: Ensure your compiled sketch size does not exceed 50% of the ESP8266's flash memory to leave room for OTA updates.

For advanced configurations and more details, check out the ESP8266 Arduino Core Documentation.

📜 License
This project is licensed under the MIT License. Feel free to use, modify, and distribute it as you see fit. See the LICENSE file for full details.

💡 Contributing
Contributions are welcome! If you have ideas for improvements or find any issues, please open an issue or submit a pull request. Let's make this project even better together!
