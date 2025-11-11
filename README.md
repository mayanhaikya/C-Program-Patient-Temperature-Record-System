# C-Program-Patient-Temperature-Record-System
This C program demonstrates the concept of dynamic memory allocation — one of the most essential features of C programming that allows memory to be allocated, resized, and freed at runtime instead of compile time.
# 🏥 Patient Temperature Record System in C

**SUBMITTED BY**  
**Name:** Mayan Pathania  
**UID:** 25BCD10212  
**Course:** BCA (Data Science)  
**Date of Submission:** 02 November 2025  

---

## 📑 Table of Contents
1. [Introduction](#introduction)  
2. [Objective](#objective)  
3. [How It Works](#how-it-works)  
4. [Insights From the Program](#insights-from-the-program)  
5. [Key Learning Outcomes](#key-learning-outcomes)  
6. [Functional Objectives](#functional-objectives)  
7. [Real-Life Applications](#real-life-applications)  
8. [Limitations](#limitations)  
9. [Findings / Analysis](#findings--analysis)  
10. [Output](#output)  
11. [Methodology](#methodology)  
12. [Conclusion](#conclusion)  
13. [Bibliography](#bibliography)

---

## 🩺 Introduction

The **Patient Temperature Record System** is a C-based application designed to record, convert, and display patient temperature data efficiently.  
Users can input patient details such as **name, date, time, and temperature (in Celsius)**, and the program automatically converts it to **Fahrenheit** using the formula:

Fahrenheit = (Celsius * 9/5) + 32


The system allows multiple patient entries and displays all data in a **tabular format** for clarity and easy comparison.  
This project demonstrates the use of **structures, loops, arrays, and formatted I/O** in C — essential building blocks for data-driven healthcare systems.

---

## 🎯 Objective

The aim of this project is to build a simple yet functional **temperature record management system** for patients using C programming.  

### Core Objectives:
- Record patient name, date, and time of temperature reading  
- Convert temperature automatically from Celsius to Fahrenheit  
- Store multiple patient records efficiently  
- Display all data neatly in a tabular format  
- Reduce manual calculation errors and promote data accuracy  

> **Main Goal:** Automate patient temperature tracking and display using efficient data structures and logic.

---

## ⚙️ How It Works

1. **Structure Definition**  
   A `struct Patient` is used to store:
   - Name  
   - Date  
   - Time  
   - Temperature (Celsius & Fahrenheit)

2. **Input Loop**  
   The program prompts users to enter multiple patient details.

3. **Automatic Conversion**  

4. **Output Display**  
All patient records are printed in a formatted table.

---

## 💡 Insights From the Program

- **Automation of Temperature Conversion** — Minimizes manual effort and ensures accuracy.  
- **Efficient Data Management** — Uses arrays of structures to manage multiple patient records.  
- **Structured Programming** — Demonstrates data abstraction and modular design.  
- **User Interaction** — Takes user input and displays formatted output interactively.  
- **Tabular Data Visualization** — Helps in quick comparison and readability.  
- **Scope for Expansion** — Can integrate file handling, alerts, or IoT sensors in future versions.

---

## 🧠 Key Learning Outcomes

### 1. Use of Structures in C
- Structures group multiple data types under one name for better organization.  
- Demonstrates real-world data modeling for patient records.

### 2. Application of Loops, Arrays & I/O
- **Loops:** Manage multiple patient entries dynamically.  
- **Arrays:** Store multiple records using arrays of structures.  
- **Input/Output Handling:** `scanf()` and `printf()` manage user interaction effectively.

### 3. Data Collection & Display
- Demonstrates collecting user inputs systematically and displaying them in tabular format.  
- Teaches formatted output for readability and analysis.

### 4. Logical Thinking in Healthcare Scenarios
- Solves real-world problems like manual temperature tracking using structured logic.  
- Encourages automation and data-driven decision-making.

---

## 🎯 Functional Objectives

- Record patient details including name, date, time, and temperature.  
- Convert temperature from Celsius to Fahrenheit automatically.  
- Store multiple records efficiently using arrays and structures.  
- Display all entries in a clear tabular format.  
- Allow continuous data entry for multiple patients in one execution.  
- Reduce manual errors and improve record management accuracy.

---

## 🌍 Real-Life Applications

1. **Hospitals and Clinics:** Record and monitor patient temperature data.  
2. **Home Healthcare:** Track temperature trends of patients under home care.  
3. **Schools and Workplaces:** Maintain health logs during epidemics (e.g., COVID-19).  
4. **Medical Research:** Analyze fever trends and health patterns.  
5. **Education:** Train students in real-world healthcare programming.  
6. **IoT Integration (Future):** Connect with sensors for automatic data logging.

---

## ⚠️ Limitations

- ❌ No file storage — data is lost once the program ends.  
- 🧾 Manual data entry required.  
- 📉 Limited scalability due to fixed array size.  
- 🚫 No error validation for invalid inputs.  
- 🖥️ Console-only interface — lacks GUI.  
- ⏱️ Single-session usage only.

---

## 🔍 Findings / Analysis

1. The program effectively demonstrates structured data management in healthcare.  
2. Accurately records and converts temperature readings.  
3. The use of structures simplifies complex data handling.  
4. Looping ensures efficient input/output without redundancy.  
5. Reduces human error through automatic conversion.  
6. The formatted tabular output improves readability.  
7. Lays groundwork for expansion — e.g., file storage or alerts for high fever.  

---

## 🧾 Output

**Example Output:**


---

## 🧩 Methodology

### 1️⃣ Problem Identification
Manual temperature recording was error-prone — automation was needed.

### 2️⃣ System Design
- Defined a `struct Patient` for data grouping.  
- Used arrays to store multiple records.  

### 3️⃣ Implementation
- Input via `scanf()`.  
- Conversion formula for temperature.  
- Output via `printf()` with formatting.  

### 4️⃣ Testing & Validation
- Verified correct temperature conversion and record formatting.  
- Compared results with manual calculations for accuracy.  

### 5️⃣ Output & Analysis
- Displayed all records clearly in table format.  
- Achieved reliable and consistent data conversion.

### 6️⃣ Future Enhancements
- File handling for saving/loading data.  
- Automatic timestamp capture using `<time.h>`.  
- Fever alerts for readings >100°F.  

---

## 🧾 Conclusion

The **Patient Temperature Record System** showcases how C programming can automate healthcare data management tasks.  
By combining **structures**, **loops**, and **I/O operations**, the system efficiently records, converts, and displays temperature readings.  

This project demonstrates:
- Real-world application of C in healthcare informatics.  
- The power of structured programming for organized data handling.  
- Potential for future expansion into real medical systems.

---

## 📚 Bibliography

- GCC Compiler Documentation — [https://gcc.gnu.org/onlinedocs/](https://gcc.gnu.org/onlinedocs/)  
- IEEE Standard for C (1999)  
- Schildt, H. (2003). *C: The Complete Reference (4th ed.)*. McGraw-Hill.  
- Jain, P. (2009). *Problem Solving Through C (3rd ed.)*. Pearson Education.

---

## 📸 Suggested Screenshots for GitHub
- 🖥️ Program code snippet (`struct Patient` definition, main loop, conversion logic).  
- 📊 Output table showing sample patient records.  
- ⚙️ Compilation and execution window (e.g., GCC terminal).  
- 📁 Project directory screenshot (`main.c`, `README.md`, etc.).  

---

## 🪪 License
This project is open-source under the **MIT License** — feel free to use, modify, and share for learning purposes.
