#include <iostream>
#include <string>
#include <vector>
using namespace std;

void displayAutos(const vector<string>& makes, const vector<string>& models)
{
    cout << "\nAuto List\n";
    cout << "---------\n";

    for (size_t i = 0; i < makes.size(); i++)
    {
        cout << i + 1 << ". Make: " << makes[i]
             << " | Model: " << models[i] << endl;
    }
}

int main()
{
    int numberOfAutos;

    cout << "Enter the number of autos: ";
    cin >> numberOfAutos;

    while (numberOfAutos <= 0)
    {
        cout << "Please enter a number greater than 0: ";
        cin >> numberOfAutos;
    }

    vector<string> makes(numberOfAutos);
    vector<string> models(numberOfAutos);

    for (int i = 0; i < numberOfAutos; i++)
    {
        cout << "\nEnter make for auto #" << i + 1 << ": ";
        cin >> makes[i];

        cout << "Enter model for auto #" << i + 1 << ": ";
        cin >> models[i];
    }

    displayAutos(makes, models);

    return 0;
}
