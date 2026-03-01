#include <iostream>
using namespace std;

int main()
{
    int quantity;
    char status;
    double price = 0;
    double extendedPrice, tax, total;

    // Input
    cout << "Enter quantity of widgets: ";
    cin >> quantity;

    cout << "Enter customer status (A, B, C, D): ";
    cin >> status;

    // Determine price
    if (quantity > 10000)
    {
        if (status == 'A')
            price = 10;
        else if (status == 'B')
            price = 12;
    }
    else if (quantity >= 5000 && quantity <= 10000)
    {
        if (status == 'C')
            price = 20;
        else if (status == 'D')
            price = 22;
    }
    else   // below 5000
    {
        price = 30;
    }

    // Calculations
    extendedPrice = quantity * price;
    tax = extendedPrice * 0.07;
    total = extendedPrice + tax;

    // Output
    cout << "\nExtended Price: $" << extendedPrice << endl;
    cout << "Tax (7%): $" << tax << endl;
    cout << "Total: $" << total << endl;

    return 0;
}