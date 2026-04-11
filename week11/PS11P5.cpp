#include <iostream>
#include <fstream>
#include <string>
using namespace std;

void compute(char code, double credits, double &tuition, double &fees, double &cost) {
    if (code == 'I')
        cost = 250;
    else
        cost = 500;

    tuition = credits * cost;
    fees = tuition * 0.10;
}

int main() {
    ifstream file("student.txt");

    string name;
    char code;
    double credits, tuition, fees, cost;
    double total = 0;
    int count = 0;

    while (file >> name >> code >> credits) {
        compute(code, credits, tuition, fees, cost);

        cout << name << " " << code << " "
             << cost << " " << credits << " "
             << tuition << " " << fees << endl;

        total += tuition;
        count++;
    }

    double avg = total / count;

    cout << "Total Tuition: " << total << endl;
    cout << "Students: " << count << endl;
    cout << "Average: " << avg << endl;

    file.close();
    return 0;
}