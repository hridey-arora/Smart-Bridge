# 🌉 Smart Bridge Control using Moisture Sensor  

## 📖 Project Overview  
This project demonstrates a **Smart Bridge Control System** that monitors water/flood levels using a **soil/moisture sensor (or water sensor)**.  
When the water level rises above a safe threshold, the system automatically triggers a **servo motor** to lift/open the bridge and alerts with LEDs/buzzer.  

This model simulates **real-life flood management** systems where bridges are automatically controlled to prevent accidents.  

---

## ⚙️ Features  
- ✅ Detects water/moisture level using a sensor.  
- ✅ Automatically raises/lowers a bridge using servo motor.  
- ✅ Visual alerts with LEDs.  
- ✅ Buzzer alarm for high water warning.  
- 🌍 Scalable for flood-prone areas & smart city systems.  

---

## 🛠️ Components Used  
- Arduino UNO (or ESP board)  
- Moisture / Water Level Sensor (Analog)  
- Servo Motor (to simulate bridge gate lifting)  
- LEDs (Green = Safe, Yellow = Caution, Red = Danger)  
- Buzzer (alert system)  
- Jumper wires, Breadboard  

---

## 🔌 Circuit Connections  

| Component              | Arduino Pin |
|------------------------|-------------|
| Moisture Sensor (AOUT) | A0          |
| Servo Motor Signal     | D9          |
| Green LED              | D5          |
| Yellow LED             | D6          |
| Red LED                | D7          |
| Buzzer                 | D8          |

---

## 📜 How It Works  
1. The **moisture/water sensor** detects the water level (analog values).  
2. Arduino compares sensor values with thresholds:  
   - Low water → ✅ Bridge remains **down** (Green LED ON).  
   - Medium water → ⚠️ Caution (Yellow LED ON).  
   - High water → 🚨 Bridge **raises** using servo, Red LED + buzzer alert.  
3. The system updates continuously, ensuring real-time response.  

---

## 💻 Usage Instructions  
1. Connect components as per the wiring table.  
2. Upload `Smart_Bridge.ino` to Arduino using IDE.  
3. Simulate water by dipping the sensor into water gradually.  
4. Observe LED indicators, buzzer alerts, and servo-controlled bridge movement.  

---

## 🚀 Future Improvements  
- Add **ultrasonic sensor** for more accurate water level detection.  
- Integrate **ESP8266/ESP32** to send alerts to a mobile app or cloud dashboard.  
- Add **automatic traffic signals** to stop vehicles when bridge is raised.  
- Implement **dual bridge gates** for more realistic simulation.  

---
