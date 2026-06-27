# 🌧️ **Rain Detector using Arduino**  

This project is a **simple and effective Rain Detection System** using an **Arduino Uno**, a **rain sensor**, an **LED**, and a **buzzer**. It detects rainfall and provides both **visual and audible alerts**, making it useful for applications like **automatic window closing, rainwater harvesting, and outdoor equipment protection**.  

---

## 🛠️ **Components Used**
- 🔹 **Arduino Uno** – Microcontroller that processes sensor data and controls outputs.  
- 🔹 **Rain Sensor Module** – Detects rain and sends an analog signal to the Arduino.  
- 🔹 **LED (+ ~220–330 Ω resistor)** – Visual indication of rainfall.  
- 🔹 **Buzzer (active)** – Audible alert when rain is detected.  

---

## 🔌 **Wiring**
| Arduino Pin | Connects to |
|-------------|-------------|
| A0 | Rain sensor **analog out (AO)** (sensor VCC → 5V, GND → GND) |
| D7 | LED **+** via a ~220–330 Ω resistor (LED − → GND) |
| D8 | Buzzer **+** (buzzer − → GND) |

> The rain sensor reads **lower** as it gets wetter. The trip point (≈ 500, with a **hysteresis band** so the alert doesn't chatter in light drizzle) is **uncalibrated** — tune `RAIN_ON/RAIN_OFF` for your sensor. The sketch assumes an **active** buzzer; for a passive piezo, drive it with `tone()` instead of `digitalWrite()`.

---

## ⚙️ **How It Works**
1️⃣ The **rain sensor** outputs an analog value that falls as water lands on it.  
2️⃣ When the value drops past the trip point, the **Arduino turns ON the LED and buzzer**.  
3️⃣ When **rain stops**, hysteresis holds the state until the surface dries, then **resets automatically**.  

---

## 📝 **Features**
✅ **Detects rain** using a rain sensor  
✅ **Turns ON an LED** for a visual alert  
✅ **Activates a buzzer** for an audible alert  
✅ **Hysteresis prevents alert chatter** near the threshold  
✅ **Can be integrated into smart automation systems**  

---

## 🌍 **Applications**
🔹 **Rain Alarm System** – Alerts users when it starts raining.  
🔹 **Automatic Window Control** – Closes windows automatically when rain is detected.  
🔹 **Smart Irrigation System** – Prevents overwatering by detecting natural rainfall.  
🔹 **Rainwater Harvesting Automation** – Activates water collection mechanisms.  
🔹 **Vehicle Rain Alert** – Notifies car/bike owners to cover their vehicles.  
🔹 **Agricultural Monitoring** – Helps farmers detect rainfall for crop protection.  
🔹 **Industrial Equipment Protection** – Prevents damage to outdoor machinery.  
