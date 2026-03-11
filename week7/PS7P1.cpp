#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int quantity;
    double price, extended, discount, discountedPrice;
    double totalDiscountedPrices = 0.0;

    cout << fixed << setprecision(2);
    cout << "Enter quantity and price (Ctrl+Z to stop): " << endl;

    while (cin >> quantity >> price) {
        extended = quantity * price;

        if (quantity > 1000)
            discount = extended * 0.10;
        else
            discount = 0.0;

        discountedPrice = extended - discount;
        totalDiscountedPrices += discountedPrice;

        cout << "Quantity: " << quantity
             << " Price: $" << price
             << " Extended: $" << extended
             << " Discount: $" << discount
             << " Discounted Price: $" << discountedPrice << endl;

        cout << "Enter quantity and price (Ctrl+Z to stop): " << endl;
    }

    cout << "\nTotal of discounted prices: $" << totalDiscountedPrices << endl;

    return 0;
}