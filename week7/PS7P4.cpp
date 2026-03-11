#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main() {
    string lastName;
    char jobCode;
    double hoursWorked, rate, pay;
    double totalPay = 0.0, averagePay = 0.0;
    int count = 0;

    cout << fixed << setprecision(2);
    cout << "Enter last name, job code, and hours worked (Ctrl+Z to stop): " << endl;

    while (cin >> lastName >> jobCode >> hoursWorked) {
        if (jobCode == 'L' || jobCode == 'l')
            rate = 25.0;
        else if (jobCode == 'A' || jobCode == 'a')
            rate = 30.0;
        else if (jobCode == 'J' || jobCode == 'j')
            rate = 50.0;
        else
            rate = 0.0;

        if (hoursWorked > 40)
            pay = (40 * rate) + ((hoursWorked - 40) * rate * 1.5);
        else
            pay = hoursWorked * rate;

        totalPay += pay;
        count++;

        cout << "Last Name: " << lastName
             << " Job Code: " << jobCode
             << " Hours Worked: " << hoursWorked
             << " Pay: $" << pay << endl;

        cout << "Enter last name, job code, and hours worked (Ctrl+Z to stop): " << endl;
    }

    if (count > 0)
        averagePay = totalPay / count;

    cout << "\nAverage Pay: $" << averagePay << endl;
    cout << "Number of entries: " << count << endl;

    return 0;
}