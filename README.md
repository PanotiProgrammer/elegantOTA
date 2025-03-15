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

### **Hardware:**
- **ESP8266 Development Board** (e.g., NodeMCU, Wemos D1 Mini).
- **Micro-USB Cable** (for power and serial communication).
- **LED and Resistor** (optional, for testing or blink example).
- **Breadboard and Jumper Wires** (optional, for prototyping).

### **Software:**
- **Arduino IDE** (installed on your computer).
- **ESP8266 Board Package** (installed in the Arduino IDE).
  - To install, go to **File > Preferences** and add the following URL to the "Additional Boards Manager URLs" field:
    ```
    http://arduino.esp8266.com/stable/package_esp8266com_index.json
    ```
  - Then, go to **Tools > Board > Boards Manager**, search for "ESP8266," and install the package.
- **Required Libraries** (installed via the Arduino IDE Library Manager):
  - **ElegantOTA** (for OTA updates).
  - **ESPAsyncTCP** (for asynchronous TCP functionality).
  - **ESPAsyncWebServer** (for asynchronous web server functionality).

### **Network Requirements:**
- **Wi-Fi Network** with internet access.
- **SSID and Password** of your Wi-Fi network (to connect the ESP8266).

### **Enabling Async Mode**
For the ElegantOTA library to work in async mode (with the ESPAsyncWebServer library), follow these steps:

1. Go to your Arduino libraries directory.
2. Open the **ElegantOTA** folder and then open the **src** folder.
3. Locate the `ELEGANTOTA_USE_ASYNC_WEBSERVER` macro in the `ElegantOTA.h` file, and set it to `1` as follows:
   ```cpp
   #define ELEGANTOTA_USE_ASYNC_WEBSERVER 1
![image](https://github.com/user-attachments/assets/e8c9c7b9-2894-4828-933a-68bc46955b71)


---

## 🚀 Getting Started

### 1. Clone the Repository
Start by cloning this repository to your local machine:
```bash
git clone https://github.com/PanotiProgrammer/elegantOTA.git
```
### 2. Open the Sketch
Open the elegantsetup.ino file in the Arduino IDE.

### 3. Configure Wi-Fi Credentials
Replace the placeholders with your Wi-Fi network's SSID and password:

```bash
const char* ssid = "your_SSID";      // Replace with your Wi-Fi SSID
const char* password = "your_PASSWORD"; // Replace with your Wi-Fi password
```
### 4. Upload the Sketch via Serial
1. Connect your ESP8266 to your computer using a USB-to-serial adapter.
2. In the Arduino IDE, select the appropriate board (e.g., NodeMCU 1.0) under **Tools > Board**.
3. Select the correct port under **Tools > Port**.
4. Upload the `elegantsetup.ino` sketch to your ESP8266.

### 5. Convert .ino to .bin for OTA Updates
1. Open your sketch (e.g., `elegantsetup.ino`) in the Arduino IDE.
2. Go to **Sketch > Export Compiled Binary** to generate a `.bin` file.
3. Note the location of the generated `.bin` file.

### 6. Perform OTA Updates
1. After the initial upload, your ESP8266 will connect to your Wi-Fi network.
2. Open a web browser and navigate to `http://<ESP8266_IP>/update`, replacing `<ESP8266_IP>` with the actual IP address of your ESP8266.
3. On the ElegantOTA web interface:
   - Click the "Choose File" button and select the `.bin` file you generated.
   - Click "Upload" to start the OTA update process.
4. The ESP8266 will receive the new firmware and reboot automatically.

### Additional Example: Blink Light
1. Open the `blinklight.ino` file in the Arduino IDE.
2. Follow the same steps to upload this sketch via serial or OTA.

### Repository Files Overview
- **blinklight.ino**: A simple example to blink an LED using the ESP8266.
- **elegantsetup.ino**: The main setup file to configure the ESP8266 as a server for OTA updates.

---

## 📝 Notes
Initial Serial Upload: The first firmware upload must be done via a serial connection to enable OTA functionality. 
Sketch Size Limitation: Ensure your compiled sketch size does not exceed 50% of the ESP8266's flash memory to leave room for OTA updates.

For advanced configurations and more details, check out the ESP8266 Arduino Core Documentation.

---

## 📜 License
This project is licensed under the MIT License. Feel free to use, modify, and distribute it as you see fit. See the LICENSE file for full details.

---

## 💡 Contributing
Contributions are welcome! If you have ideas for improvements or find any issues, please open an issue or submit a pull request. Let's make this project even better together!
