#include <iostream>
#include <iomanip>
#include <string>
#include <fstream>
using namespace std;
double compute(double msrp, double salesp, double& salest){
        double savings;
        savings = msrp - salesp;
        salest = salesp * 0.07;
        return savings;
}
int main(){
    string make , model;
    double msrp, salesp, savings, salest, sumsavings;
    ifstream infile;
    infile.open("auto.txt");
    sumsavings = 0;
    while(infile >> make >> model >> msrp >> salesp){
        
       savings = compute(msrp,salesp,salest);
       cout << make << endl;
       cout << model << endl;
       cout << "MSRP :" << msrp << endl;
       cout << "SALES PRICE :" <<salesp << endl;
       cout << "SAVINGS :"<< savings << endl;
       cout << "SALES TAXE :" << salest << endl;
       sumsavings = sumsavings + savings; 
       cout << endl;
    }
    cout << "sum of savings is :" << sumsavings;

    return 0;

}

