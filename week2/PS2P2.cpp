#include <iostream>
#include <string>
using namespace std;

int main(){
    // input 
    string lname;
    double hrs,payrate, grosspay;
    cout << "enter last name :";
    cin >> lname;
    cout << "enter hours worked :";
    cin >> hrs;
    cout << "enter pay rate :";
    cin >> payrate;

    // process 
    grosspay = hrs * payrate;   
    //output 
    cout << lname << "The gross pay is :" << grosspay;
    return 0;
}
