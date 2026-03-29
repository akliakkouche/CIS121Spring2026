#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

double computeMPG(double miles, double gallons) {
    if (gallons == 0) {
        return 0.0;
    }
    return miles / gallons;
}

double computeGasCost(double gallons) {
    const double PRICE_PER_GALLON = 3.50;
    return gallons * PRICE_PER_GALLON;
}

int main() {
    string destination;
    double miles, gallons;
    double totalGasCost = 0.0;

    cout << fixed << setprecision(2);
    cout << "Enter destination city, miles traveled, and gallons used (Ctrl+Z to stop):" << endl;

    while (cin >> destination >> miles >> gallons) {
        double mpg = computeMPG(miles, gallons);
        double gasCost = computeGasCost(gallons);

        cout << "Destination: " << destination
             << " | MPG: " << mpg
             << " | Gas Cost: $" << gasCost << endl;

        totalGasCost += gasCost;
    }

    cout << "\nTotal gas cost: $" << totalGasCost << endl;

    return 0;
}
