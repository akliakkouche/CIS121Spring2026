#include <iostream>
using namespace std;

int main(){
// input 
    double annualsalary, taxamount;
    int taxrat; 
    cout << "enter annual salary";
    cin >> annualsalary;
// process
    if(annualsalary > 1000000) {
        taxrat = 40;
    }
    else if (annualsalary < 50000){
        taxrat = 25;
    }
    else if (annualsalary >= 50000 && annualsalary <= 1000000){
        taxrat = 35;
    }
    else cout << " it doesn't apply ";
    taxamount = taxrat * annualsalary / 100;
//output
    cout << " your salary is :" << annualsalary << endl << "and your tax rat is " << taxrat << endl << " and your tax amount is :"<< taxamount;
    return 0;
}