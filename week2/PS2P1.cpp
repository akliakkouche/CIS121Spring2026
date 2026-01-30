#include <iostream>
using namespace std;

int main(){
    // input 
    int qtyUnit;
    double price, extPrice;
    cout << "enter the quantity :";
    cin >> qtyUnit;
    cout << "enter the unit price :";
    cin >> price;
    // process 
    extPrice = qtyUnit * price;
    //output 
    cout << "The extended price is :"<< extPrice;
    return 0;
}
