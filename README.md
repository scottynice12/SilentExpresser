# 💬 SilentExpresser

> *Giving a voice to those who need it most, one expression at a time.*

## 💙 About the Project
Communication is a fundamental human right, yet millions of individuals face daily challenges with speech due to medical conditions, disabilities, or being non-verbal. Frustration often builds when expressing basic, urgent emotional or physical needs is hindered by a lack of an immediate outlet.

**SilentExpresser** is an empathetic, lightweight embedded systems project built to bridge that gap. Designed with simplicity in mind, it allows a user to adjust a simple control interface to instantly project their current mood or urgent need onto a clear LCD screen for caretakers, family, or friends to read. 

Our mission is to prove that assistive technology doesn't have to be expensive, complex, or out of reach—it can be built with empathy and simple, accessible code.

---

## 🛠️ How It Works (Hardware & Logic)
This project runs on an **Arduino Uno** micro-controller simulation. 
* **Input:** A simple slide potentiometer acts as an intuitive mood-selector dial.
* **Processing:** The Arduino reads the analog voltage value mapped across the dial.
* **Output:** An I2C 16x2 LCD screen instantly translates that input into clear, readable text messages like `HAPPY`, `TIRED`, `PAIN`, or `NEED HELP!`.

---

## 🚀 How to Run It Online (No Hardware Required!)

You can test, modify, and run this system right inside your web browser using the free [Wokwi Simulator](https://wokwi.com/):

1. Head over to **[Wokwi.com](https://wokwi.com)**.
2. Create a new **Arduino Uno** project.
3. Replace the code in your **`sketch.ino`** file with the code provided in this repository under `sketch.ino`.
4. Replace the code in your **`diagram.json`** file with the layout provided in this repository under `diagram.json`.
5. *(Optional)* Go to the **Library Manager** tab in Wokwi, search for `LiquidCrystal_I2C`, and install it.
6. Click the green **Play** button to start the simulation! 
7. Drag the virtual slider back and forth to watch the mood dynamically change on the LCD screen.

---

## 📂 Project Files
* **`sketch.ino`** — The C++ firmware logic running on the Arduino.
* **`diagram.json`** — The layout configuration defining how the Arduino, LCD screen, and potentiometer connect.

---

## 🌱 Future Improvements
We believe technology should always evolve to be more inclusive. Future goals for SilentExpresser include:
* Expanding the emotional and physical vocabulary options.
* Adding a buzzer/alarm feature for emergency "NEED HELP" states.
* Transitioning from a virtual simulation to a physical, wearable prototype using lightweight 3D printing.

*Built with care to make the world a little more communicative.*
