# Student Course Roster Management System

## Overview

A menu-driven C program for managing student records. The program allows users to add student details, display all registered students, search for a student by ID, and find the student with the highest total marks.

## Features

* **Add Student:** Register a student with their ID, name, midterm marks, and final marks.
* **Unique Student IDs:** Prevent duplicate student IDs.
* **Display Students:** Display the details of all registered students.
* **Search Student:** Find a student using their ID.
* **Find Top Student:** Identify the student with the highest total marks.
* **Automatic Total Calculation:** Calculate total marks by adding midterm and final marks.
* **Capacity Management:** Store up to 150 student records.

## Technologies Used

* **Language:** C
* **Header Files:** `stdio.h`, `string.h`

## Files

* `studentindex.c` — C source code.
* `studentindex.exe` — Compiled executable for Windows.

## How to Compile and Run

### Compile

Make sure GCC is installed and available in your terminal.

```bash
gcc studentindex.c -o studentindex.exe
```

### Run on Windows

```bash
.\studentindex.exe
```

## Menu Options

| Option | Description                                   |
| :----: | --------------------------------------------- |
|    A   | Add student details                           |
|    B   | Display all students                          |
|    C   | Search for a student by ID                    |
|    D   | Find the student with the highest total marks |
|    E   | Exit the program                              |

## Concepts Practiced

* Structures (`struct`)
* Type definitions (`typedef`)
* Arrays of structures
* Pointers to structures
* Functions and function arguments
* Linear search
* Finding the maximum value in an array
* Loops and conditional statements
* String input using `fgets()`
* Formatted input and output

## Limitations

* Student records are stored in memory and are lost when the program terminates.
* The maximum roster capacity is 150 students.
* Input validation for marks and other fields is limited.

## Future Improvements

* File handling to save and load student records.
* Input validation for student IDs and marks.
* Options to update and delete student records.
* Student ranking and class average calculations.

## Author

Developed as a C programming practice project to strengthen understanding of structures, pointers, arrays, functions, and menu-driven program design.
