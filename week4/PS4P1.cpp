#include <iostream>
using namespace std;

int main() {
    // input 
    int qtyItem, unitPrice;
    double extPrice, tax, total;

    cout << "enter quantity of Items :";
    cin >> qtyItem;
    
    // process
    if(qtyItem >= 1000) {
        unitPrice = 3;
    }
    else unitPrice = 5;
    
    extPrice = qtyItem * unitPrice;
    tax = extPrice * 0.07;
    total = extPrice + tax;

    //output 
    cout << "The quantity is :"<< qtyItem << " and the unit price is :" << unitPrice << "the extended price is : " << extPrice << "the tax is :" << tax << "the total is " << total ;

  return 0;
}
