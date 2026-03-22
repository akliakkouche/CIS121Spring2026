#include <iostream>
using namespace std;

double getLabFee(string dept, int course) {
    if (dept == "CIS" && course == 101) return 50;
    if (dept == "CIS" && course == 121) return 100;
    if (dept == "MAT" && course == 111) return 25;
    if (dept == "MAT" && course == 112) return 35;
    if (dept == "ENG" && course == 100) return 55;
    return 50;
}

int main() {
    string dept;
    int course;
    double totalFees = 0;
    int count = 0;

    while (cin >> dept >> course) {
        double fee = getLabFee(dept, course);
        cout << "Dept: " << dept 
             << " Course: " << course 
             << " Fee: " << fee << endl;
        totalFees += fee;
        count++;
    }

    if (count > 0)
        cout << "Average Fee: " << totalFees / count << endl;

    cout << "Total Fees: " << totalFees << endl;
    return 0;
}
