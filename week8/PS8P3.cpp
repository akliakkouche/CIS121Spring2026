#include <iostream>
using namespace std;

double calcTuition(int credits) {
    return credits * 250;
}

int main() {
    string name;
    int credits;
    double totalTuition = 0;
    int count = 0;

    while (cin >> name >> credits) {
        double tuition = calcTuition(credits);
        cout << "Name: " << name 
             << " Credits: " << credits 
             << " Tuition: " << tuition << endl;
        totalTuition += tuition;
        count++;
    }

    cout << "Total Tuition: " << totalTuition << endl;
    cout << "Students: " << count << endl;
    return 0;
}
