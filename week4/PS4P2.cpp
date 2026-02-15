#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    char item;
    int quantity;
    double unitPrice = 0.0;
    double extendedPrice;

    // Input
    cout << "Enter item (A or B): ";
    cin >> item;

    cout << "Enter quantity: ";
    cin >> quantity;

    // Determine unit price
    if (item == 'A' || item == 'a') {
        unitPrice = 10.00;
    }
    else if (item == 'B' || item == 'b') {
        unitPrice = 20.00;
    }
    else {
        cout << "Invalid item entered." << endl;
        return 0;
    }

    // Calculate extended price
    extendedPrice = quantity * unitPrice;

    // Output
    cout << "\nItem: " << item << endl;
    cout << "Unit Price: $" << unitPrice << endl;
    cout << "Extended Price: $" << extendedPrice << endl;

    return 0;
}
