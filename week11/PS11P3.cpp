#include <iostream>
#include <fstream>
using namespace std;

double compute(double gallons, double miles) {
    return miles / gallons;
}

int main() {
    ifstream file("trips.txt");

    double gallons, miles, mpg;
    double totalG = 0, totalM = 0;

    while (file >> gallons >> miles) {
        mpg = compute(gallons, miles);

        cout << gallons << " " << miles << " " << mpg << endl;

        totalG += gallons;
        totalM += miles;
    }

    cout << "Total Gallons: " << totalG << endl;
    cout << "Total Miles: " << totalM << endl;

    file.close();
    return 0;
}