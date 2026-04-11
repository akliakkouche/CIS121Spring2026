#include <iostream>
#include <fstream>
#include <string>
using namespace std;

double compute(double salary) {
    return salary / 26;
}

int main() {
    ifstream file("empl.txt");

    string name;
    double salary, bi;
    double total = 0;
    int count = 0;

    while (file >> name >> salary) {
        bi = compute(salary);

        cout << name << " " << salary << " " << bi << endl;

        total += salary;
        count++;
    }

    double avg = total / count;

    cout << "Total: " << total << endl;
    cout << "Count: " << count << endl;
    cout << "Average: " << avg << endl;

    file.close();
    return 0;
}