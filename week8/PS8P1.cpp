#include <iostream>
using namespace std;

double calcMPG(double miles, double gallons) {
    return miles / gallons;
}

int main() {
    string city;
    double miles, gallons;
    double totalMiles = 0;
    int count = 0;

    while (cin >> city >> miles >> gallons) {
        double mpg = calcMPG(miles, gallons);
        cout << "City: " << city << " MPG: " << mpg << endl;
        totalMiles += miles;
        count++;
    }

    cout << "Total Miles: " << totalMiles << endl;
    cout << "Trips: " << count << endl;
    return 0;
}
