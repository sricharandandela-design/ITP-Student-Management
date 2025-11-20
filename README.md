# 📘 STUDENT MANAGEMENT SYSTEM (C Programming)

## 📄 ABSTRACT
The Student Management System is a terminal-based application written in C that allows users to manage student records efficiently. The system provides core functionalities such as adding new student details, viewing all records, searching by ID, updating information, and deleting student entries. All data is stored persistently in a binary file (`students.dat`), ensuring it remains available across program runs.

This project demonstrates key C programming concepts such as **structures, file handling, control flow, and modular programming**, making it ideal for beginners, students, and small-scale administrative purposes.

---

## ✨ FEATURES

### Core Functionalities
- ➕ Add new student records (ID, Name, Age, Gender, Grade/Class, Course, Contact)
- 📋 Display all student records in a clean format
- 🔍 Search for a student using their unique ID
- ✏️ Update existing student information
- ❌ Delete student records
- 💾 Persistent data storage using a binary file (`students.dat`)
- 🖥️ Fully terminal-based, menu-driven interface
- 👨‍💻 Beginner-friendly implementation using functions and structures
- ⚙️ Auto-creation of data file if it does not exist
- ⚠️ Basic error handling for invalid inputs and missing files

---

## 🛠️ TECHNICAL REQUIREMENTS

### System Requirements
- Operating System: **Windows / Linux / macOS**
- Terminal or Command Prompt
- Minimum 4 MB RAM
- Minimal disk space to store `students.dat`

### Software Requirements
- **C Compiler:** GCC / MinGW / Clang / MSVC
- Any code editor or IDE (VS Code, Code::Blocks, Dev-C++, etc.)

### Programming Requirements
- **Programming Language:** C  
- Supported Standards: **C89 / C99 / C11**
- Required header files: `stdio.h`, `stdlib.h`, `string.h`

### File Handling Requirements
- Read/write permission in the working directory
- Student data stored in binary format in `students.dat`
- Program automatically creates the file if it does not exist

---

## 📌 FUNCTIONAL REQUIREMENTS

### User Interface
- Operates entirely through the terminal (CLI)
- Displays a clear and simple menu
- Validates user input before processing

### Student Record Operations

#### ➕ Add Student
Allows the user to enter student ID, name, age, gender, grade, course, and contact.  
Data is saved to **students.dat**.

#### 📋 Display Students
Prints all stored student records in a formatted list.

#### 🔍 Search Student
Searches the database using a unique student ID.

#### ✏️ Update Student
Allows modification of contact, grade, and course for an existing record.

#### ❌ Delete Student
Deletes a record permanently using an in-memory array update method.

---

## 📂 Data Management
- Uses binary file storage for speed and simplicity  
- Implements safe update/delete operations by rewriting all records  
- Gracefully handles empty or missing data files  

---

## 🔄 Program Flow
- Menu loops until the user selects **Exit**
- Displays confirmations and error messages
- Ensures smooth transitions between operations

---

## ▶️ Run the Executable

### Linux / macOS:
```bash
./student
