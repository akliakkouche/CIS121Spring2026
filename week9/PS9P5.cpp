#include <iostream>
#include <iomanip>
#include <string>
#include <cctype>
using namespace std;

double determineCostPerCredit(char districtCode) {
    districtCode = toupper(static_cast<unsigned char>(districtCode));

    if (districtCode == 'I') return 250.0;
    if (districtCode == 'O') return 550.0;

    return 0.0;
}

double computeTuition(int creditHours, double costPerCredit) {
    return creditHours * costPerCredit;
}

int main() {
    string lastName;
    int creditHours;
    char districtCode;
    double totalTuition = 0.0;

    cout << fixed << setprecision(2);
    cout << "Enter student last name, credit hours, and district code (Ctrl+Z to stop):" << endl;

    while (cin >> lastName >> creditHours >> districtCode) {
        double costPerCredit = determineCostPerCredit(districtCode);
        double tuition = computeTuition(creditHours, costPerCredit);

        cout << "Student: " << lastName
             << " | Tuition Cost: $" << tuition << endl;

        totalTuition += tuition;
    }

    cout << "\nTotal tuition cost: $" << totalTuition << endl;

    return 0;
}
