#include <iostream>
using namespace std;

int main()
{
    char jobCode;
    int hours;
    double rate;
    double grossPay;

    // Input
    cout << "Enter job code (L, J, A): ";
    cin >> jobCode;

    cout << "Enter hours worked: ";
    cin >> hours;

    // Determine rate of pay
    if (jobCode == 'L')
    {
        if (hours > 40)
            rate = 50.00;
        else
            rate = 40.00;
    }
    else if (jobCode == 'J')
    {
        if (hours > 60)
            rate = 100.00;
        else
            rate = 75.00;
    }
    else if (jobCode == 'A')
    {
        if (hours > 40)
            rate = 25.00;
        else
            rate = 20.00;
    }

    // Calculate gross pay
    grossPay = hours * rate;

    // Output
    cout << "\nGross Salary: $" << grossPay << endl;

    return 0;
}