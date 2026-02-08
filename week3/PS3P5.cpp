#include <iostream>
using namespace std;

int main() {
    double fixedCosts, pricePerUnit, costPerUnit;
    double breakEvenPoint;

    // Input
    cout << "Enter fixed costs: ";
    cin >> fixedCosts;

    cout << "Enter price per unit: ";
    cin >> pricePerUnit;

    cout << "Enter cost per unit: ";
    cin >> costPerUnit;

    // Process
    if (pricePerUnit <= costPerUnit) {
        cout << "Break-even point cannot be calculated." << endl;
        cout << "Price per unit must be greater than cost per unit." << endl;
    } else {
        breakEvenPoint = fixedCosts / (pricePerUnit - costPerUnit);
        cout << "Break-even point (units): " << breakEvenPoint << endl;
    }

    return 0;
}
