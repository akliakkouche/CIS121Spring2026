#include <iostream>
using namespace std;

int main() {
    double price;
    int quantity;
    double value;

    // Input
    cout << "Enter current stock price: ";
    cin >> price;

    cout << "Enter quantity of stock: ";
    cin >> quantity;

    // Process
    value = price * quantity;

    // Output
    cout << "Current value of your stock: " << value << endl;

    return 0;
}
