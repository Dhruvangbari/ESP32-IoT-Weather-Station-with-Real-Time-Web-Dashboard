

# ESP32 Smart Weather Station
# ESP32 IoT Weather Station 🌦️


An Internet of Things (IoT) project that monitors environmental conditions using an ESP32 and a DHT sensor.  
The ESP32 hosts a web server that displays real-time temperature and humidity data on a dashboard.

---

## Features

- Real-time temperature monitoring
- Real-time humidity monitoring
- Built-in ESP32 web server
- Lightweight web dashboard
- Easy to expand with additional sensors

---

## Technologies Used

- ESP32 Microcontroller
- Arduino Framework
- DHT11 / DHT22 Sensor
- WiFi Networking
- HTML Web Interface

---

## Hardware Requirements

- ESP32 Development Board
- DHT11 or DHT22 Sensor
- Breadboard
- Jumper Wires
- USB Power Supply

---

## Circuit Connections

| Component | ESP32 Pin |
|-----------|-----------|
| DHT Data  | GPIO 4    |
| VCC       | 3.3V      |
| GND       | GND       |

---

## Project Structure
esp32-weather-station
│
├── esp32_code
│ └── weather_station.ino
│
├── web_dashboard
│ └── index.html
│
├── requirements.txt
└── README.md

---

## Installation

1. Install **Arduino IDE**
2. Install the **ESP32 board package**
3. Install the required libraries
4. Open the ESP32 code file
5. Update your WiFi credentials

6. Upload the code to the ESP32
7. Open the Serial Monitor
8. Copy the ESP32 IP address
9. Open it in your browser

---

## Future Improvements

- Cloud data logging
- Historical weather graphs
- Mobile notifications
- MQTT integration
- Additional environmental sensors

---

## Use Cases

- IoT learning projects
- Environmental monitoring
- Smart home systems
- Embedded systems portfolio

---

## License

MIT License

---

## Author

Dhruvang

An IoT weather monitoring system built using ESP32 and DHT sensors that displays real-time temperature and humidity on a web dashboard.

## Features
- Real-time temperature monitoring
