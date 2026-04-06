#include <iostream>
#include <iomanip>
#include <math.h>
using namespace std;

void computeInvestment(double amount, double rate5, double rate10,
                       double& fiveYearAmount, double& tenYearAmount)
{
    fiveYearAmount = amount * pow(1 + rate5, 5);
    tenYearAmount = amount * pow(1 + rate10, 10);
}

int main()
{
    double amount, rate5, rate10;
    double fiveYearAmount, tenYearAmount;

    cout << fixed << setprecision(2);
    cout << "Enter investment amount, 5-year rate, and 10-year rate (Ctrl+Z to stop):" << endl;

    while (cin >> amount >> rate5 >> rate10)
    {
        computeInvestment(amount, rate5, rate10, fiveYearAmount, tenYearAmount);

        cout << "Investment Amount: $" << amount << endl;
        cout << "Five Year Amount: $" << fiveYearAmount << endl;
        cout << "Ten Year Amount: $" << tenYearAmount << endl;
    }

    return 0;
}
