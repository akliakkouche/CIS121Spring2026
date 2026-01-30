#include <iostream>
#include <string>
using namespace std;

int main(){
    // input 
    string lname;
    int creditsnumber;
    double tuition;
    cout << "enter last name :";
    cin >> lname;
    cout << "enter credits taken :";
    cin >> creditsnumber;

    // process 
    tuition = creditsnumber * 250 + 100;   
    //output 
    cout << lname << "The tuition is :" << tuition;
    return 0;
}
