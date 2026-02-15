#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main() {
    string applianceName;
    double applianceCost;
    double warrantyCost;
    double total;

    // Input
    cout << "Enter appliance name: ";
    getline(cin, applianceName);

    cout << "Enter appliance cost: ";
    cin >> applianceCost;

    // Process
    if (applianceCost > 1000.00) {
        warrantyCost = applianceCost * 0.10;   // 10%
    }
    else {
        warrantyCost = applianceCost * 0.05;   // 5%
    }

    total = applianceCost + warrantyCost;

    // Output
    cout << fixed << setprecision(2);
    cout << "\nAppliance: " << applianceName << endl;
    cout << "Appliance Cost: $" << applianceCost << endl;
    cout << "Warranty Cost: $" << warrantyCost << endl;
    cout << "Total Cost: $" << total << endl;

    return 0;
}
