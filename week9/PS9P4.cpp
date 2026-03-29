#include <iostream>
#include <iomanip>
#include <string>
#include <cctype>
using namespace std;

double determinePayRate(char jobCode) {
    jobCode = toupper(static_cast<unsigned char>(jobCode));

    if (jobCode == 'L') return 25.0;
    if (jobCode == 'A') return 30.0;
    if (jobCode == 'J') return 50.0;

    return 0.0;
}

double computeGrossPay(double hoursWorked, double payRate) {
    if (hoursWorked <= 40) {
        return hoursWorked * payRate;
    } else {
        double regularPay = 40 * payRate;
        double overtimePay = (hoursWorked - 40) * payRate * 1.5;
        return regularPay + overtimePay;
    }
}

int main() {
    string lastName;
    char jobCode;
    double hoursWorked;
    double totalGrossPay = 0.0;

    cout << fixed << setprecision(2);
    cout << "Enter employee last name, job code, and hours worked (Ctrl+Z to stop):" << endl;

    while (cin >> lastName >> jobCode >> hoursWorked) {
        double payRate = determinePayRate(jobCode);
        double grossPay = computeGrossPay(hoursWorked, payRate);

        cout << "Employee: " << lastName
             << " | Gross Pay: $" << grossPay << endl;

        totalGrossPay += grossPay;
    }

    cout << "\nTotal gross pay: $" << totalGrossPay << endl;

    return 0;
}
