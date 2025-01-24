# Windows_Keylogger

This repository contains a **Windows Keylogger** implemented in C. The program demonstrates how to capture and log keystrokes on a Windows system. It is designed for **educational purposes only** to understand how keyloggers work and the potential security implications of such tools.

---

## 📝 Description

The keylogger runs in the background and captures user keystrokes. The logged data is stored in a file for analysis. This project demonstrates the use of Windows API functions for handling keyboard events.

### Features:
- Logs user keystrokes to a file.
- Runs silently in the background.
- Demonstrates usage of Windows API for keylogging.

---

## 🚀 How to Use
### Requirements
- A Windows system.
- A C compiler (e.g., MinGW, Visual Studio).
- Administrator privileges (in some cases) to execute the keylogger.
- 
---

### Steps to Run

1. **Clone the Repository**
   ```bash
   git clone https://github.com/saadfahmi/Windows_Keylogger.git
   cd Windows_Keylogger
   code .
   gcc Windows.Keylogger.c
   ./a.exe
