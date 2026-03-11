#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main() {
    string lastName;
    char districtCode;
    int creditHours;
    double rate, tuition;
    double totalTuition = 0.0;
    int totalCredits = 0;
    int count = 0;

    cout << fixed << setprecision(2);
    cout << "Enter student last name, credit hours, and district code (Ctrl+Z to stop): " << endl;

    while (cin >> lastName >> creditHours >> districtCode) {
        if (districtCode == 'I' || districtCode == 'i')
            rate = 250.0;
        else if (districtCode == 'O' || districtCode == 'o')
            rate = 550.0;
        else
            rate = 0.0;

        tuition = creditHours * rate;
        totalTuition += tuition;
        totalCredits += creditHours;
        count++;

        cout << "Student Name: " << lastName
             << " Tuition Owed: $" << tuition << endl;

        cout << "Enter student last name, credit hours, and district code (Ctrl+Z to stop): " << endl;
    }

    cout << "\nTotal Tuition: $" << totalTuition << endl;
    cout << "Total Credit Hours: " << totalCredits << endl;
    cout << "Number of students: " << count << endl;

    return 0;
}