# 🍲 Microwave Oven Simulation Project

![Language](https://img.shields.io/badge/Language-Embedded%20C-blue)
![Platform](https://img.shields.io/badge/Platform-PIC16F877A-green)
![IDE](https://img.shields.io/badge/IDE-MPLAB%20X-orange)
![Simulation](https://img.shields.io/badge/Simulation-PICSIMLAB-red)

## 📖 Overview
This project is a fully functional **Microwave Oven Simulation** developed during my Embedded Systems Internship at **Emertxe Technologies**. The system is built on the **PIC16F877A** microcontroller and simulates the core operations of a real-world microwave oven, including multiple cooking modes, temperature control, and safety mechanisms.

The project demonstrates the implementation of **Finite State Machines (FSM)**, **Interrupt Service Routines (ISR)**, and peripheral interfacing (CLCD, Matrix Keypad, Timers).

---

## 🚀 Features
The system supports four distinct operational modes:

1.  **Micro Mode:**
    * Standard cooking mode with a default power setting of 900W.
    * User-defined cooking duration.
    * Fan (Magnetron) and Timer activation.
2.  **Grill Mode:**
    * Simulates high-heat grilling operations.
    * Timer-based countdown without temperature control.
3.  **Convection Mode:**
    * Includes a specialized **Pre-Heating Cycle** (60 seconds).
    * Allows temperature selection before cooking begins.
4.  **Quick Start Mode:**
    * One-touch activation for an instant 30-second cooking cycle.
    * "Add Time" feature: Pressing Start again adds +30 seconds dynamically.

**🛡️ Safety Features:**
 **Door Interlock:** The system pauses immediately via ISR if the door is opened (simulated interrupt).

---

## 🛠️ Tech Stack & Hardware
### **Software**
* **IDE:** MPLAB X IDE (v6.25 or higher)
* **Compiler:** XC8 Compiler
* **Simulation Tool:** PICSIMLAB (v0.8.9 or higher)

### **Hardware Components (Simulated)**
* **Microcontroller:** PIC16F877A (8-bit RISC Architecture)
* **Display:** 16x4 Character LCD (CLCD)
* **Input:** 4x3 Matrix Keypad, Tactile Switches
* **Actuators:** DC Motor (Fan/Magnetron)

---

## 📂 Project Structure

**🔹 Core Application**
* `main.c` / `main.h`: Main loop and global definitions.
* `micro_oven.c`: The "brain" of the project (Cooking Mode Logic).

**🔹 Drivers (Hardware Interface)**
* `clcd.c`: Controls the display output.
* `matrix_keypad.c`: Handles user inputs.
* `timers.c`: Manages time-critical operations.

**🔹 System & Safety**
* `isr.c`: Interrupt handling for immediate safety response (Door Open, etc.).
* `dist/`: compiled executables (`.hex`).

---

## 📺 Project Demo
Watch the full explanation and live simulation of this project on YouTube:

[![Microwave Oven Project Demo](https://img.youtube.com/vi/yMc3PlXFMcc/0.jpg)](https://www.youtube.com/watch?v=yMc3PlXFMcc)

*(Click the image above to watch the video)*
