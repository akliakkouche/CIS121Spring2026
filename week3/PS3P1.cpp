#include <iostream>
using namespace std;

int main() {
    double exam1, exam2, total;

    // Input exam scores
    cout << "Enter first exam score: ";
    cin >> exam1;

    cout << "Enter second exam score: ";
    cin >> exam2;

    // Calculate weighted total
    total = (exam1 * 0.60) + (exam2 * 0.40);

    // Display result
    cout << "Total score: " << total << endl;

    return 0;
}