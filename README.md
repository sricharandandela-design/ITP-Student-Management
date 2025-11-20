
# 📘 **STUDENT MANAGEMENT SYSTEM (C Programming)**

## 📄 **ABSTRACT**

The **Student Management System** is a terminal-based application written in **C** that allows users to manage student records efficiently.  
It provides functionalities such as **adding**, **viewing**, **searching**, **updating**, and **deleting** student data.  
Records are stored **persistently** in a binary file (`student.txt`) ensuring the data remains saved across program runs.

This project demonstrates essential C concepts like **structures**, **file handling**, **control flow**, and **modular programming**, making it ideal for **beginners**, **students**, and **academic projects**.

---

## ✨ **FEATURES**

### **Core Functionalities**
- ➕ **Add new student records** (ID, Name, Age, Course, Marks)  
- 📋 **Display all student records** in a formatted table  
- 🔍 **Search student by ID**  
- ✏️ **Update existing student information**  
- ❌ **Delete student records**  
- 💾 Persistent data storage using binary file (`student.txt`)  
- 🖥️ Fully terminal-based, menu-driven interface  
- 👨‍💻 Beginner-friendly code structure  
- ⚙️ Auto-creates the data file if missing  
- ⚠️ Basic input validation & error handling  

---

## 🛠️ **TECHNICAL REQUIREMENTS**

### **System Requirements**
- Operating System: **Windows / Linux / macOS**
- Terminal or Command Prompt
- At least **4 MB RAM**
- Minimal disk space for `student.txt`

### **Software Requirements**
- C Compiler: **GCC / MinGW / Clang / MSVC**
- Code Editor or IDE: VS Code, Code::Blocks, Dev-C++, etc.
- Optional: **Make utility** (if using a Makefile)

### **Programming Requirements**
- Language: **C**
- Standard Supported: **C89 / C99 / C11**
- Header files required:
  - `stdio.h`
  - `stdlib.h`
  - `string.h`

### **File Handling**
- Read/Write permissions in working directory
- Records stored in **binary format** (`student.txt`)
- File auto-created if not found

---

## 📌 **FUNCTIONAL REQUIREMENTS**

### **User Interface**
- Terminal-based CLI
- Clean menu-driven navigation
- Validates user input

---

## 🎓 **Student Record Operations**

### ➕ **Add Student**
- Enter ID, Name, Age, Course, Marks  
- Saved in `student.txt`

### 📋 **Display Students**
- Shows all records in table format

### 🔍 **Search Student**
- Search using **unique ID**

### ✏️ **Update Student**
- Modify Name, Age, Course, or Marks

### ❌ **Delete Student**
- Permanently removes record using **temporary file method**

### 🔧 **Data Management**
- Binary storage = faster access
- Safe updates & deletes
- Handles missing/empty file safely

### 🔄 **Program Flow**
- Menu runs in a **loop**
- Exit option provided
- Shows success/error messages appropriately

---

## ▶️ **Running the Program**

### 1️⃣ Compile  
```bash
gcc student.c -o student
````

### 2️⃣ Run

**Linux / macOS**

```bash
./student
```

**Windows**

```bash
student.exe
```

### 3️⃣ Data File

* Automatically creates `student.txt`
* Stores all student data in binary form

---

## 📸 **Screenshots (Optional)**

* Add Student
* <img width="416" height="360" alt="Screenshot 2025-11-20 124835" src="https://github.com/user-attachments/assets/0aed9dbe-9bbf-4eda-8a4e-58c2ce4be6a6" />

* Display Students
* <img width="617" height="591" alt="Screenshot 2025-11-20 125003" src="https://github.com/user-attachments/assets/873ea819-ea46-4f88-bf65-222500880411" />

* Search Student
* <img width="433" height="431" alt="Screenshot 2025-11-20 125024" src="https://github.com/user-attachments/assets/aa35e9a4-85d3-4b27-b493-8f5ee40e32b9" />

* Update Student
* <img width="505" height="326" alt="Screenshot 2025-11-20 125039" src="https://github.com/user-attachments/assets/f50420f7-b41b-4e21-b45e-503fe761c557" />

* Delete Student
* <img width="562" height="286" alt="Screenshot 2025-11-20 125050" src="https://github.com/user-attachments/assets/81f578d0-9451-49f9-87cc-3aa88bf3e959" />

* Exit
* <img width="683" height="232" alt="Screenshot 2025-11-20 125058" src="https://github.com/user-attachments/assets/9fabf783-c843-4a69-b1bc-ba6c4f82d552" />


---

## 📝 **Author**

**Sri Charan.D**
