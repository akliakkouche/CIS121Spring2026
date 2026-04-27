#include <iostream>
#include <iomanip>
#include <string>
#include <vector>
using namespace std;

struct Employee
{
    string firstName;
    string lastName;
    double hours;
    double rate;
    double grossPay;
};

double computeGrossPay(double hours, double rate)
{
    if (hours > 40)
    {
        double regularPay = 40 * rate;
        double overtimePay = (hours - 40) * rate * 1.5;
        return regularPay + overtimePay;
    }
    else
    {
        return hours * rate;
    }
}

int main()
{
    int numberOfEmployees;

    cout << "Enter the number of employees: ";
    cin >> numberOfEmployees;

    while (numberOfEmployees <= 0)
    {
        cout << "Please enter a number greater than 0: ";
        cin >> numberOfEmployees;
    }

    vector<Employee> employees(numberOfEmployees);

    for (int i = 0; i < numberOfEmployees; i++)
    {
        cout << "\nEmployee #" << i + 1 << endl;
        cout << "Enter first name: ";
        cin >> employees[i].firstName;

        cout << "Enter last name: ";
        cin >> employees[i].lastName;

        cout << "Enter hours worked: ";
        cin >> employees[i].hours;

        cout << "Enter hourly rate: ";
        cin >> employees[i].rate;

        employees[i].grossPay = computeGrossPay(employees[i].hours, employees[i].rate);
    }

    cout << fixed << setprecision(2);
    cout << "\nEmployee Payroll\n";
    cout << "----------------\n";

    for (size_t i = 0; i < employees.size(); i++)
    {
        cout << "Name: " << employees[i].firstName << " " << employees[i].lastName << endl;
        cout << "Hours: " << employees[i].hours << endl;
        cout << "Rate: $" << employees[i].rate << endl;
        cout << "Gross Pay: $" << employees[i].grossPay << endl;
        cout << "----------------\n";
    }

    return 0;
}
