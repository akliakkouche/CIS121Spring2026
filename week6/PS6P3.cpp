#include <iostream>
using namespace std;

int main()
{
    int tickets;
    char location;
    double pricePerTicket;
    double totalCost;

    // Input
    cout << "Enter number of tickets: ";
    cin >> tickets;

    cout << "Enter location code (H or L): ";
    cin >> location;

    // Determine price
    if (tickets > 25 || location == 'H')
        pricePerTicket = 30.00;
    else if ((tickets > 10 && tickets <= 24) || location == 'L')
        pricePerTicket = 40.00;
    else
        pricePerTicket = 50.00;

    // Calculate total
    totalCost = tickets * pricePerTicket;

    // Output
    cout << "\nNumber of tickets: " << tickets << endl;
    cout << "Price per ticket: $" << pricePerTicket << endl;
    cout << "Total cost: $" << totalCost << endl;

    return 0;
}