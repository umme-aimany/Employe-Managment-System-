#include <iostream>
#include <string>
using namespace std;
class Employee {
protected:
    double salary; 
public:
    Employee() : salary(0) {} 
    virtual void calculateSalary() = 0;
    virtual void displaySalary() const {
        cout << "Salary: " << salary << endl;
    }
    virtual ~Employee() {} 
};
class RegularEmployee : public Employee {
private:
    double basicSalary;  
    double allowances;  
    double incomeTax;    
public:
    RegularEmployee(double basic, double allow, double tax) {
        basicSalary = basic;
        allowances = allow;
        incomeTax = tax;
    }
    void calculateSalary() {
        salary = basicSalary + allowances - incomeTax; 
    }

    void displaySalary() const{
        cout << "Salary of Regular Employee with basic pay: " << basicSalary
             << ", allowances: " << allowances
             << " and income tax: " << incomeTax
             << " is given below: " << salary << endl;
    }
};
class HourlyEmployee : public Employee {
private:
    int noOfHours;    
    double hourlyRate; 
public:
    HourlyEmployee(int hours, double rate) {
        noOfHours = hours;
        hourlyRate = rate;
    }
    void calculateSalary()  {
        salary = noOfHours * hourlyRate; 
    }
    void displaySalary() const  {
        cout << "Salary of Hourly Employee with hourly rate: " << hourlyRate
             << " and no. of hours: " << noOfHours
             << " is given below: " << salary << endl;
    }
};

int main() {
    double basicSalary = 75000;   
    double allowances = 25000;   
    double incomeTax = 8000;    
    int noOfHours = 15;          
    double hourlyRate = 2000;    
    RegularEmployee regEmp(basicSalary, allowances, incomeTax); 
    HourlyEmployee hourlyEmp(noOfHours, hourlyRate);          
    regEmp.calculateSalary(); 
    regEmp.displaySalary();   
  hourlyEmp.calculateSalary();
    hourlyEmp.displaySalary();   
    cout << "Assignment2-304 Done Employe Managment System" << endl;
    return 0; 
}

