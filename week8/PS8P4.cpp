#include <iostream>
using namespace std;

double getPrice(char code) {
    if (code == 'W') return 10;
    if (code == 'C') return 15;
    if (code == 'G') return 20;
    return 0;
}

double getShipping(char code) {
    if (code == 'W') return 2;
    if (code == 'C') return 5;
    if (code == 'G') return 7;
    return 0;
}

int main() {
    char code;
    int qty;
    double grandTotal = 0;

    while (cin >> code >> qty) {
        double price = getPrice(code);
        double shipping = getShipping(code);
        double extended = qty * price;
        double total = extended + shipping;

        cout << "Product: " << code
             << " Price: " << price
             << " Shipping: " << shipping
             << " Extended: " << extended
             << " Total: " << total << endl;

        grandTotal += total;
    }

    cout << "Grand Total: " << grandTotal << endl;
    return 0;
}
