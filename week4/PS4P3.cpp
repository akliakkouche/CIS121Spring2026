#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int numberOfBooks;
    double costPerBook;
    double orderTotal;
    double shipping;

    // Input
    cout << "Enter number of books: ";
    cin >> numberOfBooks;

    cout << "Enter cost per book: ";
    cin >> costPerBook;

    // Process
    orderTotal = numberOfBooks * costPerBook;

    if (orderTotal > 50.00) {
        shipping = 0.00;
    }
    else {
        shipping = 25.00;
    }

    // Output
    cout << "\nOrder Total: $" << orderTotal << endl;
    cout << "Shipping Charge: $" << shipping << endl;

    return 0;
}
