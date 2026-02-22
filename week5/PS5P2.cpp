#include <iostream>
using namespace std;

int main(){
    //input 
    double qtypounds, total;
    int pricePound;
    cout << "enter the quantity in pound:";
    cin >> qtypounds;

    //process
    if(qtypounds > 100){
        pricePound = 10;
    }
    else if (qtypounds >=50 && qtypounds <100){
        pricePound = 25;
    }
    else pricePound = 50;

    total = qtypounds * pricePound;
    //output 
    cout << " the price Per Pound is :" << pricePound <<endl;
    cout << "the total is :" << total << endl;
    return 0;
}