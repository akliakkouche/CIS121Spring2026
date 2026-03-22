#include <iostream>
using namespace std;

double getRate(char code) {
    if (code == 'L') return 25;
    if (code == 'A') return 30;
    if (code == 'J') return 50;
    return 0;
}

double calcPay(double hours, double rate) {
    if (hours > 40)
        return (40 * rate) + ((hours - 40) * rate * 1.5);
    else
        return hours * rate;
}

int main() {
    string name;
    char code;
    double hours;
    double totalPay = 0;
    int count = 0;

    while (cin >> name >> code >> hours) {
        double rate = getRate(code);
        double pay = calcPay(hours, rate);
        cout << "Name: " << name << " Pay: " << pay << endl;
        totalPay += pay;
        count++;
    }

    if (count > 0)
        cout << "Average Pay: " << totalPay / count << endl;

    cout << "Employees: " << count << endl;
    return 0;
}
