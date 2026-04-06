#include <iostream>
#include <iomanip>
using namespace std;

void computeWidgets(int numberOfWidgets,
                    double& costPerWidget, double& extendedPrice,
                    double& salesTax, double& totalOrder)
{
    if (numberOfWidgets >= 10000)
        costPerWidget = 4.00;
    else if (numberOfWidgets >= 5000)
        costPerWidget = 5.00;
    else
        costPerWidget = 10.00;

    extendedPrice = numberOfWidgets * costPerWidget;
    salesTax = extendedPrice * 0.07;
    totalOrder = extendedPrice + salesTax;
}

int main()
{
    int numberOfWidgets;
    double costPerWidget, extendedPrice, salesTax, totalOrder;
    double sumAllOrders = 0.0;

    cout << fixed << setprecision(2);
    cout << "Enter number of widgets (Ctrl+Z to stop):" << endl;

    while (cin >> numberOfWidgets)
    {
        computeWidgets(numberOfWidgets, costPerWidget, extendedPrice, salesTax, totalOrder);

        cout << "Number of Widgets: " << numberOfWidgets << endl;
        cout << "Cost Per Widget: $" << costPerWidget << endl;
        cout << "Extended Price: $" << extendedPrice << endl;
        cout << "Sales Tax: $" << salesTax << endl;
        cout << "Total Order: $" << totalOrder << endl;

        sumAllOrders += totalOrder;
    }

    cout << "Sum of All Total Orders: $" << sumAllOrders << endl;

    return 0;
}
