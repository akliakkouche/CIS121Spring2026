#include <iostream>
#include <iomanip>
using namespace std;

void computeOrder(double quantity, double price,
                  double& total, double& tax, double& totalOrder)
{
    total = quantity * price;
    tax = total * 0.07;
    totalOrder = total + tax;
}

int main()
{
    double quantity, price;
    double total, tax, totalOrder;
    double sumTotal = 0.0, sumTax = 0.0;

    cout << fixed << setprecision(2);
    cout << "Enter quantity and price (Ctrl+Z to stop):" << endl;

    while (cin >> quantity >> price)
    {
        computeOrder(quantity, price, total, tax, totalOrder);

        cout << "Total: $" << total << endl;
        cout << "Tax: $" << tax << endl;
        cout << "Total Order: $" << totalOrder << endl;

        sumTotal += total;
        sumTax += tax;
    }

    cout << "Sum of All Totals: $" << sumTotal << endl;
    cout << "Sum of All Taxes: $" << sumTax << endl;

    return 0;
}
