#include <iostream>
using namespace std;

int main()
{
    int partNumber;
    int quantity;
    double costPerUnit;
    double totalCost;

    // Input
    cout << "Enter part number (10, 99, 55, 70, 50): ";
    cin >> partNumber;

    cout << "Enter quantity: ";
    cin >> quantity;

    // Determine cost per unit
    if (partNumber == 10 && quantity > 1000)
        costPerUnit = 1.00;
    else if (partNumber == 99 && quantity > 500)
        costPerUnit = 2.00;
    else
        costPerUnit = 5.00;

    // Calculate total
    totalCost = quantity * costPerUnit;

    // Output
    cout << "\nPart Number: " << partNumber << endl;
    cout << "Cost Per Unit: $" << costPerUnit << endl;
    cout << "Total Cost: $" << totalCost << endl;

    return 0;
}