#include <iostream>
#include <string>
using namespace std;

// Base class
class Employee {
protected:
    string firstName;
    string lastName;
    double annualSalary;

public:
    Employee() {
        firstName = "";
        lastName = "";
        annualSalary = 0.0;
    }

    void setEmployee(string fName, string lName, double salary) {
        firstName = fName;
        lastName = lName;
        annualSalary = salary;
    }

    virtual double bonus() {
        return annualSalary * 0.10;
    }

    void displayEmployee() {
        cout << "Employee Name: " << firstName << " " << lastName << endl;
        cout << "Annual Salary: $" << annualSalary << endl;
    }
};

// Derived class
class Manager : public Employee {
public:
    double Long_Term_Bonus() {
        return annualSalary * 0.50;
    }

    double bonus() override {
        return annualSalary * 0.50;
    }

    void displayManager() {
        displayEmployee();
        cout << "Bonus: $" << bonus() << endl;
        cout << "Long Term Bonus: $" << Long_Term_Bonus() << endl;
    }
};

// Program to test object
int main() {
    Manager manager1;

    manager1.setEmployee("Akli", "Akkouche", 60000);

    cout << "Manager Information" << endl;
    cout << "-------------------" << endl;

    manager1.displayManager();

    return 0;
}