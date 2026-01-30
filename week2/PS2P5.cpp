#include <iostream>
#include <string>
using namespace std;

int main(){
    // input 
    double itemprice, discountpercent, discountedprice, discountedamount;
    cout << "enter item price :";
    cin >> itemprice;
    cout << "enter the discount percent :";
    cin >> discountpercent;
    // process
    discountedamount = itemprice * (discountpercent / 100);
    discountedprice = itemprice - discountedamount;
    //output
    cout << "The discounted price is :" << discountedprice; 
    cout << "\nThe discounted amount is :" << discountedamount;
    return 0;
}
