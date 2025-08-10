Convert mechanical energy from a BLDC (used as a wind turbine generator) into a stable DC output.  
Path: **BLDC → 3-Phase Rectifier → Boost Converter → Arduino PWM Regulation → LED Load**.

---

## 📌 Project Overview
- **Goal:** Convert variable AC from the turbine to a regulated 3–5 V DC output.
- **Method:** Rectify 3-phase AC using Schottky diodes and capacitors, boost low DC voltage, and regulate output using Arduino PWM with voltage feedback.
- **Workshop:** CiPASS Summer 2025 (City College of New York)
- **My Role:** Designed and built the rectifier + boost converter circuitry, implemented Arduino voltage regulation code, and tested the system.

---

## 🛠️ Features
- 3-phase full-bridge rectifier (Schottky + bulk capacitor)
- Boost converter with Arduino-controlled PWM regulation
- Voltage feedback via voltage divider to A0
- Adjustable output voltage (default target = 5.0 V)
- LED load demonstration

---

## 📂 Repository Structure
arduino/ # Arduino code for PWM control
kicad/ # KiCad schematics and PCB files
docs/ # Photos, wiring diagrams, and schematics

---

## 🔌 Quick Wiring
- **PWM (D3)** → MOSFET gate  
- **Vout → R1 → A0 → R2 → GND** (voltage divider)  
- **LED Load** at Vout

---

## 📋 Materials
- BLDC motor (provided in workshop)
- 6× Schottky diodes (e.g., SS34)
- Capacitors: 470–1000 µF bulk, 100 nF decouplers
- Inductor: 47–220 µH
- Boost diode: SS34
- Logic-level MOSFET (e.g., IRLZ44N)
- Resistors for voltage divider
- Arduino Uno/Nano

---

## 📊 Results
- Input voltage range tested: **  **  
- Regulated output: **  **  
- Max load tested: **  **  
- Efficiency: **  **

---

## 🖼️ Images


---
