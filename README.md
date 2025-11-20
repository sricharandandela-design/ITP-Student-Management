
# 📘 **STAFF MANAGEMENT SYSTEM (C Programming)**

## 📄 **ABSTRACT**
The **Staff Management System** is a terminal-based application written in **C** that allows users to manage staff/employee records efficiently.  
It provides features like adding, viewing, updating, deleting, and searching staff data.  
All records are stored persistently in a binary file **staff.txt**, ensuring data remains available across multiple runs.

This project demonstrates essential C programming concepts such as **structures, file handling, control flow, and modular programming**, making it beginner-friendly and suitable for academic or small-scale use.

---

## ✨ **FEATURES**

### ✔️ Core Functionalities
- ➕ Add new staff records *(ID, Name, Age, Designation, Salary)*
- 📋 Display all staff records in a tabular format
- 🔍 Search staff using unique staff ID
- ✏️ Update existing staff information
- ❌ Delete staff records safely
- 💾 Persistent data storage using **staff.txt**
- 🖥️ Fully terminal-based, menu-driven UI
- 👨‍💻 Beginner-friendly modular implementation
- ⚙️ Auto-creates data file if missing
- ⚠️ Basic error handling included

---

## 🛠️ **TECHNICAL REQUIREMENTS**

### 💻 System Requirements
- Operating System: **Windows / Linux / macOS**
- Terminal or Command Prompt
- Minimum **4 MB RAM**
- Minimal disk space for `staff.txt`

### 🧰 Software Requirements
- C Compiler: **GCC / MinGW / Clang / MSVC**
- Any code editor (VS Code, Dev-C++, Code::Blocks, etc.)
- Optional: **Make** utility

### 🧾 Programming Requirements
- Language: **C (C89 / C99 / C11)**
- Required headers: `stdio.h`, `stdlib.h`, `string.h`

### 📁 File Handling Requirements
- Read/write permission in working directory
- Records stored in binary format in **staff.txt**
- Automatically creates the file if it does not exist

---

## 📌 **FUNCTIONAL REQUIREMENTS**

### 🖥️ User Interface
- Complete CLI operation
- Clean and simple menu
- Validates user input

### 👥 Staff Record Operations
#### ➕ Add Staff
Inputs ID, Name, Age, Designation, Salary → stored in `staff.txt`.

#### 📋 Display Staff
Shows all saved staff records.

#### 🔍 Search Staff
Searches records using unique staff ID.

#### ✏️ Update Staff
Modifies one or more fields of a staff entry.

#### ❌ Delete Staff
Safely deletes using temporary file replacement.

---

## 🗄️ **DATA MANAGEMENT**
- Fast binary storage for staff records
- Safe update/delete using temp files
- Handles missing or empty data automatically

---

## 🔁 **PROGRAM FLOW**
- Menu runs in loop until user selects **Exit**
- Displays confirmations and error messages
- Smooth transitions between all operations

---

## ▶️ **HOW TO RUN**

### **Linux / macOS**
```bash
./staff
````

### **Windows**

```bash
staff.exe
```

### **Data File**

* The program will auto-create **staff.txt**
* All staff records are stored in binary format

---

## 📸 **Screenshots**

*(Replace these with actual image links in your repo)*

### Add Staff

![Add Staff](image)

### Display Staff

![Display Staff](image)

### Search Staff

![Search](image)

### Update Staff

![Update](image)

### Delete Staff

![Delete](image)

### Exit

![Exit](image)

---

## 📝 **Author**

**Meha.E**

---

## 📦 **About**

No description, topics, or website provided.

---

## ⭐ **Resources**

* README
* Source Code
* Screenshots

---

## 📂 **Languages**

* **C**



