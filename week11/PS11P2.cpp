#include <iostream>
#include <fstream>
#include <iomanip>
#include <string>
using namespace std;

double compute(double qty, double price) {
    return qty * price;
}

int main() {
    ifstream file("grocery.txt");

    string item;
    double qty, price, ext;
    double total = 0;

    while (file >> item >> qty >> price) {
        ext = compute(qty, price);

        cout << item << " " << qty << " "
             << price << " " << ext << endl;

        total += ext;
    }

    double tax = total * 0.07;
    double totalReceipt = total + tax;

    cout << "Total: " << total << endl;
    cout << "Tax: " << tax << endl;
    cout << "Receipt: " << totalReceipt << endl;

    file.close();
    return 0;
}