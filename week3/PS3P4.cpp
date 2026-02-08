#include <iostream>
using namespace std;

int main() {
    double purchasePrice, currentPrice;
    double change, percentChange;

    // Input
    cout << "Enter purchase price: ";
    cin >> purchasePrice;

    cout << "Enter current price: ";
    cin >> currentPrice;

    // Process
    change = currentPrice - purchasePrice;
    percentChange = (change / purchasePrice) * 100;

    // Output
    if (percentChange > 0) {
        cout << "Stock increased by " << percentChange << "%" << endl;
    } else if (percentChange < 0) {
        cout << "Stock decreased by " << percentChange << "%" << endl;
    } else {
        cout << "Stock price did not change." << endl;
    }

    return 0;
}
