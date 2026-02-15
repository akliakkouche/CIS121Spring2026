#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main() {
    string lastName;
    int dependents;
    double grossIncome;
    double adjustedGrossIncome;
    double taxRate;
    double incomeTax;

    // Input
    cout << "Enter last name: ";
    cin >> lastName;

    cout << "Enter number of dependents: ";
    cin >> dependents;

    cout << "Enter gross income: ";
    cin >> grossIncome;

    // Calculate Adjusted Gross Income
    adjustedGrossIncome = grossIncome - (dependents * 12000);

    // Determine tax rate
    if (adjustedGrossIncome > 50000) {
        taxRate = 0.20;
    }
    else {
        taxRate = 0.10;
    }

    // Compute income tax
    incomeTax = adjustedGrossIncome * taxRate;

    // Special rule
    if (incomeTax < 0) {
        incomeTax = 100;
    }

    // Output
    cout << "\nLast Name: " << lastName << endl;
    cout << "Gross Income: $" << grossIncome << endl;
    cout << "Dependents: " << dependents << endl;
    cout << "Adjusted Gross Income: $" << adjustedGrossIncome << endl;
    cout << "Income Tax: $" << incomeTax << endl;

    return 0;
}
