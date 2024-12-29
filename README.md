# Employee Management System

This is a simple C++ program that demonstrates polymorphism, inheritance, and object-oriented programming (OOP) concepts by calculating and displaying the salaries of different types of employees.

## Overview

The Employee Management System consists of two types of employees:

1. **Regular Employee**: Salaried employees with a basic pay, allowances, and income tax deductions.
2. **Hourly Employee**: Employees who are paid based on the number of hours worked and their hourly rate.

### Features:
- Calculates the salary for both regular and hourly employees.
- Displays detailed salary information for both employee types.

## Code Structure

### Classes:
1. **Employee (Abstract Base Class)**:
   - Contains a protected attribute `salary`.
   - Declares two pure virtual methods:
     - `calculateSalary()` (to be implemented by derived classes).
     - `displaySalary()` (provides common functionality for displaying salaries).

2. **RegularEmployee (Derived Class)**:
   - Additional attributes:
     - `basicSalary`
     - `allowances`
     - `incomeTax`
   - Implements:
     - `calculateSalary()`: Calculates the salary as:
       ```cpp
       salary = basicSalary + allowances - incomeTax;
       ```
     - `displaySalary()`: Displays detailed salary information.

3. **HourlyEmployee (Derived Class)**:
   - Additional attributes:
     - `noOfHours`
     - `hourlyRate`
   - Implements:
     - `calculateSalary()`: Calculates the salary as:
       ```cpp
       salary = noOfHours * hourlyRate;
       ```
     - `displaySalary()`: Displays detailed salary information.

### Main Function:
- Instantiates objects of `RegularEmployee` and `HourlyEmployee`.
- Invokes `calculateSalary()` and `displaySalary()` methods for both objects.
- Demonstrates polymorphism and encapsulation.

## Usage

### Prerequisites
- A C++ compiler (e.g., GCC, Clang, or MSVC).

### Steps to Run the Program
1. Clone this repository:
   ```bash
   git clone https://github.com/yourusername/employee-management-system.git
   ```
2. Navigate to the project directory:
   ```bash
   cd employee-management-system
   ```
3. Compile the code:
   ```bash
   g++ -o employee_management main.cpp
   ```
4. Run the executable:
   ```bash
   ./employee_management
   ```

### Output
The program calculates and displays the salaries for both Regular and Hourly Employees. Sample output:
```
Salary of Regular Employee with basic pay: 75000, allowances: 25000 and income tax: 8000 is given below: 92000
Salary of Hourly Employee with hourly rate: 2000 and no. of hours: 15 is given below: 30000
Assignment2-304 Done Employee Management System
```

## Author
[UMME AIMAN]

## License
This project is licensed under the MIT License. See the `LICENSE` file for details.

## Acknowledgments
This project was created as part of an educational assignment to demonstrate object-oriented programming in C++.
