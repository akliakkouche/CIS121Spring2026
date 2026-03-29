#include <iostream>
#include <iomanip>
using namespace std;

double computeTotal(double quantity, double price) {
    return quantity * price;
}

double computeDiscountTotal(double total) {
    double discountRate = (total > 10000.0) ? 0.10 : 0.05;
    double discountAmount = total * discountRate;
    return total - discountAmount;
}

int main() {
    double quantity, price;
    double total, discountTotal;
    double sumTotal = 0.0, sumDiscountTotal = 0.0;

    cout << fixed << setprecision(2);
    cout << "Enter quantity and price (Ctrl+Z to stop):" << endl;

    while (cin >> quantity >> price) {
        total = computeTotal(quantity, price);
        discountTotal = computeDiscountTotal(total);

        cout << "Total: $" << total << " | Discount Total: $" << discountTotal << endl;

        sumTotal += total;
        sumDiscountTotal += discountTotal;
    }

    cout << "\nSum of totals: $" << sumTotal << endl;
    cout << "Sum of discount totals: $" << sumDiscountTotal << endl;

    return 0;
}
