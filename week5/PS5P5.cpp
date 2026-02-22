#include <iostream>
using namespace std;

int main(){

    //input 
    double total, weight;
    int rate;

    cout << "enter the weight : ";
    cin >> weight;
    //process
    if(weight > 100){
        rate = 50;
    }
    else if (weight < 20){
        rate = 10;
    }
    else if(weight >= 30 && weight <= 100 ){
        rate = 25;
    }
    else if (weight >= 20 && weight <30){
        rate = 20 ;

    }
    else cout << " it doesn't apply ";

    total = rate * weight ;
    //output
    cout << " your weight is "<< weight << endl << "and your rate is "<<rate << endl << "and your total is :" << total ;

    return 0;
}