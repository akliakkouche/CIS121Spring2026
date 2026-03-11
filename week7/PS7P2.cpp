#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main() {
    string lastName;
    double hits, atBats, battingAverage;
    int count = 0;

    cout << fixed << setprecision(3);
    cout << "Enter last name, hits, and at bats (Ctrl+Z to stop): " << endl;

    while (cin >> lastName >> hits >> atBats) {
        battingAverage = hits / atBats;
        count++;

        cout << "Last Name: " << lastName
             << " Batting Average: " << battingAverage << endl;

        cout << "Enter last name, hits, and at bats (Ctrl+Z to stop): " << endl;
    }

    cout << "\nNumber of players entered: " << count << endl;

    return 0;
}