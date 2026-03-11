#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main() {
    string city;
    double miles, gallons, mpg;
    double totalMiles = 0.0;
    int tripCount = 0;

    cout << fixed << setprecision(2);
    cout << "Enter destination city, miles traveled, and gallons used (Ctrl+Z to stop): " << endl;

    while (cin >> city >> miles >> gallons) {
        mpg = miles / gallons;
        totalMiles += miles;
        tripCount++;

        cout << "Destination City: " << city
             << " MPG: " << mpg << endl;

        cout << "Enter destination city, miles traveled, and gallons used (Ctrl+Z to stop): " << endl;
    }

    cout << "\nTotal miles traveled: " << totalMiles << endl;
    cout << "Number of trips: " << tripCount << endl;

    return 0;
}