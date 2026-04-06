#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

void computeTuition(double creditHours, double financialAid,
                    double& tuition, double& tuitionOwed)
{
    tuition = creditHours * 250.0;
    tuitionOwed = tuition - financialAid;
}

int main()
{
    string lastName;
    double creditHours, financialAid;
    double tuition, tuitionOwed;
    double totalOwed = 0.0, averageOwed = 0.0;
    int count = 0;

    cout << fixed << setprecision(2);
    cout << "Enter last name, credit hours, and financial aid (Ctrl+Z to stop):" << endl;

    while (cin >> lastName >> creditHours >> financialAid)
    {
        computeTuition(creditHours, financialAid, tuition, tuitionOwed);

        cout << lastName << " Tuition: $" << tuition
             << " Tuition Owed: $" << tuitionOwed << endl;

        totalOwed += tuitionOwed;
        count++;
    }

    if (count > 0)
        averageOwed = totalOwed / count;

    cout << "Total Tuition Owed: $" << totalOwed << endl;
    cout << "Number of Entries: " << count << endl;
    cout << "Average Amount Owed: $" << averageOwed << endl;

    return 0;
}
